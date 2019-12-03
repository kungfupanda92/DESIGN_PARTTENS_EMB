#ifndef __Pizza_h__
#define __Pizza_h__

#include <string>
#include <vector>

class Pizza
{
public:
  std::string name;
  std::string dough;
  std::string sauce;
  std::vector<std::string> toppings;

  const std::string& getName() const;

  virtual void prepare() const;
  virtual void bake() const;
  virtual void cut() const;
  virtual void box() const;
  virtual ~Pizza() = default;

  friend std::ostream& operator<<(std::ostream& os, const Pizza& pizza);

};

#endif /* __Pizza_h__ */
