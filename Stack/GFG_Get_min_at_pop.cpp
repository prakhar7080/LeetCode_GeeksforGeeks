//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
   stack<int>s;
   for(int i=0;i<n;i++){
       if(i==0){
           s.push(arr[i]);
       }
       else{
           s.push(min(arr[i],s.top()));
       }
   }
   return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    while(!(s.empty())){
        cout<<s.top()<<" ";
        s.pop();
    }
}
