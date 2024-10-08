#include <iostream>

// REFERENCE => https://www.youtube.com/watch?v=8jLOx1hD3_o

int sum(int a, int b){
    int result = a + b;     // living in different memory address
    std::cout << "In : &result(int) : " << &result << std::endl;
    return result;
}

std::string add_strings(std::string str1, std::string str2){
    std::string result = str1 + str2;
    std::cout << "In : &result(std::string) : " << &result << std::endl;
    return result;
}


int main(){

    /*
    int a{16};
    int b{24};
    int result = sum(a,b);  // living in different memory address
    std::cout << "Out : &result(int) : " << &result << std::endl;
    std::cout << "The sum is : " << result << std::endl;
    */

    std::string word1{"Hello"};
    std::string word2{" World"};
    std::string result_str = add_strings(word1, word2);
    std::cout << "Out : &result_str(std::string) : " << &result_str << std::endl;   // an exception(addresses will be same)
                                                                                    // compiler makes optimization
                                                                                    // and reuses the address
    std::cout << "Concatenated word is : " << result_str << std::endl;

    return 0;
}
