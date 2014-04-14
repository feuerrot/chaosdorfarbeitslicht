# Chaosdorfarbeitslicht?
Am Regal über den Monitoren hängt im Chaosdorf ein LED-Streifen, der an 7 Stellen aufgetrennt ist und an einem ATTiny2313 hängt.
Die Steuerung erfolgt inzwischen über die Dorfmap, womit die unten stehenden Informationen grausam veraltet sind.
Dieses Repository dient damit nur zu Dokumentationszwecken.

## Bedienung?
Powercycle als Userinterface. Total toll mit EEPROM, der beim Start zum
nächsten Status übergeht und den dann speichert. Damit hat das Licht
weniger Buttons als ein iPhone!

Oder auch:
* Knopf drücken => Reset
* Reset => (Leuchtstufe+1) & 0x0f
* Maximal 15 Mal drücken => Aus

## Layout?
Haha, nein. SoftwarePWM in schlecht auf PortB braucht kein Layout, das
hängt eh auf einem Steckbrett rum, das mit Malerkrepp mit dem Netzteil
verbunden ist.

## BUS-Anbindung?
SI2C, wahrscheinlich. Damit habe ich natürlich nichts zu tun.

## Dokumentation?
Und auch hier ist wieder der Code selbstdokumentierend. Im Chaosdorfwiki
könnte es dann auch irgendwann mal eine Seite geben, je nach Zeit und Lust.
