void swap_max(int arr[],int l,int n){
  int max = 0,pos,temp;
  for(int i=n;i<l;i++){
    if(arr[i]>max){
      max = arr[i];
      pos = i;
    }
  }
  temp = arr[n];
  arr[n] = arr[pos];
  arr[pos] = temp;
}

void ssort(int arr[],int l){
  for(int i=0;i<l-1;i++){
    swap_max(arr,l,i);
  }
}
