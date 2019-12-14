
template<class T>
my_vector<T>::my_vector() {}

template<class T>
my_vector<T>::my_vector(const my_vector<T> &var){
        delete vect;
        len=var.len;
        siz=var.size();
        vect = new T[len];
for( int i = 0; i<var.siz; i++){
        vect[i]=var[i];
}
}

template<class T>
void my_vector<T>:: add(const T& x){
        if(siz < len){
                vect[siz] = x;
        }else{
                len *=2;
                T*new_vect=new T[len];
                for( int i=0; i < siz; i++){
                        new_vect[i]=vect[i];
                }
                new_vect[siz] = x;
                delete vect;
                vect=new_vect;

        }
        siz++;
}

template<class T>
unsigned int my_vector<T>::size()const{
        return siz;
}

template<class T>
void my_vector<T>:: pop_back(){
        if (siz != 0){
                siz--;
        }
}

template<class T>
void my_vector<T>::clear(){
        siz=0;
}

template<class T>
void my_vector<T>::swap(my_container<T>& var){
        my_vector<T>* var_new=(my_vector<T>*)&var;
        T*b=var_new->vect;
        var_new->vect = vect;
        vect=b;

        int temp = var_new->siz;
        var_new->siz=siz;
        siz=temp;

        temp =var_new->len;
        var_new->len=len;
        len=temp;
}

template<class T>
const T& my_vector<T>:: operator [](const unsigned int pos)const{
        return vect[pos];
}

template<class T>
T* my_vector<T>::begin()const{
        return vect;
}
