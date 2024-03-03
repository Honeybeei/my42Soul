#ifndef TYPES_HPP_
#define TYPES_HPP_

#include <cstddef>
#include <list>
#include <map>
#include <string>
#include <tuple>
#include <vector>

typedef enum e_types {
  CHAR,
  INT,
  LONG,
  FLOAT,
  DOUBLE,
  STRING,
  POINTER,
  VECTOR,
  LIST,
  MAP,
  PAIR,
  TUPLE,
  ARRAY,
  STRUCT,
  UNION,
  ENUM,
  CLASS,
  FUNCTION,
  VOID,
  UNKNOWN
} t_types;

size_t get_size(e_types type) {
  switch (type) {
    case CHAR:
      return sizeof(char);
    case INT:
      return sizeof(int);
    case LONG:
      return sizeof(long);
    case FLOAT:
      return sizeof(float);
    case DOUBLE:
      return sizeof(double);
    case STRING:
      return sizeof(std::string);
    case POINTER:
      return sizeof(void *);
    case VECTOR:
      return sizeof(std::vector<void *>);
    case LIST:
      return sizeof(std::list<void *>);
    case MAP:
      return sizeof(std::map<void *, void *>);
    case PAIR:
      return sizeof(std::pair<void *, void *>);
    case TUPLE:
      return sizeof(std::tuple<void *>);
    case ARRAY:
      return sizeof(void *);
    case STRUCT:
      return sizeof(void *);
    case UNION:
      return sizeof(void *);
    case ENUM:
      return sizeof(void *);
    case CLASS:
      return sizeof(void *);
    case FUNCTION:
      return sizeof(void *);
    case VOID:
      return sizeof(void *);
    case UNKNOWN:
      return sizeof(void *);
  }
  return 0;
}

#endif