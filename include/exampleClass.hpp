#ifndef INCLUDE_EXAMPLECLASS_HPP_
#define INCLUDE_EXAMPLECLASS_HPP_

/**
 * @brief An 'Example' class to demonstrate minimal boiler plate for C++ class
 */
class Example {
 private:
  int member; /**< 'member' attribute to store integer value */

 public:
  Example();  /**< Default constructor */
  explicit Example(int member);  /**< Constructor with param(s) */
  Example(const Example &other);  /**< Copy constructor */
  ~Example() = default; /**< Destructor */

  /**
   * @brief Print 'member' value to stdout
   */
  void printMember() const;

  /**
   * @brief Increase 'member' value by 1
   */
  void increaseMember();

  /**
   * @brief Return 'member' value
   */
  int returnMember() const;
};

#endif  // INCLUDE_EXAMPLECLASS_HPP_
