template<class T>
void sortable_vector<T>::add(const T&x){
        my_vector<T>::add(x);
        sortable<T>::sort(my_vector<T>::begin(), (my_vector<T>::begin()+my_vector<T>::size()));
}
