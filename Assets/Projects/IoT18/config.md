# Configurations
## File paths
- hostapd `/etc/hostapd/hostpad.conf`
- dnsmasq `/etc/dnsmasq.conf`
- dhcpcd :`/etc/dhcpcd.conf`
- sysctl (for net forwarding): `/etc/sysctl.conf`
- wlan0_ap (persistant allocation of ip address for interface on running the script.sh after boot): `/etc/systemd/network/10-wlan0_ap.network`

## wlan0_ap
Create a virtual access point.
```bash
sudo iw dev wlan0 interface add wlan0_ap type __ap
```
Now we have to configure the access point
lines to add in `hostapd.conf`
```hostapd.conf
interface=wlan0_ap
driver=nl80211
ssid=RaspberryPi3
hw_mode=g
channel=6
wmm_enabled=0
auth_algs=1
#wpa=2
#wpa_passphrase=12345678
#wpa_key_mgmt=WPA-PSK
#rsn_pairwise=CCMP
```
Now we have to assign IP to the access point.
lines to add in `dhcpcd.conf`
```dhcpcd.conf
interface wlan0_ap
static ip_address=192.168.4.1/24
nohook wpa_supplicant
```
Now we have to create a DHCP server to enable allocation of Ip addresses.
lines to add in `dnsmasq.conf`
```dnsmasq.conf
interface=wlan0_ap
dhcp-range=192.168.4.10,192.168.4.100,255.255.255.0,24h
domain-needed
bogus-priv
dhcp-option=3,192.168.4.1
dhcp-option=6,192.168.4.1
```
Net forwarding
```
net.ipv4.ip_forward=1
```
Apply net forwarding tools
```
sudo sysctl -p
```

## Restart all services
```bash
sudo systemctl restart hostapd
sudo systemctl restart dnsmasq
sudo systemctl restart dhcpcd
```
