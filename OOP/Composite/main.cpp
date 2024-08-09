#include <iostream>

#include "Leaf.h"
#include "Branch.h"


void clientCode(Component* component) {
  std::cout << component->getContent() << std::endl;
};


int main() {
  Component* leaf = new Leaf();

  clientCode(leaf);

  Component* leaf1 = new Leaf();
  Component* leaf2 = new Leaf();
  Component* leaf3 = new Leaf();
  Composite* branch1 = new Branch();
  Composite* branch2 = new Branch();
  Composite* root = new Branch();
  branch1->add(leaf1);
  branch1->add(leaf2);
  branch2->add(leaf3);
  root->add(branch1);
  root->add(branch2);

  clientCode(root);

  delete leaf;
  delete leaf1;
  delete leaf2;
  delete leaf3;
  delete branch1;
  delete branch2;
  delete root;

  return 0;
};
