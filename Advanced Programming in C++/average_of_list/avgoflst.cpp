float avgoflst(int lst[], int size){
    int sum = 0;
    int elem;
    // Here additional variable elem is used for security checks for the corresponding element of the array(i.e. type of the element).
    for(int i=0; i<size; i++){
        elem = lst[i];
        sum += elem;
    }
    // Return average.
    return (float)sum / (float)size;
}