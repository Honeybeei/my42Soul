#ifndef TEST_CASE_HPP_
#define TEST_CASE_HPP_

#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "types.hpp"

class test_case {
 public:
  // constructors & destructor
  test_case(std::string name, void *function, void *reference_function,
            std::map<e_types, void *> arguments, e_types return_type)
      : name_(name),
        function_(function),
        reference_function_(reference_function),
        arguments_(arguments),
        return_type_(return_type){};
  test_case(const test_case &src);
  ~test_case();
  // operators
  test_case &operator=(const test_case &rhs);
  // getters & setters

 protected:
 private:
  // private variables
  std::string name_;
  void *function_;
  void *reference_function_;
  std::map<e_types, void *> arguments_;
  e_types return_type_;

  // private functions
  void run();
};

#endif