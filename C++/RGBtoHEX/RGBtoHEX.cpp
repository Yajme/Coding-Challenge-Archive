#include<string>

std::string hextable(int dec){
    std::string conversiontable[16] =
    {
        "0","1","2","3","4", "5","6","7","8","9",
        "A","B","C","D","E","F"
        };
    
    return conversiontable[dec];
    
    }
std::string tohex(int value){
    std::string hex = "";
    int count = 0;
  value = (value<0) ? 0 : value;
    while(count < 2){
        int mod = value%16;
        hex = hextable(mod) + hex;
        value = value/16;
        count++;
    }
    
    return hex;
}
std::string rgb_to_hex(int r, int g, int b){
    if (r > 255 ) r =255;
    if (g > 255 ) g = 255;
    if(b > 255 ) b = 255;
    
    std::string hexcolor = "";
    
    hexcolor+= tohex(r);
    hexcolor+= tohex(g);
    hexcolor += tohex(b);
    
    return hexcolor;
}
