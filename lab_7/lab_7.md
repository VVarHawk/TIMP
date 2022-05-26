## Лабораторная работа 7
### Используя исходники лабораторной работы номер 6.

```bash
$ mkdir -p cmake
$ wget https://raw.githubusercontent.com/cpp-pm/gate/master/cmake/HunterGate.cmake -O cmake/HunterGate.cmake

$ sed -i '/cmake_minimum_required(VERSION 3.4)/a\

include("cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/cpp-pm/hunter/archive/v0.23.251.tar.gz"
    SHA1 "5659b15dc0884d4b03dbd95710e6a1fa0fc3258d"
)
' CMakeLists.txt
```



```bash
$ vim CMakeLists.txt
```
```cmake
cat hunter.cmake                                                        ─╯
include(hunter_add_version)
include(hunter_cacheable)
include(hunter_download)
include(hunter_pick_scheme)
hunter_add_version(
	PACKAGE_NAME
	TIMP
	VERSION
	0.0.1
	URL
	"https://github.com/VVarHawk/TIMP/archive/refs/tags/v0.0.1.tar.gz"
	SHA1
	c74326255acec9fd30c0cedf754404e8368b8a08
)


hunter_pick_scheme(DEFAULT url_sha1_cmake)
hunter_cacheable(hunter_box_1)
hunter_download(PACKAGE_NAME hunter_box_1)



```

## Необходимо сделать форк исходного репозитория hunter. Далее редактируем hunter.cmake 
### Посчитать хэш SHA1 релиза моего репозитория

```bash 
$ wget https://github.com/VVarHawk/TIMP/archive/refs/tags/v0.0.1.tar.gz
$ openssl sha1 v0.0.1.tar.gz 
SHA1(v0.0.1.tar.gz)= c74326255acec9fd30c0cedf754404e8368b8a08
```


```bash
$ vim hunter.cmake
```

```cmake
                                                      ─╯
include(hunter_add_version)
include(hunter_cacheable)
include(hunter_download)
include(hunter_pick_scheme)
hunter_add_version(
	PACKAGE_NAME
	TIMP
	VERSION
	0.0.1
	URL
	"https://github.com/VVarHawk/TIMP/archive/refs/tags/v0.0.1.tar.gz"
	SHA1
	c74326255acec9fd30c0cedf754404e8368b8a08
)


hunter_pick_scheme(DEFAULT url_sha1_cmake)
hunter_cacheable(hunter_box_1)
hunter_download(PACKAGE_NAME hunter_box_1)
```


## Далее,hunter пакет готов. Остаётся сделать pull request в исходный репозиторий hunter
