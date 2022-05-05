#include "assignment/linear_search_recursive.hpp"

namespace assignment {

  std::optional<int> LinearSearchRecursive::Search(const std::vector<int>& arr, int search_elem) const {
    // запускаем рекурсивный метод с индексом последнего элемента массива
    return recursive_helper(arr, search_elem, static_cast<int>(arr.size() - 1));
  }

  std::optional<int> LinearSearchRecursive::recursive_helper(const std::vector<int>& arr, int search_elem, int curr_index) const {
    if (curr_index < 0) {
      return std::nullopt;
    }

    if (arr[curr_index] == search_elem) {
      return curr_index;
    }

    return recursive_helper(arr, search_elem, curr_index - 1);
    // Tips:
    // 1. Укажите случаи выхода из рекурсии: (а) обошли все элементы и (б) элемент найден.
    // 2. Вызовите рекурсивный метод с другим индексом.
  }
}  // namespace assignment