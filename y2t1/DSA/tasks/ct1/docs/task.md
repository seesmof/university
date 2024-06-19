# Самостійна робота

## Завдання до роботи

- Узгодити з викладачем індивідуальне завдання для виконання всіх наступних пунктів
- Розробити програмне забезпечення з графічним інтерфейсом, призначене для аналізу та дослідження використання основних комп’ютерних алгоритмів, що складається з форми, на якій розташовано наступні вкладки:
  - Пірамідальне сортування;
  - Структури даних;
  - Жадібні алгоритми;
  - Динамічне програмування;
  - Алгоритми обходу графів;
  - Алгоритми пошуку найкоротших шляхів;
  - Моделювання транспортної мережі.
- Робота кожної вкладки має забезпечуватися за допомогою відповідних програмних модулів. Обов’язкові вимоги до програмних модулів та графічних інтерфейсів користувача для кожної вкладки описані нижче.
- Для реалізації вкладки «Пірамідальне сортування» розв’язати індивідуальне завдання за допомогою пірамідального сортування, яке повинно забезпечуватися за допомогою:
  - програмного модуля, що містить клас, який реалізує купу і має дозволяти виконувати наступні операції на основі окремих методів: вставлення елементу, сортування елементів, побудова купи з невпорядкованого масиву, видалення елементу, сортування елементів із використанням купи;
  - програмного модуля, який реалізує графічний інтерфейс відповідної вкладки і дозволяє додавати нові елементи до купи на основі полів, що відповідають індивідуальному завданню, та на основі підключення файлів з масивами даних, вилучати існуючі елементи, виконувати пірамідальне сортування та два інші алгоритми сортування, визначені індивідуальним завданням, з виведенням результатів наочним способом (отриманого порядку елементів та часу, витраченого на сортування).
- Для реалізації вкладки «Структури даних» розв’язати індивідуальне завдання за допомогою гешування та B-дерев, що повинно забезпечуватися за допомогою:
  - програмного модуля, що містить окремі класи, які реалізують структури даних геш-таблиця, що дозволяє виконувати вставлення елементу, видалення елементу, пошук елементу на основі використання параметрів, обраних у відповідності з індивідуальним завданням, та B-дерево, що дозволяє виконувати створення порожнього дерева, пошук у дереві, вставлення ключа, видалення ключа;
  - програмного модуля, що реалізує графічний інтерфейс відповідної вкладки і дозволяє виконувати формування геш-таблиці та B-дерева, додавання і видалення елементів, пошук, оброблення результатів, виведення їх у відповідні поля для виконання індивідуального завдання, при цьому розв’язуючи одне з завдань за допомогою обох структур даних.
- Для реалізації вкладки «Жадібні алгоритми» розв’язати індивідуальне завдання за допомогою жадібного алгоритму, що повинно забезпечуватися за допомогою:
  - програмного модуля, що містить клас, який дозволяє задавати початкові дані, вводити нові параметри, коригувати та видаляти існуючі, розв’язувати задачу;
  - програмного модуля, який реалізує використання алгоритму Хаффмана для стискання даних текстового файлу у вигляді класу. Клас повинен мати методи, які дозволяють задати файл з даними, виконувати стискання даних, визначити параметри виконаного стискання та зворотне перетворення, записувати результати кодування/декодування в файл;
  - програмного модуля, який реалізує графічний інтерфейс відповідної вкладки і дозволяє задавати параметри, що характеризують задачу, за допомогою відповідних полів, модифікувати їх та розв’язувати задачу за допомогою жадібного алгоритму, виконувати кодування та декодування файлу, задаючи всі необхідні параметри в графічному вигляді.
- Для реалізації вкладки «Динамічне програмування» розв’язати індивідуальне завдання за допомогою принципів динамічного програмування, що повинно забезпечуватися за допомогою:
  - програмного модуля, що містить клас, який дозволяє задавати початкові дані, вводити нові параметри, коригувати та видаляти існуючі, розв’язувати відповідну задачу динамічного програмування;
  - програмного модуля, який реалізує графічний інтерфейс відповідної вкладки і дозволяє задавати параметри, що характеризують задачу, за допомогою відповідних полів, модифікувати їх та розв’язувати задачу динамічного програмування.
- Для реалізації вкладки «Алгоритми обходу графів» реалізувати алгоритми пошуку в ширину та в глибину за допомогою:
  - програмного модуля, який реалізує алгоритм обходу графу на основі пошуку в глибину як для орієнтованого, так і для неорієнтованого графа. У процесі пошуку має бути сформовано ліс пошуку в глибину. Для реалізації має використовуватися стек. Модуль має бути побудовано на основі відповідного класу, який повинен дозволяти визначати граф, виконувати пошук в глибину, виводити побудований ліс пошуку в глибину, виводити результат обходу тощо;
  - програмного модуля, який реалізує алгоритм обходу графу на основі пошуку в ширину як для орієнтованого, так і для неорієнтованого графа. У процесі пошуку має бути сформовано дерево пошуку в ширину. Для реалізації має використовуватися черга. Модуль має бути побудовано на основі відповідного класу, який повинен дозволяти визначати граф, виконувати пошук в ширину, виводити побудоване дерево пошуку в ширину, виводити результат обходу тощо;
  - програмного модуля, який реалізує графічний інтерфейс відповідної вкладки і дозволяє задавати граф, виводити результати обходу за допомогою обраного користувачем алгоритму, а також демонструвати покрокове виконання обраного алгоритму за допомогою графіки.
- Для реалізації вкладки «Алгоритми пошуку найкоротших шляхів» реалізувати алгоритми пошуку найкоротших шляхів за допомогою:
  - програмних модулів, які реалізують алгоритми Дейкстри, Флойда-Уоршелла, Беллмана-Форда на основі виділення відповідних класів для виконання всіх необхідних обчислень, визначення параметрів (в тому числі безпосередньо визначення графа) та отримання результатів;
  - програмного модуля, який реалізує графічний інтерфейс відповідної вкладки і дозволяє задавати граф, виводити результати пошуку за допомогою обраного користувачем алгоритму пошуку найкоротшого шляху, а також демонструвати покрокове виконання обраного алгоритму за допомогою графіки.
- Для реалізації вкладки «Моделювання транспортної мережі» реалізувати алгоритм Форда-Фалкерсона за допомогою:
  - програмного модуля, який реалізує алгоритм Форда-Фалкерсона на основі виділення відповідного класу для виконання всіх необхідних обчислень, визначення параметрів (в тому числі безпосередньо визначення графа) та отримання результатів;
  - програмного модуля, який реалізує графічний інтерфейс відповідної вкладки і дозволяє задавати граф, виводити результати виконання алгоритму Форда-Фалкерсона, а також демонструвати покрокове виконання обраного алгоритму за допомогою графіки.
- Виконати тестування розробленого програмного забезпечення.
- Довести, що жадібний вибір для задачі, визначеної індивідуальним завданням, є оптимальним рішенням або принаймні є частиною деякого оптимального рішення.
- Виконати аналіз розроблених алгоритмів пірамідального сортування, динамічного програмування, жадібних алгоритмів, алгоритмів роботи з графами для розв’язання індивідуального завдання щодо часу їх роботи та кількості використаної пам’яті.
- Порівняти ефективність використання пірамідального сортування та двох інших алгоритмів сортування, визначених індивідуальним завданням, щодо швидкості виконання.
- Порівняти ефективність використання геш-таблиць та B-дерев для розв’язання одного й того самого завдання на основі часу, витраченого на виконання пошуку, вставлення елементу та видалення елементу.
- Виконати аналіз впливу параметрів гешування на швидкість виконання гешування.
- Оформити пояснювальну записку.