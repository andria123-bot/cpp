// P1
// #include -- it will include everything after we put in <>
// <iostream> -- Like basic tools for input and output operations, also header file
// int main() -- main function
// std - standart
// ::cout -- character output
// << -- characters to output
// '\n' -- new line
// endl -- end line
// return 0 -- program will return 0 IF it was success(0) else fail(1)
// :: -- scope resolution operator 
/* MultiLine Comment */

// P2
// int = number
// double = decimal
// bool = boolean
// char = 1 character
// std:string = sequence of multiple char

// P3
// const = constant value, it means you cant change it via script, basicly tells compiler that variable is READ-ONLY

// P4
// typedef = its like new identifier(nickname) for existing type(int, bool, char, double, string)
// typedef int age_t; = creates shortcut for age, like it creates new name for int
// age_t age = 16; = we create variable age which is int
// in simple typedef adds "nickname" for variable type

// P5
// +=(Add(++)), -=(Minus(--)), *=(Multiply), /=(Divide), %=(Modulus Divide)
// Steps: 1) parenthesis, 2) multiplication/devision, 3) addition, subtraction

// P6
// Implicit = automatic
// Explitic = precade value with new datatype (datatype)
// varType varName = (newDatatype) value

#include <iostream>
#include <vector>

/*namespace first {
  int x = 1;
}

namespace second {
  int x = 2;
}*/

// namespace player1 {
//   int level = 1;
//   double health = 98.2;
// }
// namespace player2 {
//   int level = 2;
//   double health = 89.9;
// }

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int age_t;
// using text_t = std::string; // alternative way, better way, better with templates
// using age_t = int;



int main() {
  /*std::cout << "Hello, World!" << '\n';
  std::cout << "My name is Andria!" << std::endl;

  int x; // Declaration
  x = 3; // Assign // int x = 3;

  int y = 6;
  int res = x + y;

  std::cout << x << '\n';
  std::cout << y << '\n';
  std::cout << res << '\n';

  int age = 16;
  int year = 2009;
  int days = 11;

  std::cout << days << '\n';

  // double (Including decimal)
  double price = 9.99;
  double gpa = 2.1;
  double temp = 23.7;

  std::cout << temp << '\n';

  // Char single character
  char grade = 'A';
  char initial = 'B';
  char currency = '$';

  std::cout << initial << '\n';

  // boolean (true or false)
  bool isStudent = true;
  bool isUnderage = true;
  bool power = false;
  bool forSale = false;

  // string (object that contains a sequence of text)
  std::string name = "Andria";
  std::string lastName = "Lezhava";
  int age = 16;
  std::string food = "Pizza";
  std::string address = "Avlabari";

  std::cout << "Hello " << name << ", I've heard ur " << age << '\n'; */

  /*double const PI = 3.14159; // or const double PI = 3.14159;
  double radius = 10;
  double circumference = 2 * PI * radius;

  std::cout << circumference << "CM" << '\n'; */

  /*using namespace first; // "Imports" namespace from first
  std::cout << second::x << '\n';

  using std::cout;
  using std::string;

  string name = "Andria"; // std::string

  cout << "Hello" << name << '\n'; //std::cout*/

  // using namespace player1;
  // std::cout << "Level: " << level << ", " << "Health: " << player2::health << '\n';
  // std::cout << "Level: " << level << ", " << "Health: " << player2::health << '\n'; // For Player2 we use player2::variable
  // using std::cout;
  // using std::string;
  // string name = "Andria";
  // cout << "Hello " << name << '\n';

  // pairlist_t pairlist;
  // text_t firstName = "Lezhava";
  // age_t age = 16;
  // std::cout << age << '\n';

  // int students = 20; // use double
  // int remainder = students % 3;
  // students += 2;
  // students -= 2;
  // students ++;
  // students --;
  // students *= 2;
  // students /= 2;
  // students %= 2;
  // std::cout << remainder << '\n';

  // double x = (int) 3.14;
  // std::cout << x;

  // char x = 100;
  // std::cout << x;
  // std::cout << (char) 100;
  // int correct = 8;
  // int questions = 10;
  // double score = correct / (double) questions * 100;
  // std::cout << score << "%";

  return 0;
}