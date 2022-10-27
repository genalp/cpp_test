#include "WZSerialPort.cpp"
#include <iostream>
#include <fstream>
using namespace std;

string binaryToHex(const string& binaryStr)
{
    string ret;
    static const char *hex = "0123456789ABCDEF";
    for (auto c:binaryStr)
    {
        ret.push_back(hex[(c >> 4) & 0xf]); //取二进制高四位
        ret.push_back(hex[c & 0xf]);        //取二进制低四位
    }
    return ret;
}

int main()
{
    ofstream fout;
    fout.open("C:/code/code/cpp_test/test/uart_test/test.txt");

	WZSerialPort w;
	if (w.open("COM6"))
	{
		// string str = "helloworsdasadfgsdjhjshdfgvhjhjzxvjzhhcsdugdczxhjczsdhdhxghdgysdhhhhjjhdjhfvvld";
		// w.send(str);
        // while(1) {
            fout << binaryToHex(w.receive()).c_str() << endl;
        // }
		w.close();
	}
    system("pause");
	return 0;
}