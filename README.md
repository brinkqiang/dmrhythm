# dmrhythm

Copyright (c) 2013-2018 brinkqiang (brink.qiang@gmail.com)

[dmrhythm GitHub](https://github.com/brinkqiang/dmrhythm)

## Build status
| [Linux][lin-link] | [MacOSX][osx-link] | [Windows][win-link] |
| :---------------: | :----------------: | :-----------------: |
| ![lin-badge]      | ![osx-badge]       | ![win-badge]        |

[lin-badge]: https://travis-ci.org/brinkqiang/dmrhythm.svg?branch=master "Travis build status"
[lin-link]:  https://travis-ci.org/brinkqiang/dmrhythm "Travis build status"
[osx-badge]: https://travis-ci.org/brinkqiang/dmrhythm.svg?branch=master "Travis build status"
[osx-link]:  https://travis-ci.org/brinkqiang/dmrhythm "Travis build status"
[win-badge]: https://ci.appveyor.com/api/projects/status/github/brinkqiang/dmrhythm?branch=master&svg=true "AppVeyor build status"
[win-link]:  https://ci.appveyor.com/project/brinkqiang/dmrhythm "AppVeyor build status"

## Intro
dmrhythm 算法如下
```cpp
测算人体生物钟必须用公历生日，只知道农历生日者请查万年历，查出公历生日。
举例：某人生于1964年7月23日，测1993年12月3日三个节律情况。
这个人1964年出生至1993年，经历了1964、1968、1972、1976、1984、1988、1992共8个闰年，因此闰年数为8。
代入公式
[1993-1964]×365+8-[31天（1月）+29天（2月）+31天（3月）+30天（4月）+31天（5月）+30天（6月）+23天]+[31天（1月）+28天（2月）+31天（3月）+30天（4月）+31天（5月）+30天（6月）+31天（7月）+31天（8月）+30天（9月）+31天（10月）+30天（11月）+3天]=29×365+8-205天+337天=10725天
10725天÷23天=466……7天
10725÷28天=383……1天
10725÷33天=325……0
人体生物钟三个节律处在周期日、高潮期、临界日、低潮期的判定标准，如下表：
周期日 高潮期 临界日 低潮期
体力节律余数等于0 余数小于12 余数等于12 余数大于12
情绪节律余数等于0 余数小于14 余数等于14 余数大于14
智力节律余数等于0 余数小于17 余数等于17 余数大于17
根据体力余数7，情绪余数1，智力余数0，对照本表，此人1993年12月3日这天：
体力处在高潮期第7天。
情绪处在高潮期第1天。
智力刚好是周期日。
根据体力周期为23天，情绪周期为28天，智力周期为33天，按日历测算，即可制出此人若干年的人体利害日表。
```
## Contacts
[![Join the chat](https://badges.gitter.im/brinkqiang/dmrhythm/Lobby.svg)](https://gitter.im/brinkqiang/dmrhythm)

## Thanks
