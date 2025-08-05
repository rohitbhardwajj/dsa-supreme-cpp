class Solution {
private:
void reverse(vector<char>& name , int length){
    int f=0,l=length;
    while(f<l){
        swap(name[f],name[l]);
        f++;
        l--;
    }
    
}
public:
    void reverseString(vector<char>& s) {
        int length =s.size();
        reverse(s , length-1);

      
    }
};