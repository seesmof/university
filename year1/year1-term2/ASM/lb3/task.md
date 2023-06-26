1. У текстовому редакторі створити початковий код на мові асемблера для exe-програми з наступними вимогами до коду:
   - у сегменті даних сформувати змінні різноманітних типів та розмірів, ініціалізувати їх різними способами та значеннями;
   - серед сформованих змінних мають бути також символи, символьні рядки, масиви з 1/2/4-байтовими елементами різних розмірностей (1/2/3);
   - реалізувати виведення до консолі будь-якого друкованого символу;
   - реалізувати виведення до консолі символьних рядків;
   - продемонструвати виведення до консолі керуючих символів (CR/LF/BS або інших);
   - виведення символів до консолі реалізовувати функціями 21h-переривання (2 та 9 обов'язково, іншими - на вибір);
   - потрібні блоки програмного коду сформувати до модулів (програмних процедур);
   - у програмному коді використовувати різні методи адресації до даних;
   - для реалізації виведення символів та рядків, продемонструвати роботу простої інструкції LOOP;
   - обов'язково у потрібних місцях коду прописувати коментарі.
2. Над створеним початковим кодом програми виконати процеси компіляції, лінкування та позбавитись від помилок (якщо вони є).
3. Виконати запуск програми у консолі з демонстрацією результатів роботи. Перенаправити потік даних з консолі до текстового файлу з наступною перевіркою коректності виведених керуючих символів.