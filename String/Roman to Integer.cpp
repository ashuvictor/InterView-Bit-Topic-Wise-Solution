


int integer[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
string roman[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
string Solution::intToRoman(int A) {
    string ans="";
    for(int i=0;i<13;i++){
        int value=integer[i];
        while(A>=value)
        {
            ans+=roman[i];
            A-=value;
        }
    }
return ans;
}
