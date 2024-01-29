#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
  Circle();
  Circle(double);
  double getArea() const;
  double getRadius() const;
  void setRadius(double);
  static int getNumberOfObjects();

  // Relational operators
  bool operator<(const Circle& c) const;
  bool operator<=(const Circle& c) const;
  bool operator==(const Circle& c) const;
  bool operator!=(const Circle& c) const;
  bool operator>(const Circle& c) const;
  bool operator>=(const Circle& c) const;

private:
  double radius;
  static int numberOfObjects;
};

#endif
