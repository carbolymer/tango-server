Tango CPU Temperature Device Server
============

Serwer w tango (http://www.tango-controls.org/) mierzacy temperature CPU


Jak uruchomić?
------------
1. Ściągnij repozytorium 
2. W folderze wykonaj polecenie make
3. Uruchom serwer mysql, a nastepnie wykonaj polecenie:
    DataBaseds 2 -ORBendPoint giop:tcp::10000
4. Odpal jive
5. W jive: Tools->Server Wizard
6. Wypełnij: 
    Server name: TemperatureMeter
    Instance name: tmeter
  tmeter to nazwa instancji pod jaka bedzie serwer wystepowal w jive
  a potem "Next"
7. Uruchom w folderze tango-server:
    ./bin/TemperatureMeter tmeter
8. W oknie kreatora "Next" i po wybraniu TemperatureMeter, "Declare Device"
9. "Device name" ustaw na: "tmeter/cokolwiek1/cokolwiek2/" i "Next", "Finish" oraz "Yes".

Następnie dwuklikiem na ikonę koła zębatego z etykietą "tmeter/cokolwiek1/cokolwiek2/" (Drzewo na zakładce "Server", TemperatureMeter > tmeter > TemperatureMeter) Otwiera się AtkPanel. Możesz tam włączyć urządzenie i obserwowac temperaturę. Aktualnie jej wartość to: 60+20*sin(time).