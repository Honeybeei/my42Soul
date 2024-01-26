#include "test_case.hpp"

// public **********************************************************************

//  constructors & destructor --------------------------------------------------

//  default constructor
test_case::test_case(std::string name, void *function_to_test,
                     void *reference_function, t_data_type return_type,
                     std::map<t_data_type, void *> arguments)
    : name_(name),
      function_to_test_(function_to_test),
      reference_function_(reference_function),
      return_type_(return_type),
      arguments_(arguments) {
  // TODO
}

//  copy constructor
test_case::test_case(const test_case &src) { *this = src; }

//  destructor
test_case::~test_case() {
  // NOTHING TO DO
}

//  operators ------------------------------------------------------------------

//  = operator overloading
test_case &test_case::operator=(const test_case &rhs) {
  if (this == &rhs) {
    return *this;
  }
  this->name_ = rhs.name_;
  this->function_to_test_ = rhs.function_to_test_;
  this->reference_function_ = rhs.reference_function_;
  this->return_type_ = rhs.return_type_;
  this->arguments_ = rhs.arguments_;
  return *this;
}

//  function -------------------------------------------------------------------

void test_case::set_all(std::string name, void *function_to_test,
                        void *reference_function, t_data_type return_type,
                        std::map<t_data_type, void *> arguments) {
  this->name_ = name;
  this->function_to_test_ = function_to_test;
  this->reference_function_ = reference_function;
  this->return_type_ = return_type;
  this->arguments_ = arguments;
}

void test_case::run() {
  // print function name and arguments types and values
  std::cout << "Function name: " << this->name_ << std::endl;
  std::cout << "Arguments: ";
  for (std::map<t_data_type, void *>::iterator it = this->arguments_.begin();
       it != this->arguments_.end(); ++it) {
    std::cout << it->first << " : " << it->second;
    if (it != this->arguments_.end()) {
      std::cout << ", ";
    }
  }
}

// private *********************************************************************
