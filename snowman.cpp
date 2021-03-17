#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <array>
const int one=1;
const int zero=0;
const int two=2;
const int three=3;
const int four = 4;
const int five=5;
const int six = 6;
const int eight=8; 
const int nine=9;
const int seven=7;

using namespace std;

namespace ariel{

const array<string,4> hat={"_===_"," ___\n....."," _\n/_\\"," ___\n(_*_)"};
const array<string,4> nose={",",".","_"," "};
const array<string,4> eyes={".","o","O","-"};
const array<string,4> r_hand={">","/","\\"," "};
const array<string,4> l_hand={"<","\\","/"," "};
const array<string,4> torso={" : ","] [","> <","   "};
const array<string,4> base={" : ","\" \"","___","   "};

string first_l_hand(char c){
    if(c-'0'==two){
    return l_hand[one];}
    return "";
}
string first_r_hand(char c){
    if(c-'0'==two){
    return r_hand[one];}
    return "";
}
string second_l_hand(char c){
    if(c-'0'==two){
    return "";}
    return l_hand.at(c-'0'-one);
}
string second_r_hand(char c){
    if(c-'0'==two){
    return "";}
    return r_hand.at(c-'0'-one);
}
string snowman(const int x){
    string result;
    string num = to_string(x);
    if(num.size()!=eight){
    throw "there are no 8 digits";
    }
    int i=0;

    while (i<eight)
    {
        if(num.at(i)-'0'<one||num.at(i)-'0'>four){
    throw "the digit is not between 1 and 4";}
    i++;
    }
    
     return hat.at(num.at(zero)-'0'-one)+"\n"+first_l_hand(num.at(four))+"("+eyes.at(num.at(two)-'0'-one)+nose.at(num.at(one)-'0'-one)+
     eyes.at(num.at(three)-'0'-one)+")"+first_r_hand(num.at(five))+"\n"+
    second_l_hand(num.at(four))+"("+torso.at(num.at(six)-'0'-one)+")"+second_r_hand(num.at(five))+"\n"+"("+base.at(num.at(seven)-'0'-one)+")";
    
}

}

