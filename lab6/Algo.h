#ifndef CPPLABS_ALGO_H
#define CPPLABS_ALGO_H
class Algo {
private:

public:
    template <class InputIterator, class UnaryPredicate>
    static bool none_of(InputIterator first, InputIterator last, UnaryPredicate pred);

    template <class InputIterator, class UnaryPredicate>
    static bool any_of(InputIterator first, InputIterator last, UnaryPredicate pred);

    template <class InputIterator, class UnaryPredicate>
    bool all_of (InputIterator first, InputIterator last, UnaryPredicate pred);
};


#endif //CPPLABS_ALGO_H
