# Отчёт по лабораторной работе №2 по курсу “Фундаментальная информатика”

Студент группы: М80-108Б-22 Калюжный Михаил Сергеевич, № по списку 11

Контакты e-mail: pifagerodot@gmail.com

Работа выполнена: «10» ноября 2022 г.

Преподаватель: асп. каф. 806 Сахарин Никита Александрович

Входной контроль знаний с оценкой _______________________

Отчет сдан «17» декабря 2022 г., итоговая оценка ______

Подпись преподавателя ___________


## 1. Тема
Сети и телекоммуникации в ОС UNIX
## 2. Цель работы
Изучение и освоение удалённых команд UNIX и приобретение навыков, необходимых для выполнения курсовых и лабораторных работ в среде UNIX.
## 3. Задание (вариант № —)
Изучение удалённых команд
## 4. Оборудование:
Процессор: AMD Ryzen 3 3200U @2.600GHz with Radeon Vega Mobile Gfx 2.60 GHz
ОП: 8ГБ
SSD: 256 ГБ
Адрес: 159.65.63.147
Монитор: 15,6-дюймовый (1920 x 1080)
Графика: AMD Radeon(TM) Vega 3 Graphics
## 5. Программное обеспечение:
Операционная система семейства: Linux
Интерпретатор команд: bash 
Система программирования: не использовалась версия — 
Редактор текстов: emacs, nano
Утилиты операционной системы: ssh, scp, ls, cd, hostname, cat, mrdir, rm, rmdir, tar
Прикладные системы и программы: -
Местонахождение и имена файлов программ и данных на домашнем компьютере: /home/ubuntu
## 6. Идея, метод, алгоритм решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)
Изучить основы программного обеспечения ОС UNIX
Ввод команд:
1. ls -l/-A/-lAF – ознакомление с содержимым директории
2. 
3.

## 7. Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию]. 
- Изучить литературу по OC UNIX
- Просмотреть демонстрационный материал в лабораторной аудитории
- Освоить удалённые команды OC UNIX
- Научиться удалённо манипулировать с файлами 
- Запротоколировать сеанс

Пункты 1-7 отчета составляются сторого до начала лабораторной работы.
Допущен к выполнению работы.  
Подпись преподавателя _____________________
## 8. Распечатка протокола 
```
stud@it-34:~$ hostname -I

192.168.212.88 172.17.0.1

stud@it-34:~$ cat > f1.txt

test file

stud@it-34:~$ mkdir test

stud@it-34:~$ cp f1.txt test

stud@it-34:~$ cd test

stud@it-34:~/test$ ls

f1.txt

stud@it-34:~/test$ cd-

/home/stud

stud@it-34:~$ ls

 1.txt         file02.txt            pingyandex

 arch          file1.txt             pogoda.sh

 archive.tar   file.txt              Public

 bin           folder                remote

 code          hill.sh               snap

 Desktop       it-34                 Templates

 dirr1         Music                 test

 Documents     ourdir               'Ubuntu-Standard-2-4-10GB-Rf0VuUdL(3).pem'

 Downloads     output_file0116.txt   Videos

 dts.txt       output_file01.txt     XYZ

 f1.txt        output_file0216.txt   zipname.zip

 fil1.txt      output_file02.txt     Русский

 file          Pictures

 file01.txt    ping

mimik@mimik-VirtualBox:~$ ssh stud@192.168.212.88

stud@192.168.212.88's password: 

Welcome to Ubuntu 22.04.1 LTS (GNU/Linux 5.15.0-47-generic x86_64)



 * Documentation:  https://help.ubuntu.com

 * Management:     https://landscape.canonical.com

 * Support:        https://ubuntu.com/advantage



0 updates can be applied immediately.





The list of available updates is more than a week old.

To check for new updates run: sudo apt update

Failed to connect to https://changelogs.ubuntu.com/meta-release-lts. Check your Internet connection or proxy settings



Last login: Sat Dec 17 10:12:23 2022 from 192.168.212.164

stud@it-34:~$ ls

 1.txt        file1.txt             pingyandex

 bin          file.txt              pogoda.sh

 code         folder                Public

 Desktop      hill.sh               remote

 dirr1        it-34                 snap

 Documents    Music                 Templates

 Downloads    ourdir                test

 dts.txt      output_file0116.txt  'Ubuntu-Standard-2-4-10GB-Rf0VuUdL(3).pem'

 f1.txt       output_file01.txt     Videos

 fil1.txt     output_file0216.txt   XYZ

 file         output_file02.txt     zipname.zip

 file01.txt   Pictures              Русский

 file02.txt   ping

stud@it-34:~$ tar -xf arch

tar: arch: Cannot open: No such file or directory

tar: Error is not recoverable: exiting now

stud@it-34:~$ tar -tvf arch

tar: arch: Cannot open: No such file or directory

tar: Error is not recoverable: exiting now

stud@it-34:~$ mkdir arch

stud@it-34:~$ tar -cf archive.tar arch

stud@it-34:~$ ls

 1.txt         file02.txt            pingyandex

 arch          file1.txt             pogoda.sh

 archive.tar   file.txt              Public

 bin           folder                remote

 code          hill.sh               snap

 Desktop       it-34                 Templates

 dirr1         Music                 test

 Documents     ourdir               'Ubuntu-Standard-2-4-10GB-Rf0VuUdL(3).pem'

 Downloads     output_file0116.txt   Videos

 dts.txt       output_file01.txt     XYZ

 f1.txt        output_file0216.txt   zipname.zip

 fil1.txt      output_file02.txt     Русский

 file          Pictures

 file01.txt    ping

stud@it-34:~$ tar -tvf archive.tar

drwxrwxr-x stud/stud         0 2022-12-17 10:20 arch/

stud@it-34:~$ tar -xf archive.tar

stud@it-34:~$ ls

 1.txt         file02.txt            pingyandex

 arch          file1.txt             pogoda.sh

 archive.tar   file.txt              Public

 bin           folder                remote

 code          hill.sh               snap

 Desktop       it-34                 Templates

 dirr1         Music                 test

 Documents     ourdir               'Ubuntu-Standard-2-4-10GB-Rf0VuUdL(3).pem'

 Downloads     output_file0116.txt   Videos

 dts.txt       output_file01.txt     XYZ

 f1.txt        output_file0216.txt   zipname.zip

 fil1.txt      output_file02.txt     Русский

 file          Pictures

 file01.txt    ping

stud@it-34:~$ cd test

stud@it-34:~/test$ ls

f1.txt

stud@it-34:~/test$ cat f1.txt

test file

stud@it-34:~/test$ cat > f1.txt

renamed)

stud@it-34:~/test$ cp f1.txt f2.txt

stud@it-34:~/test$ ls

f1.txt  f2.txt

stud@it-34:~/test$ cd -

/home/stud

stud@it-34:~$ exit

logout


```
## 9. Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.

| № |  Лаб. или дом. | Дата | Время | Событие | Действие по исправлению | Примечание |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| 1 | дом. | 01.10.22 | 13:00 | Выполнение лабораторной работы | - | - |
## 10. Замечания автора по существу работы — Написание команд для отработки навыков работы в ОС UNIX.
```

```
## 11. Выводы
В ходе выполнения данной лабораторной работы были приобретены навыки работы с возможностью удаленного подключения, освоены команды, необходимые для установления соединения и удаленных манипуляций с файлами, а также приобретены навыки работы, которые помогут выполнять другие лабораторные работы

Недочёты при выполнении задания могут быть устранены следующим образом: —

Подпись студента _________________


