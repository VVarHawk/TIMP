## Laboratory work I
---

**1. Скачайте библиотеку "boost" с помощью утилиты wget**. Адрес для скачивания `https://sourceforge.net/projects/boost/files/boost/1.69.0/boost_1_69_0.tar.gz`.


```bash

wget https://sourceforge.net/projects/boost/files/boost/1.69.0/boost_1_69_0.tar.gz

```


**2. Разархивируйте скаченный файл в директорию `~/boost_1_69_0`**


```bash

tar -xf boost_1_69_0.tar.xz

```


**3. Подсчитайте количество файлов в директории `~/boost_1_69_0`  _не включая_ вложенные директории.**


```bash

find boost_1_69_0 -not -type d | wc -l
>> 61191

```


4. **Подсчитайте количество файлов в директории `~/boost_1_69_0` _включая_ вложенные директории.**


```bash

find boost_1_69_0 | wc -l 
>> 66829

```
fin

5. **Подсчитайте количество заголовочных файлов, файлов с расширением `.cpp`, сколько остальных файлов (не заголовочных и не `.cpp`).**


```bash

find boost_1_69_0 -name '*.hpp' -o -name '*.h' | wc -l 
>> 15208

find boost_1_69_0 -name '*.cpp' | wc -l 
>> 13774

find boost_1_69_0 -not -type d -a -not -name '*.h' -a -not -name '*.hpp' -a -not -name '*.cpp' | wc -l
>> 32209

```


6. **Найдите полный пусть до файла `any.hpp` внутри библиотеки *boost*.**


```bash 

find `pwd`/boost_1_69_0/boost -name 'any.hpp'

/home/danil/TIMP/lab_1/boost_1_69_0/boost/proto/detail/any.hpp
/home/danil/TIMP/lab_1/boost_1_69_0/boost/spirit/home/support/algorithm/any.hpp
/home/danil/TIMP/lab_1/boost_1_69_0/boost/hana/fwd/any.hpp
/home/danil/TIMP/lab_1/boost_1_69_0/boost/hana/any.hpp
/home/danil/TIMP/lab_1/boost_1_69_0/boost/type_erasure/any.hpp
/home/danil/TIMP/lab_1/boost_1_69_0/boost/xpressive/detail/utility/any.hpp
/home/danil/TIMP/lab_1/boost_1_69_0/boost/any.hpp
/home/danil/TIMP/lab_1/boost_1_69_0/boost/fusion/include/any.hpp
/home/danil/TIMP/lab_1/boost_1_69_0/boost/fusion/algorithm/query/detail/any.hpp
/home/danil/TIMP/lab_1/boost_1_69_0/boost/fusion/algorithm/query/any.hpp

```


**7. Выведите в консоль все файлы, где упоминается последовательность "boost::asio".**


```bash 

grep -l -r "boost::asio"

boost_1_69_0/doc/html/process/reference.html
boost_1_69_0/doc/html/boost/process/spawn.html
...
boost_1_69_0/libs/beast/test/beast/experimental/timeout_socket.cpp
boost_1_69_0/libs/beast/test/beast/experimental/timeout_service.cpp
#1763 total
```


**8. Скомпилирутйе "boost". Можно воспользоваться [инструкцией](https://www.boost.org/doc/libs/1_61_0/more/getting_started/unix-variants.html#or-build-custom-binaries) или [ссылкой](https://codeyarns.com/2017/01/24/how-to-build-boost-on-linux/).**


```bash

cd boost_1_69_0/tools/build
./bootstrap.sh
./b2 install --prefix=~TIMP/lab_1
export PATH=${PATH}:~TIMP/lab_1/bin
echo $PATH
>> /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:~TIMP/lab_1/bin

```


**9. Перенесите все скомпилированные на предыдущем шаге статические библиотеки в директорию `~/boost-libs`.**


```bash

cp -r boost_1_69_0/libs ~/boost-libs

```


**10. Подсчитайте сколько занимает дискового пространства каждый файл в этой директории.**


```bash

cd
cd boost-libs
ls -l

```


**11. Найдите *топ10* самых "тяжёлых".**


```bash

ls -l -S | head -10

```

