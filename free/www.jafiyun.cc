#---------------------------------------------------#
## 更新：2023-01-02 06:26:15
## 感谢：https://github.com/Hackl0us/SS-Rule-Snippet
## 链接：https://www.jafiyun.today/link/BTu2u5s5ayzjXgOp?clash=1
#---------------------------------------------------#

# HTTP 代理端口
port: 7890 

# SOCKS5 代理端口
socks-port: 7891 

# Linux 和 macOS 的 redir 代理端口
redir-port: 7892 

# 允许局域网的连接
allow-lan: true

# 规则模式：Rule（规则） / Global（全局代理）/ Direct（全局直连）
mode: Rule

# 设置日志输出级别 (默认级别：silent，即不输出任何内容，以避免因日志内容过大而导致程序内存溢出）。
# 5 个级别：silent / info / warning / error / debug。级别越高日志输出量越大，越倾向于调试，若需要请自行开启。
log-level: silent
# Clash 的 RESTful API
external-controller: '0.0.0.0:9090'

# RESTful API 的口令
secret: '' 

# 您可以将静态网页资源（如 clash-dashboard）放置在一个目录中，clash 将会服务于 `RESTful API/ui`
# 参数应填写配置目录的相对路径或绝对路径。
# external-ui: folder


proxies:
  - {"name":"A-Vip1丨56-日本丨Trojan丨昌日隧道","type":"trojan","server":"scloud56.jafiyun.world","port":22056,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud56.jafiyun.world"}
  - {"name":"A-Vip1丨57-日本丨Trojan丨昌日隧道","type":"trojan","server":"scloud57.jafiyun.world","port":22057,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud57.jafiyun.world"}
  - {"name":"A-Vip1丨58-日本丨Trojan丨昌日隧道","type":"trojan","server":"scloud58.jafiyun.world","port":22058,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud58.jafiyun.world"}
  - {"name":"A-Vip1丨59-日本丨Trojan丨昌日隧道","type":"trojan","server":"scloud59.jafiyun.world","port":22059,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud59.jafiyun.world"}
  - {"name":"A-Vip1丨60-日本丨Trojan丨昌日隧道","type":"trojan","server":"scloud60.jafiyun.world","port":22060,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud60.jafiyun.world"}
  - {"name":"A-Vip1丨日本25丨","type":"vmess","server":"jp02.jafiyun.world","port":21125,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨29-台湾丨Trojan丨隧道专线","type":"trojan","server":"scloud29.jafiyun.world","port":22029,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud29.jafiyun.world"}
  - {"name":"Vip1丨41-香港丨Trojan丨隧道专线","type":"trojan","server":"scloud41.jafiyun.world","port":22041,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud41.jafiyun.world"}
  - {"name":"Vip1丨42-香港丨Trojan丨隧道专线 ","type":"trojan","server":"scloud42.jafiyun.world","port":22042,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud42.jafiyun.world"}
  - {"name":"Vip1丨43-香港丨Trojan丨隧道专线","type":"trojan","server":"scloud43.jafiyun.world","port":22043,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud43.jafiyun.world"}
  - {"name":"Vip1丨51-台湾丨Trojan丨海港专线","type":"trojan","server":"scloud51.jafiyun.world","port":22051,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud51.jafiyun.world"}
  - {"name":"Vip1丨52-韩国丨Trojan丨昌日隧道","type":"trojan","server":"scloud52.jafiyun.world","port":22052,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud52.jafiyun.world"}
  - {"name":"Vip1丨53-韩国丨Trojan丨昌日隧道","type":"trojan","server":"scloud53.jafiyun.world","port":22053,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud53.jafiyun.world"}
  - {"name":"Vip1丨54-韩国丨Trojan丨昌日隧道","type":"trojan","server":"scloud54.jafiyun.world","port":22054,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud54.jafiyun.world"}
  - {"name":"Vip1丨加拿大08丨海港专线","type":"vmess","server":"us08.jafiyun.world","port":21121,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨印度09丨海港专线","type":"vmess","server":"us09.jafiyun.world","port":21122,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨台湾30丨隧道专线","type":"vmess","server":"scloud30.jafiyun.world","port":22030,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨台湾31丨隧道专线","type":"vmess","server":"scloud31.jafiyun.world","port":22031,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨台湾32丨隧道专线","type":"vmess","server":"scloud32.jafiyun.world","port":22032,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨台湾33丨隧道专线","type":"vmess","server":"scloud33.jafiyun.world","port":22033,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨德国06丨海港专线","type":"vmess","server":"us06.jafiyun.world","port":21119,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨新加坡01丨谷歌更新丨海港专线","type":"vmess","server":"sg01.jafiyun.world","port":21104,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨新加坡02丨海港专线","type":"vmess","server":"sg02.jafiyun.world","port":21105,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨新加坡03丨海港专线","type":"vmess","server":"sg03.jafiyun.world","port":21106,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨澳大利亚01丨61 丨","type":"vmess","server":"au01.jafiyun.world","port":21161,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨美国12丨TIKTOK","type":"trojan","server":"scloud12.jafiyun.world","port":22012,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud12.jafiyun.world"}
  - {"name":"Vip1丨美国15丨TIKTOK","type":"trojan","server":"scloud15.jafiyun.world","port":22015,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud15.jafiyun.world"}
  - {"name":"Vip1丨美国16丨TIKTOK","type":"trojan","server":"scloud16.jafiyun.world","port":22016,"password":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","sni":"scloud16.jafiyun.world"}
  - {"name":"Vip1丨英国10丨海港专线","type":"vmess","server":"us10.jafiyun.world","port":21123,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨香港17丨 海港专线","type":"vmess","server":"scloud17.jafiyun.world","port":22017,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}
  - {"name":"Vip1丨香港18丨 海港专线","type":"vmess","server":"scloud18.jafiyun.world","port":22018,"uuid":"e2983c4c-5a33-3205-bc27-c0fe910a78c3","alterId":2,"cipher":"auto","udp":true}

proxy-groups:
-
  name: Proxy
  type: select
  proxies:
    - A-Vip1丨56-日本丨Trojan丨昌日隧道
    - A-Vip1丨57-日本丨Trojan丨昌日隧道
    - A-Vip1丨58-日本丨Trojan丨昌日隧道
    - A-Vip1丨59-日本丨Trojan丨昌日隧道
    - A-Vip1丨60-日本丨Trojan丨昌日隧道
    - A-Vip1丨日本25丨
    - Vip1丨29-台湾丨Trojan丨隧道专线
    - Vip1丨41-香港丨Trojan丨隧道专线
    - 'Vip1丨42-香港丨Trojan丨隧道专线 '
    - Vip1丨43-香港丨Trojan丨隧道专线
    - Vip1丨51-台湾丨Trojan丨海港专线
    - Vip1丨52-韩国丨Trojan丨昌日隧道
    - Vip1丨53-韩国丨Trojan丨昌日隧道
    - Vip1丨54-韩国丨Trojan丨昌日隧道
    - Vip1丨加拿大08丨海港专线
    - Vip1丨印度09丨海港专线
    - Vip1丨台湾30丨隧道专线
    - Vip1丨台湾31丨隧道专线
    - Vip1丨台湾32丨隧道专线
    - Vip1丨台湾33丨隧道专线
    - Vip1丨德国06丨海港专线
    - Vip1丨新加坡01丨谷歌更新丨海港专线
    - Vip1丨新加坡02丨海港专线
    - Vip1丨新加坡03丨海港专线
    - 'Vip1丨澳大利亚01丨61 丨'
    - Vip1丨美国12丨TIKTOK
    - Vip1丨美国15丨TIKTOK
    - Vip1丨美国16丨TIKTOK
    - Vip1丨英国10丨海港专线
    - 'Vip1丨香港17丨 海港专线'
    - 'Vip1丨香港18丨 海港专线'
-
  name: Domestic
  type: select
  proxies:
    - DIRECT
    - Proxy
-
  name: AsianTV
  type: select
  proxies:
    - Domestic
    - Proxy
-
  name: GlobalTV
  type: select
  proxies:
    - Proxy
-
  name: Others
  type: select
  proxies:
    - Proxy
    - Domestic


# 规则
rules:
# (GlobalTV)
# > ABC
- DOMAIN-SUFFIX,edgedatg.com,GlobalTV
- DOMAIN-SUFFIX,go.com,GlobalTV

# > AbemaTV
- DOMAIN,linear-abematv.akamaized.net,GlobalTV
- DOMAIN-SUFFIX,abema.io,GlobalTV
- DOMAIN-SUFFIX,abema.tv,GlobalTV
- DOMAIN-SUFFIX,akamaized.net,GlobalTV
- DOMAIN-SUFFIX,ameba.jp,GlobalTV
- DOMAIN-SUFFIX,hayabusa.io,GlobalTV

# > Amazon Prime Video
- DOMAIN-SUFFIX,aiv-cdn.net,GlobalTV
- DOMAIN-SUFFIX,amazonaws.com,GlobalTV
- DOMAIN-SUFFIX,amazonvideo.com,GlobalTV
- DOMAIN-SUFFIX,llnwd.net,GlobalTV

# > Bahamut
- DOMAIN-SUFFIX,bahamut.com.tw,GlobalTV
- DOMAIN-SUFFIX,gamer.com.tw,GlobalTV
- DOMAIN-SUFFIX,hinet.net,GlobalTV

# > BBC
- DOMAIN-KEYWORD,bbcfmt,GlobalTV
- DOMAIN-KEYWORD,co.uk,GlobalTV
- DOMAIN-KEYWORD,uk-live,GlobalTV
- DOMAIN-SUFFIX,bbc.co,GlobalTV
- DOMAIN-SUFFIX,bbc.co.uk,GlobalTV
- DOMAIN-SUFFIX,bbc.com,GlobalTV
- DOMAIN-SUFFIX,bbci.co,GlobalTV
- DOMAIN-SUFFIX,bbci.co.uk,GlobalTV

# > CHOCO TV
- DOMAIN-SUFFIX,chocotv.com.tw,GlobalTV

# > Epicgames
- DOMAIN-KEYWORD,epicgames,GlobalTV
- DOMAIN-SUFFIX,helpshift.com,GlobalTV

# > Fox+
- DOMAIN-KEYWORD,foxplus,GlobalTV
- DOMAIN-SUFFIX,config.fox.com,GlobalTV
- DOMAIN-SUFFIX,emome.net,GlobalTV
- DOMAIN-SUFFIX,fox.com,GlobalTV
- DOMAIN-SUFFIX,foxdcg.com,GlobalTV
- DOMAIN-SUFFIX,foxnow.com,GlobalTV
- DOMAIN-SUFFIX,foxplus.com,GlobalTV
- DOMAIN-SUFFIX,foxplay.com,GlobalTV
- DOMAIN-SUFFIX,ipinfo.io,GlobalTV
- DOMAIN-SUFFIX,mstage.io,GlobalTV
- DOMAIN-SUFFIX,now.com,GlobalTV
- DOMAIN-SUFFIX,theplatform.com,GlobalTV
- DOMAIN-SUFFIX,urlload.net,GlobalTV

# > HBO && HBO Go
- DOMAIN-SUFFIX,execute-api.ap-southeast-1.amazonaws.com,GlobalTV
- DOMAIN-SUFFIX,hbo.com,GlobalTV
- DOMAIN-SUFFIX,hboasia.com,GlobalTV
- DOMAIN-SUFFIX,hbogo.com,GlobalTV
- DOMAIN-SUFFIX,hbogoasia.hk,GlobalTV

# > Hulu
- DOMAIN-SUFFIX,happyon.jp,GlobalTV
- DOMAIN-SUFFIX,hulu.com,GlobalTV
- DOMAIN-SUFFIX,huluim.com,GlobalTV
- DOMAIN-SUFFIX,hulustream.com,GlobalTV

# > Imkan
- DOMAIN-SUFFIX,imkan.tv,GlobalTV

# > JOOX
- DOMAIN-SUFFIX,joox.com,GlobalTV

# > MytvSUPER
- DOMAIN-KEYWORD,nowtv100,GlobalTV
- DOMAIN-KEYWORD,rthklive,GlobalTV
- DOMAIN-SUFFIX,mytvsuper.com,GlobalTV
- DOMAIN-SUFFIX,tvb.com,GlobalTV

# > Netflix
- DOMAIN-SUFFIX,netflix.com,GlobalTV
- DOMAIN-SUFFIX,netflix.net,GlobalTV
- DOMAIN-SUFFIX,nflxext.com,GlobalTV
- DOMAIN-SUFFIX,nflximg.com,GlobalTV
- DOMAIN-SUFFIX,nflximg.net,GlobalTV
- DOMAIN-SUFFIX,nflxso.net,GlobalTV
- DOMAIN-SUFFIX,nflxvideo.net,GlobalTV

# > Pandora
- DOMAIN-SUFFIX,pandora.com,GlobalTV

# > Sky GO
- DOMAIN-SUFFIX,sky.com,GlobalTV
- DOMAIN-SUFFIX,skygo.co.nz,GlobalTV

# > Spotify
- DOMAIN-KEYWORD,spotify,GlobalTV
- DOMAIN-SUFFIX,scdn.co,GlobalTV
- DOMAIN-SUFFIX,spoti.fi,GlobalTV

# > viuTV
- DOMAIN-SUFFIX,viu.tv,GlobalTV

# > Youtube
- DOMAIN-KEYWORD,youtube,GlobalTV
- DOMAIN-SUFFIX,googlevideo.com,GlobalTV
- DOMAIN-SUFFIX,gvt2.com,GlobalTV
- DOMAIN-SUFFIX,youtu.be,GlobalTV

# (AsianTV)
# > Bilibili
- DOMAIN-KEYWORD,bilibili,AsianTV
- DOMAIN-SUFFIX,acg.tv,AsianTV
- DOMAIN-SUFFIX,acgvideo.com,AsianTV
- DOMAIN-SUFFIX,b23.tv,AsianTV
- DOMAIN-SUFFIX,biliapi.com,AsianTV
- DOMAIN-SUFFIX,biliapi.net,AsianTV
- DOMAIN-SUFFIX,bilibili.com,AsianTV
- DOMAIN-SUFFIX,biligame.com,AsianTV
- DOMAIN-SUFFIX,biligame.net,AsianTV
- DOMAIN-SUFFIX,hdslb.com,AsianTV
- DOMAIN-SUFFIX,im9.com,AsianTV

# > IQIYI
- DOMAIN-KEYWORD,qiyi,AsianTV
- DOMAIN-SUFFIX,qy.net,AsianTV

# > letv
- DOMAIN-SUFFIX,api.mob.app.letv.com,AsianTV

# > NeteaseMusic
- DOMAIN-SUFFIX,163yun.com,AsianTV
- DOMAIN-SUFFIX,music.126.net,AsianTV
- DOMAIN-SUFFIX,music.163.com,AsianTV

# > Tencent Video
- DOMAIN-SUFFIX,vv.video.qq.com,AsianTV

# China Area Network
# > Microsoft
- DOMAIN-SUFFIX,microsoft.com,Domestic
- DOMAIN-SUFFIX,windows.net,Domestic
- DOMAIN-SUFFIX,sfx.ms,Domestic
- DOMAIN-SUFFIX,sharepoint.com,Domestic
- DOMAIN-KEYWORD,officecdn,Domestic
# > Blizzard
- DOMAIN-SUFFIX,blizzard.com,Domestic
- DOMAIN-SUFFIX,battle.net,Domestic
- DOMAIN,blzddist1-a.akamaihd.net,Domestic
# > Steam
- DOMAIN-SUFFIX,steampowered.com,Domestic
- DOMAIN-SUFFIX,steam-chat.com,Domestic
- DOMAIN-KEYWORD,steamcdn,Domestic
- DOMAIN-KEYWORD,steamstore,Domestic
- DOMAIN-KEYWORD,steamuserimages,Domestic
- DOMAIN-KEYWORD,steambroadcast,Domestic
# > Tencent
#USER-AGENT,MicroMessenger%20Client,Domestic
#USER-AGENT,WeChat*,Domestic
- DOMAIN-SUFFIX,qq.com,Domestic
- DOMAIN-SUFFIX,qpic.cn,Domestic
- DOMAIN-SUFFIX,tencent.com,Domestic
# > Alibaba
- DOMAIN-SUFFIX,alibaba.com,Domestic
- DOMAIN-SUFFIX,alicdn.com,Domestic
- DOMAIN-SUFFIX,amap.com,Domestic
- DOMAIN-SUFFIX,dingtalk.com,Domestic
- DOMAIN-SUFFIX,taobao.com,Domestic
- DOMAIN-SUFFIX,tmall.com,Domestic
- DOMAIN-SUFFIX,ykimg.com,Domestic
- DOMAIN-SUFFIX,youku.com,Domestic
- DOMAIN-SUFFIX,xiami.com,Domestic
- DOMAIN-SUFFIX,xiami.net,Domestic
# > NetEase
- DOMAIN-SUFFIX,163.com,Domestic
- DOMAIN-SUFFIX,126.net,Domestic
- DOMAIN-SUFFIX,163yun.com,Domestic
# > Sohu
- DOMAIN-SUFFIX,sohu.com.cn,Domestic
- DOMAIN-SUFFIX,itc.cn,Domestic
- DOMAIN-SUFFIX,sohu.com,Domestic
- DOMAIN-SUFFIX,v-56.com,Domestic
# > Sina
- DOMAIN-SUFFIX,weibo.com,Domestic
- DOMAIN-SUFFIX,weibo.cn,Domestic
# > JD
- DOMAIN-SUFFIX,jd.com,Domestic
- DOMAIN-SUFFIX,jd.hk,Domestic
- DOMAIN-SUFFIX,360buyimg.com,Domestic
# > MI
- DOMAIN-SUFFIX,duokan.com,Domestic
- DOMAIN-SUFFIX,mi-img.com,Domestic
- DOMAIN-SUFFIX,mifile.cn,Domestic
- DOMAIN-SUFFIX,xiaomi.com,Domestic
# > bilibili
- DOMAIN-SUFFIX,acgvideo.com,Domestic
- DOMAIN-SUFFIX,bilibili.com,Domestic
- DOMAIN-SUFFIX,hdslb.com,Domestic
# > iQiyi
- DOMAIN-SUFFIX,iqiyi.com,Domestic
- DOMAIN-SUFFIX,iqiyipic.com,Domestic
- DOMAIN-SUFFIX,71.am.com,Domestic
# > HunanTV
- DOMAIN-SUFFIX,hitv.com,Domestic
- DOMAIN-SUFFIX,mgtv.com,Domestic
# > Meitu
- DOMAIN-SUFFIX,meitu.com,Domestic
- DOMAIN-SUFFIX,meitudata.com,Domestic
- DOMAIN-SUFFIX,meipai.com,Domestic
# > YYeTs
- DOMAIN-SUFFIX,zmzapi.com,Domestic
- DOMAIN-SUFFIX,zimuzu.tv,Domestic
- DOMAIN-SUFFIX,zmzfile.com,Domestic
- DOMAIN-SUFFIX,zmzapi.net,Domestic
# > 蛋蛋赞
- DOMAIN-SUFFIX,baduziyuan.com,Domestic
- DOMAIN-SUFFIX,com-hs-hkdy.com,Domestic
- DOMAIN-SUFFIX,czybjz.com,Domestic
- DOMAIN-SUFFIX,dandanzan.com,Domestic
- DOMAIN-SUFFIX,fjhps.com,Domestic
- DOMAIN-SUFFIX,kuyunbo.club,Domestic
# > Baidu
- DOMAIN-SUFFIX,baidu.com,Domestic
- DOMAIN-SUFFIX,baidubcr.com,Domestic
- DOMAIN-SUFFIX,bdstatic.com,Domestic
# > ChinaNet
- DOMAIN-SUFFIX,189.cn,Domestic
- DOMAIN-SUFFIX,21cn.com,Domestic
# > ByteDance
- DOMAIN-SUFFIX,bytecdn.cn,Domestic
- DOMAIN-SUFFIX,pstatp.com,Domestic
- DOMAIN-SUFFIX,snssdk.com,Domestic
- DOMAIN-SUFFIX,toutiao.com,Domestic
# > Content Delivery Network
# > Akamai
- DOMAIN-SUFFIX,akadns.net,Domestic
# - DOMAIN-SUFFIX,akamai.net,Domestic
# - DOMAIN-SUFFIX,akamaiedge.net,Domestic
# - DOMAIN-SUFFIX,akamaihd.net,Domestic
# - DOMAIN-SUFFIX,akamaistream.net,Domestic
# - DOMAIN-SUFFIX,akamaized.net,Domestic
# > ChinaNetCenter
- DOMAIN-SUFFIX,chinanetcenter.com,Domestic
- DOMAIN-SUFFIX,wangsu.com,Domestic
# > IP Query
- DOMAIN-SUFFIX,ipip.net,Domestic
- DOMAIN-SUFFIX,ip.cn,Domestic
- DOMAIN-SUFFIX,ip.la,Domestic
- DOMAIN-SUFFIX,ip-cdn.com,Domestic
- DOMAIN-SUFFIX,ipv6-test.com,Domestic
- DOMAIN-SUFFIX,test-ipv6.com,Domestic
- DOMAIN-SUFFIX,whatismyip.com,Domestic
- DOMAIN,ip.bjango.com,Domestic
# > Other
- DOMAIN-SUFFIX,40017.cn,Domestic
- DOMAIN-SUFFIX,broadcasthe.net,Domestic
- DOMAIN-SUFFIX,cailianpress.com,Domestic
- DOMAIN-SUFFIX,chdbits.co,Domestic
- DOMAIN-SUFFIX,chushou.tv,Domestic
- DOMAIN-SUFFIX,cmbchina.com,Domestic
- DOMAIN-SUFFIX,cmbimg.com,Domestic
- DOMAIN-SUFFIX,cmct.tv,Domestic
- DOMAIN-SUFFIX,cmvideo.cn,Domestic
- DOMAIN-SUFFIX,cnlang.org,Domestic
- DOMAIN-SUFFIX,doubanio.com,Domestic
- DOMAIN-SUFFIX,douyu.com,Domestic
- DOMAIN-SUFFIX,douyucdn.cn,Domestic
- DOMAIN-SUFFIX,dxycdn.com,Domestic
- DOMAIN-SUFFIX,hicloud.com,Domestic
- DOMAIN-SUFFIX,hdchina.org,Domestic
- DOMAIN-SUFFIX,hdcmct.org,Domestic
- DOMAIN-SUFFIX,ithome.com,Domestic
- DOMAIN-SUFFIX,kkmh.com,Domestic
- DOMAIN-SUFFIX,ksosoft.com,Domestic
- DOMAIN-SUFFIX,maoyun.tv,Domestic
- DOMAIN-SUFFIX,meituan.net,Domestic
- DOMAIN-SUFFIX,mobike.com,Domestic
- DOMAIN-SUFFIX,mubu.com,Domestic
- DOMAIN-SUFFIX,myzaker.com,Domestic
- DOMAIN-SUFFIX,ourbits.club,Domestic
- DOMAIN-SUFFIX,passthepopcorn.me,Domestic
- DOMAIN-SUFFIX,paypal.com,Domestic
- DOMAIN-SUFFIX,paypalobjects.com,Domestic
- DOMAIN-SUFFIX,privatehd.to,Domestic
- DOMAIN-SUFFIX,redacted.ch,Domestic
- DOMAIN-SUFFIX,ruguoapp.com,Domestic
- DOMAIN-SUFFIX,smzdm.com,Domestic
- DOMAIN-SUFFIX,sogou.com,Domestic
- DOMAIN-SUFFIX,teamviewer.com,Domestic
- DOMAIN-SUFFIX,totheglory.im,Domestic
- DOMAIN-SUFFIX,tp.m-team.cc,Domestic
- DOMAIN-SUFFIX,udacity.com,Domestic
- DOMAIN-SUFFIX,xmcdn.com,Domestic
- DOMAIN-SUFFIX,yangkeduo.com,Domestic
- DOMAIN-SUFFIX,zhihu.com,Domestic
- DOMAIN-SUFFIX,zhimg.com,Domestic
#USER-AGENT,NeteaseMusic*,Domestic
#USER-AGENT,%E7%BD%91%E6%98%93%E4%BA%91%E9%9F%B3%E4%B9%90*,Domestic

# (DNS Cache Pollution Protection)
# > Google
- DOMAIN-SUFFIX,appspot.com,Proxy
- DOMAIN-SUFFIX,blogger.com,Proxy
- DOMAIN-SUFFIX,getoutline.org,Proxy
- DOMAIN-SUFFIX,gvt0.com,Proxy
- DOMAIN-SUFFIX,gvt1.com,Proxy
- DOMAIN-SUFFIX,gvt3.com,Proxy
- DOMAIN-SUFFIX,xn--ngstr-lra8j.com,Proxy
- DOMAIN-KEYWORD,google,Proxy
- DOMAIN-KEYWORD,blogspot,Proxy
# > Facebook
- DOMAIN-SUFFIX,cdninstagram.com,Proxy
- DOMAIN-SUFFIX,fb.com,Proxy
- DOMAIN-SUFFIX,fb.me,Proxy
- DOMAIN-SUFFIX,fbaddins.com,Proxy
- DOMAIN-SUFFIX,fbcdn.net,Proxy
- DOMAIN-SUFFIX,fbsbx.com,Proxy
- DOMAIN-SUFFIX,fbworkmail.com,Proxy
- DOMAIN-SUFFIX,instagram.com,Proxy
- DOMAIN-SUFFIX,m.me,Proxy
- DOMAIN-SUFFIX,messenger.com,Proxy
- DOMAIN-SUFFIX,oculus.com,Proxy
- DOMAIN-SUFFIX,oculuscdn.com,Proxy
- DOMAIN-SUFFIX,rocksdb.org,Proxy
- DOMAIN-SUFFIX,whatsapp.com,Proxy
- DOMAIN-SUFFIX,whatsapp.net,Proxy
- DOMAIN-KEYWORD,facebook,Proxy
# > Twitter
- DOMAIN-SUFFIX,pscp.tv,Proxy
- DOMAIN-SUFFIX,periscope.tv,Proxy
- DOMAIN-SUFFIX,t.co,Proxy
- DOMAIN-SUFFIX,twimg.co,Proxy
- DOMAIN-SUFFIX,twimg.com,Proxy
- DOMAIN-SUFFIX,twitpic.com,Proxy
- DOMAIN-SUFFIX,vine.co,Proxy
- DOMAIN-KEYWORD,twitter,Proxy
# > Telegram
- DOMAIN-SUFFIX,t.me,Proxy
- DOMAIN-SUFFIX,tdesktop.com,Proxy
- DOMAIN-SUFFIX,telegra.ph,Proxy
- DOMAIN-SUFFIX,telegram.me,Proxy
- DOMAIN-SUFFIX,telegram.org,Proxy
# > Line
- DOMAIN-SUFFIX,line.me,Proxy
- DOMAIN-SUFFIX,line-apps.com,Proxy
- DOMAIN-SUFFIX,line-scdn.net,Proxy
- DOMAIN-SUFFIX,naver.jp,Proxy
# > Other
- DOMAIN-SUFFIX,4shared.com,Proxy
- DOMAIN-SUFFIX,881903.com,Proxy
- DOMAIN-SUFFIX,abc.net.au,Proxy
- DOMAIN-SUFFIX,abebooks.com,Proxy
- DOMAIN-SUFFIX,amazon.co.jp,Proxy
- DOMAIN-SUFFIX,apigee.com,Proxy
- DOMAIN-SUFFIX,apk-dl.com,Proxy
- DOMAIN-SUFFIX,apkmirror.com,Proxy
- DOMAIN-SUFFIX,apkmonk.com,Proxy
- DOMAIN-SUFFIX,apkpure.com,Proxy
- DOMAIN-SUFFIX,aptoide.com,Proxy
- DOMAIN-SUFFIX,archive.is,Proxy
- DOMAIN-SUFFIX,archive.org,Proxy
- DOMAIN-SUFFIX,arte.tv,Proxy
- DOMAIN-SUFFIX,ask.com,Proxy
- DOMAIN-SUFFIX,avgle.com,Proxy
- DOMAIN-SUFFIX,badoo.com,Proxy
- DOMAIN-SUFFIX,bandwagonhost.com,Proxy
- DOMAIN-SUFFIX,bbc.com,Proxy
- DOMAIN-SUFFIX,behance.net,Proxy
- DOMAIN-SUFFIX,bibox.com,Proxy
- DOMAIN-SUFFIX,biggo.com.tw,Proxy
- DOMAIN-SUFFIX,binance.com,Proxy
- DOMAIN-SUFFIX,bitcointalk.org,Proxy
- DOMAIN-SUFFIX,bitfinex.com,Proxy
- DOMAIN-SUFFIX,bitmex.com,Proxy
- DOMAIN-SUFFIX,bit-z.com,Proxy
- DOMAIN-SUFFIX,bloglovin.com,Proxy
- DOMAIN-SUFFIX,bloomberg.cn,Proxy
- DOMAIN-SUFFIX,bloomberg.com,Proxy
- DOMAIN-SUFFIX,book.com.tw,Proxy
- DOMAIN-SUFFIX,booklive.jp,Proxy
- DOMAIN-SUFFIX,books.com.tw,Proxy
- DOMAIN-SUFFIX,box.com,Proxy
- DOMAIN-SUFFIX,brookings.edu,Proxy
- DOMAIN-SUFFIX,businessinsider.com,Proxy
- DOMAIN-SUFFIX,bwh1.net,Proxy
- DOMAIN-SUFFIX,castbox.fm,Proxy
- DOMAIN-SUFFIX,cbc.ca,Proxy
- DOMAIN-SUFFIX,cdw.com,Proxy
- DOMAIN-SUFFIX,change.org,Proxy
- DOMAIN-SUFFIX,ck101.com,Proxy
- DOMAIN-SUFFIX,clarionproject.org,Proxy
- DOMAIN-SUFFIX,clyp.it,Proxy
- DOMAIN-SUFFIX,cna.com.tw,Proxy
- DOMAIN-SUFFIX,comparitech.com,Proxy
- DOMAIN-SUFFIX,conoha.jp,Proxy
- DOMAIN-SUFFIX,crucial.com,Proxy
- DOMAIN-SUFFIX,cts.com.tw,Proxy
- DOMAIN-SUFFIX,cw.com.tw,Proxy
- DOMAIN-SUFFIX,cyberctm.com,Proxy
- DOMAIN-SUFFIX,dailymotion.com,Proxy
- DOMAIN-SUFFIX,dailyview.tw,Proxy
- DOMAIN-SUFFIX,daum.net,Proxy
- DOMAIN-SUFFIX,daumcdn.net,Proxy
- DOMAIN-SUFFIX,dcard.tw,Proxy
- DOMAIN-SUFFIX,deepdiscount.com,Proxy
- DOMAIN-SUFFIX,deezer.com,Proxy
- DOMAIN-SUFFIX,depositphotos.com,Proxy
- DOMAIN-SUFFIX,disconnect.me,Proxy
- DOMAIN-SUFFIX,discordapp.com,Proxy
- DOMAIN-SUFFIX,discordapp.net,Proxy
- DOMAIN-SUFFIX,disqus.com,Proxy
- DOMAIN-SUFFIX,dns2go.com,Proxy
- DOMAIN-SUFFIX,dropbox.com,Proxy
- DOMAIN-SUFFIX,dropboxusercontent.com,Proxy
- DOMAIN-SUFFIX,duckduckgo.com,Proxy
- DOMAIN-SUFFIX,dw.com,Proxy
- DOMAIN-SUFFIX,dynu.com,Proxy
- DOMAIN-SUFFIX,earthcam.com,Proxy
- DOMAIN-SUFFIX,ebookservice.tw,Proxy
- DOMAIN-SUFFIX,economist.com,Proxy
- DOMAIN-SUFFIX,edgecastcdn.net,Proxy
- DOMAIN-SUFFIX,edu,Proxy
- DOMAIN-SUFFIX,elpais.com,Proxy
- DOMAIN-SUFFIX,enanyang.my,Proxy
- DOMAIN-SUFFIX,euronews.com,Proxy
- DOMAIN-SUFFIX,feedly.com,Proxy
- DOMAIN-SUFFIX,files.wordpress.com,Proxy
- DOMAIN-SUFFIX,flickr.com,Proxy
- DOMAIN-SUFFIX,flitto.com,Proxy
- DOMAIN-SUFFIX,foreignpolicy.com,Proxy
- DOMAIN-SUFFIX,friday.tw,Proxy
- DOMAIN-SUFFIX,gate.io,Proxy
- DOMAIN-SUFFIX,getlantern.org,Proxy
- DOMAIN-SUFFIX,getsync.com,Proxy
- DOMAIN-SUFFIX,globalvoices.org,Proxy
- DOMAIN-SUFFIX,goo.ne.jp,Proxy
- DOMAIN-SUFFIX,goodreads.com,Proxy
- DOMAIN-SUFFIX,gov.tw,Proxy
- DOMAIN-SUFFIX,gumroad.com,Proxy
- DOMAIN-SUFFIX,hbg.com,Proxy
- DOMAIN-SUFFIX,hightail.com,Proxy
- DOMAIN-SUFFIX,hk01.com,Proxy
- DOMAIN-SUFFIX,hkbf.org,Proxy
- DOMAIN-SUFFIX,hkbookcity.com,Proxy
- DOMAIN-SUFFIX,hkej.com,Proxy
- DOMAIN-SUFFIX,hket.com,Proxy
- DOMAIN-SUFFIX,hkgolden.com,Proxy
- DOMAIN-SUFFIX,hootsuite.com,Proxy
- DOMAIN-SUFFIX,hudson.org,Proxy
- DOMAIN-SUFFIX,huobi.pro,Proxy
- DOMAIN-SUFFIX,initiummall.com,Proxy
- DOMAIN-SUFFIX,ipfs.io,Proxy
- DOMAIN-SUFFIX,issuu.com,Proxy
- DOMAIN-SUFFIX,japantimes.co.jp,Proxy
- DOMAIN-SUFFIX,jiji.com,Proxy
- DOMAIN-SUFFIX,jinx.com,Proxy
- DOMAIN-SUFFIX,jkforum.net,Proxy
- DOMAIN-SUFFIX,joinmastodon.org,Proxy
- DOMAIN-SUFFIX,kakao.com,Proxy
- DOMAIN-SUFFIX,lihkg.com,Proxy
- DOMAIN-SUFFIX,live.com,Proxy
- DOMAIN-SUFFIX,mail.ru,Proxy
- DOMAIN-SUFFIX,matters.news,Proxy
- DOMAIN-SUFFIX,medium.com,Proxy
- DOMAIN-SUFFIX,mega.nz,Proxy
- DOMAIN-SUFFIX,mil,Proxy
- DOMAIN-SUFFIX,mobile01.com,Proxy
- DOMAIN-SUFFIX,naver.com,Proxy
- DOMAIN-SUFFIX,nikkei.com,Proxy
- DOMAIN-SUFFIX,nofile.io,Proxy
- DOMAIN-SUFFIX,now.com,Proxy
- DOMAIN-SUFFIX,nyt.com,Proxy
- DOMAIN-SUFFIX,nytchina.com,Proxy
- DOMAIN-SUFFIX,nytcn.me,Proxy
- DOMAIN-SUFFIX,nytco.com,Proxy
- DOMAIN-SUFFIX,nytimes.com,Proxy
- DOMAIN-SUFFIX,nytimg.com,Proxy
- DOMAIN-SUFFIX,nytlog.com,Proxy
- DOMAIN-SUFFIX,nytstyle.com,Proxy
- DOMAIN-SUFFIX,ok.ru,Proxy
- DOMAIN-SUFFIX,okex.com,Proxy
- DOMAIN-SUFFIX,pcloud.com,Proxy
- DOMAIN-SUFFIX,pinimg.com,Proxy
- DOMAIN-SUFFIX,pixiv.net,Proxy
- DOMAIN-SUFFIX,pornhub.com,Proxy
- DOMAIN-SUFFIX,pureapk.com,Proxy
- DOMAIN-SUFFIX,quora.com,Proxy
- DOMAIN-SUFFIX,quoracdn.net,Proxy
- DOMAIN-SUFFIX,rakuten.co.jp,Proxy
- DOMAIN-SUFFIX,reddit.com,Proxy
- DOMAIN-SUFFIX,redditmedia.com,Proxy
- DOMAIN-SUFFIX,resilio.com,Proxy
- DOMAIN-SUFFIX,reuters.com,Proxy
- DOMAIN-SUFFIX,scmp.com,Proxy
- DOMAIN-SUFFIX,scribd.com,Proxy
- DOMAIN-SUFFIX,seatguru.com,Proxy
- DOMAIN-SUFFIX,shadowsocks.org,Proxy
- DOMAIN-SUFFIX,slideshare.net,Proxy
- DOMAIN-SUFFIX,soundcloud.com,Proxy
- DOMAIN-SUFFIX,startpage.com,Proxy
- DOMAIN-SUFFIX,steamcommunity.com,Proxy
- DOMAIN-SUFFIX,steemit.com,Proxy
- DOMAIN-SUFFIX,t66y.com,Proxy
- DOMAIN-SUFFIX,teco-hk.org,Proxy
- DOMAIN-SUFFIX,teco-mo.org,Proxy
- DOMAIN-SUFFIX,teddysun.com,Proxy
- DOMAIN-SUFFIX,theinitium.com,Proxy
- DOMAIN-SUFFIX,tineye.com,Proxy
- DOMAIN-SUFFIX,torproject.org,Proxy
- DOMAIN-SUFFIX,tumblr.com,Proxy
- DOMAIN-SUFFIX,turbobit.net,Proxy
- DOMAIN-SUFFIX,twitch.tv,Proxy
- DOMAIN-SUFFIX,udn.com,Proxy
- DOMAIN-SUFFIX,unseen.is,Proxy
- DOMAIN-SUFFIX,upmedia.mg,Proxy
- DOMAIN-SUFFIX,uptodown.com,Proxy
- DOMAIN-SUFFIX,ustream.tv,Proxy
- DOMAIN-SUFFIX,uwants.com,Proxy
- DOMAIN-SUFFIX,v2ray.com,Proxy
- DOMAIN-SUFFIX,viber.com,Proxy
- DOMAIN-SUFFIX,videopress.com,Proxy
- DOMAIN-SUFFIX,vimeo.com,Proxy
- DOMAIN-SUFFIX,voxer.com,Proxy
- DOMAIN-SUFFIX,vzw.com,Proxy
- DOMAIN-SUFFIX,w3schools.com,Proxy
- DOMAIN-SUFFIX,wattpad.com,Proxy
- DOMAIN-SUFFIX,whoer.net,Proxy
- DOMAIN-SUFFIX,wikimapia.org,Proxy
- DOMAIN-SUFFIX,wikipedia.org,Proxy
- DOMAIN-SUFFIX,wire.com,Proxy
- DOMAIN-SUFFIX,worldcat.org,Proxy
- DOMAIN-SUFFIX,wsj.com,Proxy
- DOMAIN-SUFFIX,wsj.net,Proxy
- DOMAIN-SUFFIX,xboxlive.com,Proxy
- DOMAIN-SUFFIX,xvideos.com,Proxy
- DOMAIN-SUFFIX,yahoo.com,Proxy
- DOMAIN-SUFFIX,yesasia.com,Proxy
- DOMAIN-SUFFIX,yes-news.com,Proxy
- DOMAIN-SUFFIX,yomiuri.co.jp,Proxy
- DOMAIN-SUFFIX,you-get.org,Proxy
- DOMAIN-SUFFIX,zb.com,Proxy
- DOMAIN-SUFFIX,zello.com,Proxy
- DOMAIN-SUFFIX,zeronet.io,Proxy
- DOMAIN,cdn-images.mailchimp.com,Proxy
- DOMAIN,id.heroku.com,Proxy
- DOMAIN-KEYWORD,github,Proxy
- DOMAIN-KEYWORD,jav,Proxy
- DOMAIN-KEYWORD,pinterest,Proxy
- DOMAIN-KEYWORD,porn,Proxy
- DOMAIN-KEYWORD,wikileaks,Proxy

# (Region-Restricted Access Denied)
- DOMAIN-SUFFIX,apartmentratings.com,Proxy
- DOMAIN-SUFFIX,apartments.com,Proxy
- DOMAIN-SUFFIX,bankmobilevibe.com,Proxy
- DOMAIN-SUFFIX,bing.com,Proxy
- DOMAIN-SUFFIX,booktopia.com.au,Proxy
- DOMAIN-SUFFIX,centauro.com.br,Proxy
- DOMAIN-SUFFIX,clearsurance.com,Proxy
- DOMAIN-SUFFIX,costco.com,Proxy
- DOMAIN-SUFFIX,crackle.com,Proxy
- DOMAIN-SUFFIX,depositphotos.cn,Proxy
- DOMAIN-SUFFIX,dish.com,Proxy
- DOMAIN-SUFFIX,dmm.co.jp,Proxy
- DOMAIN-SUFFIX,dmm.com,Proxy
- DOMAIN-SUFFIX,dnvod.tv,Proxy
- DOMAIN-SUFFIX,esurance.com,Proxy
- DOMAIN-SUFFIX,extmatrix.com,Proxy
- DOMAIN-SUFFIX,fastpic.ru,Proxy
- DOMAIN-SUFFIX,flipboard.com,Proxy
- DOMAIN-SUFFIX,fnac.be,Proxy
- DOMAIN-SUFFIX,fnac.com,Proxy
- DOMAIN-SUFFIX,funkyimg.com,Proxy
- DOMAIN-SUFFIX,fxnetworks.com,Proxy
- DOMAIN-SUFFIX,gettyimages.com,Proxy
- DOMAIN-SUFFIX,jcpenney.com,Proxy
- DOMAIN-SUFFIX,kknews.cc,Proxy
- DOMAIN-SUFFIX,nationwide.com,Proxy
- DOMAIN-SUFFIX,nbc.com,Proxy
- DOMAIN-SUFFIX,nordstrom.com,Proxy
- DOMAIN-SUFFIX,nordstromimage.com,Proxy
- DOMAIN-SUFFIX,nordstromrack.com,Proxy
- DOMAIN-SUFFIX,read01.com,Proxy
- DOMAIN-SUFFIX,superpages.com,Proxy
- DOMAIN-SUFFIX,target.com,Proxy
- DOMAIN-SUFFIX,thinkgeek.com,Proxy
- DOMAIN-SUFFIX,tracfone.com,Proxy
- DOMAIN-SUFFIX,uploader.jp,Proxy
- DOMAIN-SUFFIX,vevo.com,Proxy
- DOMAIN-SUFFIX,viu.tv,Proxy
- DOMAIN-SUFFIX,vk.com,Proxy
- DOMAIN-SUFFIX,vsco.co,Proxy
- DOMAIN-SUFFIX,xfinity.com,Proxy
- DOMAIN-SUFFIX,zattoo.com,Proxy
- DOMAIN,abc.com,Proxy
- DOMAIN,abc.go.com,Proxy
- DOMAIN,abc.net.au,Proxy
- DOMAIN,wego.here.com,Proxy
#USER-AGENT,Roam*,Proxy

# (The Most Popular Sites)
# > Apple
# > Apple URL Shortener
- DOMAIN-SUFFIX,appsto.re,Proxy
# > TestFlight
- DOMAIN,beta.itunes.apple.com,Proxy
# > iBooks Store download
- DOMAIN,books.itunes.apple.com,Proxy
# > iTunes Store Moveis Trailers
- DOMAIN,hls.itunes.apple.com,Proxy
# App Store Preview
- DOMAIN,itunes.apple.com,Proxy
# > Spotlight
- DOMAIN,api-glb-sea.smoot.apple.com,Proxy
# > Dictionary
- DOMAIN,lookup-api.apple.com,Proxy
#PROCESS-NAME,LookupViewService,Proxy
# > Google
- DOMAIN-SUFFIX,abc.xyz,Proxy
- DOMAIN-SUFFIX,android.com,Proxy
- DOMAIN-SUFFIX,androidify.com,Proxy
- DOMAIN-SUFFIX,dialogflow.com,Proxy
- DOMAIN-SUFFIX,autodraw.com,Proxy
- DOMAIN-SUFFIX,capitalg.com,Proxy
- DOMAIN-SUFFIX,certificate-transparency.org,Proxy
- DOMAIN-SUFFIX,chrome.com,Proxy
- DOMAIN-SUFFIX,chromeexperiments.com,Proxy
- DOMAIN-SUFFIX,chromestatus.com,Proxy
- DOMAIN-SUFFIX,chromium.org,Proxy
- DOMAIN-SUFFIX,creativelab5.com,Proxy
- DOMAIN-SUFFIX,debug.com,Proxy
- DOMAIN-SUFFIX,deepmind.com,Proxy
- DOMAIN-SUFFIX,firebaseio.com,Proxy
- DOMAIN-SUFFIX,getmdl.io,Proxy
- DOMAIN-SUFFIX,ggpht.com,Proxy
- DOMAIN-SUFFIX,gmail.com,Proxy
- DOMAIN-SUFFIX,gmodules.com,Proxy
- DOMAIN-SUFFIX,godoc.org,Proxy
- DOMAIN-SUFFIX,golang.org,Proxy
- DOMAIN-SUFFIX,gstatic.com,Proxy
- DOMAIN-SUFFIX,gv.com,Proxy
- DOMAIN-SUFFIX,gwtproject.org,Proxy
- DOMAIN-SUFFIX,itasoftware.com,Proxy
- DOMAIN-SUFFIX,madewithcode.com,Proxy
- DOMAIN-SUFFIX,material.io,Proxy
- DOMAIN-SUFFIX,polymer-project.org,Proxy
- DOMAIN-SUFFIX,admin.recaptcha.net,Proxy
- DOMAIN-SUFFIX,recaptcha.net,Proxy
- DOMAIN-SUFFIX,shattered.io,Proxy
- DOMAIN-SUFFIX,synergyse.com,Proxy
- DOMAIN-SUFFIX,tensorflow.org,Proxy
- DOMAIN-SUFFIX,tiltbrush.com,Proxy
- DOMAIN-SUFFIX,waveprotocol.org,Proxy
- DOMAIN-SUFFIX,waymo.com,Proxy
- DOMAIN-SUFFIX,webmproject.org,Proxy
- DOMAIN-SUFFIX,webrtc.org,Proxy
- DOMAIN-SUFFIX,whatbrowser.org,Proxy
- DOMAIN-SUFFIX,widevine.com,Proxy
- DOMAIN-SUFFIX,x.company,Proxy
- DOMAIN-SUFFIX,youtu.be,Proxy
- DOMAIN-SUFFIX,yt.be,Proxy
- DOMAIN-SUFFIX,ytimg.com,Proxy
# > Steam
- DOMAIN,media.steampowered.com,Proxy
- DOMAIN,store.steampowered.com,Proxy
# > Other
- DOMAIN-SUFFIX,0rz.tw,Proxy
- DOMAIN-SUFFIX,4bluestones.biz,Proxy
- DOMAIN-SUFFIX,9bis.net,Proxy
- DOMAIN-SUFFIX,allconnected.co,Proxy
- DOMAIN-SUFFIX,amazonaws.com,Proxy
- DOMAIN-SUFFIX,aol.com,Proxy
- DOMAIN-SUFFIX,bcc.com.tw,Proxy
- DOMAIN-SUFFIX,bit.ly,Proxy
- DOMAIN-SUFFIX,bitshare.com,Proxy
- DOMAIN-SUFFIX,blog.jp,Proxy
- DOMAIN-SUFFIX,blogimg.jp,Proxy
- DOMAIN-SUFFIX,blogtd.org,Proxy
- DOMAIN-SUFFIX,broadcast.co.nz,Proxy
- DOMAIN-SUFFIX,camfrog.com,Proxy
- DOMAIN-SUFFIX,cfos.de,Proxy
- DOMAIN-SUFFIX,citypopulation.de,Proxy
- DOMAIN-SUFFIX,cloudfront.net,Proxy
- DOMAIN-SUFFIX,ctitv.com.tw,Proxy
- DOMAIN-SUFFIX,cuhk.edu.hk,Proxy
- DOMAIN-SUFFIX,cusu.hk,Proxy
- DOMAIN-SUFFIX,discuss.com.hk,Proxy
- DOMAIN-SUFFIX,dropboxapi.com,Proxy
- DOMAIN-SUFFIX,edditstatic.com,Proxy
- DOMAIN-SUFFIX,flickriver.com,Proxy
- DOMAIN-SUFFIX,focustaiwan.tw,Proxy
- DOMAIN-SUFFIX,free.fr,Proxy
- DOMAIN-SUFFIX,ftchinese.com,Proxy
- DOMAIN-SUFFIX,gigacircle.com,Proxy
- DOMAIN-SUFFIX,gov,Proxy
- DOMAIN-SUFFIX,hk-pub.com,Proxy
- DOMAIN-SUFFIX,hosting.co.uk,Proxy
- DOMAIN-SUFFIX,hwcdn.net,Proxy
- DOMAIN-SUFFIX,jtvnw.net,Proxy
- DOMAIN-SUFFIX,linksalpha.com,Proxy
- DOMAIN-SUFFIX,manyvids.com,Proxy
- DOMAIN-SUFFIX,myactimes.com,Proxy
- DOMAIN-SUFFIX,newsblur.com,Proxy
- DOMAIN-SUFFIX,now.im,Proxy
- DOMAIN-SUFFIX,redditlist.com,Proxy
- DOMAIN-SUFFIX,signal.org,Proxy
- DOMAIN-SUFFIX,sparknotes.com,Proxy
- DOMAIN-SUFFIX,streetvoice.com,Proxy
- DOMAIN-SUFFIX,ttvnw.net,Proxy
- DOMAIN-SUFFIX,tv.com,Proxy
- DOMAIN-SUFFIX,twitchcdn.net,Proxy
- DOMAIN-SUFFIX,typepad.com,Proxy
- DOMAIN-SUFFIX,udnbkk.com,Proxy
- DOMAIN-SUFFIX,whispersystems.org,Proxy
- DOMAIN-SUFFIX,wikia.com,Proxy
- DOMAIN-SUFFIX,wn.com,Proxy
- DOMAIN-SUFFIX,wolframalpha.com,Proxy
- DOMAIN-SUFFIX,x-art.com,Proxy
- DOMAIN-SUFFIX,yimg.com,Proxy

- DOMAIN-KEYWORD,dlercloud,Proxy
- DOMAIN-SUFFIX,dler.cloud,Proxy

# Local Area Network
- DOMAIN-KEYWORD,announce,DIRECT
- DOMAIN-KEYWORD,torrent,DIRECT
- DOMAIN-KEYWORD,tracker,DIRECT
- DOMAIN-SUFFIX,smtp,DIRECT
- DOMAIN-SUFFIX,local,DIRECT
- IP-CIDR,192.168.0.0/16,DIRECT
- IP-CIDR,10.0.0.0/8,DIRECT
- IP-CIDR,172.16.0.0/12,DIRECT
- IP-CIDR,127.0.0.0/8,DIRECT
- IP-CIDR,100.64.0.0/10,DIRECT

# > IQIYI
- IP-CIDR,101.227.0.0/16,AsianTV
- IP-CIDR,101.224.0.0/13,AsianTV
- IP-CIDR,119.176.0.0/12,AsianTV

# > Youku
- IP-CIDR,106.11.0.0/16,AsianTV

# > Telegram
- IP-CIDR,67.198.55.0/24,Proxy
- IP-CIDR,91.108.4.0/22,Proxy
- IP-CIDR,91.108.8.0/22,Proxy
- IP-CIDR,91.108.12.0/22,Proxy
- IP-CIDR,91.108.16.0/22,Proxy
- IP-CIDR,91.108.56.0/22,Proxy
- IP-CIDR,109.239.140.0/24,Proxy
- IP-CIDR,149.154.160.0/20,Proxy
- IP-CIDR,205.172.60.0/22,Proxy

# (Extra IP-CIRD)
# > Google
- IP-CIDR,35.190.247.0/24,Proxy
- IP-CIDR,64.233.160.0/19,Proxy
- IP-CIDR,66.102.0.0/20,Proxy
- IP-CIDR,66.249.80.0/20,Proxy
- IP-CIDR,72.14.192.0/18,Proxy
- IP-CIDR,74.125.0.0/16,Proxy
- IP-CIDR,108.177.8.0/21,Proxy
- IP-CIDR,172.217.0.0/16,Proxy
- IP-CIDR,173.194.0.0/16,Proxy
- IP-CIDR,209.85.128.0/17,Proxy
- IP-CIDR,216.58.192.0/19,Proxy
- IP-CIDR,216.239.32.0/19,Proxy
# > Facebook
- IP-CIDR,31.13.24.0/21,Proxy
- IP-CIDR,31.13.64.0/18,Proxy
- IP-CIDR,45.64.40.0/22,Proxy
- IP-CIDR,66.220.144.0/20,Proxy
- IP-CIDR,69.63.176.0/20,Proxy
- IP-CIDR,69.171.224.0/19,Proxy
- IP-CIDR,74.119.76.0/22,Proxy
- IP-CIDR,103.4.96.0/22,Proxy
- IP-CIDR,129.134.0.0/17,Proxy
- IP-CIDR,157.240.0.0/17,Proxy
- IP-CIDR,173.252.64.0/19,Proxy
- IP-CIDR,173.252.96.0/19,Proxy
- IP-CIDR,179.60.192.0/22,Proxy
- IP-CIDR,185.60.216.0/22,Proxy
- IP-CIDR,204.15.20.0/22,Proxy
# > Twitter
- IP-CIDR,69.195.160.0/19,Proxy
- IP-CIDR,104.244.42.0/21,Proxy
- IP-CIDR,192.133.76.0/22,Proxy
- IP-CIDR,199.16.156.0/22,Proxy
- IP-CIDR,199.59.148.0/22,Proxy
- IP-CIDR,199.96.56.0/21,Proxy
- IP-CIDR,202.160.128.0/22,Proxy
- IP-CIDR,209.237.192.0/19,Proxy

# GeoIP China
- GEOIP,CN,Domestic

- MATCH,Others