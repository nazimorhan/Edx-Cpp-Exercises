int maxabsinlst(int lst[], int size){
  int max;
  // Initialize the absolute max term
  if(lst[0]<0)
    max = -lst[0];
  else
    max = lst[0];
  // Iterate over the array and replace the item if abs(item) > max.
  for(int i=1; i<size; i++){
    if(lst[i] < 0 && -lst[i] > max)
        max = -lst[i];
    else if(lst[i] > 0 && lst[i] > max)
        max = lst[i];   
  }
  // Return absolute maximum element in the array.
  return max;
}