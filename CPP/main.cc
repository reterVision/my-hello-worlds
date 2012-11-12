#include <iostream>
#include <string>

using namespace std;

class HelloWorld
{
public:
  HelloWorld(){}
  HelloWorld(string name)
  {
    m_name = name;
  }

  ~HelloWorld(){}

  void print_HelloWorld()
  {
    cout << "Hello " << m_name << "!" << endl;
  }

private:
  string m_name;
};

int main(int argc, char** argv)
{
  string name;
  cout << "Please enter your name: ";
  cin >> name;

  HelloWorld *hello = new HelloWorld(name);
  hello->print_HelloWorld();
  delete hello;

  return 0;
}


