#include "test_case.hpp"

// public **********************************************************************

//  constructors & destructor --------------------------------------------------

//  default constructor
test_case::test_case(std::string name, void *function, void *reference_function,
                     std::map<e_types, void *> arguments, e_types return_type)
    : name_(name),
      function_(function),
      reference_function_(reference_function),
      arguments_(arguments),
      return_type_(return_type) {
  run();
}

//  copy constructor
test_case::test_case(const test_case &src) {
  *this = src;
  // TODO
}

//  destructor
test_case::~test_case() {
  // TODO
}

//  operators ------------------------------------------------------------------

//  = operator overloading
test_case &test_case::operator=(const test_case &rhs) {
  if (this == &rhs) {
    return *this;
  }
  // TODO
  return *this;
}

// private *********************************************************************

//  private functions ----------------------------------------------------------
void test_case::run() {
  std::cout << "Running test case: " << name_ << std::endl;
  std::cout << "Function: " << function_ << std::endl;
  std::cout << "Reference function: " << reference_function_ << std::endl;
  std::cout << "Arguments: " << std::endl;
  for (std::map<e_types, void *>::iterator it = arguments_.begin();
       it != arguments_.end(); ++it) {
    std::cout << "  " << it->first << ": " << it->second << std::endl;
  }
  std::cout << "Return type: " << return_type_ << std::endl;

  std::cout << "Running function..." << std::endl;
  void *function_return = NULL;
  switch (return_type_) {
    case CHAR:
      function_return = ((char (*)(void *))function_)(arguments_[CHAR]);
      break;
    case INT:
      function_return = ((int (*)(void *))function_)(arguments_[INT]);
      break;
    case LONG:
      function_return = ((long (*)(void *))function_)(arguments_[LONG]);
      break;
    case FLOAT:
      function_return = ((float (*)(void *))function_)(arguments_[FLOAT]);
      break;
    case DOUBLE:
      function_return = ((double (*)(void *))function_)(arguments_[DOUBLE]);
      break;
    case STRING:
      function_return = ((std::string (*)(void *))function_)(
          arguments_[STRING]);
      break;
    case POINTER:
      function_return = ((void *(*)(void *))function_)(arguments_[POINTER]);
      break;
    case VECTOR:
      function_return = ((std::vector<void *> (*)(void *))function_)(
          arguments_[VECTOR]);
      break;
    case LIST:
      function_return = ((std::list<void *> (*)(void *))function_)(
          arguments_[LIST]);
      break;
    case MAP:
      function_return = ((std::map<void *, void *> (*)(void *))function_)(
          arguments_[MAP]);
      break;
    case PAIR:
      function_return = ((std::pair<void *, void *> (*)(void *))function_)(
          arguments_[PAIR]);
      break;
    case TUPLE:
      function_return = ((std::tuple<void *> (*)(void *))function_)(
          arguments_[TUPLE]);
      break;
    case ARRAY:
      function_return = ((void *(*)(void *))function_)(arguments_[ARRAY]);
      break;
    case STRUCT:
      function_return = ((void *(*)(void *))function_)(arguments_[STRUCT]);
      break;
    case UNION:
      function_return = ((void *(*)(void *))function_)(arguments_[UNION]);
      break;
    case ENUM:
      function_return = ((void *(*)(void *))function_)(arguments_[ENUM]);
      break;
    case CLASS:
      function_return = ((void *(*)(void *))function_)(arguments_[CLASS]);
      break;
    case FUNCTION:
      function_return = ((void *(*)(void *))function_)(arguments_[FUNCTION]);
      break;
    case VOID:
      ((void (*)(void *))function_)(arguments_[VOID]);
      break;
    case UNKNOWN:
      function_return = ((void *(*)(void *))function_)(arguments_[UNKNOWN]);
      break;
    default:
      break;

  }
}