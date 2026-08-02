class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume=1LL * length * width * height;
        string first; 
        string second;
        if(length >= 10000 || width >= 10000 || height >= 10000 || mass >= 10000 || volume >= 1000000000){
            first = "Bulky";
        }
        if(mass >= 100 ){
            second = "Heavy";
        }
        if(first == "Bulky" && second == "Heavy"){
            return "Both";
        }
        else if(first != "Bulky" && second != "Heavy"){
            return "Neither";
        }
        else if(first == "Bulky" && second != "Heavy"){
            return "Bulky";
        }
        else if(first != "Bulky" && second == "Heavy"){
            return "Heavy";
        }
        return "";
    }
};