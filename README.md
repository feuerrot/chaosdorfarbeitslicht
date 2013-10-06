# Chaosdorfarbeitslicht?
Ein weiteres, demnächst idealerweise steuerbares Licht im Chaosdorf. Hängt
ja auch nur seit Ewigkeiten unter dem Regalbrett bei all den Monitoren und
brauchte auch nur noch einen weiteren μC.

Das ganze hat natürlich nichts mit einem seriösen Arbeitslicht zu tun, aber
Chaosdorfpostmonitorbeleuchtungsstreifensteuerung hört sich auch nicht
besser an.

## Bedienung?
Powercycle als Userinterface. Total toll mit EEPROM, der beim Start zum
nächsten Status übergeht und den dann speichert. Damit hat das Licht
weniger Buttons als ein iPhone!

## Layout?
Haha, nein. SoftwarePWM in schlecht auf PortB braucht kein Layout, das
hängt eh auf einem Steckbrett rum, das mit Malerkrepp mit dem Netzteil
verbunden ist.

## BUS-Anbindung?
SI2C, wahrscheinlich. Damit habe ich natürlich nichts zu tun.

## Dokumentation?
Und auch hier ist wieder der Code selbstdokumentierend. Im Chaosdorfwiki
könnte es dann auch irgendwann mal eine Seite geben, je nach Zeit und Lust.
