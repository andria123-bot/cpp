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
// /* MultiLine Comment */

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

// P7
// cin = character input, we can input data using cin
// std::getline(std::cin >> std::ws, name); = getline will let us input spaces, first argument is our method that we want to use and second is variable taht we want to store
// getline() function allows us to let user input any whitespace(space)
// std::ws means it will eliminate whitespace or newline

#include <iostream>
#include <vector>
#include <cmath>

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

  // int zero = 0;
  // int y = 2 / zero; // valid ragebait ;=;

  // std::string name;
  // int age;
  // std::cout << "Whats Ur Age?: ";
  // std::cin >> age;
  // std::cout << "Whats Ur Full Name?: ";
  // std::getline(std::cin >> std::ws, name);
  // std::cout << "Name: " << name << '\n';
  // std::cout << "Age: " << age << '\n';

  // double x = 3.941;
  // double y = 4;
  // double z;
  // z = std::max(x, y); // all of this requires cmath library
  // z = std::min(x, y);
  // z = pow(2, 3);
  // z = sqrt(9);
  // z = abs(-4);
  // z = round(x);
  // z = ceil(x);
  // z = floor(x);
  // std::cout << z << '\n';

  // double a;
  // double b;
  // double c;
  // std::cout << "Enter Side A: " << '\n';
  // std::cin >> a;
  // std::cout << "Enter Side B: " << '\n';
  // std::cin >> b;
  // c = sqrt(pow(a, 2) + pow(b, 2));
  // std::cout << "Side C: " << c << '\n';

  // int age;
  // std::cout << "Enter Your Age: ";
  // std::cin >> age;
  // if(age >= 100) { // from hightest to lowest
  //   std::cout << "You Are Too Old For This Site!";
  // } else if (age >= 18) {
  //   std::cout << "You Are Allowed On My Site!";
  // }else if (age < 0) {
  //   std::cout << "Enter Valid Age!";
  // } else {
  //   std::cout << "You Are NOT Allowed On My Site!";
  // }

  // int month;
  // std::cout << "Enter Month (1-12): ";
  // std::cin >> month;
  // switch (month) {
  //     case 1:
  //       std::cout << "It is January";
  //       break;
  //     case 2:
  //       std::cout << "It is February";
  //       break;
  //     case 3:
  //       std::cout << "It is March";
  //       break;
  //     case 4:
  //       std::cout << "It is April";
  //       break;
  //     case 5:
  //       std::cout << "It is May";
  //       break;
  //     case 6:
  //       std::cout << "It is June";
  //       break;
  //     case 7:
  //       std::cout << "It is July";
  //       break;
  //     case 8:
  //       std::cout << "It is August";
  //       break;
  //     case 9:
  //       std::cout << "It is September";
  //       break;
  //     case 10:
  //       std::cout << "It is October";
  //       break;
  //     case 11:
  //       std::cout << "It is November";
  //       break;
  //     case 12:
  //       std::cout << "It is December";
  //       break;
  //     default:
  //       std::cout << "Invalid month. Please enter a number from 1 to 12.";
  //       break;
  //     }

  // char grade;
  // std::cout << "What Letter Grade?: ";
  // std::cin >> grade;
  // switch (grade) {
  // case 'A':
  //   std::cout << "You Did Great!";
  //   break;
  // case 'B':
  //   std::cout << "You Did Good!";
  //   break;
  // case 'C':
  //   std::cout << "You Did Ok!";
  //   break;
  // case 'D':
  //   std::cout << "You Did Not Do Good!";
  //   break;
  // case 'F':
  //   std::cout << "You Failed!";
  //   break;
  // default:
  //   std::cout << "Enter Valid Grade!";
  // }

  // char op;
  // double num1;
  // double num2;
  // double res;
  // std::cout << "***** CALCULATOR *****\n";
  // std::cout << "Enter Operator (+ - * /): ";
  // std::cin >> op;
  // std::cout << "Enter First Number: ";
  // std::cin >> num1;
  // std::cout << "Enter Second Number: ";
  // std::cin >> num2;
  // if (op == '+') {
  //   res = num1 + num2;
  // } else if (op == '-') {
  //   res = num1 - num2;
  // } else if (op == '*') {
  //   res = num1 * num2;
  // } else if (op == '/') {
  //   res = num1 / num2;
  // } else {
  //   std::cout << "Enter Valid Operator!";
  // }
  // std::cout << "Result: " << res << '\n';
  // std::cout << "**********************";


  return 0;
}