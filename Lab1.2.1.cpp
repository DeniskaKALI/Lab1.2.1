#include <iostream>
#include <stack>
#include <string>

void printStack(std::stack<std::string> stack) {
    while (!stack.empty()) {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    std::stack<std::string> stack;

    // Добавляем строки в стек
    stack.push("abc");
    stack.push("fx");
    stack.push("glc");
    stack.push("hi");
    stack.push("gogo");

    std::cout << "Содержимое стека:" << std::endl;
    printStack(stack);

    // Удаляем один элемент из стека
    if (!stack.empty()) {
        stack.pop();
    }

    // Добавляем строку "the end"
    stack.push("the end");

    std::cout << "Содержимое стека после" << std::endl;
    printStack(stack);

    // Подсчитываем количество строк в стеке, состоящих из 2 символов
    std::stack<std::string> tempStack = stack;
    int count = 0;
    while (!tempStack.empty()) {
        if (tempStack.top().length() == 2) {
            count++;
        }
        tempStack.pop();
    }

    std::cout << "Количество строк, состоящих из 2 символов: " << count << std::endl;

    return 0;
}
