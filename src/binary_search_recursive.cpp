//
// Created by ramil on 14.04.2022.
//

#include "assignment/binary_search_recursive.hpp"

namespace assignment {

  std::optional<int> BinarySearchRecursive::Search(const std::vector<int>& arr, int search_elem) const {
    return recursive_helper(arr, search_elem, 0, static_cast<int>(arr.size() - 1));
  }

  std::optional<int> BinarySearchRecursive::recursive_helper(const std::vector<int>& arr, int search_elem, int left_index, int right_index) const {
    int mid_index = (left_index + right_index) / 2;
    if (left_index > right_index){
      return std::nullopt;
    }
    if (arr[mid_index] == search_elem){
      return mid_index;
    }
    if (arr[mid_index] > search_elem) {
      return recursive_helper(arr, search_elem, left_index, mid_index - 1);
    }
    if (arr[mid_index] < search_elem) {
      return recursive_helper(arr, search_elem, mid_index + 1, right_index);
    }

    // Tips:
    // 1. Рассмотрите базовые случаи выхода из рекурсии:
    //    1) индекс левого элемента стал больше индекса правого элемента
    //    2) целевой элемент найден
    // 2. Вызовите рекурсивный метод, изменив границы поиска
    //    в зависимости от неравенства между элементом посередине и целевого элемента

    return std::nullopt;
  }

}  // namespace assignment