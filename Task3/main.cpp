void main() {
Double start, end1, step;
std::cout << "Введите начальное значение x:";
std::cin >> start; //Задаем исходное значение переменной;
std::cout << "Введите конечное значение x:";
std::cin >> end1; //Задаем конечное значение переменной;
std::cout << " Введите шаг: ";
std::cin >> step; //Задаем шаг, c которым будет изменяться аргумент
for(double x = start; x <= end1; x+= step) {
double y = sin(x); //функция y=sin(x)
std::cout << x << " / " << y << std::endl; //Выводим значения функции для каждого аргумента (x/y)
    }
    return nullptr;
    }
