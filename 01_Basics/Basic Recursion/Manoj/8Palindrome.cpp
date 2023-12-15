bool rev(int i,string& str,int n){
    
    if(i>n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    return rev(i+1,str,n);
}

bool isPalindrome(string& str) {
    // Write your code here.

    int n=str.size();
    rev(0,str,n);
    
}
