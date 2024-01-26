#ifndef TEST_CASE_HPP_
#define TEST_CASE_HPP_

#include <iostream>
#include <map>
#include <string>
#include <vector>

typedef enum e_data_type {
  CHAR,
  INT,
  LONG,
  FLOAT,
  DOUBLE,
  STRING,
  POINTER,
  VOID,
  FUNCTION,
  UNKNOWN
} t_data_type;

class test_case {
 public:
  // constructors & destructor
  test_case();
  test_case(std::string name, void *function_to_test, void *reference_function,
            t_data_type return_type, std::map<t_data_type, void *> arguments);
  test_case(const test_case &src);
  ~test_case();
  // operators
  test_case &operator=(const test_case &rhs);
  // function
  void set_all(std::string name, void *function_to_test,
               void *reference_function, t_data_type return_type,
               std::map<t_data_type, void *> arguments);
  void run();

 protected:
 private:
  // variables
  std::string name_;
  void *function_to_test_;
  void *reference_function_;
  t_data_type return_type_;
  std::map<t_data_type, void *> arguments_;
};

#endif