std::vector<int> myVector = {1, 2, 3, 4, 5};

for (int i = 0; i < myVector.size(); ++i) { // Corrected: Accessing within the vector's bounds
  std::cout << myVector[i] << " ";
}

std::cout << std::endl;