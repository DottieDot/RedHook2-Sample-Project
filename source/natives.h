#pragma once

#include "types.hpp"

#include <redhook2.h>

// Generated Wed, 06 Nov 2019 16:38:15 GMT

namespace BUILTIN
{
	static void WAIT(Any p0) { invoker::Invoke<Void>(0x4EDE34FBADD967A6, p0); } // 0x4EDE34FBADD967A6 b1207
	static Any START_NEW_SCRIPT(Any p0, Any p1) { return invoker::Invoke<Any>(0xE81651AD79516E48, p0, p1); } // 0xE81651AD79516E48 b1207
	static Any START_NEW_SCRIPT_WITH_ARGS(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xB8BA7F44DF1575E1, p0, p1, p2, p3); } // 0xB8BA7F44DF1575E1 b1207
	static Any START_NEW_SCRIPT_WITH_NAME_HASH(Any p0, Any p1) { return invoker::Invoke<Any>(0xEB1C67C3A5333A92, p0, p1); } // 0xEB1C67C3A5333A92 b1207
	static Any START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xC4BB298BD441BE78, p0, p1, p2, p3); } // 0xC4BB298BD441BE78 b1207
	static Any TIMERA() { return invoker::Invoke<Any>(0x83666F9FB8FEBD4B); } // 0x83666F9FB8FEBD4B b1207
	static Any TIMERB() { return invoker::Invoke<Any>(0xC9D9444186B5A374); } // 0xC9D9444186B5A374 b1207
	static void SETTIMERA(Any p0) { invoker::Invoke<Void>(0xC1B1E9A034A63A62, p0); } // 0xC1B1E9A034A63A62 b1207
	static void SETTIMERB(Any p0) { invoker::Invoke<Void>(0x5AE11BC36633DE4E, p0); } // 0x5AE11BC36633DE4E b1207
	static Any TIMESTEP() { return invoker::Invoke<Any>(0x0000000050597EE2); } // 0x0000000050597EE2 b1207
	static Any SIN(Any p0) { return invoker::Invoke<Any>(0x0BADBFA3B172435F, p0); } // 0x0BADBFA3B172435F b1207
	static Any COS(Any p0) { return invoker::Invoke<Any>(0xD0FFB162F40A139C, p0); } // 0xD0FFB162F40A139C b1207
	static Any SQRT(Any p0) { return invoker::Invoke<Any>(0x71D93B57D07F9804, p0); } // 0x71D93B57D07F9804 b1207
	static Any POW(Any p0, Any p1) { return invoker::Invoke<Any>(0xE3621CC40F31FE2E, p0, p1); } // 0xE3621CC40F31FE2E b1207
	static Any VMAG(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x652D2EEEF1D3E62C, p0, p1, p2); } // 0x652D2EEEF1D3E62C b1207
	static Any VMAG2(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xA8CEACB4F35AE058, p0, p1, p2); } // 0xA8CEACB4F35AE058 b1207
	static Any VDIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x2A488C176D52CCA5, p0, p1, p2, p3, p4, p5); } // 0x2A488C176D52CCA5 b1207
	static Any VDIST2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xB7A628320EFF8E47, p0, p1, p2, p3, p4, p5); } // 0xB7A628320EFF8E47 b1207
	static Any SHIFT_LEFT(Any p0, Any p1) { return invoker::Invoke<Any>(0xEDD95A39E5544DE8, p0, p1); } // 0xEDD95A39E5544DE8 b1207
	static Any SHIFT_RIGHT(Any p0, Any p1) { return invoker::Invoke<Any>(0x97EF1E5BCE9DC075, p0, p1); } // 0x97EF1E5BCE9DC075 b1207
	static Any FLOOR(Any p0) { return invoker::Invoke<Any>(0xF34EE736CF047844, p0); } // 0xF34EE736CF047844 b1207
	static Any CEIL(Any p0) { return invoker::Invoke<Any>(0x11E019C8F43ACC8A, p0); } // 0x11E019C8F43ACC8A b1207
	static Any ROUND(Any p0) { return invoker::Invoke<Any>(0xF2DB717A73826179, p0); } // 0xF2DB717A73826179 b1207
	static Any TO_FLOAT(Any p0) { return invoker::Invoke<Any>(0xBBDA792448DB5A89, p0); } // 0xBBDA792448DB5A89 b1207
	static void _SET_THREAD_PRIORITY(Any p0) { invoker::Invoke<Void>(0x42B65DEEF2EDF2A1, p0); } // 0x42B65DEEF2EDF2A1 b1207
}

namespace _NAMESPACE1
{
	static Any _0x53E4D0C079CA6855(Any p0) { return invoker::Invoke<Any>(0x53E4D0C079CA6855, p0); } // 0x53E4D0C079CA6855 b1207
	static Any _0xC276FE69DDA22BAD(Any p0) { return invoker::Invoke<Any>(0xC276FE69DDA22BAD, p0); } // 0xC276FE69DDA22BAD b1207
	static Any _0x5F5B1B7E8E8F94C6(Any p0) { return invoker::Invoke<Any>(0x5F5B1B7E8E8F94C6, p0); } // 0x5F5B1B7E8E8F94C6 b1207
	static void _0x4972A022AE6DAFA1(Any p0) { invoker::Invoke<Void>(0x4972A022AE6DAFA1, p0); } // 0x4972A022AE6DAFA1 b1207
	static void _0x2BC4A6D92D140112(Any p0) { invoker::Invoke<Void>(0x2BC4A6D92D140112, p0); } // 0x2BC4A6D92D140112 b1207
	static Any _0x957D7E750216D74B(Any p0) { return invoker::Invoke<Any>(0x957D7E750216D74B, p0); } // 0x957D7E750216D74B b1207
	static void _0x89783FDDF079C88D(Any p0) { invoker::Invoke<Void>(0x89783FDDF079C88D, p0); } // 0x89783FDDF079C88D b1207
	static void _0x64340DC208D671D5(Any p0) { invoker::Invoke<Void>(0x64340DC208D671D5, p0); } // 0x64340DC208D671D5 b1207
	static void _0x7A1FDCF35EAA140F(Any p0) { invoker::Invoke<Void>(0x7A1FDCF35EAA140F, p0); } // 0x7A1FDCF35EAA140F b1207
	static void _0x2A31D13C5F021D0D(Any p0) { invoker::Invoke<Void>(0x2A31D13C5F021D0D, p0); } // 0x2A31D13C5F021D0D b1207
	static void _0x3C7A9C2C953128FE(Any p0) { invoker::Invoke<Void>(0x3C7A9C2C953128FE, p0); } // 0x3C7A9C2C953128FE b1207
	static Any _0xEBA51A294C73292E() { return invoker::Invoke<Any>(0xEBA51A294C73292E); } // 0xEBA51A294C73292E b1207
	static void _0x140B3CB1D424A945(Any p0, Any p1) { invoker::Invoke<Void>(0x140B3CB1D424A945, p0, p1); } // 0x140B3CB1D424A945 b1207
	static Any _0x8CBE916CFC64AD5C(Any p0) { return invoker::Invoke<Any>(0x8CBE916CFC64AD5C, p0); } // 0x8CBE916CFC64AD5C b1207
	static void _0x1A7A802B2301EDC0(Any p0) { invoker::Invoke<Void>(0x1A7A802B2301EDC0, p0); } // 0x1A7A802B2301EDC0 b1207
	static void _0x733077295AB51304(Any p0) { invoker::Invoke<Void>(0x733077295AB51304, p0); } // 0x733077295AB51304 b1207
	static Any _0x975BD6351648935F(Any p0) { return invoker::Invoke<Any>(0x975BD6351648935F, p0); } // 0x975BD6351648935F b1207
}

namespace _NAMESPACE2
{
	static void _0xAEE3ADD08829CB6F(Any p0) { invoker::Invoke<Void>(0xAEE3ADD08829CB6F, p0); } // 0xAEE3ADD08829CB6F b1207
	static void _0xC273A5B8488F7838(Any p0) { invoker::Invoke<Void>(0xC273A5B8488F7838, p0); } // 0xC273A5B8488F7838 b1207
	static void _0xE588B5A8A005CB5E(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xE588B5A8A005CB5E, p0, p1, p2, p3); } // 0xE588B5A8A005CB5E b1207
	static void _0x8886D83A430537FD(Any p0, Any p1) { invoker::Invoke<Void>(0x8886D83A430537FD, p0, p1); } // 0x8886D83A430537FD b1207
	static void _0xBA8818212633500A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBA8818212633500A, p0, p1, p2); } // 0xBA8818212633500A b1207
	static Any _0xF382C92CCC1CCDBC(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xF382C92CCC1CCDBC, p0, p1, p2); } // 0xF382C92CCC1CCDBC b1207
	static Any _0xE195C5A82156321D() { return invoker::Invoke<Any>(0xE195C5A82156321D); } // 0xE195C5A82156321D b1207
	static Any _0xE2487779957FE897() { return invoker::Invoke<Any>(0xE2487779957FE897); } // 0xE2487779957FE897 b1207
	static void _0xDD0660C997DE94FD(Any p0, Any p1) { invoker::Invoke<Void>(0xDD0660C997DE94FD, p0, p1); } // 0xDD0660C997DE94FD b1207
	static void _0x4B6C9A43F7D9109B(Any p0, Any p1) { invoker::Invoke<Void>(0x4B6C9A43F7D9109B, p0, p1); } // 0x4B6C9A43F7D9109B b1207
	static Any _0x159EF5B6EDCE00E8(Any p0, Any p1) { return invoker::Invoke<Any>(0x159EF5B6EDCE00E8, p0, p1); } // 0x159EF5B6EDCE00E8 b1207
	static Any _0xDC44F405A6B98D03(Any p0, Any p1) { return invoker::Invoke<Any>(0xDC44F405A6B98D03, p0, p1); } // 0xDC44F405A6B98D03 b1207
	static Any _0x2E2E06023D07631E(Any p0, Any p1) { return invoker::Invoke<Any>(0x2E2E06023D07631E, p0, p1); } // 0x2E2E06023D07631E b1207
	static Any _0x43FF27FC1829C202() { return invoker::Invoke<Any>(0x43FF27FC1829C202); } // 0x43FF27FC1829C202 b1207
	static Any _0xFFEC4B0A1A3ED515(Any p0, Any p1) { return invoker::Invoke<Any>(0xFFEC4B0A1A3ED515, p0, p1); } // 0xFFEC4B0A1A3ED515 b1207
	static Any _0x619E63980BFC0096(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x619E63980BFC0096, p0, p1, p2); } // 0x619E63980BFC0096 b1207
	static Any _0x660639BC60157048(Any p0, Any p1) { return invoker::Invoke<Any>(0x660639BC60157048, p0, p1); } // 0x660639BC60157048 b1207
	static void _0x4248AB2EEB3C75AD(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4248AB2EEB3C75AD, p0, p1, p2); } // 0x4248AB2EEB3C75AD b1207
	static void _0xB7079F4C72896756(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xB7079F4C72896756, p0, p1, p2, p3, p4); } // 0xB7079F4C72896756 b1207
	static void _0x5639FBEA922788DA(Any p0) { invoker::Invoke<Void>(0x5639FBEA922788DA, p0); } // 0x5639FBEA922788DA b1207
	static void _0x67F7CEAC2391E114(Any p0, Any p1) { invoker::Invoke<Void>(0x67F7CEAC2391E114, p0, p1); } // 0x67F7CEAC2391E114 b1207
	static void _0x8C8371EDFAF014A0(Any p0, Any p1) { invoker::Invoke<Void>(0x8C8371EDFAF014A0, p0, p1); } // 0x8C8371EDFAF014A0 b1207
	static void _0xF8C20282B237E3F7(Any p0) { invoker::Invoke<Void>(0xF8C20282B237E3F7, p0); } // 0xF8C20282B237E3F7 b1207
	static Any _0x13F138225C202F66() { return invoker::Invoke<Any>(0x13F138225C202F66); } // 0x13F138225C202F66 b1207
}

namespace _NAMESPACE3
{
	static Any _0x1FCA98E33C1437B3(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x1FCA98E33C1437B3, p0, p1, p2, p3, p4); } // 0x1FCA98E33C1437B3 b1207
	static void _0x84EEDB2C6E650000(Any p0) { invoker::Invoke<Void>(0x84EEDB2C6E650000, p0); } // 0x84EEDB2C6E650000 b1207
	static void _0x4B85B3CF9197AEDF(Any p0) { invoker::Invoke<Void>(0x4B85B3CF9197AEDF, p0); } // 0x4B85B3CF9197AEDF b1207
	static Any _0x4B85B3CF91972222(Any p0) { return invoker::Invoke<Any>(0x4B85B3CF91972222, p0); } // 0x4B85B3CF91972222 b1207
	static void _0x8A8208AE92BF87A5(Any p0) { invoker::Invoke<Void>(0x8A8208AE92BF87A5, p0); } // 0x8A8208AE92BF87A5 b1207
	static Any _0x25557E324489393C(Any p0) { return invoker::Invoke<Any>(0x25557E324489393C, p0); } // 0x25557E324489393C b1207
	static Any _0x6F1F0B17109309DA(Any p0, Any p1) { return invoker::Invoke<Any>(0x6F1F0B17109309DA, p0, p1); } // 0x6F1F0B17109309DA b1207
	static Any _0x9D1ECA9337BE9FC3(Any p0, Any p1) { return invoker::Invoke<Any>(0x9D1ECA9337BE9FC3, p0, p1); } // 0x9D1ECA9337BE9FC3 b1207
	static void _0xAF068580194D9DC7(Any p0) { invoker::Invoke<Void>(0xAF068580194D9DC7, p0); } // 0xAF068580194D9DC7 b1207
	static Any _0x477122B8D05E7968(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x477122B8D05E7968, p0, p1, p2); } // 0x477122B8D05E7968 b1207
	static Any _0x59606519FF9D3EC2(Any p0, Any p1) { return invoker::Invoke<Any>(0x59606519FF9D3EC2, p0, p1); } // 0x59606519FF9D3EC2 b1207
	static Any _0xF8D1D2DAB6007EEF() { return invoker::Invoke<Any>(0xF8D1D2DAB6007EEF); } // 0xF8D1D2DAB6007EEF b1207
	static Any _0x95531A4A20CCE7BC(Any p0, Any p1) { return invoker::Invoke<Any>(0x95531A4A20CCE7BC, p0, p1); } // 0x95531A4A20CCE7BC b1207
	static Any _0x9E036D5204FFBBC8(Any p0, Any p1) { return invoker::Invoke<Any>(0x9E036D5204FFBBC8, p0, p1); } // 0x9E036D5204FFBBC8 b1207
	static void _0xF4D94AF761768700(Any p0) { invoker::Invoke<Void>(0xF4D94AF761768700, p0); } // 0xF4D94AF761768700 b1207
	static void _0x8FDF221F13537936(Any p0, Any p1) { invoker::Invoke<Void>(0x8FDF221F13537936, p0, p1); } // 0x8FDF221F13537936 b1207
	static void _0x718CF1328D20C2B3(Any p0, Any p1) { invoker::Invoke<Void>(0x718CF1328D20C2B3, p0, p1); } // 0x718CF1328D20C2B3 b1207
	static void _0x8E1BA705F63C1925(Any p0) { invoker::Invoke<Void>(0x8E1BA705F63C1925, p0); } // 0x8E1BA705F63C1925 b1207
	static Any _0xCBFC7725DE6CE2E0(Any p0, Any p1) { return invoker::Invoke<Any>(0xCBFC7725DE6CE2E0, p0, p1); } // 0xCBFC7725DE6CE2E0 b1207
	static Any _0xD8254CB2C586412B(Any p0, Any p1) { return invoker::Invoke<Any>(0xD8254CB2C586412B, p0, p1); } // 0xD8254CB2C586412B b1207
	static Any _0xCDC5512A407CF08D(Any p0) { return invoker::Invoke<Any>(0xCDC5512A407CF08D, p0); } // 0xCDC5512A407CF08D b1207
	static Any _0xF94692EB9DC15D74(Any p0, Any p1) { return invoker::Invoke<Any>(0xF94692EB9DC15D74, p0, p1); } // 0xF94692EB9DC15D74 b1207
	static Any _0x73616E64696C132E() { return invoker::Invoke<Any>(0x73616E64696C132E); } // 0x73616E64696C132E b1207
	static Any _0x8D81E7824B7753F7(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x8D81E7824B7753F7, p0, p1, p2); } // 0x8D81E7824B7753F7 b1207
	static Any _0x4CDFFE3189EBDBD0(Any p0) { return invoker::Invoke<Any>(0x4CDFFE3189EBDBD0, p0); } // 0x4CDFFE3189EBDBD0 b1207
	static Any _0x34A0671BE613D3D0(Any p0) { return invoker::Invoke<Any>(0x34A0671BE613D3D0, p0); } // 0x34A0671BE613D3D0 b1207
	static Any _0xD70C7A30412F8FA0(Any p0) { return invoker::Invoke<Any>(0xD70C7A30412F8FA0, p0); } // 0xD70C7A30412F8FA0 b1207
	static Any _0x9AAE3C1148A09BCA(Any p0) { return invoker::Invoke<Any>(0x9AAE3C1148A09BCA, p0); } // 0x9AAE3C1148A09BCA b1207
	static Any _0xA96619FE85159ED2(Any p0) { return invoker::Invoke<Any>(0xA96619FE85159ED2, p0); } // 0xA96619FE85159ED2 b1207
	static void _0xA41351EA2A18A0AD(Any p0, Any p1) { invoker::Invoke<Void>(0xA41351EA2A18A0AD, p0, p1); } // 0xA41351EA2A18A0AD b1207
	static void _0x323E3AD772BA5D57(Any p0, Any p1) { invoker::Invoke<Void>(0x323E3AD772BA5D57, p0, p1); } // 0x323E3AD772BA5D57 b1207
	static void _0x1B70811D3BF75DB9(Any p0, Any p1) { invoker::Invoke<Void>(0x1B70811D3BF75DB9, p0, p1); } // 0x1B70811D3BF75DB9 b1207
	static void _0x020894BF17A02EF2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x020894BF17A02EF2, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x020894BF17A02EF2 b1207
	static void _0xADF1D53F3B1FE0A7(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xADF1D53F3B1FE0A7, p0, p1, p2, p3); } // 0xADF1D53F3B1FE0A7 b1207
	static void _0xD6824B7D24DC0CE0(Any p0, Any p1) { invoker::Invoke<Void>(0xD6824B7D24DC0CE0, p0, p1); } // 0xD6824B7D24DC0CE0 b1207
	static Any _0x4B4038796F0D6566(Any p0) { return invoker::Invoke<Any>(0x4B4038796F0D6566, p0); } // 0x4B4038796F0D6566 b1207
	static void _0x75820B801CFF262A(Any p0, Any p1) { invoker::Invoke<Void>(0x75820B801CFF262A, p0, p1); } // 0x75820B801CFF262A b1207
	static Any _0x43C21623E42B821B(Any p0) { return invoker::Invoke<Any>(0x43C21623E42B821B, p0); } // 0x43C21623E42B821B b1207
	static Any _0x3FBC3F51BF12DFBF(Any p0) { return invoker::Invoke<Any>(0x3FBC3F51BF12DFBF, p0); } // 0x3FBC3F51BF12DFBF b1207
	static Any _0x61BE7D6186260002(Any p0) { return invoker::Invoke<Any>(0x61BE7D6186260002, p0); } // 0x61BE7D6186260002 b1207
	static Any _0x49F1D143ADE32656(Any p0) { return invoker::Invoke<Any>(0x49F1D143ADE32656, p0); } // 0x49F1D143ADE32656 b1207
	static void _0x8B720AD451CA2AB3(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x8B720AD451CA2AB3, p0, p1, p2, p3); } // 0x8B720AD451CA2AB3 b1207
	static void _0x2BF96692C67F3E53(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2BF96692C67F3E53, p0, p1, p2); } // 0x2BF96692C67F3E53 b1207
	static Any _0x005E6F28DD7ED58D(Any p0, Any p1) { return invoker::Invoke<Any>(0x005E6F28DD7ED58D, p0, p1); } // 0x005E6F28DD7ED58D b1207
	static Any _0x73616E64696C616E(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x73616E64696C616E, p0, p1, p2); } // 0x73616E64696C616E b1207
	static Any _0xB89FCFF19DAFFF28(Any p0, Any p1) { return invoker::Invoke<Any>(0xB89FCFF19DAFFF28, p0, p1); } // 0xB89FCFF19DAFFF28 b1207
	static Any _0x337F1CC8EE895601(Any p0, Any p1) { return invoker::Invoke<Any>(0x337F1CC8EE895601, p0, p1); } // 0x337F1CC8EE895601 b1207
	static Any _0xE5822422197BBBA3(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xE5822422197BBBA3, p0, p1, p2); } // 0xE5822422197BBBA3 b1207
	static Any _0xFB5674687A1B2814(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xFB5674687A1B2814, p0, p1, p2); } // 0xFB5674687A1B2814 b1207
	static Any _0x430EE0A19BC5A287(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x430EE0A19BC5A287, p0, p1, p2); } // 0x430EE0A19BC5A287 b1207
	static void _0x519E96C2C68B404B(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x519E96C2C68B404B, p0, p1, p2); } // 0x519E96C2C68B404B b1207
	static Any _0x07A6F6447ECA9B64(Any p0, Any p1) { return invoker::Invoke<Any>(0x07A6F6447ECA9B64, p0, p1); } // 0x07A6F6447ECA9B64 b1207
	static void _0x6BC5104E68CBEFE8(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x6BC5104E68CBEFE8, p0, p1, p2, p3); } // 0x6BC5104E68CBEFE8 b1207
	static Any _0xCC24CB07F60B496E(Any p0, Any p1) { return invoker::Invoke<Any>(0xCC24CB07F60B496E, p0, p1); } // 0xCC24CB07F60B496E b1207
	static void _0x3A379D2166CF5B92(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3A379D2166CF5B92, p0, p1, p2); } // 0x3A379D2166CF5B92 b1207
	static Any _0x2B7277484CC095FD(Any p0, Any p1) { return invoker::Invoke<Any>(0x2B7277484CC095FD, p0, p1); } // 0x2B7277484CC095FD b1207
	static Any _0x8398438D8F14F56D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x8398438D8F14F56D, p0, p1, p2, p3, p4, p5); } // 0x8398438D8F14F56D b1207
	static Any _0x3AB6C7B0BB0DF4B1(Any p0, Any p1) { return invoker::Invoke<Any>(0x3AB6C7B0BB0DF4B1, p0, p1); } // 0x3AB6C7B0BB0DF4B1 b1207
	static void _0xDC418495DBA327A1(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDC418495DBA327A1, p0, p1, p2); } // 0xDC418495DBA327A1 b1207
	static void _0x1C0B105C3F30B88D(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1C0B105C3F30B88D, p0, p1, p2); } // 0x1C0B105C3F30B88D b1207
	static void _0x6843A1AA3A336DFF(Any p0) { invoker::Invoke<Void>(0x6843A1AA3A336DFF, p0); } // 0x6843A1AA3A336DFF b1207
	static void _0xA2507C4948C83D2E(Any p0) { invoker::Invoke<Void>(0xA2507C4948C83D2E, p0); } // 0xA2507C4948C83D2E b1207
	static void _0xF7A4C571E572D237(Any p0) { invoker::Invoke<Void>(0xF7A4C571E572D237, p0); } // 0xF7A4C571E572D237 b1207
	static Any _0x661B8683611B9B97(Any p0) { return invoker::Invoke<Any>(0x661B8683611B9B97, p0); } // 0x661B8683611B9B97 b1207
	static void _0xAB5E7CAB074D6B84(Any p0, Any p1) { invoker::Invoke<Void>(0xAB5E7CAB074D6B84, p0, p1); } // 0xAB5E7CAB074D6B84 b1207
	static Any _0x1C5D33A4293E6DDE(Any p0, Any p1) { return invoker::Invoke<Any>(0x1C5D33A4293E6DDE, p0, p1); } // 0x1C5D33A4293E6DDE b1207
	static Any _0xA9016536015DE29D(Any p0, Any p1) { return invoker::Invoke<Any>(0xA9016536015DE29D, p0, p1); } // 0xA9016536015DE29D b1207
	static void _0x15598CFB25F3DC7E(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x15598CFB25F3DC7E, p0, p1, p2); } // 0x15598CFB25F3DC7E b1207
	static Any _0x1F0E401031E20146(Any p0, Any p1) { return invoker::Invoke<Any>(0x1F0E401031E20146, p0, p1); } // 0x1F0E401031E20146 b1207
	static Any _0xDF7B5144E25CD3FE(Any p0, Any p1) { return invoker::Invoke<Any>(0xDF7B5144E25CD3FE, p0, p1); } // 0xDF7B5144E25CD3FE b1207
	static Any _0xAE6ADA8FE7E84ACC(Any p0, Any p1) { return invoker::Invoke<Any>(0xAE6ADA8FE7E84ACC, p0, p1); } // 0xAE6ADA8FE7E84ACC b1207
	static Any _0xAE5ADA4FE3E21ADC() { return invoker::Invoke<Any>(0xAE5ADA4FE3E21ADC); } // 0xAE5ADA4FE3E21ADC b1207
	static Any _0x1407F5115FB9583E(Any p0, Any p1) { return invoker::Invoke<Any>(0x1407F5115FB9583E, p0, p1); } // 0x1407F5115FB9583E b1207
	static Any _0x23E33CB9F4A3F547(Any p0, Any p1) { return invoker::Invoke<Any>(0x23E33CB9F4A3F547, p0, p1); } // 0x23E33CB9F4A3F547 b1207
	static Any _0x0DF57F86FE71DBE5(Any p0, Any p1) { return invoker::Invoke<Any>(0x0DF57F86FE71DBE5, p0, p1); } // 0x0DF57F86FE71DBE5 b1207
	static void _0x1AD896BF43619551() { invoker::Invoke<Void>(0x1AD896BF43619551); } // 0x1AD896BF43619551 b1207
	static Any _0x4822A65D5AF64E69(Any p0) { return invoker::Invoke<Any>(0x4822A65D5AF64E69, p0); } // 0x4822A65D5AF64E69 b1207
	static Any _0x5D7BFDA2290B4E39(Any p0) { return invoker::Invoke<Any>(0x5D7BFDA2290B4E39, p0); } // 0x5D7BFDA2290B4E39 b1207
	static Any _0xFDFC14799373283F(Any p0) { return invoker::Invoke<Any>(0xFDFC14799373283F, p0); } // 0xFDFC14799373283F b1207
	static Any _0xB727A847862CB00A(Any p0) { return invoker::Invoke<Any>(0xB727A847862CB00A, p0); } // 0xB727A847862CB00A b1207
	static Any _0xA1300DE03E5D1973(Any p0) { return invoker::Invoke<Any>(0xA1300DE03E5D1973, p0); } // 0xA1300DE03E5D1973 b1207
	static void _0x53CB3970BA02E3CC(Any p0) { invoker::Invoke<Void>(0x53CB3970BA02E3CC, p0); } // 0x53CB3970BA02E3CC b1207
	static void _0xB1A196BAFE650402(Any p0, Any p1) { invoker::Invoke<Void>(0xB1A196BAFE650402, p0, p1); } // 0xB1A196BAFE650402 b1207
	static void _0xAE6DE22DE0ED4554(Any p0, Any p1) { invoker::Invoke<Void>(0xAE6DE22DE0ED4554, p0, p1); } // 0xAE6DE22DE0ED4554 b1207
	static Any _0x61B2AAEF645DDAF0(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x61B2AAEF645DDAF0, p0, p1, p2, p3, p4); } // 0x61B2AAEF645DDAF0 b1207
	static void _0x07706C4CC9C6CC9E(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x07706C4CC9C6CC9E, p0, p1, p2, p3, p4); } // 0x07706C4CC9C6CC9E b1207
	static void _0x3641FCD53E59B335(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3641FCD53E59B335, p0, p1, p2); } // 0x3641FCD53E59B335 b1207
	static void _0x99B2A2E3655DEAF1(Any p0, Any p1) { invoker::Invoke<Void>(0x99B2A2E3655DEAF1, p0, p1); } // 0x99B2A2E3655DEAF1 b1207
	static void _0xBC781D24AA11F179(Any p0) { invoker::Invoke<Void>(0xBC781D24AA11F179, p0); } // 0xBC781D24AA11F179 b1207
	static Any _0x3B393716C3FD8237(Any p0) { return invoker::Invoke<Any>(0x3B393716C3FD8237, p0); } // 0x3B393716C3FD8237 b1207
	static void _0xE12D7B4B959644CD() { invoker::Invoke<Void>(0xE12D7B4B959644CD); } // 0xE12D7B4B959644CD b1207
	static void _0xC1193521E3B9FADD(Any p0, Any p1) { invoker::Invoke<Void>(0xC1193521E3B9FADD, p0, p1); } // 0xC1193521E3B9FADD b1207
	static Any _0x7C709C01D43D94CD() { return invoker::Invoke<Any>(0x7C709C01D43D94CD); } // 0x7C709C01D43D94CD b1207
	static Any _0x41AFA5F228B0B6B0() { return invoker::Invoke<Any>(0x41AFA5F228B0B6B0); } // 0x41AFA5F228B0B6B0 b1207
	static Any _0x2DB524750DC41ED4() { return invoker::Invoke<Any>(0x2DB524750DC41ED4); } // 0x2DB524750DC41ED4 b1207
	static Any _0xEA41D44A8D42057B() { return invoker::Invoke<Any>(0xEA41D44A8D42057B); } // 0xEA41D44A8D42057B b1207
	static Any _0x37C1257849DEF24A() { return invoker::Invoke<Any>(0x37C1257849DEF24A); } // 0x37C1257849DEF24A b1207
	static Any _0xCDCD7B2D49AEE73A() { return invoker::Invoke<Any>(0xCDCD7B2D49AEE73A); } // 0xCDCD7B2D49AEE73A b1207
	static Any _0xEF324E9550A394D5(Any p0) { return invoker::Invoke<Any>(0xEF324E9550A394D5, p0); } // 0xEF324E9550A394D5 b1207
}

namespace _NAMESPACE4
{
	static Any _0xC31C44C43B48FDE3() { return invoker::Invoke<Any>(0xC31C44C43B48FDE3); } // 0xC31C44C43B48FDE3 b1207
}

namespace _NAMESPACE5
{
	static void _0x5DA12E025D47D4E5(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5DA12E025D47D4E5, p0, p1, p2); } // 0x5DA12E025D47D4E5 b1207
	static Any _0xA4C8E23E29040DE0(Any p0, Any p1) { return invoker::Invoke<Any>(0xA4C8E23E29040DE0, p0, p1); } // 0xA4C8E23E29040DE0 b1207
	static Any _0x147149F2E909323C(Any p0, Any p1) { return invoker::Invoke<Any>(0x147149F2E909323C, p0, p1); } // 0x147149F2E909323C b1207
	static Any _0x0EFA71F4B4330E04(Any p0, Any p1) { return invoker::Invoke<Any>(0x0EFA71F4B4330E04, p0, p1); } // 0x0EFA71F4B4330E04 b1207
	static Any _0x704674A0535A471D(Any p0, Any p1) { return invoker::Invoke<Any>(0x704674A0535A471D, p0, p1); } // 0x704674A0535A471D b1207
	static void _0x920F9488BD115EFB(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x920F9488BD115EFB, p0, p1, p2); } // 0x920F9488BD115EFB b1207
	static Any _0x958DD43D41F89A47(Any p0, Any p1) { return invoker::Invoke<Any>(0x958DD43D41F89A47, p0, p1); } // 0x958DD43D41F89A47 b1207
	static Any _0x7C059C55AD940CB4(Any p0, Any p1) { return invoker::Invoke<Any>(0x7C059C55AD940CB4, p0, p1); } // 0x7C059C55AD940CB4 b1207
	static void _0x75415EE0CB583760(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x75415EE0CB583760, p0, p1, p2); } // 0x75415EE0CB583760 b1207
	static void _0x09A59688C26D88DF(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x09A59688C26D88DF, p0, p1, p2); } // 0x09A59688C26D88DF b1207
	static Any _0x219DA04BAA9CB065(Any p0, Any p1) { return invoker::Invoke<Any>(0x219DA04BAA9CB065, p0, p1); } // 0x219DA04BAA9CB065 b1207
	static Any _0x223BF310F854871C(Any p0, Any p1) { return invoker::Invoke<Any>(0x223BF310F854871C, p0, p1); } // 0x223BF310F854871C b1207
	static void _0xC6258F41D86676E0(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xC6258F41D86676E0, p0, p1, p2); } // 0xC6258F41D86676E0 b1207
	static Any _0x36731AC041289BB1(Any p0, Any p1) { return invoker::Invoke<Any>(0x36731AC041289BB1, p0, p1); } // 0x36731AC041289BB1 b1207
	static Any _0x94A7F191DB49A44D(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x94A7F191DB49A44D, p0, p1, p2); } // 0x94A7F191DB49A44D b1207
	static void _0xF6A7C08DF2E28B28(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xF6A7C08DF2E28B28, p0, p1, p2, p3); } // 0xF6A7C08DF2E28B28 b1207
	static void _0x4AF5A4C7B9157D14(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4AF5A4C7B9157D14, p0, p1, p2, p3); } // 0x4AF5A4C7B9157D14 b1207
	static void _0xF8DAC3D85636C241(Any p0, Any p1) { invoker::Invoke<Void>(0xF8DAC3D85636C241, p0, p1); } // 0xF8DAC3D85636C241 b1207
	static Any _0x103C2F885ABEB00B(Any p0, Any p1) { return invoker::Invoke<Any>(0x103C2F885ABEB00B, p0, p1); } // 0x103C2F885ABEB00B b1207
	static Any _0x200373A8DF081F22(Any p0, Any p1) { return invoker::Invoke<Any>(0x200373A8DF081F22, p0, p1); } // 0x200373A8DF081F22 b1207
	static Any _0x4C9F782180712742(Any p0, Any p1) { return invoker::Invoke<Any>(0x4C9F782180712742, p0, p1); } // 0x4C9F782180712742 b1207
	static Any _0xB429F58803D285B1(Any p0, Any p1) { return invoker::Invoke<Any>(0xB429F58803D285B1, p0, p1); } // 0xB429F58803D285B1 b1207
	static void _0x7E2C766ADB2C5F1A(Any p0, Any p1) { invoker::Invoke<Void>(0x7E2C766ADB2C5F1A, p0, p1); } // 0x7E2C766ADB2C5F1A b1207
	static void _0xD962F8579D702DB5() { invoker::Invoke<Void>(0xD962F8579D702DB5); } // 0xD962F8579D702DB5 b1207
	static void _0xA4D3A1C008F250DF(Any p0) { invoker::Invoke<Void>(0xA4D3A1C008F250DF, p0); } // 0xA4D3A1C008F250DF b1207
	static void _0xFB6E111908502871(Any p0) { invoker::Invoke<Void>(0xFB6E111908502871, p0); } // 0xFB6E111908502871 b1207
	static void _0x3FC4C027FD0936F4(Any p0) { invoker::Invoke<Void>(0x3FC4C027FD0936F4, p0); } // 0x3FC4C027FD0936F4 b1207
}

namespace AUDIO
{
	static void _0x7455CD705F7E933E() { invoker::Invoke<Void>(0x7455CD705F7E933E); } // 0x7455CD705F7E933E b1207
	static void _0x33D51F801CB16E4F() { invoker::Invoke<Void>(0x33D51F801CB16E4F); } // 0x33D51F801CB16E4F b1207
	static void _0xEF51242E35242B47(Any p0) { invoker::Invoke<Void>(0xEF51242E35242B47, p0); } // 0xEF51242E35242B47 b1207
	static Any CREATE_NEW_SCRIPTED_CONVERSATION(Any p0) { return invoker::Invoke<Any>(0xD2C91A0B572AAE56, p0); } // 0xD2C91A0B572AAE56 b1207
	static Any _0xDF947FE0D551684E(Any p0, Any p1) { return invoker::Invoke<Any>(0xDF947FE0D551684E, p0, p1); } // 0xDF947FE0D551684E b1207
	static void ADD_PED_TO_CONVERSATION(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x95D9F4BC443956E7, p0, p1, p2); } // 0x95D9F4BC443956E7 b1207
	static void _0xA2323A2EAE32A290(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA2323A2EAE32A290, p0, p1, p2); } // 0xA2323A2EAE32A290 b1207
	static Any _0x79F9C57B8D0DFE90(Any p0, Any p1) { return invoker::Invoke<Any>(0x79F9C57B8D0DFE90, p0, p1); } // 0x79F9C57B8D0DFE90 b1207
	static void START_SCRIPT_CONVERSATION(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x6B17C62C9635D2DC, p0, p1, p2, p3); } // 0x6B17C62C9635D2DC b1207
	static void PRELOAD_SCRIPT_CONVERSATION(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x3B3CAD6166916D87, p0, p1, p2, p3); } // 0x3B3CAD6166916D87 b1207
	static void START_PRELOADED_CONVERSATION(Any p0) { invoker::Invoke<Void>(0x23641AFE870AF385, p0); } // 0x23641AFE870AF385 b1207
	static Any _0x0CB3D1919E8D7CBA(Any p0) { return invoker::Invoke<Any>(0x0CB3D1919E8D7CBA, p0); } // 0x0CB3D1919E8D7CBA b1207
	static Any _0xFE5C6177064BD390(Any p0) { return invoker::Invoke<Any>(0xFE5C6177064BD390, p0); } // 0xFE5C6177064BD390 b1207
	static Any _0xD89504D9D7D5057D(Any p0) { return invoker::Invoke<Any>(0xD89504D9D7D5057D, p0); } // 0xD89504D9D7D5057D b1207
	static Any _0x5A13586A9447931F(Any p0) { return invoker::Invoke<Any>(0x5A13586A9447931F, p0); } // 0x5A13586A9447931F b1207
	static Any IS_SCRIPTED_CONVERSATION_LOADED(Any p0) { return invoker::Invoke<Any>(0xDF0D54BE7A776737, p0); } // 0xDF0D54BE7A776737 b1207
	static Any _0xA2CAC9DEF0195E6F(Any p0) { return invoker::Invoke<Any>(0xA2CAC9DEF0195E6F, p0); } // 0xA2CAC9DEF0195E6F b1207
	static Any _0x1ECC76792F661CF5(Any p0) { return invoker::Invoke<Any>(0x1ECC76792F661CF5, p0); } // 0x1ECC76792F661CF5 b1207
	static Any _0xF01C570E0A0A1E67(Any p0) { return invoker::Invoke<Any>(0xF01C570E0A0A1E67, p0); } // 0xF01C570E0A0A1E67 b1207
	static Any _0x847748AE5D7B1071(Any p0) { return invoker::Invoke<Any>(0x847748AE5D7B1071, p0); } // 0x847748AE5D7B1071 b1207
	static Any _0xD0730C1FA40348D9(Any p0) { return invoker::Invoke<Any>(0xD0730C1FA40348D9, p0); } // 0xD0730C1FA40348D9 b1207
	static Any GET_CURRENT_SCRIPTED_CONVERSATION_LINE(Any p0) { return invoker::Invoke<Any>(0x480357EE890C295A, p0); } // 0x480357EE890C295A b1207
	static void PAUSE_SCRIPTED_CONVERSATION(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x8530AD776CD72B12, p0, p1, p2, p3, p4); } // 0x8530AD776CD72B12 b1207
	static void RESTART_SCRIPTED_CONVERSATION(Any p0) { invoker::Invoke<Void>(0x9AEB285D1818C9AC, p0); } // 0x9AEB285D1818C9AC b1207
	static void _0x36559148B78853B3(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x36559148B78853B3, p0, p1, p2); } // 0x36559148B78853B3 b1207
	static Any STOP_SCRIPTED_CONVERSATION(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xD79DEEFB53455EBA, p0, p1, p2); } // 0xD79DEEFB53455EBA b1207
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(Any p0) { invoker::Invoke<Void>(0x9663FE6B7A61EB00, p0); } // 0x9663FE6B7A61EB00 b1207
	static Any _0xF336E9F989B3518F(Any p0) { return invoker::Invoke<Any>(0xF336E9F989B3518F, p0); } // 0xF336E9F989B3518F b1207
	static Any _0x254B0241E964B450(Any p0, Any p1) { return invoker::Invoke<Any>(0x254B0241E964B450, p0, p1); } // 0x254B0241E964B450 b1207
	static Any _0x152ED1B56E8F1F50(Any p0, Any p1) { return invoker::Invoke<Any>(0x152ED1B56E8F1F50, p0, p1); } // 0x152ED1B56E8F1F50 b1207
	static Any _0x935DBD96D4A3DA1F(Any p0, Any p1) { return invoker::Invoke<Any>(0x935DBD96D4A3DA1F, p0, p1); } // 0x935DBD96D4A3DA1F b1207
	static Any _0x295859EB18F48D82(Any p0) { return invoker::Invoke<Any>(0x295859EB18F48D82, p0); } // 0x295859EB18F48D82 b1207
	static void _0x40CA665AB9D8D505(Any p0, Any p1) { invoker::Invoke<Void>(0x40CA665AB9D8D505, p0, p1); } // 0x40CA665AB9D8D505 b1207
	static void _0xF232C2C546AC16D0(Any p0) { invoker::Invoke<Void>(0xF232C2C546AC16D0, p0); } // 0xF232C2C546AC16D0 b1207
	static void _0x1E6F9A9FE1A99F36(Any p0) { invoker::Invoke<Void>(0x1E6F9A9FE1A99F36, p0); } // 0x1E6F9A9FE1A99F36 b1207
	static void REGISTER_SCRIPT_WITH_AUDIO(Any p0) { invoker::Invoke<Void>(0xC6ED9D5092438D91, p0); } // 0xC6ED9D5092438D91 b1207
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoker::Invoke<Void>(0xA8638BE228D4751A); } // 0xA8638BE228D4751A b1207
	static Any REQUEST_SCRIPT_AUDIO_BANK(Any p0) { return invoker::Invoke<Any>(0x2F844A8B08D76685, p0); } // 0x2F844A8B08D76685 b1207
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(Any p0) { invoker::Invoke<Void>(0x77ED170667F50170, p0); } // 0x77ED170667F50170 b1207
	static void RELEASE_SCRIPT_AUDIO_BANK() { invoker::Invoke<Void>(0x7A2D8AD0A9EB9C3F); } // 0x7A2D8AD0A9EB9C3F b1207
	static Any GET_SOUND_ID() { return invoker::Invoke<Any>(0x430386FE9BF80B45); } // 0x430386FE9BF80B45 b1207
	static void RELEASE_SOUND_ID(Any p0) { invoker::Invoke<Void>(0x353FC880830B88FA, p0); } // 0x353FC880830B88FA b1207
	static void PLAY_SOUND(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x7FF4944CC209192D, p0, p1, p2, p3, p4); } // 0x7FF4944CC209192D b1207
	static void PLAY_SOUND_FRONTEND(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x67C540AA08E4A6F5, p0, p1, p2); } // 0x67C540AA08E4A6F5 b1207
	static void _0xE8EAFF7B41EDD291(Any p0, Any p1) { invoker::Invoke<Void>(0xE8EAFF7B41EDD291, p0, p1); } // 0xE8EAFF7B41EDD291 b1207
	static void _0x6FB1DA3CA9DA7D90(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x6FB1DA3CA9DA7D90, p0, p1, p2, p3, p4); } // 0x6FB1DA3CA9DA7D90 b1207
	static void _0xCCE219C922737BFA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xCCE219C922737BFA, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xCCE219C922737BFA b1207
	static void _0x0F2A2175734926D8(Any p0, Any p1) { invoker::Invoke<Void>(0x0F2A2175734926D8, p0, p1); } // 0x0F2A2175734926D8 b1207
	static Any _0x580D71DFE0088E34(Any p0, Any p1) { return invoker::Invoke<Any>(0x580D71DFE0088E34, p0, p1); } // 0x580D71DFE0088E34 b1207
	static Any _0x6DF942C4179BE5AB(Any p0, Any p1) { return invoker::Invoke<Any>(0x6DF942C4179BE5AB, p0, p1); } // 0x6DF942C4179BE5AB b1207
	static void _0x9821B68CD3E05F2B(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x9821B68CD3E05F2B, p0, p1, p2, p3); } // 0x9821B68CD3E05F2B b1207
	static Any _0x9963681A8BC69BF3() { return invoker::Invoke<Any>(0x9963681A8BC69BF3); } // 0x9963681A8BC69BF3 b1207
	static Any _0x2E31ACA7477CF00F() { return invoker::Invoke<Any>(0x2E31ACA7477CF00F); } // 0x2E31ACA7477CF00F b1207
	static void _0xCE5D0FFE83939AF1(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xCE5D0FFE83939AF1, p0, p1, p2, p3); } // 0xCE5D0FFE83939AF1 b1207
	static void _0xF1C5310FEAA36B48(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xF1C5310FEAA36B48, p0, p1, p2, p3, p4, p5); } // 0xF1C5310FEAA36B48 b1207
	static void _0xDCF5BA95BBF0FABA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xDCF5BA95BBF0FABA, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xDCF5BA95BBF0FABA b1207
	static void _0x0286617C8FC50A53(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x0286617C8FC50A53, p0, p1, p2, p3); } // 0x0286617C8FC50A53 b1207
	static void _0x3210BCB36AF7621B(Any p0) { invoker::Invoke<Void>(0x3210BCB36AF7621B, p0); } // 0x3210BCB36AF7621B b1207
	static void _0x503703EC1781B7D6(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x503703EC1781B7D6, p0, p1, p2); } // 0x503703EC1781B7D6 b1207
	static Any _0xE368E8422C860BA7(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xE368E8422C860BA7, p0, p1, p2); } // 0xE368E8422C860BA7 b1207
	static void _0x9D746964E0CF2C5F(Any p0, Any p1) { invoker::Invoke<Void>(0x9D746964E0CF2C5F, p0, p1); } // 0x9D746964E0CF2C5F b1207
	static Any _0xD9130842D7226045(Any p0, Any p1) { return invoker::Invoke<Any>(0xD9130842D7226045, p0, p1); } // 0xD9130842D7226045 b1207
	static void _0x531A78D6BF27014B(Any p0) { invoker::Invoke<Void>(0x531A78D6BF27014B, p0); } // 0x531A78D6BF27014B b1207
	static Any _0x4AD019591E94C064(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x4AD019591E94C064, p0, p1, p2, p3); } // 0x4AD019591E94C064 b1207
	static void _0x3E93DDDCBB6111E4(Any p0, Any p1) { invoker::Invoke<Void>(0x3E93DDDCBB6111E4, p0, p1); } // 0x3E93DDDCBB6111E4 b1207
	static Any _0x714A0EA7DE1167BE(Any p0, Any p1) { return invoker::Invoke<Any>(0x714A0EA7DE1167BE, p0, p1); } // 0x714A0EA7DE1167BE b1207
	static Any _0x84848E1C0FC67DBB(Any p0) { return invoker::Invoke<Any>(0x84848E1C0FC67DBB, p0); } // 0x84848E1C0FC67DBB b1207
	static Any _PLAY_AMBIENT_SPEECH1(Any p0, Any p1) { return invoker::Invoke<Any>(0x8E04FEDD28D42462, p0, p1); } // 0x8E04FEDD28D42462 b1207
	static Any _PLAY_AMBIENT_SPEECH_AT_COORDS(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xED640017ED337E45, p0, p1, p2, p3); } // 0xED640017ED337E45 b1207
	static Any _0x72E4D1C4639BC465(Any p0, Any p1) { return invoker::Invoke<Any>(0x72E4D1C4639BC465, p0, p1); } // 0x72E4D1C4639BC465 b1207
	static Any _0xB18FEC133C7C6C69(Any p0) { return invoker::Invoke<Any>(0xB18FEC133C7C6C69, p0); } // 0xB18FEC133C7C6C69 b1207
	static void _0xDC93F0948F2C28F4(Any p0) { invoker::Invoke<Void>(0xDC93F0948F2C28F4, p0); } // 0xDC93F0948F2C28F4 b1207
	static void _0x0D7FD6A55FD63AEF(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0D7FD6A55FD63AEF, p0, p1, p2); } // 0x0D7FD6A55FD63AEF b1207
	static void _0x660A8F876DF1D4F8(Any p0) { invoker::Invoke<Void>(0x660A8F876DF1D4F8, p0); } // 0x660A8F876DF1D4F8 b1207
	static void _0x380A2E353AD30917(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x380A2E353AD30917, p0, p1, p2); } // 0x380A2E353AD30917 b1207
	static void _0x0FAF7171BF613B80(Any p0) { invoker::Invoke<Void>(0x0FAF7171BF613B80, p0); } // 0x0FAF7171BF613B80 b1207
	static void PLAY_PAIN(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xBC9AE166038A5CEC, p0, p1, p2, p3, p4); } // 0xBC9AE166038A5CEC b1207
	static void _0x6652B0C8F3D414D0(Any p0) { invoker::Invoke<Void>(0x6652B0C8F3D414D0, p0); } // 0x6652B0C8F3D414D0 b1207
	static void _0xF092B6030D6FD49C(Any p0, Any p1) { invoker::Invoke<Void>(0xF092B6030D6FD49C, p0, p1); } // 0xF092B6030D6FD49C b1207
	static void _0x2651DDC0EA269073(Any p0, Any p1) { invoker::Invoke<Void>(0x2651DDC0EA269073, p0, p1); } // 0x2651DDC0EA269073 b1207
	static void SET_AMBIENT_VOICE_NAME(Any p0, Any p1) { invoker::Invoke<Void>(0x6C8065A3B780185B, p0, p1); } // 0x6C8065A3B780185B b1207
	static Any _0x2703EFB583F0949A() { return invoker::Invoke<Any>(0x2703EFB583F0949A); } // 0x2703EFB583F0949A b1207
	static void STOP_CURRENT_PLAYING_SPEECH(Any p0, Any p1) { invoker::Invoke<Void>(0x79D2F0E66F81D90D, p0, p1); } // 0x79D2F0E66F81D90D b1207
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Any p0, Any p1) { invoker::Invoke<Void>(0xB8BEC0CA6F0EDB0F, p0, p1); } // 0xB8BEC0CA6F0EDB0F b1207
	static Any IS_AMBIENT_SPEECH_PLAYING(Any p0) { return invoker::Invoke<Any>(0x9072C8B49907BFAD, p0); } // 0x9072C8B49907BFAD b1207
	static Any IS_SCRIPTED_SPEECH_PLAYING(Any p0) { return invoker::Invoke<Any>(0xCC9AA18DCC7084F4, p0); } // 0xCC9AA18DCC7084F4 b1207
	static Any IS_ANY_SPEECH_PLAYING(Any p0) { return invoker::Invoke<Any>(0x729072355FA39EC9, p0); } // 0x729072355FA39EC9 b1207
	static Any _0x2B101AD9F651243A() { return invoker::Invoke<Any>(0x2B101AD9F651243A); } // 0x2B101AD9F651243A b1207
	static Any _0x4A98E228A936DBCC(Any p0) { return invoker::Invoke<Any>(0x4A98E228A936DBCC, p0); } // 0x4A98E228A936DBCC b1207
	static Any _0x6BFFB7C276866996(Any p0) { return invoker::Invoke<Any>(0x6BFFB7C276866996, p0); } // 0x6BFFB7C276866996 b1207
	static Any _CAN_PED_SPEAK(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x49B99BF3FDA89A7A, p0, p1, p2); } // 0x49B99BF3FDA89A7A b1207
	static Any _0xF0EE69F500952FA5(Any p0) { return invoker::Invoke<Any>(0xF0EE69F500952FA5, p0); } // 0xF0EE69F500952FA5 b1207
	static Any _0x9D6DEC9791A4E501(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x9D6DEC9791A4E501, p0, p1, p2, p3); } // 0x9D6DEC9791A4E501 b1207
	static Any _0x864A842B86993851() { return invoker::Invoke<Any>(0x864A842B86993851); } // 0x864A842B86993851 b1207
	static Any IS_PED_IN_CURRENT_CONVERSATION(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x049E937F18F4020C, p0, p1, p2); } // 0x049E937F18F4020C b1207
	static Any _0x54B187F111D9C6F8(Any p0, Any p1) { return invoker::Invoke<Any>(0x54B187F111D9C6F8, p0, p1); } // 0x54B187F111D9C6F8 b1207
	static void SET_PED_IS_DRUNK(Any p0, Any p1) { invoker::Invoke<Void>(0x95D2D383D5396B8A, p0, p1); } // 0x95D2D383D5396B8A b1207
	static void _0x3A00D87B20A2A5E4(Any p0, Any p1) { invoker::Invoke<Void>(0x3A00D87B20A2A5E4, p0, p1); } // 0x3A00D87B20A2A5E4 b1207
	static void _0xD47D47EFBF103FB8(Any p0, Any p1) { invoker::Invoke<Void>(0xD47D47EFBF103FB8, p0, p1); } // 0xD47D47EFBF103FB8 b1207
	static void PLAY_ANIMAL_VOCALIZATION(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xEE066C7006C49C0A, p0, p1, p2); } // 0xEE066C7006C49C0A b1207
	static Any IS_ANIMAL_VOCALIZATION_PLAYING(Any p0) { return invoker::Invoke<Any>(0xC265DF9FB44A9FBD, p0); } // 0xC265DF9FB44A9FBD b1207
	static void SET_ANIMAL_MOOD(Any p0, Any p1) { invoker::Invoke<Void>(0xCC97B29285B1DC3B, p0, p1); } // 0xCC97B29285B1DC3B b1207
	static void _0xFCDEC42B1C78B7F8(Any p0, Any p1) { invoker::Invoke<Void>(0xFCDEC42B1C78B7F8, p0, p1); } // 0xFCDEC42B1C78B7F8 b1207
	static void _0xEB4D592620B8C209(Any p0) { invoker::Invoke<Void>(0xEB4D592620B8C209, p0); } // 0xEB4D592620B8C209 b1207
	static void _0xA6847BBA4FCDD13F(Any p0, Any p1) { invoker::Invoke<Void>(0xA6847BBA4FCDD13F, p0, p1); } // 0xA6847BBA4FCDD13F b1207
	static void SET_STATIC_EMITTER_ENABLED(Any p0, Any p1) { invoker::Invoke<Void>(0x399D2D3B33F1B8EB, p0, p1); } // 0x399D2D3B33F1B8EB b1207
	static void PLAY_END_CREDITS_MUSIC(Any p0) { invoker::Invoke<Void>(0xCD536C4D33DCC900, p0); } // 0xCD536C4D33DCC900 b1207
	static Any _0x7678FE0455ED1145(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x7678FE0455ED1145, p0, p1, p2); } // 0x7678FE0455ED1145 b1207
	static Any _0xFFE9C53DEEA3DB0B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xFFE9C53DEEA3DB0B, p0, p1, p2, p3, p4, p5, p6); } // 0xFFE9C53DEEA3DB0B b1207
	static void _0x5E3CCF03995388B5(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x5E3CCF03995388B5, p0, p1, p2, p3); } // 0x5E3CCF03995388B5 b1207
	static void _0x43037ABFE214A851() { invoker::Invoke<Void>(0x43037ABFE214A851); } // 0x43037ABFE214A851 b1207
	static void SET_AMBIENT_ZONE_STATE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBDA07E5950085E46, p0, p1, p2); } // 0xBDA07E5950085E46 b1207
	static void CLEAR_AMBIENT_ZONE_STATE(Any p0, Any p1) { invoker::Invoke<Void>(0x218DD44AAAC964FF, p0, p1); } // 0x218DD44AAAC964FF b1207
	static void SET_AMBIENT_ZONE_LIST_STATE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x9748FA4DE50CCE3E, p0, p1, p2); } // 0x9748FA4DE50CCE3E b1207
	static void CLEAR_AMBIENT_ZONE_LIST_STATE(Any p0, Any p1) { invoker::Invoke<Void>(0x120C48C614909FA4, p0, p1); } // 0x120C48C614909FA4 b1207
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1D6650420CEC9D3B, p0, p1, p2); } // 0x1D6650420CEC9D3B b1207
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF3638DAE8C4045E1, p0, p1, p2); } // 0xF3638DAE8C4045E1 b1207
	static void _0x3743CE6948194349(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x3743CE6948194349, p0, p1, p2, p3, p4); } // 0x3743CE6948194349 b1207
	static Any IS_HORN_ACTIVE(Any p0) { return invoker::Invoke<Any>(0x9D6BFC12B05C6121, p0); } // 0x9D6BFC12B05C6121 b1207
	static void _0xFD461D0ABA5559B1(Any p0, Any p1) { invoker::Invoke<Void>(0xFD461D0ABA5559B1, p0, p1); } // 0xFD461D0ABA5559B1 b1207
	static Any IS_STREAM_PLAYING(Any p0) { return invoker::Invoke<Any>(0xD11FA52EB849D978, p0); } // 0xD11FA52EB849D978 b1207
	static Any LOAD_STREAM(Any p0, Any p1) { return invoker::Invoke<Any>(0x1F1F957154EC51DF, p0, p1); } // 0x1F1F957154EC51DF b1207
	static void PLAY_STREAM_FROM_PED(Any p0, Any p1) { invoker::Invoke<Void>(0x89049DD63C08B5D1, p0, p1); } // 0x89049DD63C08B5D1 b1207
	static void PLAY_STREAM_FRONTEND(Any p0) { invoker::Invoke<Void>(0x58FCE43488F9F5F4, p0); } // 0x58FCE43488F9F5F4 b1207
	static void PLAY_STREAM_FROM_POSITION(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x21442F412E8DE56B, p0, p1, p2, p3); } // 0x21442F412E8DE56B b1207
	static void _0x3A3BE6B920525237(Any p0, Any p1) { invoker::Invoke<Void>(0x3A3BE6B920525237, p0, p1); } // 0x3A3BE6B920525237 b1207
	static void STOP_STREAM(Any p0) { invoker::Invoke<Void>(0xA4718A1419D18151, p0); } // 0xA4718A1419D18151 b1207
	static void STOP_PED_SPEAKING(Any p0, Any p1) { invoker::Invoke<Void>(0x9D64D7405520E3D3, p0, p1); } // 0x9D64D7405520E3D3 b1207
	static void DISABLE_PED_PAIN_AUDIO(Any p0, Any p1) { invoker::Invoke<Void>(0xA9A41C1E940FB0E8, p0, p1); } // 0xA9A41C1E940FB0E8 b1207
	static Any IS_AMBIENT_SPEECH_DISABLED(Any p0) { return invoker::Invoke<Any>(0x932C2D096A2C3FFF, p0); } // 0x932C2D096A2C3FFF b1207
	static Any _0xB2DE3AEBE31150E2(Any p0, Any p1) { return invoker::Invoke<Any>(0xB2DE3AEBE31150E2, p0, p1); } // 0xB2DE3AEBE31150E2 b1207
	static void _0x6378A235374B852F(Any p0, Any p1) { invoker::Invoke<Void>(0x6378A235374B852F, p0, p1); } // 0x6378A235374B852F b1207
	static void _0x87E6302FC61208CC(Any p0) { invoker::Invoke<Void>(0x87E6302FC61208CC, p0); } // 0x87E6302FC61208CC b1207
	static void SET_HORN_ENABLED(Any p0, Any p1) { invoker::Invoke<Void>(0x76D683C108594D0E, p0, p1); } // 0x76D683C108594D0E b1207
	static void SET_AUDIO_VEHICLE_PRIORITY(Any p0, Any p1) { invoker::Invoke<Void>(0xE5564483E407F914, p0, p1); } // 0xE5564483E407F914 b1207
	static void _0x259ACC5B52A2B2D9(Any p0, Any p1) { invoker::Invoke<Void>(0x259ACC5B52A2B2D9, p0, p1); } // 0x259ACC5B52A2B2D9 b1207
	static void _FORCE_VEHICLE_ENGINE_AUDIO(Any p0, Any p1) { invoker::Invoke<Void>(0x4F0C413926060B38, p0, p1); } // 0x4F0C413926060B38 b1207
	static void SET_GPS_ACTIVE(Any p0) { invoker::Invoke<Void>(0x3BD3F52BA9B1E4E8, p0); } // 0x3BD3F52BA9B1E4E8 b1207
	static Any _0x6339C1EA3979B5F7(Any p0, Any p1) { return invoker::Invoke<Any>(0x6339C1EA3979B5F7, p0, p1); } // 0x6339C1EA3979B5F7 b1207
	static void _0x9428447DED71FC7E(Any p0) { invoker::Invoke<Void>(0x9428447DED71FC7E, p0); } // 0x9428447DED71FC7E b1207
	static Any _0xAC84686C06184B0D(Any p0, Any p1) { return invoker::Invoke<Any>(0xAC84686C06184B0D, p0, p1); } // 0xAC84686C06184B0D b1207
	static Any START_AUDIO_SCENE(Any p0) { return invoker::Invoke<Any>(0x013A80FC08F6E4F2, p0); } // 0x013A80FC08F6E4F2 b1207
	static Any _0xDC2F83A0612CA34D(Any p0) { return invoker::Invoke<Any>(0xDC2F83A0612CA34D, p0); } // 0xDC2F83A0612CA34D b1207
	static void STOP_AUDIO_SCENE(Any p0) { invoker::Invoke<Void>(0xDFE8422B3B94E688, p0); } // 0xDFE8422B3B94E688 b1207
	static void _0x6AB944DF68B512D3(Any p0) { invoker::Invoke<Void>(0x6AB944DF68B512D3, p0); } // 0x6AB944DF68B512D3 b1207
	static void STOP_AUDIO_SCENES() { invoker::Invoke<Void>(0xBAC7FC81A75EC1A1); } // 0xBAC7FC81A75EC1A1 b1207
	static Any IS_AUDIO_SCENE_ACTIVE(Any p0) { return invoker::Invoke<Any>(0xB65B60556E2A9225, p0); } // 0xB65B60556E2A9225 b1207
	static void SET_AUDIO_SCENE_VARIABLE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xEF21A9EF089A2668, p0, p1, p2); } // 0xEF21A9EF089A2668 b1207
	static Any _0x8B25A18E390F75BF(Any p0) { return invoker::Invoke<Any>(0x8B25A18E390F75BF, p0); } // 0x8B25A18E390F75BF b1207
	static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x153973AB99FE8980, p0, p1, p2); } // 0x153973AB99FE8980 b1207
	static Any _0x131EC9247E7A2903(Any p0) { return invoker::Invoke<Any>(0x131EC9247E7A2903, p0); } // 0x131EC9247E7A2903 b1207
	static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Any p0, Any p1) { invoker::Invoke<Void>(0x18EB48CFC41F2EA0, p0, p1); } // 0x18EB48CFC41F2EA0 b1207
	static Any _0xE600F61F54A444A6() { return invoker::Invoke<Any>(0xE600F61F54A444A6); } // 0xE600F61F54A444A6 b1207
	static Any AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoker::Invoke<Any>(0x845FFC3A4FEEFA3E); } // 0x845FFC3A4FEEFA3E b1207
	static Any _0xBE28DB99556FF8D9(Any p0) { return invoker::Invoke<Any>(0xBE28DB99556FF8D9, p0); } // 0xBE28DB99556FF8D9 b1207
	static void _0x8E901B65206C2D3E(Any p0) { invoker::Invoke<Void>(0x8E901B65206C2D3E, p0); } // 0x8E901B65206C2D3E b1207
	static void _0xC4CFCE4C656EF480(Any p0) { invoker::Invoke<Void>(0xC4CFCE4C656EF480, p0); } // 0xC4CFCE4C656EF480 b1207
	static void _0xABDB4863D3D72021(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xABDB4863D3D72021, p0, p1, p2, p3, p4); } // 0xABDB4863D3D72021 b1207
	static void _0xB93A769B8B726950(Any p0, Any p1) { invoker::Invoke<Void>(0xB93A769B8B726950, p0, p1); } // 0xB93A769B8B726950 b1207
	static void _0xE891504B2F0E2DBA(Any p0, Any p1) { invoker::Invoke<Void>(0xE891504B2F0E2DBA, p0, p1); } // 0xE891504B2F0E2DBA b1207
	static void _0x9EB779765E68C52E(Any p0, Any p1) { invoker::Invoke<Void>(0x9EB779765E68C52E, p0, p1); } // 0x9EB779765E68C52E b1207
	static Any PREPARE_MUSIC_EVENT(Any p0) { return invoker::Invoke<Any>(0x1E5185B72EF5158A, p0); } // 0x1E5185B72EF5158A b1207
	static Any CANCEL_MUSIC_EVENT(Any p0) { return invoker::Invoke<Any>(0x5B17A90291133DA5, p0); } // 0x5B17A90291133DA5 b1207
	static Any TRIGGER_MUSIC_EVENT(Any p0) { return invoker::Invoke<Any>(0x706D57B0F50DA710, p0); } // 0x706D57B0F50DA710 b1207
	static Any _0x05D6195FB4D428F4(Any p0) { return invoker::Invoke<Any>(0x05D6195FB4D428F4, p0); } // 0x05D6195FB4D428F4 b1207
	static Any GET_MUSIC_PLAYTIME() { return invoker::Invoke<Any>(0xE7A0D23DC414507B); } // 0xE7A0D23DC414507B b1207
	static void _0xF64034D533CE8AAC(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF64034D533CE8AAC, p0, p1, p2); } // 0xF64034D533CE8AAC b1207
	static void _0x149AEE66F0CB3A99(Any p0, Any p1) { invoker::Invoke<Void>(0x149AEE66F0CB3A99, p0, p1); } // 0x149AEE66F0CB3A99 b1207
	static void _0xDAD6CD07CAA4F382() { invoker::Invoke<Void>(0xDAD6CD07CAA4F382); } // 0xDAD6CD07CAA4F382 b1207
	static void _0x8BF907833BE275DE(Any p0, Any p1) { invoker::Invoke<Void>(0x8BF907833BE275DE, p0, p1); } // 0x8BF907833BE275DE b1207
	static void _0x062D5EAD4DA2FA6A() { invoker::Invoke<Void>(0x062D5EAD4DA2FA6A); } // 0x062D5EAD4DA2FA6A b1207
	static void _0x138ADB94F8B90616() { invoker::Invoke<Void>(0x138ADB94F8B90616); } // 0x138ADB94F8B90616 b1207
	static void _0xBF4DC1784BE94DFA(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBF4DC1784BE94DFA, p0, p1, p2); } // 0xBF4DC1784BE94DFA b1207
	static void SET_AUDIO_FLAG(Any p0, Any p1) { invoker::Invoke<Void>(0xB9EFD5C25018725A, p0, p1); } // 0xB9EFD5C25018725A b1207
	static void _0x6DA15746D5CC1A92(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x6DA15746D5CC1A92, p0, p1, p2, p3, p4, p5); } // 0x6DA15746D5CC1A92 b1207
	static void _0x078F77FD1A43EAB3(Any p0, Any p1) { invoker::Invoke<Void>(0x078F77FD1A43EAB3, p0, p1); } // 0x078F77FD1A43EAB3 b1207
	static void _0x3D0BBCCF401B5FDB() { invoker::Invoke<Void>(0x3D0BBCCF401B5FDB); } // 0x3D0BBCCF401B5FDB b1207
	static void SET_PORTAL_SETTINGS_OVERRIDE(Any p0, Any p1) { invoker::Invoke<Void>(0x044DBAD7A7FA2BE5, p0, p1); } // 0x044DBAD7A7FA2BE5 b1207
	static void REMOVE_PORTAL_SETTINGS_OVERRIDE(Any p0) { invoker::Invoke<Void>(0xB4BBFD9CD8B3922B, p0); } // 0xB4BBFD9CD8B3922B b1207
	static void _0xEA546C31FD45F8CD(Any p0) { invoker::Invoke<Void>(0xEA546C31FD45F8CD, p0); } // 0xEA546C31FD45F8CD b1207
	static Any _0x44A5EEF54F62E823(Any p0) { return invoker::Invoke<Any>(0x44A5EEF54F62E823, p0); } // 0x44A5EEF54F62E823 b1207
	static void _0x017492B2201E3428(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x017492B2201E3428, p0, p1, p2, p3); } // 0x017492B2201E3428 b1207
	static void _0xC886CD666ADD42E1(Any p0, Any p1) { invoker::Invoke<Void>(0xC886CD666ADD42E1, p0, p1); } // 0xC886CD666ADD42E1 b1207
	static void _0x5AE0CB5F35F034FD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x5AE0CB5F35F034FD, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x5AE0CB5F35F034FD b1207
	static void _0x821C32C728B24477(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x821C32C728B24477, p0, p1, p2); } // 0x821C32C728B24477 b1207
	static void _0x06C5DF5EE444BC6B(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x06C5DF5EE444BC6B, p0, p1, p2, p3, p4); } // 0x06C5DF5EE444BC6B b1207
	static void _0x341CDD17EFC2472E(Any p0, Any p1) { invoker::Invoke<Void>(0x341CDD17EFC2472E, p0, p1); } // 0x341CDD17EFC2472E b1207
	static void _0x7E176C676F8652A9(Any p0) { invoker::Invoke<Void>(0x7E176C676F8652A9, p0); } // 0x7E176C676F8652A9 b1207
	static Any _0x2B9C37C01BF25EDB(Any p0) { return invoker::Invoke<Any>(0x2B9C37C01BF25EDB, p0); } // 0x2B9C37C01BF25EDB b1207
	static Any _0xA6A3A3F96B8B030E() { return invoker::Invoke<Any>(0xA6A3A3F96B8B030E); } // 0xA6A3A3F96B8B030E b1207
	static Any _0x0556C784FA056628(Any p0, Any p1) { return invoker::Invoke<Any>(0x0556C784FA056628, p0, p1); } // 0x0556C784FA056628 b1207
	static Any _0xC369E2234E34A0CA(Any p0, Any p1) { return invoker::Invoke<Any>(0xC369E2234E34A0CA, p0, p1); } // 0xC369E2234E34A0CA b1207
	static void _0x35B8C070E0C16E2F(Any p0, Any p1) { invoker::Invoke<Void>(0x35B8C070E0C16E2F, p0, p1); } // 0x35B8C070E0C16E2F b1207
	static void _0xE7E6CB8B713ED190() { invoker::Invoke<Void>(0xE7E6CB8B713ED190); } // 0xE7E6CB8B713ED190 b1207
	static void _0x569ABC36E28DDEAA() { invoker::Invoke<Void>(0x569ABC36E28DDEAA); } // 0x569ABC36E28DDEAA b1207
	static void _0x839C9F124BE74D94(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x839C9F124BE74D94, p0, p1, p2, p3, p4); } // 0x839C9F124BE74D94 b1207
	static void _0x374F0E716BFCDE82(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x374F0E716BFCDE82, p0, p1, p2, p3); } // 0x374F0E716BFCDE82 b1207
	static void _0x3E98AC9D8C56C62C(Any p0) { invoker::Invoke<Void>(0x3E98AC9D8C56C62C, p0); } // 0x3E98AC9D8C56C62C b1207
	static void _0xCBF2BEBB468A34F3(Any p0) { invoker::Invoke<Void>(0xCBF2BEBB468A34F3, p0); } // 0xCBF2BEBB468A34F3 b1207
	static void _0xA2B851605748AD0E() { invoker::Invoke<Void>(0xA2B851605748AD0E); } // 0xA2B851605748AD0E b1207
	static void _0xCFAD2C8CD1054523(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xCFAD2C8CD1054523, p0, p1, p2, p3); } // 0xCFAD2C8CD1054523 b1207
	static void _0xD733528B6C35647A(Any p0, Any p1) { invoker::Invoke<Void>(0xD733528B6C35647A, p0, p1); } // 0xD733528B6C35647A b1207
	static void _0x5BC885EBD75FAA7D(Any p0, Any p1) { invoker::Invoke<Void>(0x5BC885EBD75FAA7D, p0, p1); } // 0x5BC885EBD75FAA7D b1207
	static void _0x6B7A88A61B41E589(Any p0) { invoker::Invoke<Void>(0x6B7A88A61B41E589, p0); } // 0x6B7A88A61B41E589 b1207
	static void _0x4BE3EC91C01F0FE8() { invoker::Invoke<Void>(0x4BE3EC91C01F0FE8); } // 0x4BE3EC91C01F0FE8 b1207
	static Any _0x9B1FC259187C97C0() { return invoker::Invoke<Any>(0x9B1FC259187C97C0); } // 0x9B1FC259187C97C0 b1207
	static Any _0x2E399EAFBEEA74D5() { return invoker::Invoke<Any>(0x2E399EAFBEEA74D5); } // 0x2E399EAFBEEA74D5 b1207
	static Any _0x64B956F4E761DF5C() { return invoker::Invoke<Any>(0x64B956F4E761DF5C); } // 0x64B956F4E761DF5C b1207
}

namespace _NAMESPACE7
{
	static Any _0x537CE992BD2D7BCB() { return invoker::Invoke<Any>(0x537CE992BD2D7BCB); } // 0x537CE992BD2D7BCB b1207
	static Any _0x188B748861B5BA17() { return invoker::Invoke<Any>(0x188B748861B5BA17); } // 0x188B748861B5BA17 b1207
	static Any _0xB462D69D406A2602() { return invoker::Invoke<Any>(0xB462D69D406A2602); } // 0xB462D69D406A2602 b1207
	static Any _0x4EF23E04A0C8FF51() { return invoker::Invoke<Any>(0x4EF23E04A0C8FF51); } // 0x4EF23E04A0C8FF51 b1207
	static Any _0x03B61CD51097DE60() { return invoker::Invoke<Any>(0x03B61CD51097DE60); } // 0x03B61CD51097DE60 b1207
	static Any _0xFFA13742E43507E3() { return invoker::Invoke<Any>(0xFFA13742E43507E3); } // 0xFFA13742E43507E3 b1207
	static Any _0x81847C2134039BDC() { return invoker::Invoke<Any>(0x81847C2134039BDC); } // 0x81847C2134039BDC b1207
	static Any _0x727AB6F008BB9F29() { return invoker::Invoke<Any>(0x727AB6F008BB9F29); } // 0x727AB6F008BB9F29 b1207
	static Any _0xFBD137BF0EC50FC9() { return invoker::Invoke<Any>(0xFBD137BF0EC50FC9); } // 0xFBD137BF0EC50FC9 b1207
	static Any _0x6A9DF0FCD0C87FF9() { return invoker::Invoke<Any>(0x6A9DF0FCD0C87FF9); } // 0x6A9DF0FCD0C87FF9 b1207
	static Any _0xFC81D7C7A151CFAA() { return invoker::Invoke<Any>(0xFC81D7C7A151CFAA); } // 0xFC81D7C7A151CFAA b1207
	static Any _0xA7309AC0DCF6D950() { return invoker::Invoke<Any>(0xA7309AC0DCF6D950); } // 0xA7309AC0DCF6D950 b1207
	static Any _0xC1F04FB37E3F0E57() { return invoker::Invoke<Any>(0xC1F04FB37E3F0E57); } // 0xC1F04FB37E3F0E57 b1207
	static Any _0x2BA1BCC99826CDA2() { return invoker::Invoke<Any>(0x2BA1BCC99826CDA2); } // 0x2BA1BCC99826CDA2 b1207
	static Any _0xB395A44A0C7CA615() { return invoker::Invoke<Any>(0xB395A44A0C7CA615); } // 0xB395A44A0C7CA615 b1207
	static Any _0x85E4D7B225A30ED1() { return invoker::Invoke<Any>(0x85E4D7B225A30ED1); } // 0x85E4D7B225A30ED1 b1207
	static Any _0x8FAF4D262FABA99C() { return invoker::Invoke<Any>(0x8FAF4D262FABA99C); } // 0x8FAF4D262FABA99C b1207
	static Any _0xB096547D61868254() { return invoker::Invoke<Any>(0xB096547D61868254); } // 0xB096547D61868254 b1207
	static Any _0x27D3A0E1FE090A43() { return invoker::Invoke<Any>(0x27D3A0E1FE090A43); } // 0x27D3A0E1FE090A43 b1207
	static Any _0xA9C3B0F746375162() { return invoker::Invoke<Any>(0xA9C3B0F746375162); } // 0xA9C3B0F746375162 b1207
	static Any _0x5B53CA0E2AC3FF45() { return invoker::Invoke<Any>(0x5B53CA0E2AC3FF45); } // 0x5B53CA0E2AC3FF45 b1207
	static Any _0x22D3A61CE053270C() { return invoker::Invoke<Any>(0x22D3A61CE053270C); } // 0x22D3A61CE053270C b1207
	static Any _0xA59D1997ECD99F0A() { return invoker::Invoke<Any>(0xA59D1997ECD99F0A); } // 0xA59D1997ECD99F0A b1207
	static Any _0x12E981D53B07BF48() { return invoker::Invoke<Any>(0x12E981D53B07BF48); } // 0x12E981D53B07BF48 b1207
	static Any _0x2D874BA20E8E1F20() { return invoker::Invoke<Any>(0x2D874BA20E8E1F20); } // 0x2D874BA20E8E1F20 b1207
	static Any _0x8521C2E235558278() { return invoker::Invoke<Any>(0x8521C2E235558278); } // 0x8521C2E235558278 b1207
	static Any _0x932DB3C05A7465D1() { return invoker::Invoke<Any>(0x932DB3C05A7465D1); } // 0x932DB3C05A7465D1 b1207
	static Any _0x3F73AED12A5EF0FF() { return invoker::Invoke<Any>(0x3F73AED12A5EF0FF); } // 0x3F73AED12A5EF0FF b1207
	static Any _0x28717806D3BDD0D0() { return invoker::Invoke<Any>(0x28717806D3BDD0D0); } // 0x28717806D3BDD0D0 b1207
	static Any _0xF8BCC5ECA33AC9C1() { return invoker::Invoke<Any>(0xF8BCC5ECA33AC9C1); } // 0xF8BCC5ECA33AC9C1 b1207
}

namespace BRAIN
{
	static Any _0x16AF9B4EEAC3B305() { return invoker::Invoke<Any>(0x16AF9B4EEAC3B305); } // 0x16AF9B4EEAC3B305 b1207
	static Any _0x4E4507CC5E4DB869() { return invoker::Invoke<Any>(0x4E4507CC5E4DB869); } // 0x4E4507CC5E4DB869 b1207
	static Any _0x6F62FAE266DCFC81() { return invoker::Invoke<Any>(0x6F62FAE266DCFC81); } // 0x6F62FAE266DCFC81 b1207
	static Any _0x6818D1A194E29983() { return invoker::Invoke<Any>(0x6818D1A194E29983); } // 0x6818D1A194E29983 b1207
	static Any _0xA6AC35DB4A7957A8() { return invoker::Invoke<Any>(0xA6AC35DB4A7957A8); } // 0xA6AC35DB4A7957A8 b1207
	static Any _0x4AA5EA1EDFB25786() { return invoker::Invoke<Any>(0x4AA5EA1EDFB25786); } // 0x4AA5EA1EDFB25786 b1207
	static void ENABLE_SCRIPT_BRAIN_SET(Any p0) { invoker::Invoke<Void>(0x1CF6E5C6750EADBD, p0); } // 0x1CF6E5C6750EADBD b1207
	static void DISABLE_SCRIPT_BRAIN_SET(Any p0) { invoker::Invoke<Void>(0x3F44EA613A5B2676, p0); } // 0x3F44EA613A5B2676 b1207
	static void _0x4D953DF78EBF8158() { invoker::Invoke<Void>(0xA32B0B05EFF75730); } // 0xA32B0B05EFF75730 b1207
	static Any _0x74C333E34DF74E8A() { return invoker::Invoke<Any>(0x74C333E34DF74E8A); } // 0x74C333E34DF74E8A b1207
}

namespace CAM
{
	static void RENDER_SCRIPT_CAMS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x33281167E4942E4F, p0, p1, p2, p3, p4, p5); } // 0x33281167E4942E4F b1207
	static void _RENDER_FIRST_PERSON_CAM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x8C7C7FF7CF0E5153, p0, p1, p2, p3, p4, p5); } // 0x8C7C7FF7CF0E5153 b1207
	static Any CREATE_CAM(Any p0, Any p1) { return invoker::Invoke<Any>(0xE72CDBA7F0A02DD6, p0, p1); } // 0xE72CDBA7F0A02DD6 b1207
	static Any CREATE_CAM_WITH_PARAMS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x40C23491CE83708E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x40C23491CE83708E b1207
	static Any CREATE_CAMERA(Any p0, Any p1) { return invoker::Invoke<Any>(0x57CDF879EA466C46, p0, p1); } // 0x57CDF879EA466C46 b1207
	static Any CREATE_CAMERA_WITH_PARAMS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x98B99B9F27E2D60B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x98B99B9F27E2D60B b1207
	static void DESTROY_CAM(Any p0, Any p1) { invoker::Invoke<Void>(0x4E67E0B6D7FD5145, p0, p1); } // 0x4E67E0B6D7FD5145 b1207
	static void DESTROY_ALL_CAMS(Any p0) { invoker::Invoke<Void>(0x163600D6E136C9F8, p0); } // 0x163600D6E136C9F8 b1207
	static Any DOES_CAM_EXIST(Any p0) { return invoker::Invoke<Any>(0x153AD457764FD704, p0); } // 0x153AD457764FD704 b1207
	static void SET_CAM_ACTIVE(Any p0, Any p1) { invoker::Invoke<Void>(0x87295BCA613800C8, p0, p1); } // 0x87295BCA613800C8 b1207
	static Any IS_CAM_ACTIVE(Any p0) { return invoker::Invoke<Any>(0x63EFCC7E1810B8E6, p0); } // 0x63EFCC7E1810B8E6 b1207
	static Any IS_CAM_RENDERING(Any p0) { return invoker::Invoke<Any>(0x4415F8A6C536D39F, p0); } // 0x4415F8A6C536D39F b1207
	static Any GET_RENDERING_CAM() { return invoker::Invoke<Any>(0x03A8931ECC8015D6); } // 0x03A8931ECC8015D6 b1207
	static Any GET_CAM_COORD(Any p0) { return invoker::Invoke<Any>(0x6B12F11C2A9F0344, p0); } // 0x6B12F11C2A9F0344 b1207
	static Any GET_CAM_ROT(Any p0, Any p1) { return invoker::Invoke<Any>(0x9BF96B57254E7889, p0, p1); } // 0x9BF96B57254E7889 b1207
	static Any GET_CAM_FOV(Any p0) { return invoker::Invoke<Any>(0x8101D32A0A6B0F60, p0); } // 0x8101D32A0A6B0F60 b1207
	static void SET_CAM_PARAMS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoker::Invoke<Void>(0xA47BBFFFB83D4D0A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xA47BBFFFB83D4D0A b1207
	static void SET_CAM_COORD(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xF9EE7D419EE49DE6, p0, p1, p2, p3); } // 0xF9EE7D419EE49DE6 b1207
	static void SET_CAM_ROT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x63DFA6810AD78719, p0, p1, p2, p3, p4); } // 0x63DFA6810AD78719 b1207
	static void SET_CAM_FOV(Any p0, Any p1) { invoker::Invoke<Void>(0x27666E5988D9D429, p0, p1); } // 0x27666E5988D9D429 b1207
	static void SET_CAM_NEAR_CLIP(Any p0, Any p1) { invoker::Invoke<Void>(0xA924028272A61364, p0, p1); } // 0xA924028272A61364 b1207
	static void SET_CAM_FAR_CLIP(Any p0, Any p1) { invoker::Invoke<Void>(0x5E32817BF6302111, p0, p1); } // 0x5E32817BF6302111 b1207
	static void SET_CAM_MOTION_BLUR_STRENGTH(Any p0, Any p1) { invoker::Invoke<Void>(0x45FD891364181F9E, p0, p1); } // 0x45FD891364181F9E b1207
	static void _0xFC3F638BE2B6BB02() { invoker::Invoke<Void>(0xFC3F638BE2B6BB02); } // 0xFC3F638BE2B6BB02 b1207
	static void _0xE4B7945EF4F1BFB2(Any p0, Any p1) { invoker::Invoke<Void>(0xE4B7945EF4F1BFB2, p0, p1); } // 0xE4B7945EF4F1BFB2 b1207
	static void _0x1FC6C727D30FFDDE(Any p0) { invoker::Invoke<Void>(0x1FC6C727D30FFDDE, p0); } // 0x1FC6C727D30FFDDE b1207
	static void ATTACH_CAM_TO_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xFDC0DF7F6FB0A592, p0, p1, p2, p3, p4, p5); } // 0xFDC0DF7F6FB0A592 b1207
	static void ATTACH_CAM_TO_PED_BONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xDFC1E4A44C0324CA, p0, p1, p2, p3, p4, p5, p6); } // 0xDFC1E4A44C0324CA b1207
	static void DETACH_CAM(Any p0) { invoker::Invoke<Void>(0x05B41DDBEB559556, p0); } // 0x05B41DDBEB559556 b1207
	static void POINT_CAM_AT_COORD(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x948B39341C3A40C2, p0, p1, p2, p3); } // 0x948B39341C3A40C2 b1207
	static void POINT_CAM_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xFC2867E6074D3A61, p0, p1, p2, p3, p4, p5); } // 0xFC2867E6074D3A61 b1207
	static void STOP_CAM_POINTING(Any p0) { invoker::Invoke<Void>(0xCA1B30A3357C71F1, p0); } // 0xCA1B30A3357C71F1 b1207
	static void _0x11F32BB61B756732(Any p0, Any p1) { invoker::Invoke<Void>(0x11F32BB61B756732, p0, p1); } // 0x11F32BB61B756732 b1207
	static void _0x9F97E85EC142255E(Any p0, Any p1) { invoker::Invoke<Void>(0x9F97E85EC142255E, p0, p1); } // 0x9F97E85EC142255E b1207
	static void SET_CAM_AFFECTS_AIMING(Any p0, Any p1) { invoker::Invoke<Void>(0x3CB9E8BDE5E76F33, p0, p1); } // 0x3CB9E8BDE5E76F33 b1207
	static void _0x661B5C8654ADD825(Any p0, Any p1) { invoker::Invoke<Void>(0x1B8F3CE5A6001298, p0, p1); } // 0x1B8F3CE5A6001298 b1207
	static void _0x271017B9BA825366(Any p0, Any p1) { invoker::Invoke<Void>(0x42ED56B02E05D109, p0, p1); } // 0x42ED56B02E05D109 b1207
	static void ADD_CAM_SPLINE_NODE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0xF1F57F9D230F9CD1, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xF1F57F9D230F9CD1 b1207
	static Any _0xF1898A68E7C15636() { return invoker::Invoke<Any>(0xF1898A68E7C15636); } // 0xF1898A68E7C15636 b1207
	static Any GET_CAM_SPLINE_PHASE(Any p0) { return invoker::Invoke<Any>(0x095EDCD24D90033A, p0); } // 0x095EDCD24D90033A b1207
	static void SET_CAM_SPLINE_DURATION(Any p0, Any p1) { invoker::Invoke<Void>(0xFF6311652CA91015, p0, p1); } // 0xFF6311652CA91015 b1207
	static Any _0x84B3645618E726B0() { return invoker::Invoke<Any>(0x84B3645618E726B0); } // 0x84B3645618E726B0 b1207
	static void SET_CAM_ACTIVE_WITH_INTERP(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x8B15AE2987C1AC8F, p0, p1, p2, p3, p4); } // 0x8B15AE2987C1AC8F b1207
	static Any IS_CAM_INTERPOLATING(Any p0) { return invoker::Invoke<Any>(0x578F8F1CAA17BD2B, p0); } // 0x578F8F1CAA17BD2B b1207
	static void SHAKE_CAM(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF9A7BCF5D050D4E7, p0, p1, p2); } // 0xF9A7BCF5D050D4E7 b1207
	static Any IS_CAM_SHAKING(Any p0) { return invoker::Invoke<Any>(0x2EEB402BD7320159, p0); } // 0x2EEB402BD7320159 b1207
	static void STOP_CAM_SHAKING(Any p0, Any p1) { invoker::Invoke<Void>(0xB78CC4B4706614B0, p0, p1); } // 0xB78CC4B4706614B0 b1207
	static Any PLAY_CAM_ANIM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0xA263DDF694D563F6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xA263DDF694D563F6 b1207
	static void _0xCF69EA05CD9C33C9() { invoker::Invoke<Void>(0xCF69EA05CD9C33C9); } // 0xCF69EA05CD9C33C9 b1207
	static Any _0x20389408F0E93B9A() { return invoker::Invoke<Any>(0x20389408F0E93B9A); } // 0x20389408F0E93B9A b1207
	static Any IS_SCREEN_FADED_OUT() { return invoker::Invoke<Any>(0xF5472C80DF2FF847); } // 0xF5472C80DF2FF847 b1207
	static Any IS_SCREEN_FADED_IN() { return invoker::Invoke<Any>(0x37F9A426FBCF4AF2); } // 0x37F9A426FBCF4AF2 b1207
	static Any IS_SCREEN_FADING_OUT() { return invoker::Invoke<Any>(0x02F39BEFE7B88D00); } // 0x02F39BEFE7B88D00 b1207
	static Any IS_SCREEN_FADING_IN() { return invoker::Invoke<Any>(0x0CECCC63FFA2EF24); } // 0x0CECCC63FFA2EF24 b1207
	static void DO_SCREEN_FADE_IN(Any p0) { invoker::Invoke<Void>(0x6A053CF596F67DF7, p0); } // 0x6A053CF596F67DF7 b1207
	static void DO_SCREEN_FADE_OUT(Any p0) { invoker::Invoke<Void>(0x40C719A5E410B9E4, p0); } // 0x40C719A5E410B9E4 b1207
	static Any _0x81DCFD13CF39920E() { return invoker::Invoke<Any>(0x81DCFD13CF39920E); } // 0x81DCFD13CF39920E b1207
	static Any _0x69D65E89FFD72313() { return invoker::Invoke<Any>(0x69D65E89FFD72313); } // 0x69D65E89FFD72313 b1207
	static void _0xE296208C273BD7F0(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xE296208C273BD7F0, p0, p1, p2, p3); } // 0xE296208C273BD7F0 b1207
	static void _0xC64ABC0676AF262B() { invoker::Invoke<Void>(0xC64ABC0676AF262B); } // 0xC64ABC0676AF262B b1207
	static Any _0xA2B1C7EF759A63CE() { return invoker::Invoke<Any>(0xA2B1C7EF759A63CE); } // 0xA2B1C7EF759A63CE b1207
	static Any _0x73FF6BE63DC18819() { return invoker::Invoke<Any>(0x73FF6BE63DC18819); } // 0x73FF6BE63DC18819 b1207
	static Any _0x450769C833D58844() { return invoker::Invoke<Any>(0x450769C833D58844); } // 0x450769C833D58844 b1207
	static Any _0xD7F4D54CF80AFA34() { return invoker::Invoke<Any>(0xD7F4D54CF80AFA34); } // 0xD7F4D54CF80AFA34 b1207
	static Any GET_GAMEPLAY_CAM_COORD() { return invoker::Invoke<Any>(0x595320200B98596E); } // 0x595320200B98596E b1207
	static Any GET_GAMEPLAY_CAM_ROT(Any p0) { return invoker::Invoke<Any>(0x0252D2B5582957A6, p0); } // 0x0252D2B5582957A6 b1207
	static Any GET_GAMEPLAY_CAM_FOV() { return invoker::Invoke<Any>(0xF6A96E5ACEEC6E50); } // 0xF6A96E5ACEEC6E50 b1207
	static void _0x0225778816FDC28C(Any p0) { invoker::Invoke<Void>(0x8459B3E64257B21D, p0); } // 0x8459B3E64257B21D b1207
	static Any GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoker::Invoke<Any>(0xC4ABF536048998AA); } // 0xC4ABF536048998AA b1207
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(Any p0, Any p1) { invoker::Invoke<Void>(0x5D1EB123EAC5D071, p0, p1); } // 0x5D1EB123EAC5D071 b1207
	static Any GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoker::Invoke<Any>(0x99AADEBBA803F827); } // 0x99AADEBBA803F827 b1207
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(Any p0, Any p1) { invoker::Invoke<Void>(0xFB760AF4F537B8BF, p0, p1); } // 0xFB760AF4F537B8BF b1207
	static void _0x0961B089947BA6D0(Any p0) { invoker::Invoke<Void>(0x0961B089947BA6D0, p0); } // 0x0961B089947BA6D0 b1207
	static void _0x04084490CC302CFB() { invoker::Invoke<Void>(0x04084490CC302CFB); } // 0x04084490CC302CFB b1207
	static Any _0x1DD95A8D6B24A0C9() { return invoker::Invoke<Any>(0x1DD95A8D6B24A0C9); } // 0x1DD95A8D6B24A0C9 b1207
	static Any _0xD1BA66940E94C547() { return invoker::Invoke<Any>(0xD1BA66940E94C547); } // 0xD1BA66940E94C547 b1207
	static void SHAKE_GAMEPLAY_CAM(Any p0, Any p1) { invoker::Invoke<Void>(0xD9B31B4650520529, p0, p1); } // 0xD9B31B4650520529 b1207
	static Any _0xC3E9E5D4F413B773() { return invoker::Invoke<Any>(0xC3E9E5D4F413B773); } // 0xC3E9E5D4F413B773 b1207
	static Any IS_GAMEPLAY_CAM_SHAKING() { return invoker::Invoke<Any>(0xEA4C5F4AA0A4DBEF); } // 0xEA4C5F4AA0A4DBEF b1207
	static Any _0x0060B31968E60E41(Any p0) { return invoker::Invoke<Any>(0x0060B31968E60E41, p0); } // 0x0060B31968E60E41 b1207
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(Any p0) { invoker::Invoke<Void>(0x570E35F5C4A44838, p0); } // 0x570E35F5C4A44838 b1207
	static void _0xFEFDDC6E8FDF8A75(Any p0, Any p1) { invoker::Invoke<Void>(0xFEFDDC6E8FDF8A75, p0, p1); } // 0xFEFDDC6E8FDF8A75 b1207
	static void STOP_GAMEPLAY_CAM_SHAKING(Any p0) { invoker::Invoke<Void>(0xE0DE43D290FB65F9, p0); } // 0xE0DE43D290FB65F9 b1207
	static void _0x4285804FD65D8066(Any p0, Any p1) { invoker::Invoke<Void>(0x4285804FD65D8066, p0, p1); } // 0x4285804FD65D8066 b1207
	static void _0x8BBACBF51DA047A8(Any p0) { invoker::Invoke<Void>(0x82E41D6ADE924FCA, p0); } // 0x82E41D6ADE924FCA b1207
	static Any IS_GAMEPLAY_CAM_RENDERING() { return invoker::Invoke<Any>(0x8660EA714834E412); } // 0x8660EA714834E412 b1207
	static Any _0x3044240D2E0FA842() { return invoker::Invoke<Any>(0x251241CAEC707106); } // 0x251241CAEC707106 b1207
	static Any _0x705A276EBFF3133D() { return invoker::Invoke<Any>(0x43AB9D5A7D415478); } // 0x43AB9D5A7D415478 b1207
	static Any IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoker::Invoke<Any>(0x8FE0D24FFD04D5A2); } // 0x8FE0D24FFD04D5A2 b1207
	static void _0x2AED6301F67007D5(Any p0) { invoker::Invoke<Void>(0xD904F75DBD7AB865, p0); } // 0xD904F75DBD7AB865 b1207
	static void _0x49482F9FCD825AAA(Any p0) { invoker::Invoke<Void>(0x7E3F546ACFE6C8D9, p0); } // 0x7E3F546ACFE6C8D9 b1207
	static void _0x39073DA4EDDBC91D(Any p0) { invoker::Invoke<Void>(0x39073DA4EDDBC91D, p0); } // 0x39073DA4EDDBC91D b1207
	static void _0x70A6658D476C6187() { invoker::Invoke<Void>(0x70A6658D476C6187); } // 0x70A6658D476C6187 b1207
	static void _0x18C3DFAC458783BB() { invoker::Invoke<Void>(0x18C3DFAC458783BB); } // 0x18C3DFAC458783BB b1207
	static void _0xF1A6FEEDF3776EF9() { invoker::Invoke<Void>(0xF1A6FEEDF3776EF9); } // 0xF1A6FEEDF3776EF9 b1207
	static void _0xE6F364DE6C2FDEFE() { invoker::Invoke<Void>(0xE6F364DE6C2FDEFE); } // 0xE6F364DE6C2FDEFE b1207
	static void _0x0F1FFEF5D54AE832() { invoker::Invoke<Void>(0x0F1FFEF5D54AE832); } // 0x0F1FFEF5D54AE832 b1207
	static void _0x3C8F74E8FE751614() { invoker::Invoke<Void>(0x3C8F74E8FE751614); } // 0x3C8F74E8FE751614 b1207
	static void _0x06557F6D96C86881() { invoker::Invoke<Void>(0x06557F6D96C86881); } // 0x06557F6D96C86881 b1207
	static Any IS_SPHERE_VISIBLE(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x2E941B5FFA2989C6, p0, p1, p2, p3); } // 0x2E941B5FFA2989C6 b1207
	static Any _0x190F7DA1AC09A8EF() { return invoker::Invoke<Any>(0x190F7DA1AC09A8EF); } // 0x190F7DA1AC09A8EF b1207
	static void _0xBCDA0BA8762FACB9(Any p0) { invoker::Invoke<Void>(0xBCDA0BA8762FACB9, p0); } // 0xBCDA0BA8762FACB9 b1207
	static void _0x6C1053C433A573CF(Any p0) { invoker::Invoke<Void>(0x6C1053C433A573CF, p0); } // 0x6C1053C433A573CF b1207
	static void _0x449995EA846D3FC2(Any p0) { invoker::Invoke<Void>(0x449995EA846D3FC2, p0); } // 0x449995EA846D3FC2 b1207
	static void _CLAMP_GAMEPLAY_CAM_YAW(Any p0, Any p1) { invoker::Invoke<Void>(0x14F3947318CA8AD2, p0, p1); } // 0x14F3947318CA8AD2 b1207
	static void _CLAMP_GAMEPLAY_CAM_PITCH(Any p0, Any p1) { invoker::Invoke<Void>(0x326C7AA308F3DF6A, p0, p1); } // 0x326C7AA308F3DF6A b1207
	static void _ANIMATE_GAMEPLAY_CAM_ZOOM(Any p0, Any p1) { invoker::Invoke<Void>(0x2126C740A4AC370B, p0, p1); } // 0x2126C740A4AC370B b1207
	static void _0xE9EA16D6E54CDCA4(Any p0, Any p1) { invoker::Invoke<Void>(0xFA1D5E8D1C3CCD67, p0, p1); } // 0xFA1D5E8D1C3CCD67 b1207
	static void _DISABLE_FIRST_PERSON_CAM_THIS_FRAME() { invoker::Invoke<Void>(0x9C473089A934C930); } // 0x9C473089A934C930 b1207
	static Any _0x77D65669A05D1A1A() { return invoker::Invoke<Any>(0x77D65669A05D1A1A); } // 0x77D65669A05D1A1A b1207
	static void _0x8910C24B7E0046EC() { invoker::Invoke<Void>(0x8910C24B7E0046EC); } // 0x8910C24B7E0046EC b1207
	static Any _0x74F1D22EFA71FAB8() { return invoker::Invoke<Any>(0x74F1D22EFA71FAB8); } // 0x74F1D22EFA71FAB8 b1207
	static void _0x718C6ECF5E8CBDD4() { invoker::Invoke<Void>(0x718C6ECF5E8CBDD4); } // 0x718C6ECF5E8CBDD4 b1207
	static void _0x8370D34BD2E60B73() { invoker::Invoke<Void>(0x8370D34BD2E60B73); } // 0x8370D34BD2E60B73 b1207
	static void _0x1CFB749AD4317BDE() { invoker::Invoke<Void>(0x1CFB749AD4317BDE); } // 0x1CFB749AD4317BDE b1207
	static Any _0x90DA5BA5C2635416() { return invoker::Invoke<Any>(0x90DA5BA5C2635416); } // 0x90DA5BA5C2635416 b1207
	static void _0x05AB44D906738426() { invoker::Invoke<Void>(0x05AB44D906738426); } // 0x05AB44D906738426 b1207
	static void _0x632BE8D84846FA56() { invoker::Invoke<Void>(0x632BE8D84846FA56); } // 0x632BE8D84846FA56 b1207
	static void _0x71D71E08A7ED5BD7(Any p0) { invoker::Invoke<Void>(0x71D71E08A7ED5BD7, p0); } // 0x71D71E08A7ED5BD7 b1207
	static Any IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoker::Invoke<Any>(0xA40C2F51FB589E9A); } // 0xA40C2F51FB589E9A b1207
	static void _0x7E40A01B11398FCB() { invoker::Invoke<Void>(0x7E40A01B11398FCB); } // 0x7E40A01B11398FCB b1207
	static Any IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoker::Invoke<Any>(0xF63134C54B6EC212); } // 0xF63134C54B6EC212 b1207
	static Any _0xA24C1D341C6E0D53(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xA24C1D341C6E0D53, p0, p1, p2); } // 0xA24C1D341C6E0D53 b1207
	static Any _0xDC62CD70658E7A02() { return invoker::Invoke<Any>(0xDC62CD70658E7A02); } // 0xDC62CD70658E7A02 b1207
	static Any _0x796085220ADCC847() { return invoker::Invoke<Any>(0x796085220ADCC847); } // 0x796085220ADCC847 b1207
	static Any _GET_GAMEPLAY_CAM_ZOOM() { return invoker::Invoke<Any>(0xB4132CA1B0EE1365); } // 0xB4132CA1B0EE1365 b1207
	static void _0x2F7F2B26DD3F18EE(Any p0, Any p1) { invoker::Invoke<Void>(0x05BD5E4088B30A66, p0, p1); } // 0x05BD5E4088B30A66 b1207
	static void _SET_FIRST_PERSON_CAM_PITCH_RANGE(Any p0, Any p1) { invoker::Invoke<Void>(0x715B7F5E8BED32A2, p0, p1); } // 0x715B7F5E8BED32A2 b1207
	static void _0xC205B3C54C6A4E37(Any p0) { invoker::Invoke<Void>(0xC205B3C54C6A4E37, p0); } // 0xC205B3C54C6A4E37 b1207
	static Any _GET_GAMEPLAY_CAM_COORDS() { return invoker::Invoke<Any>(0x5352E025EC2B416F); } // 0x5352E025EC2B416F b1207
	static Any _GET_GAMEPLAY_CAM_ROT(Any p0) { return invoker::Invoke<Any>(0x602685BD85DD26CA, p0); } // 0x602685BD85DD26CA b1207
	static Any _0x80EC114669DAEFF4() { return invoker::Invoke<Any>(0x04AF77971E508F6A); } // 0x04AF77971E508F6A b1207
	static void SET_GAMEPLAY_COORD_HINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xFA33B8C69A4A6A0F, p0, p1, p2, p3, p4, p5, p6); } // 0xFA33B8C69A4A6A0F b1207
	static void SET_GAMEPLAY_PED_HINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x90FB951648851733, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x90FB951648851733 b1207
	static Any _0xE2B2BB7DAC280515() { return invoker::Invoke<Any>(0xE2B2BB7DAC280515); } // 0xE2B2BB7DAC280515 b1207
	static Any _0xC40551D65F2BF297() { return invoker::Invoke<Any>(0xC40551D65F2BF297); } // 0xC40551D65F2BF297 b1207
	static void SET_GAMEPLAY_ENTITY_HINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xD1F7F32640ADFD12, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD1F7F32640ADFD12 b1207
	static Any IS_GAMEPLAY_HINT_ACTIVE() { return invoker::Invoke<Any>(0x2E04AB5FEE042D4A); } // 0x2E04AB5FEE042D4A b1207
	static void STOP_GAMEPLAY_HINT(Any p0) { invoker::Invoke<Void>(0x1BCEC33D54CFCA8A, p0); } // 0x1BCEC33D54CFCA8A b1207
	static void _0x247ACBC4ABBC9D1C(Any p0) { invoker::Invoke<Void>(0x93759A83D0D844E7, p0); } // 0x93759A83D0D844E7 b1207
	static void _0x88544C0E3291DCAE(Any p0) { invoker::Invoke<Void>(0x88544C0E3291DCAE, p0); } // 0x88544C0E3291DCAE b1207
	static void SET_GAMEPLAY_HINT_FOV(Any p0) { invoker::Invoke<Void>(0x661E58BC6F00A49A, p0); } // 0x661E58BC6F00A49A b1207
	static void _0xF8BDBF3D573049A1(Any p0) { invoker::Invoke<Void>(0xDDDC54181868F81F, p0); } // 0xDDDC54181868F81F b1207
	static Any _0x421192A2DA48FD01() { return invoker::Invoke<Any>(0x421192A2DA48FD01); } // 0x421192A2DA48FD01 b1207
	static Any _0xF86B6F93727C59C9() { return invoker::Invoke<Any>(0xF86B6F93727C59C9); } // 0xF86B6F93727C59C9 b1207
	static void _0xC92717EF615B6704(Any p0) { invoker::Invoke<Void>(0x29E74F819150CC32, p0); } // 0x29E74F819150CC32 b1207
	static void _0xF48664E9C83825E3(Any p0, Any p1) { invoker::Invoke<Void>(0xF48664E9C83825E3, p0, p1); } // 0xF48664E9C83825E3 b1207
	static void _0x1F6EBD94680252CE(Any p0, Any p1) { invoker::Invoke<Void>(0x1F6EBD94680252CE, p0, p1); } // 0x1F6EBD94680252CE b1207
	static void _0xE28F73212A813E82(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xE28F73212A813E82, p0, p1, p2, p3); } // 0xE28F73212A813E82 b1207
	static void _0x4D2F46D1B28D90FB(Any p0, Any p1) { invoker::Invoke<Void>(0x4D2F46D1B28D90FB, p0, p1); } // 0x4D2F46D1B28D90FB b1207
	static void _0x65B205BF30C13DDB(Any p0) { invoker::Invoke<Void>(0x65B205BF30C13DDB, p0); } // 0x65B205BF30C13DDB b1207
	static void _0x641092322A8852AB() { invoker::Invoke<Void>(0x641092322A8852AB); } // 0x641092322A8852AB b1207
	static void _0xDB382FE20C2DA222(Any p0) { invoker::Invoke<Void>(0xDB382FE20C2DA222, p0); } // 0xDB382FE20C2DA222 b1207
	static void _0x2DD3149DC34A3F4C(Any p0) { invoker::Invoke<Void>(0x2DD3149DC34A3F4C, p0); } // 0x2DD3149DC34A3F4C b1207
	static void _0x027CAB2C3AF27010() { invoker::Invoke<Void>(0x027CAB2C3AF27010); } // 0x027CAB2C3AF27010 b1207
	static void _0x3C486E334520579D() { invoker::Invoke<Void>(0x3C486E334520579D); } // 0x3C486E334520579D b1207
	static Any _0x41E452A3C580D1A7() { return invoker::Invoke<Any>(0x41E452A3C580D1A7); } // 0x41E452A3C580D1A7 b1207
	static void SET_CINEMATIC_BUTTON_ACTIVE(Any p0) { invoker::Invoke<Void>(0xB90411F480457A6C, p0); } // 0xB90411F480457A6C b1207
	static Any IS_CINEMATIC_CAM_RENDERING() { return invoker::Invoke<Any>(0xBF7C780731AADBF8); } // 0xBF7C780731AADBF8 b1207
	static Any _0xA5929C2E57AC90D1() { return invoker::Invoke<Any>(0xA5929C2E57AC90D1); } // 0xA5929C2E57AC90D1 b1207
	static Any _0x634F4A0562CF19B8() { return invoker::Invoke<Any>(0x634F4A0562CF19B8); } // 0x634F4A0562CF19B8 b1207
	static void _0xA41BCD7213805AAC(Any p0) { invoker::Invoke<Void>(0x702B75DC9D3EDE56, p0); } // 0x702B75DC9D3EDE56 b1207
	static void _0x9AC65A36D3C0C189(Any p0) { invoker::Invoke<Void>(0x9AC65A36D3C0C189, p0); } // 0x9AC65A36D3C0C189 b1207
	static Any _0x975F6EBB62632FE3() { return invoker::Invoke<Any>(0x975F6EBB62632FE3); } // 0x975F6EBB62632FE3 b1207
	static void SET_CINEMATIC_MODE_ACTIVE(Any p0) { invoker::Invoke<Void>(0xCE7A90B160F75046, p0); } // 0xCE7A90B160F75046 b1207
	static Any _0x1811A02277A9E49D() { return invoker::Invoke<Any>(0x1811A02277A9E49D); } // 0x1811A02277A9E49D b1207
	static void _0xE3639DB78B3B5400(Any p0) { invoker::Invoke<Void>(0xE3639DB78B3B5400, p0); } // 0xE3639DB78B3B5400 b1207
	static void _0x986F7A51EE3E1F92(Any p0, Any p1) { invoker::Invoke<Void>(0x986F7A51EE3E1F92, p0, p1); } // 0x986F7A51EE3E1F92 b1207
	static void _0x5B637D6F3B67716A(Any p0) { invoker::Invoke<Void>(0x5B637D6F3B67716A, p0); } // 0x5B637D6F3B67716A b1207
	static void _0xC252C0CC969AF79A(Any p0) { invoker::Invoke<Void>(0xC252C0CC969AF79A, p0); } // 0xC252C0CC969AF79A b1207
	static void _0xE2BB2D6A9FE2ECDE(Any p0) { invoker::Invoke<Void>(0xE2BB2D6A9FE2ECDE, p0); } // 0xE2BB2D6A9FE2ECDE b1207
	static void _0x6E969927CF632608(Any p0) { invoker::Invoke<Void>(0x6E969927CF632608, p0); } // 0x6E969927CF632608 b1207
	static Any _0x6072B7420A83A03F() { return invoker::Invoke<Any>(0x6072B7420A83A03F); } // 0x6072B7420A83A03F b1207
	static Any _0x1204EB53A5FBC63D() { return invoker::Invoke<Any>(0x1204EB53A5FBC63D); } // 0x1204EB53A5FBC63D b1207
	static void _0x6519238858AF5479(Any p0) { invoker::Invoke<Void>(0x6519238858AF5479, p0); } // 0x6519238858AF5479 b1207
	static Any _0x2F994CC29CAA9D22() { return invoker::Invoke<Any>(0x2F994CC29CAA9D22); } // 0x2F994CC29CAA9D22 b1207
	static Any _0xA14D5FE82BCB1D9E() { return invoker::Invoke<Any>(0xA14D5FE82BCB1D9E); } // 0xA14D5FE82BCB1D9E b1207
	static Any _0x6DFD37E586D4F44F() { return invoker::Invoke<Any>(0x6DFD37E586D4F44F); } // 0x6DFD37E586D4F44F b1207
	static Any _0x80D7A3E39B120BC4() { return invoker::Invoke<Any>(0x80D7A3E39B120BC4); } // 0x80D7A3E39B120BC4 b1207
	static Any _0x63E5841A9264D016() { return invoker::Invoke<Any>(0x63E5841A9264D016); } // 0x63E5841A9264D016 b1207
	static void _0x9A92C06ACBAF9731() { invoker::Invoke<Void>(0x9A92C06ACBAF9731); } // 0x9A92C06ACBAF9731 b1207
	static void _0x16E9ABDD34DDD931() { invoker::Invoke<Void>(0x16E9ABDD34DDD931); } // 0x16E9ABDD34DDD931 b1207
	static Any _0x139EFB0A71DD9011() { return invoker::Invoke<Any>(0x139EFB0A71DD9011); } // 0x139EFB0A71DD9011 b1207
	static Any _0x7CE9DC58E3E4755F() { return invoker::Invoke<Any>(0x7CE9DC58E3E4755F); } // 0x7CE9DC58E3E4755F b1207
	static void _0x3B8E3AD9677CE12B(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3B8E3AD9677CE12B, p0, p1, p2); } // 0x3B8E3AD9677CE12B b1207
	static void _0xDF7F5BE9150E47E4(Any p0) { invoker::Invoke<Void>(0xDF7F5BE9150E47E4, p0); } // 0xDF7F5BE9150E47E4 b1207
	static void _0xB85C13E0BF1F2A1C(Any p0) { invoker::Invoke<Void>(0xB85C13E0BF1F2A1C, p0); } // 0xB85C13E0BF1F2A1C b1207
	static Any _0x066167C63111D8CF() { return invoker::Invoke<Any>(0x066167C63111D8CF); } // 0x066167C63111D8CF b1207
	static void _0x0FF7125F07DEB84F(Any p0, Any p1) { invoker::Invoke<Void>(0x0FF7125F07DEB84F, p0, p1); } // 0x0FF7125F07DEB84F b1207
	static void _0x6CAB0BA160B168D2() { invoker::Invoke<Void>(0x6CAB0BA160B168D2); } // 0x6CAB0BA160B168D2 b1207
	static void _0x1B3C2D961F5FC0E1(Any p0) { invoker::Invoke<Void>(0x1B3C2D961F5FC0E1, p0); } // 0x1B3C2D961F5FC0E1 b1207
	static void _0x2412216FCC7B4E3E(Any p0) { invoker::Invoke<Void>(0x2412216FCC7B4E3E, p0); } // 0x2412216FCC7B4E3E b1207
	static Any _0xAA235E2F2C09E952(Any p0) { return invoker::Invoke<Any>(0xAA235E2F2C09E952, p0); } // 0xAA235E2F2C09E952 b1207
	static Any _0x595550376B7EA230(Any p0) { return invoker::Invoke<Any>(0x595550376B7EA230, p0); } // 0x595550376B7EA230 b1207
	static Any _0x465F04F68AD38197(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x465F04F68AD38197, p0, p1, p2); } // 0x465F04F68AD38197 b1207
	static Any _0xEA113BF9B0C0C5D7(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xEA113BF9B0C0C5D7, p0, p1, p2); } // 0xEA113BF9B0C0C5D7 b1207
	static void _0xBC016635D6A73B31(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBC016635D6A73B31, p0, p1, p2); } // 0xBC016635D6A73B31 b1207
	static void _0x02389579A53C3276(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x02389579A53C3276, p0, p1, p2, p3); } // 0x02389579A53C3276 b1207
	static void _0xA54D643D0773EB65(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA54D643D0773EB65, p0, p1, p2); } // 0xA54D643D0773EB65 b1207
	static void _0x6D4D25C2137FF511(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x6D4D25C2137FF511, p0, p1, p2); } // 0x6D4D25C2137FF511 b1207
	static void _0x0E94C95EC3185FA9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x0E94C95EC3185FA9, p0, p1, p2, p3, p4, p5, p6); } // 0x0E94C95EC3185FA9 b1207
	static void _0x6A4D224FC7643941(Any p0) { invoker::Invoke<Void>(0x6A4D224FC7643941, p0); } // 0x6A4D224FC7643941 b1207
	static void _0x798BE43C9393632B(Any p0) { invoker::Invoke<Void>(0x798BE43C9393632B, p0); } // 0x798BE43C9393632B b1207
	static Any _0xDD0B7C5AE58F721D(Any p0) { return invoker::Invoke<Any>(0xDD0B7C5AE58F721D, p0); } // 0xDD0B7C5AE58F721D b1207
	static Any _0xC285FD21294A1C49(Any p0) { return invoker::Invoke<Any>(0xC285FD21294A1C49, p0); } // 0xC285FD21294A1C49 b1207
	static void _0xB8B207C34285E978(Any p0) { invoker::Invoke<Void>(0xB8B207C34285E978, p0); } // 0xB8B207C34285E978 b1207
	static void _0x0A5A4F1979ABB40E(Any p0) { invoker::Invoke<Void>(0x0A5A4F1979ABB40E, p0); } // 0x0A5A4F1979ABB40E b1207
	static Any _0x927B810E43E99932(Any p0) { return invoker::Invoke<Any>(0x927B810E43E99932, p0); } // 0x927B810E43E99932 b1207
	static Any _0x4138EE36BC3DC0A7(Any p0, Any p1) { return invoker::Invoke<Any>(0x4138EE36BC3DC0A7, p0, p1); } // 0x4138EE36BC3DC0A7 b1207
	static void _0xFEB8646818294C75(Any p0, Any p1) { invoker::Invoke<Void>(0xFEB8646818294C75, p0, p1); } // 0xFEB8646818294C75 b1207
	static void _0x29E6655DF3590B0D(Any p0) { invoker::Invoke<Void>(0x29E6655DF3590B0D, p0); } // 0x29E6655DF3590B0D b1207
	static void _0xAC77757C05DE9E5A(Any p0) { invoker::Invoke<Void>(0xAC77757C05DE9E5A, p0); } // 0xAC77757C05DE9E5A b1207
	static void _0x8E036B41C37D0E5F(Any p0) { invoker::Invoke<Void>(0x8E036B41C37D0E5F, p0); } // 0x8E036B41C37D0E5F b1207
	static void _0x1D9F72DD4FD9A9D7(Any p0) { invoker::Invoke<Void>(0x1D9F72DD4FD9A9D7, p0); } // 0x1D9F72DD4FD9A9D7 b1207
	static void _0x7B0279170961A73F(Any p0) { invoker::Invoke<Void>(0x7B0279170961A73F, p0); } // 0x7B0279170961A73F b1207
	static void _0x728491FB3DFFEF99(Any p0) { invoker::Invoke<Void>(0x728491FB3DFFEF99, p0); } // 0x728491FB3DFFEF99 b1207
	static Any _0x14C4A49E36C29E49() { return invoker::Invoke<Any>(0x14C4A49E36C29E49); } // 0x14C4A49E36C29E49 b1207
	static Any _0xF824530B612FE0CE() { return invoker::Invoke<Any>(0xF824530B612FE0CE); } // 0xF824530B612FE0CE b1207
	static Any _0xEF9A3132A0AA6B19() { return invoker::Invoke<Any>(0xEF9A3132A0AA6B19); } // 0xEF9A3132A0AA6B19 b1207
	static Any _0x5060FA977CEA4455() { return invoker::Invoke<Any>(0x5060FA977CEA4455); } // 0x5060FA977CEA4455 b1207
	static Any _0x2533BAFFBE737E54() { return invoker::Invoke<Any>(0x2533BAFFBE737E54); } // 0x2533BAFFBE737E54 b1207
	static Any _0x18FC740FFDCD7454() { return invoker::Invoke<Any>(0x18FC740FFDCD7454); } // 0x18FC740FFDCD7454 b1207
	static Any _0x4653A741D17F2CD0() { return invoker::Invoke<Any>(0x4653A741D17F2CD0); } // 0x4653A741D17F2CD0 b1207
	static Any _0x2AB7C81B3F70570C() { return invoker::Invoke<Any>(0x2AB7C81B3F70570C); } // 0x2AB7C81B3F70570C b1207
	static Any _0x8505E05FC8822843() { return invoker::Invoke<Any>(0x8505E05FC8822843); } // 0x8505E05FC8822843 b1207
}

namespace CLOCK
{
	static void SET_CLOCK_TIME(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3A52C59FFB2DEED8, p0, p1, p2); } // 0x3A52C59FFB2DEED8 b1207
	static void PAUSE_CLOCK(Any p0) { invoker::Invoke<Void>(0x4D1A590C92BF377E, p0); } // 0x4D1A590C92BF377E b1207
	static void _0x568D998A9FF96774(Any p0) { invoker::Invoke<Void>(0x568D998A9FF96774, p0); } // 0x568D998A9FF96774 b1207
	static void ADVANCE_CLOCK_TIME_TO(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0184750AE88D0B1D, p0, p1, p2); } // 0x0184750AE88D0B1D b1207
	static void ADD_TO_CLOCK_TIME(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xAB7C251C7701D336, p0, p1, p2); } // 0xAB7C251C7701D336 b1207
	static Any GET_CLOCK_HOURS() { return invoker::Invoke<Any>(0xC82CF208C2B19199); } // 0xC82CF208C2B19199 b1207
	static Any GET_CLOCK_MINUTES() { return invoker::Invoke<Any>(0x4E162231B823DBBF); } // 0x4E162231B823DBBF b1207
	static Any GET_CLOCK_SECONDS() { return invoker::Invoke<Any>(0xB6101ABE62B5F080); } // 0xB6101ABE62B5F080 b1207
	static void _0x04EEDB3848DACF68(Any p0) { invoker::Invoke<Void>(0x04EEDB3848DACF68, p0); } // 0x04EEDB3848DACF68 b1207
	static Any _0x78FD8BE812E436B2() { return invoker::Invoke<Any>(0x78FD8BE812E436B2); } // 0x78FD8BE812E436B2 b1207
	static void SET_CLOCK_DATE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x02AD3092562941E2, p0, p1, p2); } // 0x02AD3092562941E2 b1207
	static Any GET_CLOCK_DAY_OF_WEEK() { return invoker::Invoke<Any>(0x4DD02D4C7FB30076); } // 0x4DD02D4C7FB30076 b1207
	static Any GET_CLOCK_DAY_OF_MONTH() { return invoker::Invoke<Any>(0xDF2FD796C54480A5); } // 0xDF2FD796C54480A5 b1207
	static Any GET_CLOCK_MONTH() { return invoker::Invoke<Any>(0x2D44E8FC79EAB1AC); } // 0x2D44E8FC79EAB1AC b1207
	static Any GET_CLOCK_YEAR() { return invoker::Invoke<Any>(0xE136DCA28C4A48BA); } // 0xE136DCA28C4A48BA b1207
	static Any GET_MILLISECONDS_PER_GAME_MINUTE() { return invoker::Invoke<Any>(0xE4CB8D126501EC52); } // 0xE4CB8D126501EC52 b1207
	static Any _0x90338AD4A784E455() { return invoker::Invoke<Any>(0x90338AD4A784E455); } // 0x90338AD4A784E455 b1207
	static Any _0x86A68E84E5884951() { return invoker::Invoke<Any>(0x86A68E84E5884951); } // 0x86A68E84E5884951 b1207
	static Any _0x28EEACE9B43D9597() { return invoker::Invoke<Any>(0x28EEACE9B43D9597); } // 0x28EEACE9B43D9597 b1207
}

namespace _NAMESPACE11
{
	static Any _0x725D52F21A5E9EF6() { return invoker::Invoke<Any>(0x725D52F21A5E9EF6); } // 0x725D52F21A5E9EF6 b1207
	static Any _0x6052B4DE6657684F(Any p0) { return invoker::Invoke<Any>(0x6052B4DE6657684F, p0); } // 0x6052B4DE6657684F b1207
	static Any _0x922A79CD4A033B8B(Any p0) { return invoker::Invoke<Any>(0x922A79CD4A033B8B, p0); } // 0x922A79CD4A033B8B b1207
	static Any _0x1F1DD794908C2BFA(Any p0) { return invoker::Invoke<Any>(0x1F1DD794908C2BFA, p0); } // 0x1F1DD794908C2BFA b1207
	static Any _0xF83D3DDA4D3C8169(Any p0) { return invoker::Invoke<Any>(0xF83D3DDA4D3C8169, p0); } // 0xF83D3DDA4D3C8169 b1207
	static Any _0x9A03F22AD446EEAC(Any p0) { return invoker::Invoke<Any>(0x9A03F22AD446EEAC, p0); } // 0x9A03F22AD446EEAC b1207
	static void _0x3EA62E56F386C997(Any p0, Any p1) { invoker::Invoke<Void>(0x3EA62E56F386C997, p0, p1); } // 0x3EA62E56F386C997 b1207
	static void _0x398FAB9C96A81924(Any p0, Any p1) { invoker::Invoke<Void>(0x398FAB9C96A81924, p0, p1); } // 0x398FAB9C96A81924 b1207
	static Any _0x62CAB7DB62EAD434(Any p0, Any p1) { return invoker::Invoke<Any>(0x62CAB7DB62EAD434, p0, p1); } // 0x62CAB7DB62EAD434 b1207
	static Any _0x126CBEBBA46693CF(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x126CBEBBA46693CF, p0, p1, p2); } // 0x126CBEBBA46693CF b1207
	static Any _0x5461C821D00FE15A(Any p0, Any p1) { return invoker::Invoke<Any>(0x5461C821D00FE15A, p0, p1); } // 0x5461C821D00FE15A b1207
	static Any _0x3A65F4844913A047(Any p0, Any p1) { return invoker::Invoke<Any>(0x3A65F4844913A047, p0, p1); } // 0x3A65F4844913A047 b1207
	static Any _0x33825A7388A6B9F6() { return invoker::Invoke<Any>(0x33825A7388A6B9F6); } // 0x33825A7388A6B9F6 b1207
	static Any _0x755901C7598B97BC() { return invoker::Invoke<Any>(0x755901C7598B97BC); } // 0x755901C7598B97BC b1207
	static Any _0xB9020EC89C07DF04() { return invoker::Invoke<Any>(0xB9020EC89C07DF04); } // 0xB9020EC89C07DF04 b1207
	static Any _0xFC832B06127D8E99() { return invoker::Invoke<Any>(0xFC832B06127D8E99); } // 0xFC832B06127D8E99 b1207
	static Any _0x0B6D275D2F242E17() { return invoker::Invoke<Any>(0x0B6D275D2F242E17); } // 0x0B6D275D2F242E17 b1207
	static Any _0x6BAB7ACED1017204() { return invoker::Invoke<Any>(0x6BAB7ACED1017204); } // 0x6BAB7ACED1017204 b1207
	static Any _0x93F2E7B5DB85657B(Any p0, Any p1) { return invoker::Invoke<Any>(0x93F2E7B5DB85657B, p0, p1); } // 0x93F2E7B5DB85657B b1207
	static Any _0xCC644BC1DD655269() { return invoker::Invoke<Any>(0xCC644BC1DD655269); } // 0xCC644BC1DD655269 b1207
	static Any _0x9ADEE485726025D4() { return invoker::Invoke<Any>(0x9ADEE485726025D4); } // 0x9ADEE485726025D4 b1207
	static Any _0xD52D20B0C76BB26D(Any p0, Any p1) { return invoker::Invoke<Any>(0xD52D20B0C76BB26D, p0, p1); } // 0xD52D20B0C76BB26D b1207
	static Any _0x13AAECDA43318BFE(Any p0, Any p1) { return invoker::Invoke<Any>(0x13AAECDA43318BFE, p0, p1); } // 0x13AAECDA43318BFE b1207
	static Any _0xEC3959E9950BF56B(Any p0) { return invoker::Invoke<Any>(0xEC3959E9950BF56B, p0); } // 0xEC3959E9950BF56B b1207
}

namespace _NAMESPACE12
{
	static void _0xD730281E496621FB(Any p0, Any p1) { invoker::Invoke<Void>(0xD730281E496621FB, p0, p1); } // 0xD730281E496621FB b1207
	static void _0xBF6583E926D13890(Any p0, Any p1) { invoker::Invoke<Void>(0xBF6583E926D13890, p0, p1); } // 0xBF6583E926D13890 b1207
	static void _0x0A8FD91EDE7B328A(Any p0, Any p1) { invoker::Invoke<Void>(0x0A8FD91EDE7B328A, p0, p1); } // 0x0A8FD91EDE7B328A b1207
	static void _0x991E3346D788F20F(Any p0, Any p1) { invoker::Invoke<Void>(0x991E3346D788F20F, p0, p1); } // 0x991E3346D788F20F b1207
	static void _0xCE27824B5968B79A(Any p0, Any p1) { invoker::Invoke<Void>(0xCE27824B5968B79A, p0, p1); } // 0xCE27824B5968B79A b1207
	static void _0xF06CBB8CCCA823C0(Any p0, Any p1) { invoker::Invoke<Void>(0xF06CBB8CCCA823C0, p0, p1); } // 0xF06CBB8CCCA823C0 b1207
	static void _0x2917E634206B9E17(Any p0, Any p1) { invoker::Invoke<Void>(0x2917E634206B9E17, p0, p1); } // 0x2917E634206B9E17 b1207
	static void _0xD428C3F92FC3F6F8(Any p0, Any p1) { invoker::Invoke<Void>(0xD428C3F92FC3F6F8, p0, p1); } // 0xD428C3F92FC3F6F8 b1207
	static void _0xDEB369F6AD168C58(Any p0, Any p1) { invoker::Invoke<Void>(0xDEB369F6AD168C58, p0, p1); } // 0xDEB369F6AD168C58 b1207
	static void _0x1740E3DEE0AE4D27(Any p0, Any p1) { invoker::Invoke<Void>(0x1740E3DEE0AE4D27, p0, p1); } // 0x1740E3DEE0AE4D27 b1207
	static void _0x0DE02DA3C0F66955(Any p0, Any p1) { invoker::Invoke<Void>(0x0DE02DA3C0F66955, p0, p1); } // 0x0DE02DA3C0F66955 b1207
	static void _0x0F1CD8CA9E65D5F6(Any p0, Any p1) { invoker::Invoke<Void>(0x0F1CD8CA9E65D5F6, p0, p1); } // 0x0F1CD8CA9E65D5F6 b1207
	static Any _0xB7E0590C86E1711F(Any p0) { return invoker::Invoke<Any>(0xB7E0590C86E1711F, p0); } // 0xB7E0590C86E1711F b1207
	static void _0xA079FF7CFB9AC8BD(Any p0, Any p1) { invoker::Invoke<Void>(0xA079FF7CFB9AC8BD, p0, p1); } // 0xA079FF7CFB9AC8BD b1207
	static void _0x61BDA07407754A5C(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x61BDA07407754A5C, p0, p1, p2, p3); } // 0x61BDA07407754A5C b1207
	static void _0xD55A871E1CE3481B(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xD55A871E1CE3481B, p0, p1, p2, p3); } // 0xD55A871E1CE3481B b1207
	static void _0x0C6A00DAE896614C(Any p0, Any p1) { invoker::Invoke<Void>(0x0C6A00DAE896614C, p0, p1); } // 0x0C6A00DAE896614C b1207
	static void _0x8FB98B719AA0075A(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x8FB98B719AA0075A, p0, p1, p2, p3, p4); } // 0x8FB98B719AA0075A b1207
	static void _0x9C902084F48D2E6C(Any p0) { invoker::Invoke<Void>(0x9C902084F48D2E6C, p0); } // 0x9C902084F48D2E6C b1207
	static void _0xD747979C053EFA7A(Any p0) { invoker::Invoke<Void>(0xD747979C053EFA7A, p0); } // 0xD747979C053EFA7A b1207
	static void _0x3CAAD93FA5B9579A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3CAAD93FA5B9579A, p0, p1, p2); } // 0x3CAAD93FA5B9579A b1207
	static void _0x7274F84B1501B523(Any p0) { invoker::Invoke<Void>(0x7274F84B1501B523, p0); } // 0x7274F84B1501B523 b1207
	static Any _0x722FBE08EF5B87BD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x722FBE08EF5B87BD, p0, p1, p2, p3, p4); } // 0x722FBE08EF5B87BD b1207
	static void _0xCBD9EC60495C728C(Any p0) { invoker::Invoke<Void>(0xCBD9EC60495C728C, p0); } // 0xCBD9EC60495C728C b1207
	static void _0x72B7F65F11FC8896(Any p0) { invoker::Invoke<Void>(0x72B7F65F11FC8896, p0); } // 0x72B7F65F11FC8896 b1207
}

namespace _NAMESPACE13
{
	static Any _0x725D52F21A5E9E22(Any p0) { return invoker::Invoke<Any>(0x725D52F21A5E9E22, p0); } // 0x725D52F21A5E9E22 b1207
	static Any _0x729D52F61A5A9E22(Any p0) { return invoker::Invoke<Any>(0x729D52F61A5A9E22, p0); } // 0x729D52F61A5A9E22 b1207
	static Any _0x729D52461AEA9E22(Any p0) { return invoker::Invoke<Any>(0x729D52461AEA9E22, p0); } // 0x729D52461AEA9E22 b1207
	static Any _0x6C5E5D48E48B4C65(Any p0) { return invoker::Invoke<Any>(0x6C5E5D48E48B4C65, p0); } // 0x6C5E5D48E48B4C65 b1207
	static Any _0x729D54121A5E9E20(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x729D54121A5E9E20, p0, p1, p2, p3); } // 0x729D54121A5E9E20 b1207
	static void _0x725D52F26A5E9E10(Any p0, Any p1) { invoker::Invoke<Void>(0x725D52F26A5E9E10, p0, p1); } // 0x725D52F26A5E9E10 b1207
	static void _0x725D52F21A5E9E00(Any p0, Any p1) { invoker::Invoke<Void>(0x725D52F21A5E9E00, p0, p1); } // 0x725D52F21A5E9E00 b1207
	static Any _0x725D52F21A5E9E81(Any p0, Any p1) { return invoker::Invoke<Any>(0x725D52F21A5E9E81, p0, p1); } // 0x725D52F21A5E9E81 b1207
	static void _0x725D52F21A5E9E03(Any p0, Any p1) { invoker::Invoke<Void>(0x725D52F21A5E9E03, p0, p1); } // 0x725D52F21A5E9E03 b1207
	static void _0x725D52F21A5E9E04(Any p0) { invoker::Invoke<Void>(0x725D52F21A5E9E04, p0); } // 0x725D52F21A5E9E04 b1207
	static void _0x725D52F21A5E9E05(Any p0) { invoker::Invoke<Void>(0x725D52F21A5E9E05, p0); } // 0x725D52F21A5E9E05 b1207
	static void _0x725D52F21A5E9E06(Any p0) { invoker::Invoke<Void>(0x725D52F21A5E9E06, p0); } // 0x725D52F21A5E9E06 b1207
	static void _0x725D52F21A5E9E07(Any p0) { invoker::Invoke<Void>(0x725D52F21A5E9E07, p0); } // 0x725D52F21A5E9E07 b1207
	static void _0x725D52F21A5E9E08(Any p0, Any p1) { invoker::Invoke<Void>(0x725D52F21A5E9E08, p0, p1); } // 0x725D52F21A5E9E08 b1207
	static void _0x725D52F21A5E9E09(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x725D52F21A5E9E09, p0, p1, p2, p3); } // 0x725D52F21A5E9E09 b1207
	static void _0x725D52F21A5E9E50(Any p0, Any p1) { invoker::Invoke<Void>(0x725D52F21A5E9E50, p0, p1); } // 0x725D52F21A5E9E50 b1207
	static void _0x725852D21A2E9E50(Any p0) { invoker::Invoke<Void>(0x725852D21A2E9E50, p0); } // 0x725852D21A2E9E50 b1207
	static void _0x725D58F2125E5E50(Any p0, Any p1) { invoker::Invoke<Void>(0x725D58F2125E5E50, p0, p1); } // 0x725D58F2125E5E50 b1207
}

namespace _NAMESPACE14
{
	static Any _0x0FD3ECF9D0C8655F() { return invoker::Invoke<Any>(0x0FD3ECF9D0C8655F); } // 0x0FD3ECF9D0C8655F b1207
	static Any _0xCA0BAC376C541978() { return invoker::Invoke<Any>(0xCA0BAC376C541978); } // 0xCA0BAC376C541978 b1207
	static Any _0x3A66F1963B223F61() { return invoker::Invoke<Any>(0x3A66F1963B223F61); } // 0x3A66F1963B223F61 b1207
	static Any _0x7C680FF55617F82F() { return invoker::Invoke<Any>(0x7C680FF55617F82F); } // 0x7C680FF55617F82F b1207
	static Any _0xD8E3D22AA4F0E0A5() { return invoker::Invoke<Any>(0xD8E3D22AA4F0E0A5); } // 0xD8E3D22AA4F0E0A5 b1207
	static Any _0xA67F0B039D9CD513() { return invoker::Invoke<Any>(0xA67F0B039D9CD513); } // 0xA67F0B039D9CD513 b1207
	static Any _0xE72E234B30DA7B7A() { return invoker::Invoke<Any>(0xE72E234B30DA7B7A); } // 0xE72E234B30DA7B7A b1207
	static Any _0x87F005C969EF1563() { return invoker::Invoke<Any>(0x87F005C969EF1563); } // 0x87F005C969EF1563 b1207
	static Any _0x23CCAB8F40B9CBEE() { return invoker::Invoke<Any>(0x23CCAB8F40B9CBEE); } // 0x23CCAB8F40B9CBEE b1207
	static Any _0xF0D545C1EEAD614A() { return invoker::Invoke<Any>(0xF0D545C1EEAD614A); } // 0xF0D545C1EEAD614A b1207
	static Any _0x33C1D63E55FA4284() { return invoker::Invoke<Any>(0x33C1D63E55FA4284); } // 0x33C1D63E55FA4284 b1207
	static Any _0x4E42CA5BCD45444A() { return invoker::Invoke<Any>(0x4E42CA5BCD45444A); } // 0x4E42CA5BCD45444A b1207
}

namespace _NAMESPACE15
{
	static Any NETWORK_X_AFFECTS_GAMERS() { return invoker::Invoke<Any>(0xE532D6811B3A4D2A); } // 0xE532D6811B3A4D2A b1207
	static Any _NETWORK_PLAYER_IS_IN_CLAN() { return invoker::Invoke<Any>(0x579CCED0265D4896); } // 0x579CCED0265D4896 b1207
	static Any NETWORK_CLAN_PLAYER_IS_ACTIVE() { return invoker::Invoke<Any>(0xB124B57F571D8F18); } // 0xB124B57F571D8F18 b1207
	static Any NETWORK_CLAN_PLAYER_GET_DESC() { return invoker::Invoke<Any>(0xEEE6EACBE8874FBA); } // 0xEEE6EACBE8874FBA b1207
	static Any _0x1F471B79ACC90BEF() { return invoker::Invoke<Any>(0x1F471B79ACC90BEF); } // 0x1F471B79ACC90BEF b1207
	static Any NETWORK_CLAN_GET_MEMBERSHIP_DESC() { return invoker::Invoke<Any>(0x48DE78AF2C8885B8); } // 0x48DE78AF2C8885B8 b1207
	static Any _0x58D378AF2C8765B7() { return invoker::Invoke<Any>(0x58D378AF2C8765B7); } // 0x58D378AF2C8765B7 b1207
	static Any _0xC685B014CE3D988B() { return invoker::Invoke<Any>(0xC685B014CE3D988B); } // 0xC685B014CE3D988B b1207
	static Any _0x8E2143144B8E188D() { return invoker::Invoke<Any>(0x8E2143144B8E188D); } // 0x8E2143144B8E188D b1207
	static Any _0x13518FF1C6B28938() { return invoker::Invoke<Any>(0x13518FF1C6B28938); } // 0x13518FF1C6B28938 b1207
	static Any _0xA134777FF7F33331() { return invoker::Invoke<Any>(0xA134777FF7F33331); } // 0xA134777FF7F33331 b1207
	static Any _0x113E6E3E50E286B0() { return invoker::Invoke<Any>(0x113E6E3E50E286B0); } // 0x113E6E3E50E286B0 b1207
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoker::Invoke<Any>(0x9AA46BADAD0E27ED); } // 0x9AA46BADAD0E27ED b1207
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_START() { return invoker::Invoke<Any>(0xCE86D8191B762107); } // 0xCE86D8191B762107 b1207
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoker::Invoke<Any>(0xB5074DB804E28CE7); } // 0xB5074DB804E28CE7 b1207
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoker::Invoke<Any>(0x5B4F04F19376A0BA); } // 0x5B4F04F19376A0BA b1207
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_NEW() { return invoker::Invoke<Any>(0xC080FF658B2E41DA); } // 0xC080FF658B2E41DA b1207
	static Any _0xC080FF658B2E51DA() { return invoker::Invoke<Any>(0xC080FF658B2E51DA); } // 0xC080FF658B2E51DA b1207
}

namespace DATABINDING
{
	static Any _GET_DATA_CONTAINER_FROM_PATH(Any p0) { return invoker::Invoke<Any>(0x0C827D175F1292F2, p0); } // 0x0C827D175F1292F2 b1207
	static Any _GET_DATA_CONTAINER_FROM_CHILD_INDEX(Any p0, Any p1) { return invoker::Invoke<Any>(0x0C827D175F1292F3, p0, p1); } // 0x0C827D175F1292F3 b1207
	static Any _0xD7DB94AB78E8EBE4() { return invoker::Invoke<Any>(0xD7DB94AB78E8EBE4); } // 0xD7DB94AB78E8EBE4 b1207
	static Any _ADD_DATA_CONTAINER_FROM_PATH(Any p0, Any p1) { return invoker::Invoke<Any>(0x0C827D175F1292F4, p0, p1); } // 0x0C827D175F1292F4 b1207
	static Any _ADD_DATA_CONTAINER_BY_HASH(Any p0, Any p1) { return invoker::Invoke<Any>(0x98BB14345BB68257, p0, p1); } // 0x98BB14345BB68257 b1207
	static Any _ADD_DATA_CONTAINER(Any p0, Any p1) { return invoker::Invoke<Any>(0xEB4F9A3537EEABCD, p0, p1); } // 0xEB4F9A3537EEABCD b1207
	static Any _ADD_DATA_BOOL_FROM_PATH(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x37BB86A751148A6A, p0, p1, p2); } // 0x37BB86A751148A6A b1207
	static Any _ADD_DATA_BOOL_BY_HASH(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xBC95D3AE2ECA70D6, p0, p1, p2); } // 0xBC95D3AE2ECA70D6 b1207
	static Any _ADD_DATA_BOOL(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x58BAA5F635DA2FF4, p0, p1, p2); } // 0x58BAA5F635DA2FF4 b1207
	static Any _ADD_DATA_INT_BY_HASH(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x267F9527F4350ADE, p0, p1, p2); } // 0x267F9527F4350ADE b1207
	static Any _ADD_DATA_INT(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x307A3247C5457BDE, p0, p1, p2); } // 0x307A3247C5457BDE b1207
	static Any _ADD_DATA_FLOAT(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x5154228273ADB9A6, p0, p1, p2); } // 0x5154228273ADB9A6 b1207
	static Any _ADD_DATA_HASH_BY_HASH(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x8E173DFB041993C6, p0, p1, p2); } // 0x8E173DFB041993C6 b1207
	static Any _ADD_DATA_HASH(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x8538F1205D60ECA6, p0, p1, p2); } // 0x8538F1205D60ECA6 b1207
	static Any _0xA381DE86EE170C4A() { return invoker::Invoke<Any>(0xA381DE86EE170C4A); } // 0xA381DE86EE170C4A b1207
	static Any _ADD_DATA_STRING_BY_HASH(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xEAD09E76E22630C3, p0, p1, p2); } // 0xEAD09E76E22630C3 b1207
	static Any _ADD_DATA_STRING(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x617FCA1C5652BBAD, p0, p1, p2); } // 0x617FCA1C5652BBAD b1207
	static Any _ADD_DATA_GANG_ID(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x7D0F2014DB28DD00, p0, p1, p2); } // 0x7D0F2014DB28DD00 b1207
	static Any _0x7D0F2014DB28DD01() { return invoker::Invoke<Any>(0x7D0F2014DB28DD01); } // 0x7D0F2014DB28DD01 b1207
	static Any _0x294AF5323F44B053() { return invoker::Invoke<Any>(0x294AF5323F44B053); } // 0x294AF5323F44B053 b1207
	static Any _ADD_UI_ITEM_LIST_FROM_PATH(Any p0, Any p1) { return invoker::Invoke<Any>(0xDB5B9A474148F699, p0, p1); } // 0xDB5B9A474148F699 b1207
	static Any _ADD_UI_ITEM_LIST_BY_HASH(Any p0, Any p1) { return invoker::Invoke<Any>(0x3C7799283325181B, p0, p1); } // 0x3C7799283325181B b1207
	static Any _ADD_UI_ITEM_LIST(Any p0, Any p1) { return invoker::Invoke<Any>(0xFE74FA57E0CE6824, p0, p1); } // 0xFE74FA57E0CE6824 b1207
	static void _INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x5859E970794D92F3, p0, p1, p2, p3); } // 0x5859E970794D92F3 b1207
	static void _INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xEE97A05C05F16E41, p0, p1, p2, p3); } // 0xEE97A05C05F16E41 b1207
	static void _INSERT_UI_ITEM_TO_LIST_FROM_PATH_STRING_ALIAS(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x5740774F608E4FC8, p0, p1, p2, p3); } // 0x5740774F608E4FC8 b1207
	static void _0x6318FB3BE37E11B3(Any p0, Any p1) { invoker::Invoke<Void>(0x6318FB3BE37E11B3, p0, p1); } // 0x6318FB3BE37E11B3 b1207
	static void _REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Any p0, Any p1) { invoker::Invoke<Void>(0xF68B1726EAF7B285, p0, p1); } // 0xF68B1726EAF7B285 b1207
	static void _CLEAR_BINDING_ARRAY(Any p0) { invoker::Invoke<Void>(0xA1F15C1D03DF802D, p0); } // 0xA1F15C1D03DF802D b1207
	static Any _GET_ITEM_CONTEXT_BY_INDEX(Any p0, Any p1) { return invoker::Invoke<Any>(0xE96D7F9FEFCC105F, p0, p1); } // 0xE96D7F9FEFCC105F b1207
	static void _SET_TEMPLATED_UI_ITEM_LIST_SIZE(Any p0, Any p1) { invoker::Invoke<Void>(0xFE74FA57E0CE6825, p0, p1); } // 0xFE74FA57E0CE6825 b1207
	static void _SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0AE7138D0541F2DE, p0, p1, p2); } // 0x0AE7138D0541F2DE b1207
	static Any _0xD48993A61938C64D() { return invoker::Invoke<Any>(0xD48993A61938C64D); } // 0xD48993A61938C64D b1207
	static Any _ADD_HASH_ARRAY(Any p0, Any p1) { return invoker::Invoke<Any>(0x52F5F08278EA5D75, p0, p1); } // 0x52F5F08278EA5D75 b1207
	static Any _ADD_STRING_ARRAY(Any p0, Any p1) { return invoker::Invoke<Any>(0x1B23E0627BDBFE85, p0, p1); } // 0x1B23E0627BDBFE85 b1207
	static Any _0x1919D59E60FD516E() { return invoker::Invoke<Any>(0x1919D59E60FD516E); } // 0x1919D59E60FD516E b1207
	static Any _0x7FC60C94C83C5CD7() { return invoker::Invoke<Any>(0x7FC60C94C83C5CD7); } // 0x7FC60C94C83C5CD7 b1207
	static Any _0xC900CEC8A172375B() { return invoker::Invoke<Any>(0xC900CEC8A172375B); } // 0xC900CEC8A172375B b1207
	static Any _0x02B21B6BEEDD83CC() { return invoker::Invoke<Any>(0x02B21B6BEEDD83CC); } // 0x02B21B6BEEDD83CC b1207
	static Any _0xF47E33F8D2523825() { return invoker::Invoke<Any>(0xF47E33F8D2523825); } // 0xF47E33F8D2523825 b1207
	static Any _0x3BF0767CF33FCC88() { return invoker::Invoke<Any>(0x3BF0767CF33FCC88); } // 0x3BF0767CF33FCC88 b1207
	static Any _GET_ARRAY_COUNT(Any p0) { return invoker::Invoke<Any>(0xD23F5DE04FE717E2, p0); } // 0xD23F5DE04FE717E2 b1207
	static void _WRITE_DATA_SCRIPT_VARIABLES(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xAB888B4B91046771, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xAB888B4B91046771 b1207
	static void _WRITE_DATA_BOOL(Any p0, Any p1) { invoker::Invoke<Void>(0xAB888B4B91046770, p0, p1); } // 0xAB888B4B91046770 b1207
	static void _WRITE_DATA_BOOL_FROM_PARENT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBDFE546E4C2D0E21, p0, p1, p2); } // 0xBDFE546E4C2D0E21 b1207
	static Any _0xBFC83DA249BEFCC9() { return invoker::Invoke<Any>(0xBFC83DA249BEFCC9); } // 0xBFC83DA249BEFCC9 b1207
	static void _WRITE_DATA_INT(Any p0, Any p1) { invoker::Invoke<Void>(0x335C3F6B3766B8D9, p0, p1); } // 0x335C3F6B3766B8D9 b1207
	static void _WRITE_DATA_INT_FROM_PARENT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x9EFA98238BA08FC4, p0, p1, p2); } // 0x9EFA98238BA08FC4 b1207
	static void _WRITE_DATA_INT_FROM_PARENT_BY_HASH(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x9D6E10A41D6ED6EC, p0, p1, p2); } // 0x9D6E10A41D6ED6EC b1207
	static void _WRITE_DATA_FLOAT(Any p0, Any p1) { invoker::Invoke<Void>(0xDF504BECEB15DA93, p0, p1); } // 0xDF504BECEB15DA93 b1207
	static Any _0x05AC9E1E02975AFB() { return invoker::Invoke<Any>(0x05AC9E1E02975AFB); } // 0x05AC9E1E02975AFB b1207
	static void _WRITE_DATA_HASH_STRING(Any p0, Any p1) { invoker::Invoke<Void>(0xACDEF586BD71B1FD, p0, p1); } // 0xACDEF586BD71B1FD b1207
	static void _WRITE_DATA_HASH_STRING_FROM_PARENT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0971F04E1EAA7AE8, p0, p1, p2); } // 0x0971F04E1EAA7AE8 b1207
	static void _WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x20209529689E0953, p0, p1, p2); } // 0x20209529689E0953 b1207
	static void _WRITE_DATA_STRING(Any p0, Any p1) { invoker::Invoke<Void>(0xE1BD342F2872AEE9, p0, p1); } // 0xE1BD342F2872AEE9 b1207
	static void _WRITE_DATA_STRING_FROM_PARENT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4FF713B2F17A391E, p0, p1, p2); } // 0x4FF713B2F17A391E b1207
	static Any _0xA3BD6FF95E713EE5() { return invoker::Invoke<Any>(0xA3BD6FF95E713EE5); } // 0xA3BD6FF95E713EE5 b1207
	static Any _0xC70041408E16BE2D() { return invoker::Invoke<Any>(0xC70041408E16BE2D); } // 0xC70041408E16BE2D b1207
	static Any _0xC70041408E16BE2E() { return invoker::Invoke<Any>(0xC70041408E16BE2E); } // 0xC70041408E16BE2E b1207
	static Any _0x422179C7F6AD9304() { return invoker::Invoke<Any>(0x422179C7F6AD9304); } // 0x422179C7F6AD9304 b1207
	static Any _READ_DATA_BOOL(Any p0) { return invoker::Invoke<Any>(0x5EEFBD4B6D7CD6EB, p0); } // 0x5EEFBD4B6D7CD6EB b1207
	static Any _READ_DATA_BOOL_FROM_PARENT(Any p0, Any p1) { return invoker::Invoke<Any>(0xA8EDE09FE07BD77F, p0, p1); } // 0xA8EDE09FE07BD77F b1207
	static Any _READ_DATA_BOOL_FROM_PARENT_BY_HASH(Any p0, Any p1) { return invoker::Invoke<Any>(0x4CDC3FDDFAE07EB3, p0, p1); } // 0x4CDC3FDDFAE07EB3 b1207
	static Any _READ_DATA_INT(Any p0) { return invoker::Invoke<Any>(0x570784D782597512, p0); } // 0x570784D782597512 b1207
	static Any _READ_DATA_INT_FROM_PARENT(Any p0, Any p1) { return invoker::Invoke<Any>(0xFFC566A4801F6B40, p0, p1); } // 0xFFC566A4801F6B40 b1207
	static Any _READ_DATA_INT_FROM_PARENT_BY_HASH(Any p0, Any p1) { return invoker::Invoke<Any>(0xB5F668B648EC0970, p0, p1); } // 0xB5F668B648EC0970 b1207
	static Any _0x5FE444EB67C70AD4() { return invoker::Invoke<Any>(0x5FE444EB67C70AD4); } // 0x5FE444EB67C70AD4 b1207
	static Any _0x81D7183E7A8ECA72() { return invoker::Invoke<Any>(0x81D7183E7A8ECA72); } // 0x81D7183E7A8ECA72 b1207
	static Any _READ_DATA_HASH_STRING_FROM_PARENT(Any p0, Any p1) { return invoker::Invoke<Any>(0x9B535990B01B62DE, p0, p1); } // 0x9B535990B01B62DE b1207
	static Any _READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(Any p0, Any p1) { return invoker::Invoke<Any>(0x1F43BC25A119B252, p0, p1); } // 0x1F43BC25A119B252 b1207
	static Any _READ_DATA_STRING(Any p0) { return invoker::Invoke<Any>(0x3D290B5FFA7C5151, p0); } // 0x3D290B5FFA7C5151 b1207
	static Any _READ_DATA_STRING_FROM_PARENT(Any p0, Any p1) { return invoker::Invoke<Any>(0x6323AD277C4A2AFB, p0, p1); } // 0x6323AD277C4A2AFB b1207
	static Any _0x6329C34BEE5BFF4B() { return invoker::Invoke<Any>(0x6329C34BEE5BFF4B); } // 0x6329C34BEE5BFF4B b1207
	static Any _0xE6AAB897120492D6() { return invoker::Invoke<Any>(0xE6AAB897120492D6); } // 0xE6AAB897120492D6 b1207
	static Any _0xE6AAB897120492D7() { return invoker::Invoke<Any>(0xE6AAB897120492D7); } // 0xE6AAB897120492D7 b1207
	static Any _0xB138CA787F3DD858() { return invoker::Invoke<Any>(0xB138CA787F3DD858); } // 0xB138CA787F3DD858 b1207
	static Any _IS_DATA_ID_VALID(Any p0) { return invoker::Invoke<Any>(0x1E7130793AAAAB8D, p0); } // 0x1E7130793AAAAB8D b1207
	static void _REMOVE_DATA_ENTRY(Any p0) { invoker::Invoke<Void>(0x0AE9938D0541F2DA, p0); } // 0x0AE9938D0541F2DA b1207
	static void _VIRTUAL_COLLECTION_SET_SIZE(Any p0, Any p1) { invoker::Invoke<Void>(0x9DCE9B01A93B58BC, p0, p1); } // 0x9DCE9B01A93B58BC b1207
	static void _VIRTUAL_COLLECTION_SET_INTEREST_INDEX(Any p0, Any p1) { invoker::Invoke<Void>(0x49A8447533308BCF, p0, p1); } // 0x49A8447533308BCF b1207
	static void _VIRTUAL_COLLECTION_ADD_ITEM(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x6DCBF187221CF73D, p0, p1, p2, p3); } // 0x6DCBF187221CF73D b1207
	static void _VIRTUAL_COLLECTION_RESET(Any p0) { invoker::Invoke<Void>(0x09D95666ED2B5F60, p0); } // 0x09D95666ED2B5F60 b1207
	static Any _DOES_VIRTUAL_COLLECTION_EXIST(Any p0) { return invoker::Invoke<Any>(0x37963B56755BFB35, p0); } // 0x37963B56755BFB35 b1207
}

namespace DATAFILE
{
	static Any _0xA5834834CA8FD7FC() { return invoker::Invoke<Any>(0xA5834834CA8FD7FC); } // 0xA5834834CA8FD7FC b1207
	static Any _0x17279C820464CEE0() { return invoker::Invoke<Any>(0x17279C820464CEE0); } // 0x17279C820464CEE0 b1207
	static Any _0xE60100389E50EADE() { return invoker::Invoke<Any>(0xE60100389E50EADE); } // 0xE60100389E50EADE b1207
	static Any _0x46102A0989AD80B5() { return invoker::Invoke<Any>(0x46102A0989AD80B5); } // 0x46102A0989AD80B5 b1207
	static Any _0x604B8ED1A482F9DF() { return invoker::Invoke<Any>(0x604B8ED1A482F9DF); } // 0x604B8ED1A482F9DF b1207
	static Any _0xE79C70E77E0973C7() { return invoker::Invoke<Any>(0xE79C70E77E0973C7); } // 0xE79C70E77E0973C7 b1207
	static Any _0x790EC421078F5C4E() { return invoker::Invoke<Any>(0x790EC421078F5C4E); } // 0x790EC421078F5C4E b1207
	static Any _0x56B7291FB953DD51() { return invoker::Invoke<Any>(0x56B7291FB953DD51); } // 0x56B7291FB953DD51 b1207
	static Any _0x9FB90EEDEA9F2D5C() { return invoker::Invoke<Any>(0x9FB90EEDEA9F2D5C); } // 0x9FB90EEDEA9F2D5C b1207
	static Any _0xBBD8CF823CAE557C() { return invoker::Invoke<Any>(0xBBD8CF823CAE557C); } // 0xBBD8CF823CAE557C b1207
	static Any _0x4607D57C5F7D332A() { return invoker::Invoke<Any>(0x4607D57C5F7D332A); } // 0x4607D57C5F7D332A b1207
	static Any _0xB04B69CF277D15C0() { return invoker::Invoke<Any>(0xB04B69CF277D15C0); } // 0xB04B69CF277D15C0 b1207
	static Any _0x26FDF5E99AA2F3E9() { return invoker::Invoke<Any>(0x26FDF5E99AA2F3E9); } // 0x26FDF5E99AA2F3E9 b1207
	static Any _0x175E915A486EE548() { return invoker::Invoke<Any>(0x175E915A486EE548); } // 0x175E915A486EE548 b1207
	static Any _0x9D896A3B87D96E2B() { return invoker::Invoke<Any>(0x9D896A3B87D96E2B); } // 0x9D896A3B87D96E2B b1207
	static Any _0x814643ECA258ADF5() { return invoker::Invoke<Any>(0x814643ECA258ADF5); } // 0x814643ECA258ADF5 b1207
	static Any _0xE37B38C0B4E95DFA() { return invoker::Invoke<Any>(0xE37B38C0B4E95DFA); } // 0xE37B38C0B4E95DFA b1207
	static Any _0xE459C941431E0FFA() { return invoker::Invoke<Any>(0xE459C941431E0FFA); } // 0xE459C941431E0FFA b1207
	static Any _0x4D7A30130F46AC9C() { return invoker::Invoke<Any>(0x4D7A30130F46AC9C); } // 0x4D7A30130F46AC9C b1207
	static Any _0x1B5447CF18544B18() { return invoker::Invoke<Any>(0x1B5447CF18544B18); } // 0x1B5447CF18544B18 b1207
	static Any _0x92E11E3CA4C7CDF0() { return invoker::Invoke<Any>(0x92E11E3CA4C7CDF0); } // 0x92E11E3CA4C7CDF0 b1207
	static Any _0xBC0DF006A4952C68() { return invoker::Invoke<Any>(0xBC0DF006A4952C68); } // 0xBC0DF006A4952C68 b1207
	static Any _0x9F130129EBC31B34() { return invoker::Invoke<Any>(0x9F130129EBC31B34); } // 0x9F130129EBC31B34 b1207
	static Any _0x277251C161B4C3F4() { return invoker::Invoke<Any>(0x277251C161B4C3F4); } // 0x277251C161B4C3F4 b1207
	static Any _0x1C65CC931C0F946F() { return invoker::Invoke<Any>(0x1C65CC931C0F946F); } // 0x1C65CC931C0F946F b1207
	static Any _0x7681B677400C7071() { return invoker::Invoke<Any>(0x7681B677400C7071); } // 0x7681B677400C7071 b1207
	static Any _0xAB1231D2DE52F2D3() { return invoker::Invoke<Any>(0xAB1231D2DE52F2D3); } // 0xAB1231D2DE52F2D3 b1207
	static Any _0x96DEA500B6EBBE53() { return invoker::Invoke<Any>(0x96DEA500B6EBBE53); } // 0x96DEA500B6EBBE53 b1207
	static Any _0xA9D003CF419CB81E() { return invoker::Invoke<Any>(0xA9D003CF419CB81E); } // 0xA9D003CF419CB81E b1207
	static Any _0xB6790A8FF80F889F() { return invoker::Invoke<Any>(0xB6790A8FF80F889F); } // 0xB6790A8FF80F889F b1207
	static Any _0x850DA2750DA14E9A() { return invoker::Invoke<Any>(0x850DA2750DA14E9A); } // 0x850DA2750DA14E9A b1207
	static Any _0xA010655985853485() { return invoker::Invoke<Any>(0xA010655985853485); } // 0xA010655985853485 b1207
	static Any _0x6A885BF69239E539() { return invoker::Invoke<Any>(0x6A885BF69239E539); } // 0x6A885BF69239E539 b1207
	static Any _0x151DAFE6B3B9888F() { return invoker::Invoke<Any>(0x151DAFE6B3B9888F); } // 0x151DAFE6B3B9888F b1207
	static Any _0x4F9E3ED7617123AC(Any p0) { return invoker::Invoke<Any>(0x4F9E3ED7617123AC, p0); } // 0x4F9E3ED7617123AC b1207
	static Any _0xCA56DD6AB7A39F64(Any p0) { return invoker::Invoke<Any>(0xCA56DD6AB7A39F64, p0); } // 0xCA56DD6AB7A39F64 b1207
	static Any _0xD97D8D905F1562F2(Any p0) { return invoker::Invoke<Any>(0xD97D8D905F1562F2, p0); } // 0xD97D8D905F1562F2 b1207
	static void _DATAFILE_UNLOAD(Any p0) { invoker::Invoke<Void>(0x129567F0C05F81B9, p0); } // 0x129567F0C05F81B9 b1207
	static Any _0x7907969497EA92F5(Any p0) { return invoker::Invoke<Any>(0x7907969497EA92F5, p0); } // 0x7907969497EA92F5 b1207
	static Any _0x603AC35FD4602C76(Any p0) { return invoker::Invoke<Any>(0x603AC35FD4602C76, p0); } // 0x603AC35FD4602C76 b1207
	static void _0x3168BA5D6DECE323() { invoker::Invoke<Void>(0x3168BA5D6DECE323); } // 0x3168BA5D6DECE323 b1207
	static Any _DATAFILE_REGISTER_QUERY(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xAE156A747C39A741, p0, p1, p2); } // 0xAE156A747C39A741 b1207
	static Any _DATAFILE_GET_DATA_NODE_INDEX(Any p0, Any p1) { return invoker::Invoke<Any>(0x83C3ED532B6E5D07, p0, p1); } // 0x83C3ED532B6E5D07 b1207
	static Any _DATAFILE_GET_NUM_NODES(Any p0) { return invoker::Invoke<Any>(0xDF01B1F7A886B42D, p0); } // 0xDF01B1F7A886B42D b1207
	static Any _0xE13634BB6BAF0734() { return invoker::Invoke<Any>(0xE13634BB6BAF0734); } // 0xE13634BB6BAF0734 b1207
	static Any _DATAFILE_GET_NUM_CHILDREN(Any p0, Any p1) { return invoker::Invoke<Any>(0x6BEB168D5195E7AB, p0, p1); } // 0x6BEB168D5195E7AB b1207
	static Any _DATAFILE_GET_HASH(Any p0, Any p1) { return invoker::Invoke<Any>(0xFBFF3FF2F5E80C0B, p0, p1); } // 0xFBFF3FF2F5E80C0B b1207
	static Any _DATAFILE_GET_STRING(Any p0, Any p1) { return invoker::Invoke<Any>(0x08EAF8E9F2EB7B2E, p0, p1); } // 0x08EAF8E9F2EB7B2E b1207
	static Any _DATAFILE_GET_VECTOR(Any p0, Any p1) { return invoker::Invoke<Any>(0x06FBF89B12DA279C, p0, p1); } // 0x06FBF89B12DA279C b1207
	static Any _DATAFILE_GET_FLOAT(Any p0, Any p1) { return invoker::Invoke<Any>(0x7F034FC3E891B57A, p0, p1); } // 0x7F034FC3E891B57A b1207
	static Any _DATAFILE_GET_INT(Any p0, Any p1) { return invoker::Invoke<Any>(0xEF44ACC657352A35, p0, p1); } // 0xEF44ACC657352A35 b1207
	static Any _DATAFILE_GET_BOOL(Any p0, Any p1) { return invoker::Invoke<Any>(0x0D9138F3F8261DF7, p0, p1); } // 0x0D9138F3F8261DF7 b1207
	static void _0x91DED5DD64BB2691(Any p0) { invoker::Invoke<Void>(0x91DED5DD64BB2691, p0); } // 0x91DED5DD64BB2691 b1207
	static Any _0xED4413CEE1BF142C(Any p0) { return invoker::Invoke<Any>(0xED4413CEE1BF142C, p0); } // 0xED4413CEE1BF142C b1207
	static Any _0xB2B42607F7867576() { return invoker::Invoke<Any>(0xB2B42607F7867576); } // 0xB2B42607F7867576 b1207
	static Any _0x52FC26D2D2FC2987(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x52FC26D2D2FC2987, p0, p1, p2); } // 0x52FC26D2D2FC2987 b1207
	static Any _0x44B3A36933AC009C(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x44B3A36933AC009C, p0, p1, p2); } // 0x44B3A36933AC009C b1207
	static Any _0xA63CD20F19B961AB(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xA63CD20F19B961AB, p0, p1, p2); } // 0xA63CD20F19B961AB b1207
}

namespace _NAMESPACE18
{
	static Any _0xACF9CB705BEFA8CB() { return invoker::Invoke<Any>(0xACF9CB705BEFA8CB); } // 0xACF9CB705BEFA8CB b1207
	static Any _0xA8D970D8A72640A6() { return invoker::Invoke<Any>(0xA8D970D8A72640A6); } // 0xA8D970D8A72640A6 b1207
	static Any _0x05A5F662AD35C573() { return invoker::Invoke<Any>(0x05A5F662AD35C573); } // 0x05A5F662AD35C573 b1207
}

namespace DECORATOR
{
	static Any DECOR_SET_BOOL(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xFE26E4609B1C3772, p0, p1, p2); } // 0xFE26E4609B1C3772 b1207
	static Any DECOR_SET_FLOAT(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x238F8B0C1C7FE834, p0, p1, p2); } // 0x238F8B0C1C7FE834 b1207
	static Any DECOR_SET_INT(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xE88F4D7F52A6090F, p0, p1, p2); } // 0xE88F4D7F52A6090F b1207
	static Any _0x4BDC83150D43772D() { return invoker::Invoke<Any>(0x4BDC83150D43772D); } // 0x4BDC83150D43772D b1207
	static Any _0x0671C1A3FF7AFDFC(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x0671C1A3FF7AFDFC, p0, p1, p2); } // 0x0671C1A3FF7AFDFC b1207
	static Any DECOR_GET_BOOL(Any p0, Any p1) { return invoker::Invoke<Any>(0xDEF3F1B071ABB197, p0, p1); } // 0xDEF3F1B071ABB197 b1207
	static Any DECOR_GET_FLOAT(Any p0, Any p1) { return invoker::Invoke<Any>(0xE5FF70CD842CA9D4, p0, p1); } // 0xE5FF70CD842CA9D4 b1207
	static Any DECOR_GET_INT(Any p0, Any p1) { return invoker::Invoke<Any>(0x44DB62727762FD9B, p0, p1); } // 0x44DB62727762FD9B b1207
	static Any _0xB1682B2443F0540B() { return invoker::Invoke<Any>(0xB1682B2443F0540B); } // 0xB1682B2443F0540B b1207
	static Any DECOR_EXIST_ON(Any p0, Any p1) { return invoker::Invoke<Any>(0xD9D1CDBF3464DCDF, p0, p1); } // 0xD9D1CDBF3464DCDF b1207
	static Any DECOR_REMOVE(Any p0, Any p1) { return invoker::Invoke<Any>(0x2BA7F5877A088A1D, p0, p1); } // 0x2BA7F5877A088A1D b1207
	static Any _0x88942780E0ADEA42(Any p0) { return invoker::Invoke<Any>(0x88942780E0ADEA42, p0); } // 0x88942780E0ADEA42 b1207
	static void DECOR_REGISTER(Any p0, Any p1) { invoker::Invoke<Void>(0x0B253D644E3C36B3, p0, p1); } // 0x0B253D644E3C36B3 b1207
	static void _0x4587374F88B7F6C2(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4587374F88B7F6C2, p0, p1, p2); } // 0x4587374F88B7F6C2 b1207
	static Any _0x72355278C069F272() { return invoker::Invoke<Any>(0x72355278C069F272); } // 0x72355278C069F272 b1207
}

namespace DLC
{
	static Any IS_DLC_PRESENT(Any p0) { return invoker::Invoke<Any>(0x2763DC12BBE2BB6F, p0); } // 0x2763DC12BBE2BB6F b1207
	static Any GET_IS_LOADING_SCREEN_ACTIVE() { return invoker::Invoke<Any>(0x71D4BF5890659B0C); } // 0x71D4BF5890659B0C b1207
	static Any _0xA16B4FBA7887D7BA() { return invoker::Invoke<Any>(0xA16B4FBA7887D7BA); } // 0xA16B4FBA7887D7BA b1207
	static Any _0x1DB9D61E505AE3FC() { return invoker::Invoke<Any>(0x1DB9D61E505AE3FC); } // 0x1DB9D61E505AE3FC b1207
}

namespace ENTITY
{
	static Any DOES_ENTITY_EXIST(Any p0) { return invoker::Invoke<Any>(0xD42BD6EB2E0F1677, p0); } // 0xD42BD6EB2E0F1677 b1207
	static Any DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Any p0, Any p1) { return invoker::Invoke<Any>(0x622B1980CBE13332, p0, p1); } // 0x622B1980CBE13332 b1207
	static Any DOES_ENTITY_HAVE_DRAWABLE(Any p0) { return invoker::Invoke<Any>(0x20487F0DA9AF164A, p0); } // 0x20487F0DA9AF164A b1207
	static Any DOES_ENTITY_HAVE_PHYSICS(Any p0) { return invoker::Invoke<Any>(0xA512B3F1B2A0B51C, p0); } // 0xA512B3F1B2A0B51C b1207
	static Any HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Any p0) { return invoker::Invoke<Any>(0x73BB763880CD23A6, p0); } // 0x73BB763880CD23A6 b1207
	static Any HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Any p0) { return invoker::Invoke<Any>(0x9934E9C42D52D87E, p0); } // 0x9934E9C42D52D87E b1207
	static Any HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Any p0) { return invoker::Invoke<Any>(0x695D7C26DE65C423, p0); } // 0x695D7C26DE65C423 b1207
	static Any HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x7B6E7BEC1143AC86, p0, p1, p2, p3); } // 0x7B6E7BEC1143AC86 b1207
	static Any _0x3EC28DA1FFAC9DDD(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x3EC28DA1FFAC9DDD, p0, p1, p2, p3); } // 0x3EC28DA1FFAC9DDD b1207
	static Any HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xFCDFF7B72D23A1AC, p0, p1, p2); } // 0xFCDFF7B72D23A1AC b1207
	static Any _0x0C9DBF48C6BA6E4C(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x0C9DBF48C6BA6E4C, p0, p1, p2, p3, p4); } // 0x0C9DBF48C6BA6E4C b1207
	static Any HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xE88F19660651D566, p0, p1, p2); } // 0xE88F19660651D566 b1207
	static Any HAS_ENTITY_COLLIDED_WITH_ANYTHING(Any p0) { return invoker::Invoke<Any>(0xDF18751EC74F90FF, p0); } // 0xDF18751EC74F90FF b1207
	static Any _0x6D58167F62238284(Any p0) { return invoker::Invoke<Any>(0x6D58167F62238284, p0); } // 0x6D58167F62238284 b1207
	static Any _0xDFC2B226D56D85F6(Any p0, Any p1) { return invoker::Invoke<Any>(0xDFC2B226D56D85F6, p0, p1); } // 0xDFC2B226D56D85F6 b1207
	static Any GET_ANIM_DURATION(Any p0, Any p1) { return invoker::Invoke<Any>(0x9FFAF4940A54CC09, p0, p1); } // 0x9FFAF4940A54CC09 b1207
	static Any GET_ENTITY_ATTACHED_TO(Any p0) { return invoker::Invoke<Any>(0x56D713888A566481, p0); } // 0x56D713888A566481 b1207
	static Vector3 GET_ENTITY_COORDS(Entity entity, Any p1, Any p2) { return invoker::Invoke<Vector3>(0xA86D5F069399F44D, entity, p1, p2); } // 0xA86D5F069399F44D b1207
	static Any GET_ENTITY_FORWARD_VECTOR(Any p0) { return invoker::Invoke<Any>(0x2412D9C05BB09B97, p0); } // 0x2412D9C05BB09B97 b1207
	static Any GET_ENTITY_FORWARD_X(Any p0) { return invoker::Invoke<Any>(0xDB0954E9960F6457, p0); } // 0xDB0954E9960F6457 b1207
	static Any GET_ENTITY_FORWARD_Y(Any p0) { return invoker::Invoke<Any>(0x9A5C073ECBDA7EE7, p0); } // 0x9A5C073ECBDA7EE7 b1207
	static Any _0x935A30AA88FB1014(Any p0) { return invoker::Invoke<Any>(0x935A30AA88FB1014, p0); } // 0x935A30AA88FB1014 b1207
	static Any GET_ENTITY_HEADING(Any p0) { return invoker::Invoke<Any>(0xC230DD956E2F5507, p0); } // 0xC230DD956E2F5507 b1207
	static Any GET_ENTITY_HEALTH(Any p0) { return invoker::Invoke<Any>(0x82368787EA73C0F7, p0); } // 0x82368787EA73C0F7 b1207
	static Any _0x96C638784DB4C815(Any p0) { return invoker::Invoke<Any>(0x96C638784DB4C815, p0); } // 0x96C638784DB4C815 b1207
	static Any _0x835F131E7DC8F97A(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x835F131E7DC8F97A, p0, p1, p2); } // 0x835F131E7DC8F97A b1207
	static Any GET_ENTITY_MAX_HEALTH(Any p0, Any p1) { return invoker::Invoke<Any>(0x15D757606D170C3C, p0, p1); } // 0x15D757606D170C3C b1207
	static void SET_ENTITY_MAX_HEALTH(Any p0, Any p1) { invoker::Invoke<Void>(0x166E7CF68597D8B5, p0, p1); } // 0x166E7CF68597D8B5 b1207
	static Any GET_ENTITY_HEIGHT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x296DEBC84474B375, p0, p1, p2, p3, p4, p5); } // 0x296DEBC84474B375 b1207
	static Any GET_ENTITY_HEIGHT_ABOVE_GROUND(Any p0) { return invoker::Invoke<Any>(0x0D3B5BAEA08F63E9, p0); } // 0x0D3B5BAEA08F63E9 b1207
	static Any _0xF3FDA9A617A15145() { return invoker::Invoke<Any>(0xF3FDA9A617A15145); } // 0xF3FDA9A617A15145 b1207
	static void GET_ENTITY_MATRIX(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x3A9B1120AF13FBF2, p0, p1, p2, p3, p4); } // 0x3A9B1120AF13FBF2 b1207
	static Any GET_ENTITY_MODEL(Any p0) { return invoker::Invoke<Any>(0xDA76A9F39210D365, p0); } // 0xDA76A9F39210D365 b1207
	static Any _0x964000D355219FC0(Any p0) { return invoker::Invoke<Any>(0x964000D355219FC0, p0); } // 0x964000D355219FC0 b1207
	static Any _0x9A100F1CF4546629(Any p0) { return invoker::Invoke<Any>(0x9A100F1CF4546629, p0); } // 0x9A100F1CF4546629 b1207
	static Any _0xC346A546612C49A9(Any p0) { return invoker::Invoke<Any>(0xC346A546612C49A9, p0); } // 0xC346A546612C49A9 b1207
	static Any _0x5594AFE9DE0C01B7(Any p0) { return invoker::Invoke<Any>(0x5594AFE9DE0C01B7, p0); } // 0x5594AFE9DE0C01B7 b1207
	static Any GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x497C6B1A2C9AE69C, p0, p1, p2, p3); } // 0x497C6B1A2C9AE69C b1207
	static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float x, float y, float z) { return invoker::Invoke<Vector3>(0x1899F328B0E12848, entity, x, y, z); } // 0x1899F328B0E12848 b1207
	static Any _0xEF355ABEFF7F5005() { return invoker::Invoke<Any>(0xEF355ABEFF7F5005); } // 0xEF355ABEFF7F5005 b1207
	static Any GET_ENTITY_ROLL(Any p0) { return invoker::Invoke<Any>(0xBF966536FA8B6879, p0); } // 0xBF966536FA8B6879 b1207
	static Any GET_ENTITY_ROTATION(Any p0, Any p1) { return invoker::Invoke<Any>(0xE09CAF86C32CB48F, p0, p1); } // 0xE09CAF86C32CB48F b1207
	static Any _0x2A08A32B6D49906F(Any p0, Any p1) { return invoker::Invoke<Any>(0x2A08A32B6D49906F, p0, p1); } // 0x2A08A32B6D49906F b1207
	static Any GET_ENTITY_SPEED(Any p0) { return invoker::Invoke<Any>(0xFB6BA510A533DF81, p0); } // 0xFB6BA510A533DF81 b1207
	static Any _0xF2DB09816A419DC5() { return invoker::Invoke<Any>(0xF2DB09816A419DC5); } // 0xF2DB09816A419DC5 b1207
	static Any GET_ENTITY_UPRIGHT_VALUE(Any p0) { return invoker::Invoke<Any>(0x56398BE65160C3BE, p0); } // 0x56398BE65160C3BE b1207
	static Any GET_ENTITY_VELOCITY(Any p0, Any p1) { return invoker::Invoke<Any>(0x4805D2B1D8CF94A9, p0, p1); } // 0x4805D2B1D8CF94A9 b1207
	static Any GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Any p0) { return invoker::Invoke<Any>(0x280BBE5601EAA983, p0); } // 0x280BBE5601EAA983 b1207
	static Any GET_PED_INDEX_FROM_ENTITY_INDEX(Any p0) { return invoker::Invoke<Any>(0x0F16D042BD640EA3, p0); } // 0x0F16D042BD640EA3 b1207
	static Any GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Any p0) { return invoker::Invoke<Any>(0xDF1E5AAC561AFC59, p0); } // 0xDF1E5AAC561AFC59 b1207
	static Any GET_WORLD_POSITION_OF_ENTITY_BONE(Any p0, Any p1) { return invoker::Invoke<Any>(0x82CFA50E34681CA5, p0, p1); } // 0x82CFA50E34681CA5 b1207
	static Any _0x5E214112806591EA() { return invoker::Invoke<Any>(0x5E214112806591EA); } // 0x5E214112806591EA b1207
	static Any _0x3AB3A77672F6473F() { return invoker::Invoke<Any>(0x3AB3A77672F6473F); } // 0x3AB3A77672F6473F b1207
	static Any _0x990E294FC387FB88() { return invoker::Invoke<Any>(0x990E294FC387FB88); } // 0x990E294FC387FB88 b1207
	static Any _0xB2C30C3B4AFF718C() { return invoker::Invoke<Any>(0xB2C30C3B4AFF718C); } // 0xB2C30C3B4AFF718C b1207
	static Any _0x6888A43C35A5F630() { return invoker::Invoke<Any>(0x6888A43C35A5F630); } // 0x6888A43C35A5F630 b1207
	static Any _0x9587913B9E772D29(Any p0, Any p1) { return invoker::Invoke<Any>(0x9587913B9E772D29, p0, p1); } // 0x9587913B9E772D29 b1207
	static Any GET_ENTITY_TYPE(Any p0) { return invoker::Invoke<Any>(0x97F696ACA466B4E0, p0); } // 0x97F696ACA466B4E0 b1207
	static Any GET_ENTITY_POPULATION_TYPE(Any p0) { return invoker::Invoke<Any>(0xADE28862B6D7B85B, p0); } // 0xADE28862B6D7B85B b1207
	static Any IS_AN_ENTITY(Any p0) { return invoker::Invoke<Any>(0x27CFF3E5A286D3DF, p0); } // 0x27CFF3E5A286D3DF b1207
	static Any IS_ENTITY_A_PED(Any p0) { return invoker::Invoke<Any>(0xCF8176912DDA4EA5, p0); } // 0xCF8176912DDA4EA5 b1207
	static Any IS_ENTITY_A_MISSION_ENTITY(Any p0) { return invoker::Invoke<Any>(0x138190F64DB4BBD1, p0); } // 0x138190F64DB4BBD1 b1207
	static Any IS_ENTITY_A_VEHICLE(Any p0) { return invoker::Invoke<Any>(0xC3D96AF45FCCEC4C, p0); } // 0xC3D96AF45FCCEC4C b1207
	static Any IS_ENTITY_AN_OBJECT(Any p0) { return invoker::Invoke<Any>(0x0A27A546A375FDEF, p0); } // 0x0A27A546A375FDEF b1207
	static Any IS_ENTITY_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x5E58342602E94718, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x5E58342602E94718 b1207
	static Any IS_ENTITY_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0xC057F02B837A27F6, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xC057F02B837A27F6 b1207
	static Any IS_ENTITY_ATTACHED(Any p0) { return invoker::Invoke<Any>(0xEE6AD63ABF59C0B7, p0); } // 0xEE6AD63ABF59C0B7 b1207
	static Any IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Any p0) { return invoker::Invoke<Any>(0x306C1F6178F01AB3, p0); } // 0x306C1F6178F01AB3 b1207
	static Any IS_ENTITY_ATTACHED_TO_ANY_PED(Any p0) { return invoker::Invoke<Any>(0xC841153DED2CA89A, p0); } // 0xC841153DED2CA89A b1207
	static Any IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Any p0) { return invoker::Invoke<Any>(0x12DF6E0D2E736749, p0); } // 0x12DF6E0D2E736749 b1207
	static Any IS_ENTITY_ATTACHED_TO_ENTITY(Any p0, Any p1) { return invoker::Invoke<Any>(0x154A3C529497053E, p0, p1); } // 0x154A3C529497053E b1207
	static Any _0xA7E51B53309EAC97(Any p0) { return invoker::Invoke<Any>(0xA7E51B53309EAC97, p0); } // 0xA7E51B53309EAC97 b1207
	static Any IS_ENTITY_DEAD(Any p0) { return invoker::Invoke<Any>(0x7D5B1F88E7504BBA, p0); } // 0x7D5B1F88E7504BBA b1207
	static Any IS_ENTITY_IN_AIR(Any p0, Any p1) { return invoker::Invoke<Any>(0x886E37EC497200B6, p0, p1); } // 0x886E37EC497200B6 b1207
	static Any IS_ENTITY_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0xD3151E53134595E5, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xD3151E53134595E5 b1207
	static Any IS_ENTITY_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x0C2634C40A16193E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x0C2634C40A16193E b1207
	static Any _0x5A5526BC09C06623(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x5A5526BC09C06623, p0, p1, p2, p3); } // 0x5A5526BC09C06623 b1207
	static Any IS_ENTITY_IN_WATER(Any p0) { return invoker::Invoke<Any>(0xDDE5C125AC446723, p0); } // 0xDDE5C125AC446723 b1207
	static Any _0xD4E5C1E93C466127(Any p0, Any p1) { return invoker::Invoke<Any>(0xD4E5C1E93C466127, p0, p1); } // 0xD4E5C1E93C466127 b1207
	static Any GET_ENTITY_SUBMERGED_LEVEL(Any p0) { return invoker::Invoke<Any>(0x4A77C3F73FD9E831, p0); } // 0x4A77C3F73FD9E831 b1207
	static void _0x694E00132F2823ED(Any p0, Any p1) { invoker::Invoke<Void>(0x850C940EE3E7B8B5, p0, p1); } // 0x850C940EE3E7B8B5 b1207
	static void _0x7A49D40DE437BC8D(Any p0, Any p1) { invoker::Invoke<Void>(0x7A49D40DE437BC8D, p0, p1); } // 0x7A49D40DE437BC8D b1207
	static void _0x978AA2323ED32209(Any p0, Any p1) { invoker::Invoke<Void>(0x978AA2323ED32209, p0, p1); } // 0x978AA2323ED32209 b1207
	static void _0x002AAC783ED323ED(Any p0, Any p1) { invoker::Invoke<Void>(0x002AAC783ED323ED, p0, p1); } // 0x002AAC783ED323ED b1207
	static void _0x007AAC783ED323ED(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x007AAC783ED323ED, p0, p1, p2); } // 0x007AAC783ED323ED b1207
	static Any IS_ENTITY_ON_SCREEN(Any p0) { return invoker::Invoke<Any>(0x613C15D5D8DB781F, p0); } // 0x613C15D5D8DB781F b1207
	static Any IS_ENTITY_PLAYING_ANIM(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xDEE49D5CA6C49148, p0, p1, p2, p3); } // 0xDEE49D5CA6C49148 b1207
	static Any _0x0B7CB1300CBFE19C(Any p0, Any p1) { return invoker::Invoke<Any>(0x0B7CB1300CBFE19C, p0, p1); } // 0x0B7CB1300CBFE19C b1207
	static Any IS_ENTITY_STATIC(Any p0) { return invoker::Invoke<Any>(0x86468ADFA0F6B861, p0); } // 0x86468ADFA0F6B861 b1207
	static Any IS_ENTITY_TOUCHING_ENTITY(Any p0, Any p1) { return invoker::Invoke<Any>(0x9A2304A64C3C8423, p0, p1); } // 0x9A2304A64C3C8423 b1207
	static Any IS_ENTITY_TOUCHING_MODEL(Any p0, Any p1) { return invoker::Invoke<Any>(0x2AE3EBC8DEB9768B, p0, p1); } // 0x2AE3EBC8DEB9768B b1207
	static Any IS_ENTITY_UPRIGHT(Any p0, Any p1) { return invoker::Invoke<Any>(0xF6F6AFD8D4FB2658, p0, p1); } // 0xF6F6AFD8D4FB2658 b1207
	static Any IS_ENTITY_UPSIDEDOWN(Any p0) { return invoker::Invoke<Any>(0x109DE3DA41AAD94A, p0); } // 0x109DE3DA41AAD94A b1207
	static Any IS_ENTITY_VISIBLE(Any p0) { return invoker::Invoke<Any>(0xFFC96ECB7FA404CA, p0); } // 0xFFC96ECB7FA404CA b1207
	static Any _0xFF9965C47FA404DA() { return invoker::Invoke<Any>(0xFF9965C47FA404DA); } // 0xFF9965C47FA404DA b1207
	static Any IS_ENTITY_VISIBLE_TO_SCRIPT(Any p0) { return invoker::Invoke<Any>(0xF213C724E77F321A, p0); } // 0xF213C724E77F321A b1207
	static void _0x3F08C6163A4AB1D6(Any p0) { invoker::Invoke<Void>(0x3F08C6163A4AB1D6, p0); } // 0x3F08C6163A4AB1D6 b1207
	static void _0x0DB41D59E0F1502B(Any p0) { invoker::Invoke<Void>(0x0DB41D59E0F1502B, p0); } // 0x0DB41D59E0F1502B b1207
	static Any _0xC8CCDB712FBCBA92(Any p0) { return invoker::Invoke<Any>(0xC8CCDB712FBCBA92, p0); } // 0xC8CCDB712FBCBA92 b1207
	static Any IS_ENTITY_OCCLUDED(Any p0) { return invoker::Invoke<Any>(0x140188E884645624, p0); } // 0x140188E884645624 b1207
	static Any WOULD_ENTITY_BE_OCCLUDED(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x3546FAB293FF2981, p0, p1, p2, p3, p4); } // 0x3546FAB293FF2981 b1207
	static Any IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Any p0) { return invoker::Invoke<Any>(0x5E1CC2E8DC3111DD, p0); } // 0x5E1CC2E8DC3111DD b1207
	static Any _0x857ACB0AB4BD0D55(Any p0) { return invoker::Invoke<Any>(0x857ACB0AB4BD0D55, p0); } // 0x857ACB0AB4BD0D55 b1207
	static void _0xCDB682BB47C02F0A(Any p0, Any p1) { invoker::Invoke<Void>(0xCDB682BB47C02F0A, p0, p1); } // 0xCDB682BB47C02F0A b1207
	static void _0xE19035EB65AB2932(Any p0, Any p1) { invoker::Invoke<Void>(0xE19035EB65AB2932, p0, p1); } // 0xE19035EB65AB2932 b1207
	static Any _0x8C03CD6B5E0E85E8(Any p0, Any p1) { return invoker::Invoke<Any>(0x8C03CD6B5E0E85E8, p0, p1); } // 0x8C03CD6B5E0E85E8 b1207
	static Any _0x1E804EA9B12030A4() { return invoker::Invoke<Any>(0x1E804EA9B12030A4); } // 0x1E804EA9B12030A4 b1207
	static Any _0xA88E215CEB0435C0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xA88E215CEB0435C0, p0, p1, p2, p3, p4, p5); } // 0xA88E215CEB0435C0 b1207
	static Any _0xE31FC20319874CB3(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xE31FC20319874CB3, p0, p1, p2); } // 0xE31FC20319874CB3 b1207
	static Any _0x582F73ACFE969571(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x582F73ACFE969571, p0, p1, p2); } // 0x582F73ACFE969571 b1207
	static Any _0xBA2A089E60ED1163(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xBA2A089E60ED1163, p0, p1, p2, p3, p4); } // 0xBA2A089E60ED1163 b1207
	static Any _0x61914209C36EFDDB(Any p0) { return invoker::Invoke<Any>(0x61914209C36EFDDB, p0); } // 0x61914209C36EFDDB b1207
	static Any _0xD46BF94C4C66FAB0(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xD46BF94C4C66FAB0, p0, p1, p2, p3); } // 0xD46BF94C4C66FAB0 b1207
	static Any _0x34F008A7E48C496B(Any p0, Any p1) { return invoker::Invoke<Any>(0x34F008A7E48C496B, p0, p1); } // 0x34F008A7E48C496B b1207
	static Any _0xD21C7418C590BB40(Any p0) { return invoker::Invoke<Any>(0xD21C7418C590BB40, p0); } // 0xD21C7418C590BB40 b1207
	static Any _0x0FD25587BB306C86(Any p0) { return invoker::Invoke<Any>(0x0FD25587BB306C86, p0); } // 0x0FD25587BB306C86 b1207
	static Any _0x5AFFA9DDC87846F8(Any p0) { return invoker::Invoke<Any>(0x5AFFA9DDC87846F8, p0); } // 0x5AFFA9DDC87846F8 b1207
	static Any _0x31FEF6A20F00B963(Any p0) { return invoker::Invoke<Any>(0x31FEF6A20F00B963, p0); } // 0x31FEF6A20F00B963 b1207
	static void _0x399657ED871B3A6C(Any p0, Any p1) { invoker::Invoke<Void>(0x399657ED871B3A6C, p0, p1); } // 0x399657ED871B3A6C b1207
	static Any _0x2A77EF9BEC8518F4() { return invoker::Invoke<Any>(0x2A77EF9BEC8518F4); } // 0x2A77EF9BEC8518F4 b1207
	static void _0x0D0DB2B6AF19A987(Any p0) { invoker::Invoke<Void>(0x0D0DB2B6AF19A987, p0); } // 0x0D0DB2B6AF19A987 b1207
	static Any _0x8DE41E9902E85756(Any p0) { return invoker::Invoke<Any>(0x8DE41E9902E85756, p0); } // 0x8DE41E9902E85756 b1207
	static void _0x6BCF5F3D8FFE988D(Any p0, Any p1) { invoker::Invoke<Void>(0x6BCF5F3D8FFE988D, p0, p1); } // 0x6BCF5F3D8FFE988D b1207
	static Any _0xEF2D9ED7CE684F08(Any p0) { return invoker::Invoke<Any>(0xEF2D9ED7CE684F08, p0); } // 0xEF2D9ED7CE684F08 b1207
	static Any _0x0CCEFC6C2C95DA2A(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x0CCEFC6C2C95DA2A, p0, p1, p2, p3); } // 0x0CCEFC6C2C95DA2A b1207
	static Any _0x383F64263F946E45(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x383F64263F946E45, p0, p1, p2, p3, p4, p5); } // 0x383F64263F946E45 b1207
	static Any _0x8E10DF0FFA63FB65(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x8E10DF0FFA63FB65, p0, p1, p2, p3, p4); } // 0x8E10DF0FFA63FB65 b1207
	static Any _0x808077647856DE62(Any p0, Any p1) { return invoker::Invoke<Any>(0x808077647856DE62, p0, p1); } // 0x808077647856DE62 b1207
	static void _0x18FF3110CF47115D(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x18FF3110CF47115D, p0, p1, p2); } // 0x18FF3110CF47115D b1207
	static void _0xC3ABCFBC7D74AFA5(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xC3ABCFBC7D74AFA5, p0, p1, p2); } // 0xC3ABCFBC7D74AFA5 b1207
	static void _0xA48E4801DEBDF7E4(Any p0, Any p1) { invoker::Invoke<Void>(0xA48E4801DEBDF7E4, p0, p1); } // 0xA48E4801DEBDF7E4 b1207
	static Any _0x255B6DB4E3AD3C3E(Any p0) { return invoker::Invoke<Any>(0x255B6DB4E3AD3C3E, p0); } // 0x255B6DB4E3AD3C3E b1207
	static Any _0xF59FDE7B4D31A630(Any p0) { return invoker::Invoke<Any>(0xF59FDE7B4D31A630, p0); } // 0xF59FDE7B4D31A630 b1207
	static Any _0x120376C23F019C6C(Any p0, Any p1) { return invoker::Invoke<Any>(0x120376C23F019C6C, p0, p1); } // 0x120376C23F019C6C b1207
	static Any _0x5744562E973E33CD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x5744562E973E33CD, p0, p1, p2, p3, p4); } // 0x5744562E973E33CD b1207
	static void _0xDD03FC2089AD093C(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xDD03FC2089AD093C, p0, p1, p2, p3); } // 0xDD03FC2089AD093C b1207
	static Any _0xB16C780C51E51E2B(Any p0) { return invoker::Invoke<Any>(0xB16C780C51E51E2B, p0); } // 0xB16C780C51E51E2B b1207
	static void _0xEF259AA1E097E0AD(Any p0, Any p1) { invoker::Invoke<Void>(0xEF259AA1E097E0AD, p0, p1); } // 0xEF259AA1E097E0AD b1207
	static Any _0xBD94CECFB2D65119() { return invoker::Invoke<Any>(0xBD94CECFB2D65119); } // 0xBD94CECFB2D65119 b1207
	static Any _0x482D17E45665DA44() { return invoker::Invoke<Any>(0x482D17E45665DA44); } // 0x482D17E45665DA44 b1207
	static Any _0xE75EEA8DB59A9F39() { return invoker::Invoke<Any>(0xE75EEA8DB59A9F39); } // 0xE75EEA8DB59A9F39 b1207
	static Any _0x188736456D1DEDE6() { return invoker::Invoke<Any>(0x188736456D1DEDE6); } // 0x188736456D1DEDE6 b1207
	static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x31DA7CEC5334DB37, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x31DA7CEC5334DB37 b1207
	static void APPLY_FORCE_TO_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoker::Invoke<Void>(0xF15E8F5D333F09C4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xF15E8F5D333F09C4 b1207
	static void ATTACH_ENTITY_TO_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16) { invoker::Invoke<Void>(0x6B9BBD38AB0796DF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x6B9BBD38AB0796DF b1207
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19, Any p20, Any p21) { invoker::Invoke<Void>(0xB629A43CA1643481, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21); } // 0xB629A43CA1643481 b1207
	static void _0x445D7D8EA66E373E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { invoker::Invoke<Void>(0x445D7D8EA66E373E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } // 0x445D7D8EA66E373E b1207
	static void _0x16908E859C3AB698(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x16908E859C3AB698, p0, p1, p2, p3, p4); } // 0x16908E859C3AB698 b1207
	static Any GET_ENTITY_BONE_INDEX_BY_NAME(Any p0, Any p1) { return invoker::Invoke<Any>(0xBACA8FE9C76C124E, p0, p1); } // 0xBACA8FE9C76C124E b1207
	static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Any p0) { invoker::Invoke<Void>(0xBB19AC7D4DCEFD0F, p0); } // 0xBB19AC7D4DCEFD0F b1207
	static void DELETE_ENTITY(Any p0) { invoker::Invoke<Void>(0x4CD38C78BD19A497, p0); } // 0x4CD38C78BD19A497 b1207
	static Any _0x5E94EA09E7207C16() { return invoker::Invoke<Any>(0x5E94EA09E7207C16); } // 0x5E94EA09E7207C16 b1207
	static void DETACH_ENTITY(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x64CDE9D6BF8ECAD3, p0, p1, p2); } // 0x64CDE9D6BF8ECAD3 b1207
	static Any _0x083D497D57B7400F(Any p0) { return invoker::Invoke<Any>(0x083D497D57B7400F, p0); } // 0x083D497D57B7400F b1207
	static void FREEZE_ENTITY_POSITION(Any p0, Any p1) { invoker::Invoke<Void>(0x7D9EFB7AD6B19754, p0, p1); } // 0x7D9EFB7AD6B19754 b1207
	static void _SET_ENTITY_SOMETHING(Any p0, Any p1) { invoker::Invoke<Void>(0x740CB4F3F602C9F4, p0, p1); } // 0x740CB4F3F602C9F4 b1207
	static void SET_ENTITY_AS_MISSION_ENTITY(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDC19C288082E586E, p0, p1, p2); } // 0xDC19C288082E586E b1207
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(Any p0) { invoker::Invoke<Void>(0x4971D2F8162B9674, p0); } // 0x4971D2F8162B9674 b1207
	static void SET_PED_AS_NO_LONGER_NEEDED(Any p0) { invoker::Invoke<Void>(0x2595DD4236549CE3, p0); } // 0x2595DD4236549CE3 b1207
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Any p0) { invoker::Invoke<Void>(0x629BFA74418D6239, p0); } // 0x629BFA74418D6239 b1207
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(Any p0) { invoker::Invoke<Void>(0x3AE22DEB5BA5A3E6, p0); } // 0x3AE22DEB5BA5A3E6 b1207
	static void _0x20FAEE47427A4497() { invoker::Invoke<Void>(0x20FAEE47427A4497); } // 0x20FAEE47427A4497 b1207
	static Any _0x88AD6CC10D8D35B2(Any p0) { return invoker::Invoke<Any>(0x88AD6CC10D8D35B2, p0); } // 0x88AD6CC10D8D35B2 b1207
	static void _0x56E0735D6273B227(Any p0, Any p1) { invoker::Invoke<Void>(0x56E0735D6273B227, p0, p1); } // 0x56E0735D6273B227 b1207
	static Any _0xC0EDEF16D90661EE() { return invoker::Invoke<Any>(0xC0EDEF16D90661EE); } // 0xC0EDEF16D90661EE b1207
	static Any _0x0FD7D7C232876E72() { return invoker::Invoke<Any>(0x0FD7D7C232876E72); } // 0x0FD7D7C232876E72 b1207
	static Any _0x0939E773925C4719() { return invoker::Invoke<Any>(0x0939E773925C4719); } // 0x0939E773925C4719 b1207
	static void SET_ENTITY_CAN_BE_DAMAGED(Any p0, Any p1) { invoker::Invoke<Void>(0x0D06D522B90E861F, p0, p1); } // 0x0D06D522B90E861F b1207
	static Any _0x75DF9E73F2F005FD(Any p0) { return invoker::Invoke<Any>(0x75DF9E73F2F005FD, p0); } // 0x75DF9E73F2F005FD b1207
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0EF1AFB18649E015, p0, p1, p2); } // 0x0EF1AFB18649E015 b1207
	static Any _0xFF83AF534156B399() { return invoker::Invoke<Any>(0xFF83AF534156B399); } // 0xFF83AF534156B399 b1207
	static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Any p0, Any p1) { invoker::Invoke<Void>(0x6D09F32E284D0FB7, p0, p1); } // 0x6D09F32E284D0FB7 b1207
	static Any GET_ENTITY_COLLISION_DISABLED(Any p0) { return invoker::Invoke<Any>(0xAA2FADD30F45A9DA, p0); } // 0xAA2FADD30F45A9DA b1207
	static void SET_ENTITY_COLLISION(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF66F820909453B8C, p0, p1, p2); } // 0xF66F820909453B8C b1207
	static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE0580EC84813875A, p0, p1, p2); } // 0xE0580EC84813875A b1207
	static void SET_ENTITY_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x06843DA7060A026B, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x06843DA7060A026B b1207
	static void SET_ENTITY_COORDS_NO_OFFSET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x239A3351AC1DA385, p0, p1, p2, p3, p4, p5, p6); } // 0x239A3351AC1DA385 b1207
	static void SET_ENTITY_DYNAMIC(Any p0, Any p1) { invoker::Invoke<Void>(0xFBFC4473F66CE344, p0, p1); } // 0xFBFC4473F66CE344 b1207
	static void SET_ENTITY_HEADING(Any p0, Any p1) { invoker::Invoke<Void>(0xCF2B9C0645C4651B, p0, p1); } // 0xCF2B9C0645C4651B b1207
	static void _0x203BEFFDBE12E96A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x203BEFFDBE12E96A, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x203BEFFDBE12E96A b1207
	static void _0x0918E3565C20F03C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x0918E3565C20F03C, p0, p1, p2, p3, p4, p5, p6); } // 0x0918E3565C20F03C b1207
	static void _0xAC2767ED8BDFAB15(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xAC2767ED8BDFAB15, p0, p1, p2); } // 0xAC2767ED8BDFAB15 b1207
	static void SET_ENTITY_INVINCIBLE(Any p0, Any p1) { invoker::Invoke<Void>(0xA5C38736C426FCB8, p0, p1); } // 0xA5C38736C426FCB8 b1207
	static void _0xAF7F3099B9FEB535(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xAF7F3099B9FEB535, p0, p1, p2, p3); } // 0xAF7F3099B9FEB535 b1207
	static void SET_ENTITY_IS_TARGET_PRIORITY(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0A5D170C44CB2189, p0, p1, p2); } // 0x0A5D170C44CB2189 b1207
	static Any _0xB38A29CCD5447783() { return invoker::Invoke<Any>(0xB38A29CCD5447783); } // 0xB38A29CCD5447783 b1207
	static void _0x4B436BAC8CBE9B07(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4B436BAC8CBE9B07, p0, p1, p2); } // 0x4B436BAC8CBE9B07 b1207
	static Any _0xE12F56CB25D9CE23() { return invoker::Invoke<Any>(0xE12F56CB25D9CE23); } // 0xE12F56CB25D9CE23 b1207
	static void _0x2D40BCBFE9305DEA(Any p0, Any p1) { invoker::Invoke<Void>(0x2D40BCBFE9305DEA, p0, p1); } // 0x2D40BCBFE9305DEA b1207
	static void _0xEBDC12861D079ABA(Any p0, Any p1) { invoker::Invoke<Void>(0xEBDC12861D079ABA, p0, p1); } // 0xEBDC12861D079ABA b1207
	static void SET_ENTITY_LOAD_COLLISION_FLAG(Any p0, Any p1) { invoker::Invoke<Void>(0x9B9EE31AED48072E, p0, p1); } // 0x9B9EE31AED48072E b1207
	static Any HAS_COLLISION_LOADED_AROUND_ENTITY(Any p0) { return invoker::Invoke<Any>(0xBEB1600952B9CF5C, p0); } // 0xBEB1600952B9CF5C b1207
	static Any _0x6BFBDC46139C45AB(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x6BFBDC46139C45AB, p0, p1, p2); } // 0x6BFBDC46139C45AB b1207
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Any p0, Any p1) { invoker::Invoke<Void>(0x473598683095D430, p0, p1); } // 0x473598683095D430 b1207
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x6C1F6AA2F0ADD104, p0, p1, p2); } // 0x6C1F6AA2F0ADD104 b1207
	static void SET_ENTITY_PROOFS(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xFAEE099C6F890BB8, p0, p1, p2); } // 0xFAEE099C6F890BB8 b1207
	static Any _0x6CF0DAD7FA1088EA() { return invoker::Invoke<Any>(0x6CF0DAD7FA1088EA); } // 0x6CF0DAD7FA1088EA b1207
	static void SET_ENTITY_QUATERNION(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x100E7007D13E3687, p0, p1, p2, p3, p4); } // 0x100E7007D13E3687 b1207
	static void SET_ENTITY_ROTATION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x9CC8314DFEDE441E, p0, p1, p2, p3, p4, p5); } // 0x9CC8314DFEDE441E b1207
	static void _0xD45BB89B53FC0CFD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xD45BB89B53FC0CFD, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD45BB89B53FC0CFD b1207
	static void SET_ENTITY_VISIBLE(Any p0, Any p1) { invoker::Invoke<Void>(0x1794B4FCC84D812F, p0, p1); } // 0x1794B4FCC84D812F b1207
	static void _0x80FDEB3A9E9AA578(Any p0, Any p1) { invoker::Invoke<Void>(0x80FDEB3A9E9AA578, p0, p1); } // 0x80FDEB3A9E9AA578 b1207
	static void SET_ENTITY_VELOCITY(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x1C99BB7B6E96D16F, p0, p1, p2, p3); } // 0x1C99BB7B6E96D16F b1207
	static void SET_ENTITY_HAS_GRAVITY(Any p0, Any p1) { invoker::Invoke<Void>(0x0CEDB728A1083FA7, p0, p1); } // 0x0CEDB728A1083FA7 b1207
	static void SET_ENTITY_LOD_DIST(Any p0, Any p1) { invoker::Invoke<Void>(0x5FB407F0A7C877BF, p0, p1); } // 0x5FB407F0A7C877BF b1207
	static Any GET_ENTITY_LOD_DIST(Any p0) { return invoker::Invoke<Any>(0xDF240D0C2A948683, p0); } // 0xDF240D0C2A948683 b1207
	static void SET_ENTITY_ALPHA(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0DF7692B1D9E7BA7, p0, p1, p2); } // 0x0DF7692B1D9E7BA7 b1207
	static Any GET_ENTITY_ALPHA(Any p0) { return invoker::Invoke<Any>(0x1BB501624FAF2BEA, p0); } // 0x1BB501624FAF2BEA b1207
	static void RESET_ENTITY_ALPHA(Any p0) { invoker::Invoke<Void>(0x744B9EF44779D9AB, p0); } // 0x744B9EF44779D9AB b1207
	static void _0xA91E6CF94404E8C9(Any p0) { invoker::Invoke<Void>(0xA91E6CF94404E8C9, p0); } // 0xA91E6CF94404E8C9 b1207
	static void SET_ENTITY_ALWAYS_PRERENDER(Any p0, Any p1) { invoker::Invoke<Void>(0xACAD101E1FB66689, p0, p1); } // 0xACAD101E1FB66689 b1207
	static Any _0x85B8A7534E44BC23() { return invoker::Invoke<Any>(0x85B8A7534E44BC23); } // 0x85B8A7534E44BC23 b1207
	static Any _0x37B01666BAE8F7EF() { return invoker::Invoke<Any>(0x37B01666BAE8F7EF); } // 0x37B01666BAE8F7EF b1207
	static void _0xA9E6D8F2DDFC4DB9(Any p0, Any p1) { invoker::Invoke<Void>(0xA9E6D8F2DDFC4DB9, p0, p1); } // 0xA9E6D8F2DDFC4DB9 b1207
	static void CREATE_MODEL_SWAP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x10B2218320B6F5AC, p0, p1, p2, p3, p4, p5, p6); } // 0x10B2218320B6F5AC b1207
	static void REMOVE_MODEL_SWAP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x824E1C26A14CB817, p0, p1, p2, p3, p4, p5, p6); } // 0x824E1C26A14CB817 b1207
	static void CREATE_MODEL_HIDE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x069848B3FB3C4426, p0, p1, p2, p3, p4, p5); } // 0x069848B3FB3C4426 b1207
	static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xD136090A9AAAB17D, p0, p1, p2, p3, p4, p5); } // 0xD136090A9AAAB17D b1207
	static void REMOVE_MODEL_HIDE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x3F38A98576F6213A, p0, p1, p2, p3, p4, p5); } // 0x3F38A98576F6213A b1207
	static Any _0xD4636C2EDB0DEA8A() { return invoker::Invoke<Any>(0xD4636C2EDB0DEA8A); } // 0xD4636C2EDB0DEA8A b1207
	static void CREATE_FORCED_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x0961A905AFBC34C7, p0, p1, p2, p3, p4, p5); } // 0x0961A905AFBC34C7 b1207
	static void REMOVE_FORCED_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x553FA683F2BCD814, p0, p1, p2, p3, p4); } // 0x553FA683F2BCD814 b1207
	static void SET_ENTITY_NO_COLLISION_ENTITY(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE037BF068223C38D, p0, p1, p2); } // 0xE037BF068223C38D b1207
	static void SET_ENTITY_MOTION_BLUR(Any p0, Any p1) { invoker::Invoke<Void>(0x516C6ABD18322B63, p0, p1); } // 0x516C6ABD18322B63 b1207
	static void _0xE12ABE5E3A389A6C(Any p0, Any p1) { invoker::Invoke<Void>(0x80646744FA88F9D7, p0, p1); } // 0x80646744FA88F9D7 b1207
	static void _0xA80AE305E0A3044F(Any p0, Any p1) { invoker::Invoke<Void>(0x24AED2A608F93C4C, p0, p1); } // 0x24AED2A608F93C4C b1207
	static void _0x2C2E3DC128F44309(Any p0, Any p1) { invoker::Invoke<Void>(0xC64E597783BE9A1D, p0, p1); } // 0xC64E597783BE9A1D b1207
	static Any _0x59B57C4B06531E1E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x59B57C4B06531E1E, p0, p1, p2, p3, p4, p5); } // 0x59B57C4B06531E1E b1207
	static Any _0x84CCF9A12942C83D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x84CCF9A12942C83D, p0, p1, p2, p3, p4, p5); } // 0x84CCF9A12942C83D b1207
	static Any _0x886171A12F400B89(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x886171A12F400B89, p0, p1, p2); } // 0x886171A12F400B89 b1207
	static Any _0x66B2B83B94B22458(Any p0) { return invoker::Invoke<Any>(0x66B2B83B94B22458, p0); } // 0x66B2B83B94B22458 b1207
	static Any _0xC2E71D7E0A7B4C89(Any p0) { return invoker::Invoke<Any>(0xC2E71D7E0A7B4C89, p0); } // 0xC2E71D7E0A7B4C89 b1207
	static void _0x6C31B06E91518269(Any p0, Any p1) { invoker::Invoke<Void>(0x6C31B06E91518269, p0, p1); } // 0x6C31B06E91518269 b1207
	static void _0x119A5714578F4E05(Any p0, Any p1) { invoker::Invoke<Void>(0x119A5714578F4E05, p0, p1); } // 0x119A5714578F4E05 b1207
	static Any _0xF7424890E4A094C0(Any p0, Any p1) { return invoker::Invoke<Any>(0xF7424890E4A094C0, p0, p1); } // 0xF7424890E4A094C0 b1207
	static Any FIND_ANIM_EVENT_PHASE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x42718CC559BD7776, p0, p1, p2, p3, p4); } // 0x42718CC559BD7776 b1207
	static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Any p0, Any p1) { invoker::Invoke<Void>(0x4C9E96473D4F1A88, p0, p1); } // 0x4C9E96473D4F1A88 b1207
	static Any _0x627520389E288A73(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x627520389E288A73, p0, p1, p2); } // 0x627520389E288A73 b1207
	static Any _0x8E46E18AA828334F(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x8E46E18AA828334F, p0, p1, p2); } // 0x8E46E18AA828334F b1207
	static Any _0xDF8E49EA89A01DB1(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xDF8E49EA89A01DB1, p0, p1, p2); } // 0xDF8E49EA89A01DB1 b1207
	static Any HAS_ANIM_EVENT_FIRED(Any p0, Any p1) { return invoker::Invoke<Any>(0x5851CC48405F4A07, p0, p1); } // 0x5851CC48405F4A07 b1207
	static Any HAS_ENTITY_ANIM_FINISHED(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xAEB40615337EF1E3, p0, p1, p2, p3); } // 0xAEB40615337EF1E3 b1207
	static Any PLAY_ENTITY_ANIM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0xDC6D22FAB76D4874, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xDC6D22FAB76D4874 b1207
	static void _0x11CDABDC7783B2BC(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x11CDABDC7783B2BC, p0, p1, p2, p3); } // 0x11CDABDC7783B2BC b1207
	static void _0xEAA885BA3CEA4E4A(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xEAA885BA3CEA4E4A, p0, p1, p2, p3); } // 0xEAA885BA3CEA4E4A b1207
	static Any STOP_ENTITY_ANIM(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x786591D986DE9159, p0, p1, p2, p3); } // 0x786591D986DE9159 b1207
	static void _0x669655FFB29EF1A9(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x669655FFB29EF1A9, p0, p1, p2, p3); } // 0x669655FFB29EF1A9 b1207
	static void _0x1AD922AB5038DEF3(Any p0) { invoker::Invoke<Void>(0x1AD922AB5038DEF3, p0); } // 0x1AD922AB5038DEF3 b1207
	static void _0x5826EFD6D73C4DE5(Any p0) { invoker::Invoke<Void>(0x5826EFD6D73C4DE5, p0); } // 0x5826EFD6D73C4DE5 b1207
	static void _0x36EB4D34D4A092C5(Any p0, Any p1) { invoker::Invoke<Void>(0x36EB4D34D4A092C5, p0, p1); } // 0x36EB4D34D4A092C5 b1207
	static Any _0x29BA9F78321E5A6C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoker::Invoke<Any>(0x29BA9F78321E5A6C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x29BA9F78321E5A6C b1207
	static void _0xC76E94A78127412B(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xC76E94A78127412B, p0, p1, p2); } // 0xC76E94A78127412B b1207
	static Any _0x7F20092547B4DDEA() { return invoker::Invoke<Any>(0x7F20092547B4DDEA); } // 0x7F20092547B4DDEA b1207
	static Any _0xF41E2979D5BC5370() { return invoker::Invoke<Any>(0xF41E2979D5BC5370); } // 0xF41E2979D5BC5370 b1207
	static Any _0xAAACB74442C1BED3(Any p0) { return invoker::Invoke<Any>(0xAAACB74442C1BED3, p0); } // 0xAAACB74442C1BED3 b1207
	static Any _0x6F3068258A499E52(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x6F3068258A499E52, p0, p1, p2, p3, p4); } // 0x6F3068258A499E52 b1207
	static void _0xD2B9C78537ED5759(Any p0) { invoker::Invoke<Void>(0xD2B9C78537ED5759, p0); } // 0xD2B9C78537ED5759 b1207
	static Any _0x1FF441D7954F8709(Any p0) { return invoker::Invoke<Any>(0x1FF441D7954F8709, p0); } // 0x1FF441D7954F8709 b1207
	static Any _0x4735E2A4BB83D9DA(Any p0) { return invoker::Invoke<Any>(0x4735E2A4BB83D9DA, p0); } // 0x4735E2A4BB83D9DA b1207
	static void _0xEAB3D91D30A344F1(Any p0) { invoker::Invoke<Void>(0xEAB3D91D30A344F1, p0); } // 0xEAB3D91D30A344F1 b1207
	static void _0x37CEB637BA3B1A47(Any p0) { invoker::Invoke<Void>(0x37CEB637BA3B1A47, p0); } // 0x37CEB637BA3B1A47 b1207
	static Any _0x350E9211074955AF(Any p0, Any p1) { return invoker::Invoke<Any>(0x350E9211074955AF, p0, p1); } // 0x350E9211074955AF b1207
	static void _0x898586729DB5221D(Any p0) { invoker::Invoke<Void>(0x898586729DB5221D, p0); } // 0x898586729DB5221D b1207
	static Any _0xE9E7A0BAC7F57746() { return invoker::Invoke<Any>(0xE9E7A0BAC7F57746); } // 0xE9E7A0BAC7F57746 b1207
}

namespace EVENT
{
	static void SET_DECISION_MAKER(Any p0, Any p1) { invoker::Invoke<Void>(0x8AE2F981CDDB8FA4, p0, p1); } // 0x8AE2F981CDDB8FA4 b1207
	static void _0x6B9C5C38838FB6E6(Any p0) { invoker::Invoke<Void>(0x6B9C5C38838FB6E6, p0); } // 0x6B9C5C38838FB6E6 b1207
	static Any _0xCA1315C33B9A2847(Any p0) { return invoker::Invoke<Any>(0xCA1315C33B9A2847, p0); } // 0xCA1315C33B9A2847 b1207
	static Any ADD_SHOCKING_EVENT_AT_POSITION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0xD9F8455409B525E9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xD9F8455409B525E9 b1207
	static Any ADD_SHOCKING_EVENT_FOR_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoker::Invoke<Any>(0x7FD8F3BE76F89422, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x7FD8F3BE76F89422 b1207
	static Any IS_SHOCKING_EVENT_IN_SPHERE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x9DB47E16060D6354, p0, p1, p2, p3, p4); } // 0x9DB47E16060D6354 b1207
	static Any REMOVE_SHOCKING_EVENT(Any p0) { return invoker::Invoke<Any>(0xE8BB3CC253A34559, p0); } // 0xE8BB3CC253A34559 b1207
	static void REMOVE_ALL_SHOCKING_EVENTS(Any p0) { invoker::Invoke<Void>(0xD47A168C2AB90DC4, p0); } // 0xD47A168C2AB90DC4 b1207
	static void _0xB4C71BA9CAB097BD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xB4C71BA9CAB097BD, p0, p1, p2, p3, p4); } // 0xB4C71BA9CAB097BD b1207
	static void _0x6A648D42BF271DC7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x6A648D42BF271DC7, p0, p1, p2, p3, p4, p5); } // 0x6A648D42BF271DC7 b1207
	static void _0x118873DD538490B4(Any p0, Any p1) { invoker::Invoke<Void>(0x118873DD538490B4, p0, p1); } // 0x118873DD538490B4 b1207
	static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoker::Invoke<Void>(0xDB249021652420C5); } // 0xDB249021652420C5 b1207
	static Any _0x36D0F2BA2C0D9BDE(Any p0, Any p1) { return invoker::Invoke<Any>(0x36D0F2BA2C0D9BDE, p0, p1); } // 0x36D0F2BA2C0D9BDE b1207
	static void _0x7C511E91738A0828(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x7C511E91738A0828, p0, p1, p2, p3); } // 0x7C511E91738A0828 b1207
	static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoker::Invoke<Void>(0x84994FAD4E4E4E69); } // 0x84994FAD4E4E4E69 b1207
	static void _0xB6F4825153920582() { invoker::Invoke<Void>(0xB6F4825153920582); } // 0xB6F4825153920582 b1207
	static void _0x4B2B1A891D437CA7(Any p0) { invoker::Invoke<Void>(0x4B2B1A891D437CA7, p0); } // 0x4B2B1A891D437CA7 b1207
	static void _0x9520175B35E2268D(Any p0, Any p1) { invoker::Invoke<Void>(0x9520175B35E2268D, p0, p1); } // 0x9520175B35E2268D b1207
	static Any _0x18E93EBFC1FCFA48(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x18E93EBFC1FCFA48, p0, p1, p2); } // 0x18E93EBFC1FCFA48 b1207
	static void _0x56B3410626A473E7(Any p0) { invoker::Invoke<Void>(0x56B3410626A473E7, p0); } // 0x56B3410626A473E7 b1207
	static void _0x608AD36A644A97FE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x608AD36A644A97FE, p0, p1, p2); } // 0x608AD36A644A97FE b1207
	static void _0x4465C3D1475BD3FD(Any p0) { invoker::Invoke<Void>(0x4465C3D1475BD3FD, p0); } // 0x4465C3D1475BD3FD b1207
	static Any _0x2DD42FAD06E6F19E(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x2DD42FAD06E6F19E, p0, p1, p2); } // 0x2DD42FAD06E6F19E b1207
	static void _0xA86B0EE9B39D15D6(Any p0) { invoker::Invoke<Void>(0xA86B0EE9B39D15D6, p0); } // 0xA86B0EE9B39D15D6 b1207
	static Any _0x26054EB81AC0893B(Any p0) { return invoker::Invoke<Any>(0x26054EB81AC0893B, p0); } // 0x26054EB81AC0893B b1207
	static void _0xBB1E41DD3D3C6250(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBB1E41DD3D3C6250, p0, p1, p2); } // 0xBB1E41DD3D3C6250 b1207
	static Any _0xAD17A18215DD23D6(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xAD17A18215DD23D6, p0, p1, p2); } // 0xAD17A18215DD23D6 b1207
	static Any _0xC6A7DC546E94FED5(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xC6A7DC546E94FED5, p0, p1, p2, p3); } // 0xC6A7DC546E94FED5 b1207
	static Any _0x796EECFF0C6D39BE(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x796EECFF0C6D39BE, p0, p1, p2); } // 0x796EECFF0C6D39BE b1207
	static Any _0x797B3D4D92E56094() { return invoker::Invoke<Any>(0x797B3D4D92E56094); } // 0x797B3D4D92E56094 b1207
	static Any _0x822A001BCEA5BD81(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x822A001BCEA5BD81, p0, p1, p2, p3); } // 0x822A001BCEA5BD81 b1207
	static Any _0x38497F139981C5C9(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x38497F139981C5C9, p0, p1, p2, p3); } // 0x38497F139981C5C9 b1207
	static Any _0x1D1B448D719415AB(Any p0) { return invoker::Invoke<Any>(0x1D1B448D719415AB, p0); } // 0x1D1B448D719415AB b1207
	static Any _0x83D43F0FD5276E4D(Any p0, Any p1) { return invoker::Invoke<Any>(0x83D43F0FD5276E4D, p0, p1); } // 0x83D43F0FD5276E4D b1207
	static void _0x1A5C5D350068A673(Any p0, Any p1) { invoker::Invoke<Void>(0x1A5C5D350068A673, p0, p1); } // 0x1A5C5D350068A673 b1207
	static Any _0xAD8F2424C6E1E3A8() { return invoker::Invoke<Any>(0xAD8F2424C6E1E3A8); } // 0xAD8F2424C6E1E3A8 b1207
	static void _0xE2C2FBB7825FFC66() { invoker::Invoke<Void>(0xE2C2FBB7825FFC66); } // 0xE2C2FBB7825FFC66 b1207
}

namespace FIRE
{
	static Any START_SCRIPT_FIRE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x6B83617E04503888, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x6B83617E04503888 b1207
	static void REMOVE_SCRIPT_FIRE(Any p0) { invoker::Invoke<Void>(0x790125C36E194069, p0); } // 0x790125C36E194069 b1207
	static void START_ENTITY_FIRE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xC4DC7418A44D6822, p0, p1, p2, p3); } // 0xC4DC7418A44D6822 b1207
	static void STOP_ENTITY_FIRE(Any p0, Any p1) { invoker::Invoke<Void>(0x8390751DC40C1E98, p0, p1); } // 0x8390751DC40C1E98 b1207
	static Any IS_ENTITY_ON_FIRE(Any p0) { return invoker::Invoke<Any>(0x1BD7C371CE257C3E, p0); } // 0x1BD7C371CE257C3E b1207
	static Any _0x754937C28271BC65() { return invoker::Invoke<Any>(0x754937C28271BC65); } // 0x754937C28271BC65 b1207
	static Any GET_NUMBER_OF_FIRES_IN_RANGE(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xF9617BC6FAE61E08, p0, p1, p2, p3); } // 0xF9617BC6FAE61E08 b1207
	static void STOP_FIRE_IN_RANGE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xDB38F247BD421708, p0, p1, p2, p3); } // 0xDB38F247BD421708 b1207
	static Any _0xB7C7BDC375AEA9A4() { return invoker::Invoke<Any>(0xB7C7BDC375AEA9A4); } // 0xB7C7BDC375AEA9A4 b1207
	static Any GET_CLOSEST_FIRE_POS(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xB646FB657F448261, p0, p1, p2, p3); } // 0xB646FB657F448261 b1207
	static Any _0xA4454592DCF7C992(Any p0) { return invoker::Invoke<Any>(0xA4454592DCF7C992, p0); } // 0xA4454592DCF7C992 b1207
	static Any _0xCDC25355C0D65963(Any p0) { return invoker::Invoke<Any>(0xCDC25355C0D65963, p0); } // 0xCDC25355C0D65963 b1207
	static void ADD_EXPLOSION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x7D6F58F69DA92530, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x7D6F58F69DA92530 b1207
	static void ADD_OWNED_EXPLOSION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xD84A917A64D4D016, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD84A917A64D4D016 b1207
	static void _0xB7DF150605EEDC9B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0xB7DF150605EEDC9B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xB7DF150605EEDC9B b1207
	static void ADD_EXPLOSION_WITH_USER_VFX(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x53BA259F3A67A99E, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x53BA259F3A67A99E b1207
	static void _0x34AE85C7CA4857AA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x34AE85C7CA4857AA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x34AE85C7CA4857AA b1207
	static Any IS_EXPLOSION_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x8391BA4313A25AD3, p0, p1, p2, p3, p4, p5, p6); } // 0x8391BA4313A25AD3 b1207
	static Any IS_EXPLOSION_ACTIVE_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xD96E82AEBFFAAFF0, p0, p1, p2, p3, p4, p5, p6); } // 0xD96E82AEBFFAAFF0 b1207
	static Any IS_EXPLOSION_IN_SPHERE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xD62DD846D82CBB90, p0, p1, p2, p3, p4); } // 0xD62DD846D82CBB90 b1207
	static Any _0x5AE661ECD18524C9() { return invoker::Invoke<Any>(0x5AE661ECD18524C9); } // 0x5AE661ECD18524C9 b1207
	static Any _0xE24822A4CFC9107A(Any p0, Any p1) { return invoker::Invoke<Any>(0xE24822A4CFC9107A, p0, p1); } // 0xE24822A4CFC9107A b1207
	static Any _GET_ENTITY_INSIDE_EXPLOSION_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x8002DDAB58594D78, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8002DDAB58594D78 b1207
	static void _0x68F6A75FDF5A70D6(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x68F6A75FDF5A70D6, p0, p1, p2, p3); } // 0x68F6A75FDF5A70D6 b1207
	static void _0x24DB6B9F2B719043(Any p0) { invoker::Invoke<Void>(0x24DB6B9F2B719043, p0); } // 0x24DB6B9F2B719043 b1207
}

namespace _NAMESPACE24
{
	static Any _0xE108489621422F91(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xE108489621422F91, p0, p1, p2); } // 0xE108489621422F91 b1207
	static void _0x963240B6C252BA49(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x963240B6C252BA49, p0, p1, p2, p3); } // 0x963240B6C252BA49 b1207
	static void _0x6D1D94C2459B42EE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x6D1D94C2459B42EE, p0, p1, p2, p3); } // 0x6D1D94C2459B42EE b1207
	static Any _0x4BC3ECFDA0297E27(Any p0, Any p1) { return invoker::Invoke<Any>(0x4BC3ECFDA0297E27, p0, p1); } // 0x4BC3ECFDA0297E27 b1207
	static void _0xCBDA22C87977244F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCBDA22C87977244F, p0, p1, p2); } // 0xCBDA22C87977244F b1207
	static Any _0x1C1993824A396603(Any p0, Any p1) { return invoker::Invoke<Any>(0x1C1993824A396603, p0, p1); } // 0x1C1993824A396603 b1207
	static void _0x9FF1E042FA597187(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x9FF1E042FA597187, p0, p1, p2); } // 0x9FF1E042FA597187 b1207
	static Any _0x8049B17BEC937662(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x8049B17BEC937662, p0, p1, p2, p3, p4, p5, p6); } // 0x8049B17BEC937662 b1207
	static Any _0xE93415B3307208E5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0xE93415B3307208E5, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xE93415B3307208E5 b1207
	static Any _0x19870C40C7EE15BE(Any p0, Any p1) { return invoker::Invoke<Any>(0x19870C40C7EE15BE, p0, p1); } // 0x19870C40C7EE15BE b1207
	static void _0x0816C31480764AB0(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x0816C31480764AB0, p0, p1, p2, p3); } // 0x0816C31480764AB0 b1207
	static void _0xC3D581A34BC0A1F0(Any p0, Any p1) { invoker::Invoke<Void>(0xC3D581A34BC0A1F0, p0, p1); } // 0xC3D581A34BC0A1F0 b1207
	static void _0xF2CCA7B68CFAB2B9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoker::Invoke<Void>(0xF2CCA7B68CFAB2B9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xF2CCA7B68CFAB2B9 b1207
	static void _0xFB16F08F47B83B4C(Any p0) { invoker::Invoke<Void>(0xFB16F08F47B83B4C, p0); } // 0xFB16F08F47B83B4C b1207
	static Any _0x3B005FF0538ED2A9(Any p0) { return invoker::Invoke<Any>(0x3B005FF0538ED2A9, p0); } // 0x3B005FF0538ED2A9 b1207
	static void _0xAEB97D84CDF3C00B(Any p0, Any p1) { invoker::Invoke<Void>(0xAEB97D84CDF3C00B, p0, p1); } // 0xAEB97D84CDF3C00B b1207
	static Any _0xF8B48A361DC388AE(Any p0) { return invoker::Invoke<Any>(0xF8B48A361DC388AE, p0); } // 0xF8B48A361DC388AE b1207
	static void _0x8B6F0F59B1B99801(Any p0, Any p1) { invoker::Invoke<Void>(0x8B6F0F59B1B99801, p0, p1); } // 0x8B6F0F59B1B99801 b1207
	static void _0xFF1E339CE40EAAAF(Any p0, Any p1) { invoker::Invoke<Void>(0xFF1E339CE40EAAAF, p0, p1); } // 0xFF1E339CE40EAAAF b1207
	static Any _0x8D913E493BAFE0A3(Any p0) { return invoker::Invoke<Any>(0x8D913E493BAFE0A3, p0); } // 0x8D913E493BAFE0A3 b1207
	static Any _0xCB4EF7EDAE2E16F1() { return invoker::Invoke<Any>(0xCB4EF7EDAE2E16F1); } // 0xCB4EF7EDAE2E16F1 b1207
	static void _0xE0961AED72642B80(Any p0) { invoker::Invoke<Void>(0xE0961AED72642B80, p0); } // 0xE0961AED72642B80 b1207
	static void _0x933E5D31A7D13069(Any p0, Any p1) { invoker::Invoke<Void>(0x933E5D31A7D13069, p0, p1); } // 0x933E5D31A7D13069 b1207
	static void _0x408D1149C5E39C1E(Any p0, Any p1) { invoker::Invoke<Void>(0x408D1149C5E39C1E, p0, p1); } // 0x408D1149C5E39C1E b1207
	static Any _0x9E13ACC38BA8F9C3(Any p0, Any p1) { return invoker::Invoke<Any>(0x9E13ACC38BA8F9C3, p0, p1); } // 0x9E13ACC38BA8F9C3 b1207
	static Any _0x34B9C4D86DF2C2F3(Any p0) { return invoker::Invoke<Any>(0x34B9C4D86DF2C2F3, p0); } // 0x34B9C4D86DF2C2F3 b1207
	static Any _0x1DA6CB02071055D5(Any p0) { return invoker::Invoke<Any>(0x1DA6CB02071055D5, p0); } // 0x1DA6CB02071055D5 b1207
	static void _0xC95611869E14F8AF(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xC95611869E14F8AF, p0, p1, p2, p3); } // 0xC95611869E14F8AF b1207
	static Any _0x09EE00B8F858E0BE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x09EE00B8F858E0BE, p0, p1, p2, p3, p4, p5, p6); } // 0x09EE00B8F858E0BE b1207
	static void _0xE36D2CB540597EF7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xE36D2CB540597EF7, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xE36D2CB540597EF7 b1207
	static Any _0xD95F04A4E73BE85E(Any p0, Any p1) { return invoker::Invoke<Any>(0xD95F04A4E73BE85E, p0, p1); } // 0xD95F04A4E73BE85E b1207
	static void _0x17E3E5C46ECCD308(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x17E3E5C46ECCD308, p0, p1, p2); } // 0x17E3E5C46ECCD308 b1207
	static void _0xC72CE37081DAE625(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xC72CE37081DAE625, p0, p1, p2, p3); } // 0xC72CE37081DAE625 b1207
	static void _0x67A43EA3F6FE0076(Any p0) { invoker::Invoke<Void>(0x67A43EA3F6FE0076, p0); } // 0x67A43EA3F6FE0076 b1207
	static Any _0x36486AF7DA93A464(Any p0) { return invoker::Invoke<Any>(0x36486AF7DA93A464, p0); } // 0x36486AF7DA93A464 b1207
	static void _0x6C57BEA886A20C6B(Any p0, Any p1) { invoker::Invoke<Void>(0x6C57BEA886A20C6B, p0, p1); } // 0x6C57BEA886A20C6B b1207
	static void _0x1520626FFAFFFA8F(Any p0, Any p1) { invoker::Invoke<Void>(0x1520626FFAFFFA8F, p0, p1); } // 0x1520626FFAFFFA8F b1207
	static void _0xFA821997794F48E7(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xFA821997794F48E7, p0, p1, p2); } // 0xFA821997794F48E7 b1207
	static void _0xCC6B5AAFC87BFC7B(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCC6B5AAFC87BFC7B, p0, p1, p2); } // 0xCC6B5AAFC87BFC7B b1207
	static void _0xFDB008B3BCF5992F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xFDB008B3BCF5992F, p0, p1, p2); } // 0xFDB008B3BCF5992F b1207
	static void _0x2DF3D457D86F8E57(Any p0, Any p1) { invoker::Invoke<Void>(0x2DF3D457D86F8E57, p0, p1); } // 0x2DF3D457D86F8E57 b1207
	static void _0x706B434FEFAD6A24(Any p0) { invoker::Invoke<Void>(0x706B434FEFAD6A24, p0); } // 0x706B434FEFAD6A24 b1207
	static void _0xA881F5C77A560906(Any p0) { invoker::Invoke<Void>(0xA881F5C77A560906, p0); } // 0xA881F5C77A560906 b1207
	static Any _0x53187E563F938E76(Any p0) { return invoker::Invoke<Any>(0x53187E563F938E76, p0); } // 0x53187E563F938E76 b1207
}

namespace GRAPHICS
{
	static Any _0x7DFF8F94937D2659() { return invoker::Invoke<Any>(0x7DFF8F94937D2659); } // 0x7DFF8F94937D2659 b1207
	static Any _0x84F0BA7462FF8D58() { return invoker::Invoke<Any>(0x84F0BA7462FF8D58); } // 0x84F0BA7462FF8D58 b1207
	static Any _0xC71B50AE58D07369() { return invoker::Invoke<Any>(0xC71B50AE58D07369); } // 0xC71B50AE58D07369 b1207
	static Any _0xA67C35C56EB1BD9D() { return invoker::Invoke<Any>(0xA15BFFC0A01B34E1); } // 0xA15BFFC0A01B34E1 b1207
	static Any _0x0D6CA79EEEBD8CA3() { return invoker::Invoke<Any>(0x4A3DA74C3CCB1725); } // 0x4A3DA74C3CCB1725 b1207
	static void _0xD801CC02177FA3F1() { invoker::Invoke<Void>(0xD45547D8396F002A); } // 0xD45547D8396F002A b1207
	static void _0x2705D18C11B61046(Any p0) { invoker::Invoke<Void>(0x2705D18C11B61046, p0); } // 0x2705D18C11B61046 b1207
	static Any _0x8E6AFF353C09652E() { return invoker::Invoke<Any>(0x8E6AFF353C09652E); } // 0x8E6AFF353C09652E b1207
	static Any _0x564837D4A9EDE296() { return invoker::Invoke<Any>(0x564837D4A9EDE296); } // 0x564837D4A9EDE296 b1207
	static Any _0xFA91736933AB3D93() { return invoker::Invoke<Any>(0xFA91736933AB3D93); } // 0xFA91736933AB3D93 b1207
	static Any _0x8B3296278328B5EB() { return invoker::Invoke<Any>(0x8B3296278328B5EB); } // 0x8B3296278328B5EB b1207
	static void _0xD1031B83AC093BC7(Any p0) { invoker::Invoke<Void>(0xD1031B83AC093BC7, p0); } // 0xD1031B83AC093BC7 b1207
	static void _0x9937FACBBF267244(Any p0) { invoker::Invoke<Void>(0x9937FACBBF267244, p0); } // 0x9937FACBBF267244 b1207
	static void _0x8952E857696B8A79(Any p0) { invoker::Invoke<Void>(0x8952E857696B8A79, p0); } // 0x8952E857696B8A79 b1207
	static Any _0x3DEC726C25A11BAC(Any p0) { return invoker::Invoke<Any>(0x57639FD876B68A91, p0); } // 0x57639FD876B68A91 b1207
	static Any _0x0C0C4E81E1AC60A0() { return invoker::Invoke<Any>(0xD6663EC374092383); } // 0xD6663EC374092383 b1207
	static Any _0x759650634F07B6B4(Any p0) { return invoker::Invoke<Any>(0x494A9874F17A7D50, p0); } // 0x494A9874F17A7D50 b1207
	static Any _0xCB82A0BF0E3E3265(Any p0) { return invoker::Invoke<Any>(0x13430D3D5A45F14B, p0); } // 0x13430D3D5A45F14B b1207
	static void _0x6A12D88881435DCA() { invoker::Invoke<Void>(0x614682E715ADBAAC); } // 0x614682E715ADBAAC b1207
	static void _0x1072F115DAB0717E(Any p0, Any p1) { invoker::Invoke<Void>(0xF1142E5D64B47802, p0, p1); } // 0xF1142E5D64B47802 b1207
	static Any _0x8E587FCD30E05592() { return invoker::Invoke<Any>(0x8E587FCD30E05592); } // 0x8E587FCD30E05592 b1207
	static Any _0x78C56B8A7B1D000C() { return invoker::Invoke<Any>(0x78C56B8A7B1D000C); } // 0x78C56B8A7B1D000C b1207
	static Any _0x2A893980E96B659A() { return invoker::Invoke<Any>(0xA42EDF1E88734A7E); } // 0xA42EDF1E88734A7E b1207
	static Any _0xF5BED327CEA362B1() { return invoker::Invoke<Any>(0xB28894CD7408BD0C); } // 0xB28894CD7408BD0C b1207
	static void DRAW_LIGHT_WITH_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xD2D9E04C0DF927F4, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD2D9E04C0DF927F4 b1207
	static void _UPDATE_ENTITY_SHIT_OR_SOMETHING(Any p0) { invoker::Invoke<Void>(0xBDBACB52A03CC760, p0); } // 0xBDBACB52A03CC760 b1207
	static void _0x6EC2A67962296F49(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x6EC2A67962296F49, p0, p1, p2, p3); } // 0x6EC2A67962296F49 b1207
	static void _0x07C0F87AAC57F2E4(Any p0, Any p1) { invoker::Invoke<Void>(0x07C0F87AAC57F2E4, p0, p1); } // 0x07C0F87AAC57F2E4 b1207
	static void _0xAB72C67163DC4DB4(Any p0, Any p1) { invoker::Invoke<Void>(0xAB72C67163DC4DB4, p0, p1); } // 0xAB72C67163DC4DB4 b1207
	static Any _0x2A32FAA57B937173() { return invoker::Invoke<Any>(0x2A32FAA57B937173); } // 0x2A32FAA57B937173 b1207
	static Any _0x175668836B44CBB0() { return invoker::Invoke<Any>(0x175668836B44CBB0); } // 0x175668836B44CBB0 b1207
	static Any _0x4C11CCACB7C02B6E() { return invoker::Invoke<Any>(0x4C11CCACB7C02B6E); } // 0x4C11CCACB7C02B6E b1207
	static Any _0xCAAFC225E33B1D15() { return invoker::Invoke<Any>(0xCAAFC225E33B1D15); } // 0xCAAFC225E33B1D15 b1207
	static Any _0x99AFF17222D4DEB4() { return invoker::Invoke<Any>(0x99AFF17222D4DEB4); } // 0x99AFF17222D4DEB4 b1207
	static Any _0xCC3B787E73E64160() { return invoker::Invoke<Any>(0xCC3B787E73E64160); } // 0xCC3B787E73E64160 b1207
	static Any _0x171C18E994C1A395() { return invoker::Invoke<Any>(0x171C18E994C1A395); } // 0x171C18E994C1A395 b1207
	static Any _0x0DED5B0C8EBAAE12() { return invoker::Invoke<Any>(0x0DED5B0C8EBAAE12); } // 0x0DED5B0C8EBAAE12 b1207
	static void DRAW_RECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x405224591DF02025, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x405224591DF02025 b1207
	static Any _0x906B86E6D7896B9E() { return invoker::Invoke<Any>(0x906B86E6D7896B9E); } // 0x906B86E6D7896B9E b1207
	static void SET_SCRIPT_GFX_DRAW_ORDER(Any p0) { invoker::Invoke<Void>(0xCFCC78391C8B3814, p0); } // 0xCFCC78391C8B3814 b1207
	static void DRAW_SPRITE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoker::Invoke<Void>(0xC9884ECADE94CB34, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xC9884ECADE94CB34 b1207
	static void ATTACH_TV_AUDIO_TO_ENTITY(Any p0) { invoker::Invoke<Void>(0x40866A418EB8EFDE, p0); } // 0x40866A418EB8EFDE b1207
	static void SET_TV_AUDIO_FRONTEND(Any p0) { invoker::Invoke<Void>(0x64437C98FCC5F291, p0); } // 0x64437C98FCC5F291 b1207
	static void GET_SCREEN_RESOLUTION(Any p0, Any p1) { invoker::Invoke<Void>(0x66773C92835D0909, p0, p1); } // 0x66773C92835D0909 b1207
	static void _0xA04EF43030593ABC(Any p0, Any p1) { invoker::Invoke<Void>(0xA04EF43030593ABC, p0, p1); } // 0xA04EF43030593ABC b1207
	static void _0xA21AF60C9F99CCC5() { invoker::Invoke<Void>(0xA21AF60C9F99CCC5); } // 0xA21AF60C9F99CCC5 b1207
	static Any _0xC28F62AC9774FC1B() { return invoker::Invoke<Any>(0xC28F62AC9774FC1B); } // 0xC28F62AC9774FC1B b1207
	static void _0xEB48CE48EEC41FD4(Any p0) { invoker::Invoke<Void>(0xEB48CE48EEC41FD4, p0); } // 0xEB48CE48EEC41FD4 b1207
	static Any GET_SCREEN_COORD_FROM_WORLD_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xCB50D7AFCC8B0EC6, p0, p1, p2, p3, p4); } // 0xCB50D7AFCC8B0EC6 b1207
	static Any _0xA2A51869BDED733B() { return invoker::Invoke<Any>(0xA2A51869BDED733B); } // 0xA2A51869BDED733B b1207
	static Any _0xB2797619A7C7747B() { return invoker::Invoke<Any>(0xB2797619A7C7747B); } // 0xB2797619A7C7747B b1207
	static void _0xC35A6D07C93802B2() { invoker::Invoke<Void>(0x98A7CD5EA379A854); } // 0x98A7CD5EA379A854 b1207
	static Any _0x1A9F09AB458D49C6() { return invoker::Invoke<Any>(0x1A9F09AB458D49C6); } // 0x1A9F09AB458D49C6 b1207
	static Any CREATE_TRACKED_POINT() { return invoker::Invoke<Any>(0xFB405CB357C69CB9); } // 0xFB405CB357C69CB9 b1207
	static void SET_TRACKED_POINT_INFO(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xF6FDA3D4404D4F2C, p0, p1, p2, p3, p4); } // 0xF6FDA3D4404D4F2C b1207
	static Any IS_TRACKED_POINT_VISIBLE(Any p0) { return invoker::Invoke<Any>(0xCBB056BA159FB48D, p0); } // 0xCBB056BA159FB48D b1207
	static Any _0xDFE332A5DA6FE7C9(Any p0) { return invoker::Invoke<Any>(0xDFE332A5DA6FE7C9, p0); } // 0xDFE332A5DA6FE7C9 b1207
	static void DESTROY_TRACKED_POINT(Any p0) { invoker::Invoke<Void>(0x37A59922109F8F1C, p0); } // 0x37A59922109F8F1C b1207
	static Any _0xF2FDDCC8C6BAE1B3(Any p0) { return invoker::Invoke<Any>(0xF2FDDCC8C6BAE1B3, p0); } // 0xF2FDDCC8C6BAE1B3 b1207
	static Any _0xBE197EAA669238F4(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x27219300C36A8D40, p0, p1, p2, p3, p4); } // 0x27219300C36A8D40 b1207
	static void _0x61F95E5BB3E0A8C6(Any p0) { invoker::Invoke<Void>(0xAE7BF7CA9E4BA48D, p0); } // 0xAE7BF7CA9E4BA48D b1207
	static Any _0xBD3324281E8B9933(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xBD3324281E8B9933, p0, p1, p2, p3); } // 0xBD3324281E8B9933 b1207
	static Any _0xFA50F79257745E74(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xFA50F79257745E74, p0, p1, p2, p3, p4, p5, p6); } // 0xFA50F79257745E74 b1207
	static void _0x9CF1836C03FB67A2(Any p0, Any p1) { invoker::Invoke<Void>(0x9CF1836C03FB67A2, p0, p1); } // 0x9CF1836C03FB67A2 b1207
	static void _0xDFEA23EC90113657(Any p0) { invoker::Invoke<Void>(0xDFEA23EC90113657, p0); } // 0xDFEA23EC90113657 b1207
	static void _0xDD0BC0EDCB2162F6(Any p0) { invoker::Invoke<Void>(0xDD0BC0EDCB2162F6, p0); } // 0xDD0BC0EDCB2162F6 b1207
	static Any _0xDE9BAD3292AA6D5E(Any p0) { return invoker::Invoke<Any>(0xDE9BAD3292AA6D5E, p0); } // 0xDE9BAD3292AA6D5E b1207
	static void _0xEC3F7F24EEEB3BA3() { invoker::Invoke<Void>(0xEC3F7F24EEEB3BA3); } // 0xEC3F7F24EEEB3BA3 b1207
	static void _0x9F158A49B0D84C3C(Any p0) { invoker::Invoke<Void>(0x9F158A49B0D84C3C, p0); } // 0x9F158A49B0D84C3C b1207
	static void _0x910E260AEAD855DE() { invoker::Invoke<Void>(0x910E260AEAD855DE); } // 0x910E260AEAD855DE b1207
	static Any _0x3D084D5568FB4028(Any p0) { return invoker::Invoke<Any>(0x3D084D5568FB4028, p0); } // 0x3D084D5568FB4028 b1207
	static void _0xDAD7FB8402651654() { invoker::Invoke<Void>(0xDAD7FB8402651654); } // 0xDAD7FB8402651654 b1207
	static Any _0x646ED1A1D28487DF() { return invoker::Invoke<Any>(0x646ED1A1D28487DF); } // 0x646ED1A1D28487DF b1207
	static void _0x160921255327C591(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x160921255327C591, p0, p1, p2, p3); } // 0x160921255327C591 b1207
	static void _0xD2936CAB8B58FCBD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xD9EDB2E4512D563E, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD9EDB2E4512D563E b1207
	static void _SET_FAR_SHADOWS_SUPPRESSED(Any p0) { invoker::Invoke<Void>(0x8FBFD2AEB196B369, p0); } // 0x8FBFD2AEB196B369 b1207
	static Any _0xCE4774E0F9AD48D1() { return invoker::Invoke<Any>(0xCE4774E0F9AD48D1); } // 0xCE4774E0F9AD48D1 b1207
	static Any _0xF7C29D7C12C36F03() { return invoker::Invoke<Any>(0xF7C29D7C12C36F03); } // 0xF7C29D7C12C36F03 b1207
	static void _0x503941F65DBA24EC(Any p0) { invoker::Invoke<Void>(0x503941F65DBA24EC, p0); } // 0x503941F65DBA24EC b1207
	static Any _0x815653A42C5ABE76() { return invoker::Invoke<Any>(0x815653A42C5ABE76); } // 0x815653A42C5ABE76 b1207
	static Any _0xFF8018C778349234() { return invoker::Invoke<Any>(0xFF8018C778349234); } // 0xFF8018C778349234 b1207
	static void _0xE3E2C1B4C59DBC77(Any p0) { invoker::Invoke<Void>(0x297B72E2AF094742, p0); } // 0x297B72E2AF094742 b1207
	static void TOGGLE_PAUSED_RENDERPHASES(Any p0) { invoker::Invoke<Void>(0xEF9E1C45732F55FA, p0); } // 0xEF9E1C45732F55FA b1207
	static Any _0x86ED21BDB2791CE8() { return invoker::Invoke<Any>(0x86ED21BDB2791CE8); } // 0x86ED21BDB2791CE8 b1207
	static Any _0xCCD9AAD85E1B559E() { return invoker::Invoke<Any>(0xCCD9AAD85E1B559E); } // 0xCCD9AAD85E1B559E b1207
	static Any _0xCC23AA1A7CBFE840() { return invoker::Invoke<Any>(0xCC23AA1A7CBFE840); } // 0xCC23AA1A7CBFE840 b1207
	static void _0x21F00E08CBB5F37B(Any p0) { invoker::Invoke<Void>(0x21F00E08CBB5F37B, p0); } // 0x21F00E08CBB5F37B b1207
	static void _0x5AC6E0FA028369DE() { invoker::Invoke<Void>(0x5AC6E0FA028369DE); } // 0x5AC6E0FA028369DE b1207
	static Any _0xEC3D8C228FE553D7() { return invoker::Invoke<Any>(0xEC3D8C228FE553D7); } // 0xEC3D8C228FE553D7 b1207
	static Any _0xF5793BB386E1FF9C() { return invoker::Invoke<Any>(0xF5793BB386E1FF9C); } // 0xF5793BB386E1FF9C b1207
	static Any _0xC8D0611D9A0CF5D3() { return invoker::Invoke<Any>(0xC8D0611D9A0CF5D3); } // 0xC8D0611D9A0CF5D3 b1207
	static Any _0x06C0D8BB6B04A709() { return invoker::Invoke<Any>(0x06C0D8BB6B04A709); } // 0x06C0D8BB6B04A709 b1207
	static Any _0x62B9F9A1272AED80() { return invoker::Invoke<Any>(0x62B9F9A1272AED80); } // 0x62B9F9A1272AED80 b1207
	static Any _0x98F4154989B81EC6() { return invoker::Invoke<Any>(0x98F4154989B81EC6); } // 0x98F4154989B81EC6 b1207
	static Any START_PARTICLE_FX_NON_LOOPED_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0x2E80BF72EF7C87AC, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x2E80BF72EF7C87AC b1207
	static Any START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0xFB97618457994A62, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xFB97618457994A62 b1207
	static Any START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoker::Invoke<Any>(0x3FAA72BD940C3AC0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x3FAA72BD940C3AC0 b1207
	static Any START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoker::Invoke<Any>(0xFF4C64C513388C12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xFF4C64C513388C12 b1207
	static Any _0xE6CFE43937061143() { return invoker::Invoke<Any>(0xE6CFE43937061143); } // 0xE6CFE43937061143 b1207
	static Any _0xC695870B8A149B96(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoker::Invoke<Any>(0xC695870B8A149B96, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xC695870B8A149B96 b1207
	static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x60B85BED6577A35B, p0, p1, p2); } // 0x60B85BED6577A35B b1207
	static Any START_PARTICLE_FX_LOOPED_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoker::Invoke<Any>(0xBA32867E86125D3A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xBA32867E86125D3A b1207
	static Any START_PARTICLE_FX_LOOPED_ON_PED_BONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoker::Invoke<Any>(0xE689C1B1432BB8AF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xE689C1B1432BB8AF b1207
	static Any START_PARTICLE_FX_LOOPED_ON_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoker::Invoke<Any>(0xBD41E1440CE39800, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xBD41E1440CE39800 b1207
	static Any START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoker::Invoke<Any>(0xD3BA6EC7F2FBD5E9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xD3BA6EC7F2FBD5E9 b1207
	static Any START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoker::Invoke<Any>(0x8F90AB32E1944BDE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x8F90AB32E1944BDE b1207
	static Any START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoker::Invoke<Any>(0x9C56621462FFE7A6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x9C56621462FFE7A6 b1207
	static void STOP_PARTICLE_FX_LOOPED(Any p0, Any p1) { invoker::Invoke<Void>(0x22970F3A088B133B, p0, p1); } // 0x22970F3A088B133B b1207
	static Any DOES_PARTICLE_FX_LOOPED_EXIST(Any p0) { return invoker::Invoke<Any>(0x9DD5AFF561E88F2A, p0); } // 0x9DD5AFF561E88F2A b1207
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xD3A4A95FC94FE83B, p0, p1, p2, p3, p4, p5, p6); } // 0xD3A4A95FC94FE83B b1207
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x3674F389B0FACD80, p0, p1, p2, p3); } // 0x3674F389B0FACD80 b1207
	static void SET_PARTICLE_FX_LOOPED_COLOUR(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x239879FC61C610CC, p0, p1, p2, p3, p4); } // 0x239879FC61C610CC b1207
	static void SET_PARTICLE_FX_LOOPED_ALPHA(Any p0, Any p1) { invoker::Invoke<Void>(0x88786E76234F7054, p0, p1); } // 0x88786E76234F7054 b1207
	static void SET_PARTICLE_FX_LOOPED_SCALE(Any p0, Any p1) { invoker::Invoke<Void>(0x1A9E1C0D98D093B7, p0, p1); } // 0x1A9E1C0D98D093B7 b1207
	static void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(Any p0, Any p1) { invoker::Invoke<Void>(0x9B04D471DA0AD7AA, p0, p1); } // 0x9B04D471DA0AD7AA b1207
	static void _0x9DDC222D85D5AF2A(Any p0, Any p1) { invoker::Invoke<Void>(0x9DDC222D85D5AF2A, p0, p1); } // 0x9DDC222D85D5AF2A b1207
	static void REMOVE_PARTICLE_FX(Any p0, Any p1) { invoker::Invoke<Void>(0x459598F579C98929, p0, p1); } // 0x459598F579C98929 b1207
	static void REMOVE_PARTICLE_FX_FROM_ENTITY(Any p0) { invoker::Invoke<Void>(0x92884B4A49D81325, p0); } // 0x92884B4A49D81325 b1207
	static void REMOVE_PARTICLE_FX_IN_RANGE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x87B5905ECA623B68, p0, p1, p2, p3); } // 0x87B5905ECA623B68 b1207
	static void USE_PARTICLE_FX_ASSET(Any p0) { invoker::Invoke<Void>(0xA10DB07FC234DD12, p0); } // 0xA10DB07FC234DD12 b1207
	static void SET_PARTICLE_FX_OVERRIDE(Any p0, Any p1) { invoker::Invoke<Void>(0xBE711A169E9C7E95, p0, p1); } // 0xBE711A169E9C7E95 b1207
	static void RESET_PARTICLE_FX_OVERRIDE(Any p0) { invoker::Invoke<Void>(0x274B3DABF7E72DEF, p0); } // 0x274B3DABF7E72DEF b1207
	static Any _0x4D14AF567FC02885() { return invoker::Invoke<Any>(0x4D14AF567FC02885); } // 0x4D14AF567FC02885 b1207
	static void _0x4FB67D172C4476F3(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4FB67D172C4476F3, p0, p1, p2, p3); } // 0x4FB67D172C4476F3 b1207
	static Any _0x3C61B52B00848C26() { return invoker::Invoke<Any>(0x3C61B52B00848C26); } // 0x3C61B52B00848C26 b1207
	static void _0x453D16D41FC51D3E(Any p0) { invoker::Invoke<Void>(0x453D16D41FC51D3E, p0); } // 0x453D16D41FC51D3E b1207
	static void _0x27E32866E9A5C416(Any p0) { invoker::Invoke<Void>(0xA53C8D7D0F8C74D0, p0); } // 0xA53C8D7D0F8C74D0 b1207
	static void _0xBB90E12CAC1DAB25(Any p0) { invoker::Invoke<Void>(0x8DCCC98DC0DBF9E4, p0); } // 0x8DCCC98DC0DBF9E4 b1207
	static Any _0x6E8EB45A4F4460EB() { return invoker::Invoke<Any>(0x6E8EB45A4F4460EB); } // 0x6E8EB45A4F4460EB b1207
	static void _0x949F397A288B28B3(Any p0) { invoker::Invoke<Void>(0x2A1625858887D4E6, p0); } // 0x2A1625858887D4E6 b1207
	static void _0x4046493D2EEACA0E() { invoker::Invoke<Void>(0x4046493D2EEACA0E); } // 0x4046493D2EEACA0E b1207
	static void _0x7DFB49BCDB73089A(Any p0, Any p1) { invoker::Invoke<Void>(0x7DFB49BCDB73089A, p0, p1); } // 0x7DFB49BCDB73089A b1207
	static Any _0x50C14328119E1DD1() { return invoker::Invoke<Any>(0x50C14328119E1DD1); } // 0x50C14328119E1DD1 b1207
	static Any _0x0552AA3FFC5B87AA() { return invoker::Invoke<Any>(0x0552AA3FFC5B87AA); } // 0x0552AA3FFC5B87AA b1207
	static Any _0x7C348310A6E2FB91() { return invoker::Invoke<Any>(0x7C348310A6E2FB91); } // 0x7C348310A6E2FB91 b1207
	static Any _0x72E30372E7CC4415() { return invoker::Invoke<Any>(0x72E30372E7CC4415); } // 0x72E30372E7CC4415 b1207
	static void REMOVE_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x86DE59FA02902B40, p0, p1, p2, p3); } // 0x86DE59FA02902B40 b1207
	static void REMOVE_DECALS_FROM_OBJECT(Any p0) { invoker::Invoke<Void>(0xFB8972BAE0013140, p0); } // 0xFB8972BAE0013140 b1207
	static Any ADD_DECAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19, Any p20, Any p21) { return invoker::Invoke<Any>(0x57CB267624EF85C0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21); } // 0x57CB267624EF85C0 b1207
	static void _0xFA2ECC78A6014D4F(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xFA2ECC78A6014D4F, p0, p1, p2, p3); } // 0xFA2ECC78A6014D4F b1207
	static void _0xF708298675ABDC6A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xF708298675ABDC6A, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xF708298675ABDC6A b1207
	static void _0xDFCE8CE9F3EBE93F(Any p0) { invoker::Invoke<Void>(0xDFCE8CE9F3EBE93F, p0); } // 0xDFCE8CE9F3EBE93F b1207
	static void _0xC349EE1E6EFA494B(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xC349EE1E6EFA494B, p0, p1, p2, p3); } // 0xC349EE1E6EFA494B b1207
	static void START_PETROL_TRAIL_DECALS(Any p0, Any p1) { invoker::Invoke<Void>(0x46F246D6504F0031, p0, p1); } // 0x46F246D6504F0031 b1207
	static void ADD_PETROL_TRAIL_DECAL_INFO(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x73354FB6D03D2E8A, p0, p1, p2, p3); } // 0x73354FB6D03D2E8A b1207
	static void END_PETROL_TRAIL_DECALS() { invoker::Invoke<Void>(0x0E126AAE933F3B56); } // 0x0E126AAE933F3B56 b1207
	static Any _0xE63D68F455CA0B47(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xE63D68F455CA0B47, p0, p1, p2, p3, p4, p5, p6); } // 0xE63D68F455CA0B47 b1207
	static void REMOVE_DECAL(Any p0) { invoker::Invoke<Void>(0x49A720552EB0BB88, p0); } // 0x49A720552EB0BB88 b1207
	static Any IS_DECAL_ALIVE(Any p0) { return invoker::Invoke<Any>(0x3E4B4E5CF5D3EEB5, p0); } // 0x3E4B4E5CF5D3EEB5 b1207
	static void _0xB032C085D9A03907() { invoker::Invoke<Void>(0xB032C085D9A03907); } // 0xB032C085D9A03907 b1207
	static Any _0xFB680A9B33D0EDBE() { return invoker::Invoke<Any>(0xFB680A9B33D0EDBE); } // 0xFB680A9B33D0EDBE b1207
	static void _0x41F88A85A579A61D(Any p0) { invoker::Invoke<Void>(0x41F88A85A579A61D, p0); } // 0x41F88A85A579A61D b1207
	static Any _0xB9C92616929CC25D() { return invoker::Invoke<Any>(0xB9C92616929CC25D); } // 0xB9C92616929CC25D b1207
	static void _0xDD9DC1AB63D513CE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDD9DC1AB63D513CE, p0, p1, p2); } // 0xDD9DC1AB63D513CE b1207
	static void _0x812C1563185C6FB2() { invoker::Invoke<Void>(0x812C1563185C6FB2); } // 0x812C1563185C6FB2 b1207
	static void _0x4BD66B4E3427689B(Any p0) { invoker::Invoke<Void>(0x4BD66B4E3427689B, p0); } // 0x4BD66B4E3427689B b1207
	static void _0xF5E45CB1CF965D2D(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF5E45CB1CF965D2D, p0, p1, p2); } // 0xF5E45CB1CF965D2D b1207
	static void _0xF2F543D48F319A3A() { invoker::Invoke<Void>(0xF2F543D48F319A3A); } // 0xF2F543D48F319A3A b1207
	static void _0x1460B644397453EB() { invoker::Invoke<Void>(0x1460B644397453EB); } // 0x1460B644397453EB b1207
	static void _0xCD284E2F6AC27EE9(Any p0) { invoker::Invoke<Void>(0xCD284E2F6AC27EE9, p0); } // 0xCD284E2F6AC27EE9 b1207
	static void SET_TIMECYCLE_MODIFIER(Any p0) { invoker::Invoke<Void>(0xFA08722A5EA82DA7, p0); } // 0xFA08722A5EA82DA7 b1207
	static void SET_TIMECYCLE_MODIFIER_STRENGTH(Any p0) { invoker::Invoke<Void>(0xFDB74C9CC54C3F37, p0); } // 0xFDB74C9CC54C3F37 b1207
	static void SET_TRANSITION_TIMECYCLE_MODIFIER(Any p0, Any p1) { invoker::Invoke<Void>(0xFF927A09F481D80C, p0, p1); } // 0xFF927A09F481D80C b1207
	static void _0x1CBA05AE7BD7EE05(Any p0) { invoker::Invoke<Void>(0xBB6C707F20D955D4, p0); } // 0xBB6C707F20D955D4 b1207
	static void CLEAR_TIMECYCLE_MODIFIER() { invoker::Invoke<Void>(0x0E3F4AF2D63491FB); } // 0x0E3F4AF2D63491FB b1207
	static Any GET_TIMECYCLE_MODIFIER_INDEX() { return invoker::Invoke<Any>(0xA705394293E2B3D3); } // 0xA705394293E2B3D3 b1207
	static Any GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return invoker::Invoke<Any>(0x2DA67BA3C8A6755D); } // 0x2DA67BA3C8A6755D b1207
	static void _0x67B0778C62E74423(Any p0) { invoker::Invoke<Void>(0x67B0778C62E74423, p0); } // 0x67B0778C62E74423 b1207
	static void _0x6C03118E9E5C1A14(Any p0) { invoker::Invoke<Void>(0x6C03118E9E5C1A14, p0); } // 0x6C03118E9E5C1A14 b1207
	static Any _0x25CA89B2A39DCC69() { return invoker::Invoke<Any>(0x25CA89B2A39DCC69); } // 0x25CA89B2A39DCC69 b1207
	static void _SET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH(Any p0) { invoker::Invoke<Void>(0x6FE93BCC7BF12B63, p0); } // 0x6FE93BCC7BF12B63 b1207
	static void SET_TV_CHANNEL(Any p0) { invoker::Invoke<Void>(0x593FAF7FC9401A56, p0); } // 0x593FAF7FC9401A56 b1207
	static Any GET_TV_CHANNEL() { return invoker::Invoke<Any>(0xF90FBFD68F3C59AE); } // 0xF90FBFD68F3C59AE b1207
	static void SET_TV_VOLUME(Any p0) { invoker::Invoke<Void>(0x73A97068787D7231, p0); } // 0x73A97068787D7231 b1207
	static void DRAW_TV_CHANNEL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xC0A145540254A840, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC0A145540254A840 b1207
	static void SET_TV_CHANNEL_PLAYLIST(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDEC6B25F5DC8925B, p0, p1, p2); } // 0xDEC6B25F5DC8925B b1207
	static Any _IS_TV_PLAYLIST_ITEM_PLAYING(Any p0) { return invoker::Invoke<Any>(0x4D562223E0EB65F3, p0); } // 0x4D562223E0EB65F3 b1207
	static Any _0x5C674EB487891F6B() { return invoker::Invoke<Any>(0x5C674EB487891F6B); } // 0x5C674EB487891F6B b1207
	static Any _0x6FC9B065229C0787() { return invoker::Invoke<Any>(0x6FC9B065229C0787); } // 0x6FC9B065229C0787 b1207
	static void _0x32DE2BFFDA43E62A() { invoker::Invoke<Void>(0x32DE2BFFDA43E62A); } // 0x32DE2BFFDA43E62A b1207
	static Any _0xD543487A1F12828F() { return invoker::Invoke<Any>(0xD543487A1F12828F); } // 0xD543487A1F12828F b1207
	static Any _0xD9BC98B55BCFAA9B() { return invoker::Invoke<Any>(0xD9BC98B55BCFAA9B); } // 0xD9BC98B55BCFAA9B b1207
	static Any _0x735762E8D7573E42() { return invoker::Invoke<Any>(0x735762E8D7573E42); } // 0x735762E8D7573E42 b1207
	static Any _0x981C7D863980FA51() { return invoker::Invoke<Any>(0x981C7D863980FA51); } // 0x981C7D863980FA51 b1207
	static void _0x5199405EABFBD7F0(Any p0) { invoker::Invoke<Void>(0x5199405EABFBD7F0, p0); } // 0x5199405EABFBD7F0 b1207
	static Any _0xBF2DD155B2ADCD0A(Any p0) { return invoker::Invoke<Any>(0xBF2DD155B2ADCD0A, p0); } // 0xBF2DD155B2ADCD0A b1207
	static void _0x37D7BDBA89F13959(Any p0) { invoker::Invoke<Void>(0x37D7BDBA89F13959, p0); } // 0x37D7BDBA89F13959 b1207
	static void ANIMPOSTFX_PLAY(Any p0) { invoker::Invoke<Void>(0x4102732DF6B4005F, p0); } // 0x4102732DF6B4005F b1207
	static Any _0x3A9A281FF71249E9() { return invoker::Invoke<Any>(0x3A9A281FF71249E9); } // 0x3A9A281FF71249E9 b1207
	static void ANIMPOSTFX_STOP(Any p0) { invoker::Invoke<Void>(0xB4FD7446BAB2F394, p0); } // 0xB4FD7446BAB2F394 b1207
	static Any _0x26DD2FB0A88CC412() { return invoker::Invoke<Any>(0x26DD2FB0A88CC412); } // 0x26DD2FB0A88CC412 b1207
	static void _0xC5CB91D65852ED7E(Any p0) { invoker::Invoke<Void>(0xC5CB91D65852ED7E, p0); } // 0xC5CB91D65852ED7E b1207
	static Any ANIMPOSTFX_IS_RUNNING(Any p0) { return invoker::Invoke<Any>(0x4A123E85D7C4CA0B, p0); } // 0x4A123E85D7C4CA0B b1207
	static Any _0x2D4F9C852CE8A253() { return invoker::Invoke<Any>(0x2D4F9C852CE8A253); } // 0x2D4F9C852CE8A253 b1207
	static void ANIMPOSTFX_STOP_ALL() { invoker::Invoke<Void>(0x66560A0D4C64FD21); } // 0x66560A0D4C64FD21 b1207
	static Any _0xAD74C22A541AB987() { return invoker::Invoke<Any>(0xAD74C22A541AB987); } // 0xAD74C22A541AB987 b1207
	static void _0xCAB4DD2D5B2B7246(Any p0, Any p1) { invoker::Invoke<Void>(0xCAB4DD2D5B2B7246, p0, p1); } // 0xCAB4DD2D5B2B7246 b1207
	static void _0xF972F0AB16DC5260(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF972F0AB16DC5260, p0, p1, p2); } // 0xF972F0AB16DC5260 b1207
	static Any _0xB958D97A0DFAA0C2(Any p0) { return invoker::Invoke<Any>(0xB958D97A0DFAA0C2, p0); } // 0xB958D97A0DFAA0C2 b1207
	static void _0xA201A3D0AC087C37(Any p0) { invoker::Invoke<Void>(0xA201A3D0AC087C37, p0); } // 0xA201A3D0AC087C37 b1207
	static Any _0xFBF161FCFEC8589E(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xFBF161FCFEC8589E, p0, p1, p2, p3); } // 0xFBF161FCFEC8589E b1207
	static Any _0x842CCC9491FFCD9B(Any p0) { return invoker::Invoke<Any>(0x842CCC9491FFCD9B, p0); } // 0x842CCC9491FFCD9B b1207
	static Any _0xF3E039322BFBD4D8() { return invoker::Invoke<Any>(0xF3E039322BFBD4D8); } // 0xF3E039322BFBD4D8 b1207
	static Any _0x59EA80079B86D8C7() { return invoker::Invoke<Any>(0x59EA80079B86D8C7); } // 0x59EA80079B86D8C7 b1207
	static Any _0x38D9D50F2085E9B3() { return invoker::Invoke<Any>(0x38D9D50F2085E9B3); } // 0x38D9D50F2085E9B3 b1207
	static void _0x9B8D5D4CB8AF58B3(Any p0) { invoker::Invoke<Void>(0x9B8D5D4CB8AF58B3, p0); } // 0x9B8D5D4CB8AF58B3 b1207
	static Any _0xC76FC4C2FC5F4405() { return invoker::Invoke<Any>(0xC76FC4C2FC5F4405); } // 0xC76FC4C2FC5F4405 b1207
	static Any _0xEDA5CBECF56E1386() { return invoker::Invoke<Any>(0xEDA5CBECF56E1386); } // 0xEDA5CBECF56E1386 b1207
	static Any _0xEEF83A759AE06A27() { return invoker::Invoke<Any>(0xEEF83A759AE06A27); } // 0xEEF83A759AE06A27 b1207
	static Any _0xE75CDDEBF618C8FF() { return invoker::Invoke<Any>(0xE75CDDEBF618C8FF); } // 0xE75CDDEBF618C8FF b1207
	static Any _0x71845905BCCDE781() { return invoker::Invoke<Any>(0x71845905BCCDE781); } // 0x71845905BCCDE781 b1207
	static Any _0x9AB192A9EF980EED() { return invoker::Invoke<Any>(0x9AB192A9EF980EED); } // 0x9AB192A9EF980EED b1207
	static Any _0xFF584F097C17FA8F() { return invoker::Invoke<Any>(0xFF584F097C17FA8F); } // 0xFF584F097C17FA8F b1207
	static Any _0x3DA7A10583A4BEC0() { return invoker::Invoke<Any>(0x3DA7A10583A4BEC0); } // 0x3DA7A10583A4BEC0 b1207
	static Any _0xC37792A3F9C90771() { return invoker::Invoke<Any>(0xC37792A3F9C90771); } // 0xC37792A3F9C90771 b1207
	static void _0xA0F4D12D6042F6D5(Any p0, Any p1) { invoker::Invoke<Void>(0xA0F4D12D6042F6D5, p0, p1); } // 0xA0F4D12D6042F6D5 b1207
	static void _0x8996FA6AD9FE4E90(Any p0) { invoker::Invoke<Void>(0x8996FA6AD9FE4E90, p0); } // 0x8996FA6AD9FE4E90 b1207
	static void _0xC38B4952B728397A(Any p0, Any p1) { invoker::Invoke<Void>(0xC38B4952B728397A, p0, p1); } // 0xC38B4952B728397A b1207
	static Any _0xAF6E67D073D2DCE2() { return invoker::Invoke<Any>(0xAF6E67D073D2DCE2); } // 0xAF6E67D073D2DCE2 b1207
	static Any _0xFD05B1DDE83749FA(Any p0) { return invoker::Invoke<Any>(0xFD05B1DDE83749FA, p0); } // 0xFD05B1DDE83749FA b1207
	static void _0xC2B8164C3BE871A4() { invoker::Invoke<Void>(0xC2B8164C3BE871A4); } // 0xC2B8164C3BE871A4 b1207
	static void _0x3E2FDDBE435A8787() { invoker::Invoke<Void>(0x3E2FDDBE435A8787); } // 0x3E2FDDBE435A8787 b1207
	static void _0x55285F885F662169() { invoker::Invoke<Void>(0x55285F885F662169); } // 0x55285F885F662169 b1207
	static Any _0xD9C24F53631F2372(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xD9C24F53631F2372, p0, p1, p2); } // 0xD9C24F53631F2372 b1207
	static void _0x196D3ACBEBA4A44B(Any p0) { invoker::Invoke<Void>(0x196D3ACBEBA4A44B, p0); } // 0x196D3ACBEBA4A44B b1207
	static void _0xA1A86055792FB249(Any p0) { invoker::Invoke<Void>(0xA1A86055792FB249, p0); } // 0xA1A86055792FB249 b1207
	static Any _0x402E1A61D2587FCD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x402E1A61D2587FCD, p0, p1, p2, p3, p4, p5, p6); } // 0x402E1A61D2587FCD b1207
	static Any _0x5C9C3A466B3296A8(Any p0) { return invoker::Invoke<Any>(0x5C9C3A466B3296A8, p0); } // 0x5C9C3A466B3296A8 b1207
	static Any _0xA15CCAB8AD038291(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xA15CCAB8AD038291, p0, p1, p2, p3); } // 0xA15CCAB8AD038291 b1207
	static Any _0x285438C26C732F9D() { return invoker::Invoke<Any>(0x285438C26C732F9D); } // 0x285438C26C732F9D b1207
	static void _0xBFCB17895BB99E4E(Any p0, Any p1) { invoker::Invoke<Void>(0xBFCB17895BB99E4E, p0, p1); } // 0xBFCB17895BB99E4E b1207
	static Any _0x113857D66A9CABE6(Any p0) { return invoker::Invoke<Any>(0x113857D66A9CABE6, p0); } // 0x113857D66A9CABE6 b1207
	static Any _0x5D1C5D8E62E8EE1C(Any p0) { return invoker::Invoke<Any>(0x5D1C5D8E62E8EE1C, p0); } // 0x5D1C5D8E62E8EE1C b1207
	static void _0x9D1B0B5066205692() { invoker::Invoke<Void>(0x9D1B0B5066205692); } // 0x9D1B0B5066205692 b1207
	static void _0xC489FE31AC726512(Any p0, Any p1) { invoker::Invoke<Void>(0xC489FE31AC726512, p0, p1); } // 0xC489FE31AC726512 b1207
	static void _0xB8C984C0D47F4F07(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xB8C984C0D47F4F07, p0, p1, p2); } // 0xB8C984C0D47F4F07 b1207
	static void _0xFE7966DF01452F32(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xFE7966DF01452F32, p0, p1, p2); } // 0xFE7966DF01452F32 b1207
	static void _0x10C1767B93257480(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x10C1767B93257480, p0, p1, p2); } // 0x10C1767B93257480 b1207
	static void _0xC332C91388F5580B(Any p0) { invoker::Invoke<Void>(0xC332C91388F5580B, p0); } // 0xC332C91388F5580B b1207
	static void _0x085C5B61A0114F32(Any p0, Any p1) { invoker::Invoke<Void>(0x085C5B61A0114F32, p0, p1); } // 0x085C5B61A0114F32 b1207
	static void _0x1FF8731BE1DFC0C0(Any p0, Any p1) { invoker::Invoke<Void>(0x1FF8731BE1DFC0C0, p0, p1); } // 0x1FF8731BE1DFC0C0 b1207
	static Any _0xFC9B53C072F418E0() { return invoker::Invoke<Any>(0xFC9B53C072F418E0); } // 0xFC9B53C072F418E0 b1207
	static void _0x94B261F1F35293E1(Any p0) { invoker::Invoke<Void>(0x94B261F1F35293E1, p0); } // 0x94B261F1F35293E1 b1207
	static void _0xFAAD23DE7A54FC14() { invoker::Invoke<Void>(0xFAAD23DE7A54FC14); } // 0xFAAD23DE7A54FC14 b1207
	static void _0x5C9978A2A3DC3D0D() { invoker::Invoke<Void>(0x5C9978A2A3DC3D0D); } // 0x5C9978A2A3DC3D0D b1207
	static void _0xC6F81FCD15350323(Any p0, Any p1) { invoker::Invoke<Void>(0xC6F81FCD15350323, p0, p1); } // 0xC6F81FCD15350323 b1207
	static Any _0x958DEBD9353C0935() { return invoker::Invoke<Any>(0x958DEBD9353C0935); } // 0x958DEBD9353C0935 b1207
	static void _0x56A786E87FF53478(Any p0) { invoker::Invoke<Void>(0x56A786E87FF53478, p0); } // 0x56A786E87FF53478 b1207
	static Any _0xE8A8378BF651079C() { return invoker::Invoke<Any>(0xE8A8378BF651079C); } // 0xE8A8378BF651079C b1207
	static Any _0xE92012611461A42A() { return invoker::Invoke<Any>(0xE92012611461A42A); } // 0xE92012611461A42A b1207
	static Any _0x249CD6B7285536F2() { return invoker::Invoke<Any>(0x249CD6B7285536F2); } // 0x249CD6B7285536F2 b1207
	static Any _0xAF4D239B8903FCBE() { return invoker::Invoke<Any>(0xAF4D239B8903FCBE); } // 0xAF4D239B8903FCBE b1207
	static void _0xF02A9C330BBFC5C7(Any p0) { invoker::Invoke<Void>(0xF02A9C330BBFC5C7, p0); } // 0xF02A9C330BBFC5C7 b1207
	static void _0x1C6306E5BC25C29C() { invoker::Invoke<Void>(0x1C6306E5BC25C29C); } // 0x1C6306E5BC25C29C b1207
}

namespace _NAMESPACE26
{
	static Any _0xD6F6ACF4392187FB(Any p0) { return invoker::Invoke<Any>(0xD6F6ACF4392187FB, p0); } // 0xD6F6ACF4392187FB b1207
	static Any _0x93A91A351A07360E() { return invoker::Invoke<Any>(0x93A91A351A07360E); } // 0x93A91A351A07360E b1207
	static Any _0x0F99F6436528A089(Any p0) { return invoker::Invoke<Any>(0x0F99F6436528A089, p0); } // 0x0F99F6436528A089 b1207
	static Any _0xFCF96CCBD81B24C8() { return invoker::Invoke<Any>(0xFCF96CCBD81B24C8); } // 0xFCF96CCBD81B24C8 b1207
	static Any _0x9970AE8C3D706139() { return invoker::Invoke<Any>(0x9970AE8C3D706139); } // 0x9970AE8C3D706139 b1207
	static Any _0xD1A226F2E05E58FC() { return invoker::Invoke<Any>(0xD1A226F2E05E58FC); } // 0xD1A226F2E05E58FC b1207
	static Any _0xC5BF29F4035277C2() { return invoker::Invoke<Any>(0xC5BF29F4035277C2); } // 0xC5BF29F4035277C2 b1207
	static void _0x0A04A07BC3074EDB(Any p0) { invoker::Invoke<Void>(0x0A04A07BC3074EDB, p0); } // 0x0A04A07BC3074EDB b1207
	static Any _0xCD9E2D9BC52FD80F() { return invoker::Invoke<Any>(0xCD9E2D9BC52FD80F); } // 0xCD9E2D9BC52FD80F b1207
	static Any _0xC0474C8BCF6787AD(Any p0) { return invoker::Invoke<Any>(0xC0474C8BCF6787AD, p0); } // 0xC0474C8BCF6787AD b1207
	static Any _0x424B17A7DC5C90BC(Any p0) { return invoker::Invoke<Any>(0x424B17A7DC5C90BC, p0); } // 0x424B17A7DC5C90BC b1207
	static Any _0x9BE7DCB22D32CCBE(Any p0, Any p1) { return invoker::Invoke<Any>(0x9BE7DCB22D32CCBE, p0, p1); } // 0x9BE7DCB22D32CCBE b1207
	static Any _0x3F59FE6F37869576() { return invoker::Invoke<Any>(0x3F59FE6F37869576); } // 0x3F59FE6F37869576 b1207
	static Any _0x81FB74C83C2ED69F(Any p0) { return invoker::Invoke<Any>(0x81FB74C83C2ED69F, p0); } // 0x81FB74C83C2ED69F b1207
	static Any _0x149A2751AB66AC02() { return invoker::Invoke<Any>(0x149A2751AB66AC02); } // 0x149A2751AB66AC02 b1207
	static Any _0x853B0FA4D8732C57() { return invoker::Invoke<Any>(0x853B0FA4D8732C57); } // 0x853B0FA4D8732C57 b1207
	static Any _0x833D8268D51B4522() { return invoker::Invoke<Any>(0x833D8268D51B4522); } // 0x833D8268D51B4522 b1207
	static Any _0x901E0DC25080C8B9(Any p0) { return invoker::Invoke<Any>(0x901E0DC25080C8B9, p0); } // 0x901E0DC25080C8B9 b1207
	static Any _0xD1BF325C8252A982() { return invoker::Invoke<Any>(0xD1BF325C8252A982); } // 0xD1BF325C8252A982 b1207
	static Any _0xDA801F7F6A5278D3() { return invoker::Invoke<Any>(0xDA801F7F6A5278D3); } // 0xDA801F7F6A5278D3 b1207
	static Any _0x2F7EB8B6F6AFE79C() { return invoker::Invoke<Any>(0x2F7EB8B6F6AFE79C); } // 0x2F7EB8B6F6AFE79C b1207
	static Any _0x53A94294FDDCF98C() { return invoker::Invoke<Any>(0x53A94294FDDCF98C); } // 0x53A94294FDDCF98C b1207
	static Any _0x4BE6C13A45CCA8EC(Any p0) { return invoker::Invoke<Any>(0x4BE6C13A45CCA8EC, p0); } // 0x4BE6C13A45CCA8EC b1207
	static Any _0xCE88A261DCBBA0D9() { return invoker::Invoke<Any>(0xCE88A261DCBBA0D9); } // 0xCE88A261DCBBA0D9 b1207
	static Any _0x6102830F764B3DE1() { return invoker::Invoke<Any>(0x6102830F764B3DE1); } // 0x6102830F764B3DE1 b1207
	static Any _0xB38C256498748413() { return invoker::Invoke<Any>(0xB38C256498748413); } // 0xB38C256498748413 b1207
	static Any _0xE4C64CD37CB176AA() { return invoker::Invoke<Any>(0xE4C64CD37CB176AA); } // 0xE4C64CD37CB176AA b1207
	static Any _0x7BAA30C9BBE8AEE7() { return invoker::Invoke<Any>(0x7BAA30C9BBE8AEE7); } // 0x7BAA30C9BBE8AEE7 b1207
	static Any _0x0E5C9FB9ED5DFF1C() { return invoker::Invoke<Any>(0x0E5C9FB9ED5DFF1C); } // 0x0E5C9FB9ED5DFF1C b1207
	static Any _0xB22B1D9F74095382() { return invoker::Invoke<Any>(0xB22B1D9F74095382); } // 0xB22B1D9F74095382 b1207
	static Any _0xEE4F20004D0288B7() { return invoker::Invoke<Any>(0xEE4F20004D0288B7); } // 0xEE4F20004D0288B7 b1207
	static Any _0xAD22AB64FA428DF3() { return invoker::Invoke<Any>(0xAD22AB64FA428DF3); } // 0xAD22AB64FA428DF3 b1207
	static Any _0x48D82C83987E18E4() { return invoker::Invoke<Any>(0x48D82C83987E18E4); } // 0x48D82C83987E18E4 b1207
	static Any _0xA9CEAE8D6637FBAD() { return invoker::Invoke<Any>(0xA9CEAE8D6637FBAD); } // 0xA9CEAE8D6637FBAD b1207
	static Any _0x51C5EF47086AA0D7() { return invoker::Invoke<Any>(0x51C5EF47086AA0D7); } // 0x51C5EF47086AA0D7 b1207
	static Any _0x644E02F24F9D4E98() { return invoker::Invoke<Any>(0x644E02F24F9D4E98); } // 0x644E02F24F9D4E98 b1207
	static Any _0x3ADC71A66356D706() { return invoker::Invoke<Any>(0x3ADC71A66356D706); } // 0x3ADC71A66356D706 b1207
	static Any _0xFA7C5B7E087A4CEB() { return invoker::Invoke<Any>(0xFA7C5B7E087A4CEB); } // 0xFA7C5B7E087A4CEB b1207
	static Any _0x1F11702DDBD915C6() { return invoker::Invoke<Any>(0x1F11702DDBD915C6); } // 0x1F11702DDBD915C6 b1207
	static Any _0x7933754F260B428A() { return invoker::Invoke<Any>(0x7933754F260B428A); } // 0x7933754F260B428A b1207
	static Any _0xAFD3599A3CC5637D() { return invoker::Invoke<Any>(0xAFD3599A3CC5637D); } // 0xAFD3599A3CC5637D b1207
	static Any _0xC81A9E2C8EFD28D5() { return invoker::Invoke<Any>(0xC81A9E2C8EFD28D5); } // 0xC81A9E2C8EFD28D5 b1207
}

namespace GOOGLE_ANALYTICS
{
	static void _GOOGLE_ANALYTICS_PUSH_PAGE(Any p0) { invoker::Invoke<Void>(0xD43A616AE3AC4EF6, p0); } // 0xD43A616AE3AC4EF6 b1207
	static void _GOOGLE_ANALYTICS_POP_PAGE(Any p0) { invoker::Invoke<Void>(0xC6DE040378364798, p0); } // 0xC6DE040378364798 b1207
}

namespace HUD
{
	static void _0x26F6BBEA2CE3E3DC() { invoker::Invoke<Void>(0x26F6BBEA2CE3E3DC); } // 0x26F6BBEA2CE3E3DC b1207
	static void _0xC5C7A2F6567FCCBC() { invoker::Invoke<Void>(0xC5C7A2F6567FCCBC); } // 0xC5C7A2F6567FCCBC b1207
	static void _0xC9CAEAEEC1256E54(Any p0) { invoker::Invoke<Void>(0xC9CAEAEEC1256E54, p0); } // 0xC9CAEAEEC1256E54 b1207
	static void _0x4CC5F2FC1332577F(Any p0) { invoker::Invoke<Void>(0x4CC5F2FC1332577F, p0); } // 0x4CC5F2FC1332577F b1207
	static void _0x8BC7C1F929D07BF3(Any p0) { invoker::Invoke<Void>(0x8BC7C1F929D07BF3, p0); } // 0x8BC7C1F929D07BF3 b1207
	static Any _0x7EC0D68233E391AC(Any p0) { return invoker::Invoke<Any>(0x7EC0D68233E391AC, p0); } // 0x7EC0D68233E391AC b1207
	static void _0x7F78CD75CC4539E4(Any p0) { invoker::Invoke<Void>(0x7F78CD75CC4539E4, p0); } // 0x7F78CD75CC4539E4 b1207
	static void BUSYSPINNER_OFF() { invoker::Invoke<Void>(0x58F441B90EA84D06); } // 0x58F441B90EA84D06 b1207
	static Any _0x823BF7B1DF613A21() { return invoker::Invoke<Any>(0x823BF7B1DF613A21); } // 0x823BF7B1DF613A21 b1207
	static void _0xD79334A4BB99BAD1(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD79334A4BB99BAD1, p0, p1, p2); } // 0xD79334A4BB99BAD1 b1207
	static Any _0x9D7E12EC6A1EE4E5() { return invoker::Invoke<Any>(0x9D7E12EC6A1EE4E5); } // 0x9D7E12EC6A1EE4E5 b1207
	static Any _0xCFEDCCAD3C5BA90D() { return invoker::Invoke<Any>(0xCFEDCCAD3C5BA90D); } // 0xCFEDCCAD3C5BA90D b1207
	static void CLEAR_ALL_HELP_MESSAGES() { invoker::Invoke<Void>(0x916ED8321F087059); } // 0x916ED8321F087059 b1207
	static Any _0xD0976CC34002DB57(Any p0) { return invoker::Invoke<Any>(0xD0976CC34002DB57, p0); } // 0xD0976CC34002DB57 b1207
	static Any _0x3CF96E16265B7DC8(Any p0) { return invoker::Invoke<Any>(0x3CF96E16265B7DC8, p0); } // 0x3CF96E16265B7DC8 b1207
	static Any _0xF66090013DE648D5(Any p0) { return invoker::Invoke<Any>(0xF66090013DE648D5, p0); } // 0xF66090013DE648D5 b1207
	static void _0xAA03F130A637D923(Any p0) { invoker::Invoke<Void>(0xAA03F130A637D923, p0); } // 0xAA03F130A637D923 b1207
	static Any _0x2C729F2B94CEA911(Any p0) { return invoker::Invoke<Any>(0x2C729F2B94CEA911, p0); } // 0x2C729F2B94CEA911 b1207
	static Any DOES_TEXT_LABEL_EXIST(Any p0) { return invoker::Invoke<Any>(0x73C258C68D6F55B6, p0); } // 0x73C258C68D6F55B6 b1207
	static Any _GET_LABEL_TEXT(Any p0) { return invoker::Invoke<Any>(0x3429670F9B9EF2D3, p0); } // 0x3429670F9B9EF2D3 b1207
	static Any _0xD8402B858F4DDD88(Any p0, Any p1) { return invoker::Invoke<Any>(0xD8402B858F4DDD88, p0, p1); } // 0xD8402B858F4DDD88 b1207
	static Any _0x806862E5D266CF38(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x806862E5D266CF38, p0, p1, p2); } // 0x806862E5D266CF38 b1207
	static Any GET_LENGTH_OF_LITERAL_STRING(Any p0) { return invoker::Invoke<Any>(0x481FBF588B0B76DB, p0); } // 0x481FBF588B0B76DB b1207
	static Any _0xDC5AD6B7AB8184F5() { return invoker::Invoke<Any>(0xDC5AD6B7AB8184F5); } // 0xDC5AD6B7AB8184F5 b1207
	static Any _0xBD5DD5EAE2B6CE14(Any p0) { return invoker::Invoke<Any>(0xBD5DD5EAE2B6CE14, p0); } // 0xBD5DD5EAE2B6CE14 b1207
	static Any IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoker::Invoke<Any>(0x81E47F0EE1F2B21E); } // 0x81E47F0EE1F2B21E b1207
	static void DISPLAY_HUD(Any p0) { invoker::Invoke<Void>(0xD63FE3AF9FB3D53F, p0); } // 0xD63FE3AF9FB3D53F b1207
	static Any IS_HUD_HIDDEN() { return invoker::Invoke<Any>(0x71B72B478F8189DC); } // 0x71B72B478F8189DC b1207
	static Any IS_RADAR_HIDDEN() { return invoker::Invoke<Any>(0x1B82FD5FFA4D666E); } // 0x1B82FD5FFA4D666E b1207
	static Any _0x66F35DD9D2B58579() { return invoker::Invoke<Any>(0x66F35DD9D2B58579); } // 0x66F35DD9D2B58579 b1207
	static Any _0xB981DD2DFAF9B1C9() { return invoker::Invoke<Any>(0xB981DD2DFAF9B1C9); } // 0xB981DD2DFAF9B1C9 b1207
	static void SET_TEXT_SCALE(Any p0, Any p1) { invoker::Invoke<Void>(0x4170B650590B3B00, p0, p1); } // 0x4170B650590B3B00 b1207
	static void _0x50A41AD966910F03(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x50A41AD966910F03, p0, p1, p2, p3); } // 0x50A41AD966910F03 b1207
	static Any _0xBE5261939FBECB8C() { return invoker::Invoke<Any>(0xBE5261939FBECB8C); } // 0xBE5261939FBECB8C b1207
	static Any _0x1BE39DBAA7263CA5() { return invoker::Invoke<Any>(0x1BE39DBAA7263CA5); } // 0x1BE39DBAA7263CA5 b1207
	static void SET_TEXT_RENDER_ID(Any p0) { invoker::Invoke<Void>(0xE550CDE128D56757, p0); } // 0xE550CDE128D56757 b1207
	static Any REGISTER_NAMED_RENDERTARGET(Any p0, Any p1) { return invoker::Invoke<Any>(0x98AF2BB6F62BD588, p0, p1); } // 0x98AF2BB6F62BD588 b1207
	static Any IS_NAMED_RENDERTARGET_REGISTERED(Any p0) { return invoker::Invoke<Any>(0x3EE32F7964C40FE6, p0); } // 0x3EE32F7964C40FE6 b1207
	static Any RELEASE_NAMED_RENDERTARGET(Any p0) { return invoker::Invoke<Any>(0x0E692EE61761361F, p0); } // 0x0E692EE61761361F b1207
	static void LINK_NAMED_RENDERTARGET(Any p0) { invoker::Invoke<Void>(0x2F506B8556242DDB, p0); } // 0x2F506B8556242DDB b1207
	static Any GET_NAMED_RENDERTARGET_RENDER_ID(Any p0) { return invoker::Invoke<Any>(0xB6762A85EE29AA60, p0); } // 0xB6762A85EE29AA60 b1207
	static Any IS_NAMED_RENDERTARGET_LINKED(Any p0) { return invoker::Invoke<Any>(0x707032835FF09AE7, p0); } // 0x707032835FF09AE7 b1207
	static void _0x9D37EB5003E0F2CF(Any p0, Any p1) { invoker::Invoke<Void>(0x9D37EB5003E0F2CF, p0, p1); } // 0x9D37EB5003E0F2CF b1207
	static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoker::Invoke<Void>(0xEA600AABAF4B9084); } // 0xEA600AABAF4B9084 b1207
	static void _0x052D4AC0922AF91A(Any p0, Any p1) { invoker::Invoke<Void>(0x052D4AC0922AF91A, p0, p1); } // 0x052D4AC0922AF91A b1207
	static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoker::Invoke<Void>(0x36CDD81627A6FCD2); } // 0x36CDD81627A6FCD2 b1207
	static void _0x8A59D44189AF2BC5(Any p0, Any p1) { invoker::Invoke<Void>(0x8A59D44189AF2BC5, p0, p1); } // 0x8A59D44189AF2BC5 b1207
	static void _0x160825DADF1B04B3() { invoker::Invoke<Void>(0x160825DADF1B04B3); } // 0x160825DADF1B04B3 b1207
	static Any _0x9C409BBC492CB5B1() { return invoker::Invoke<Any>(0x9C409BBC492CB5B1); } // 0x9C409BBC492CB5B1 b1207
	static Any _0x0501D52D24EA8934(Any p0) { return invoker::Invoke<Any>(0x0501D52D24EA8934, p0); } // 0x0501D52D24EA8934 b1207
	static Any _0xF1AD3DD218E6558A() { return invoker::Invoke<Any>(0xF1AD3DD218E6558A); } // 0xF1AD3DD218E6558A b1207
	static Any _0x100157D6D7FE32CA() { return invoker::Invoke<Any>(0x100157D6D7FE32CA); } // 0x100157D6D7FE32CA b1207
	static Any _0x28AE29D909C8FDCE() { return invoker::Invoke<Any>(0x28AE29D909C8FDCE); } // 0x28AE29D909C8FDCE b1207
	static void _0x2F7BB105144ACF30() { invoker::Invoke<Void>(0x2F7BB105144ACF30); } // 0x2F7BB105144ACF30 b1207
	static void _0xBFFF81E12A745A5F() { invoker::Invoke<Void>(0xBFFF81E12A745A5F); } // 0xBFFF81E12A745A5F b1207
	static void SET_MISSION_NAME(Any p0, Any p1) { invoker::Invoke<Void>(0x402669A4BDAA72DA, p0, p1); } // 0x402669A4BDAA72DA b1207
	static Any _0xD98630CE73C61E98() { return invoker::Invoke<Any>(0xD98630CE73C61E98); } // 0xD98630CE73C61E98 b1207
	static Any _0xCE0D2F5586627CCE() { return invoker::Invoke<Any>(0xCE0D2F5586627CCE); } // 0xCE0D2F5586627CCE b1207
	static Any GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xB39C81628EF10B42, p0, p1, p2, p3, p4); } // 0xB39C81628EF10B42 b1207
	static void _0xBF4F34A85CA2970D() { invoker::Invoke<Void>(0xBF4F34A85CA2970D); } // 0xBF4F34A85CA2970D b1207
	static void DISABLE_FRONTEND_THIS_FRAME() { invoker::Invoke<Void>(0x56CE42A528156A67); } // 0x56CE42A528156A67 b1207
	static void _0x5651516D947ABC53() { invoker::Invoke<Void>(0x5651516D947ABC53); } // 0x5651516D947ABC53 b1207
	static Any _0x30996422DF1EE561() { return invoker::Invoke<Any>(0x30996422DF1EE561); } // 0x30996422DF1EE561 b1207
	static void SET_FRONTEND_ACTIVE(Any p0) { invoker::Invoke<Void>(0xCE47C21C0687EBC2, p0); } // 0xCE47C21C0687EBC2 b1207
	static Any IS_PAUSE_MENU_ACTIVE() { return invoker::Invoke<Any>(0x535384D6067BA42E); } // 0x535384D6067BA42E b1207
	static Any _0xFBBF5943E4C2C992() { return invoker::Invoke<Any>(0xFBBF5943E4C2C992); } // 0xFBBF5943E4C2C992 b1207
	static Any _0xBC19069D5FBB5C46() { return invoker::Invoke<Any>(0xBC19069D5FBB5C46); } // 0xBC19069D5FBB5C46 b1207
	static void _0x50C803A4CD5932C5(Any p0) { invoker::Invoke<Void>(0x50C803A4CD5932C5, p0); } // 0x50C803A4CD5932C5 b1207
	static void _0xD4EE21B7CC7FD350(Any p0) { invoker::Invoke<Void>(0xD4EE21B7CC7FD350, p0); } // 0xD4EE21B7CC7FD350 b1207
	static void _0x3FE4FB41EF7D2196(Any p0) { invoker::Invoke<Void>(0x3FE4FB41EF7D2196, p0); } // 0x3FE4FB41EF7D2196 b1207
	static void _JOURNAL_WRITE_ENTRY(Any p0) { invoker::Invoke<Void>(0x6DFDD665E416B093, p0); } // 0x6DFDD665E416B093 b1207
	static Any _JOURNAL_CAN_WRITE_ENTRY(Any p0) { return invoker::Invoke<Any>(0xCF782691D91F270E, p0); } // 0xCF782691D91F270E b1207
	static Any _JOURNAL_GET_ENTRY_COUNT() { return invoker::Invoke<Any>(0xE65B5DE53351BE22); } // 0xE65B5DE53351BE22 b1207
	static Any _JOURNAL_GET_ENTRY_AT_INDEX(Any p0) { return invoker::Invoke<Any>(0x3D16ABD7A1FD8C96, p0); } // 0x3D16ABD7A1FD8C96 b1207
	static Any _JOURNAL_GET_GRIME_AT_INDEX(Any p0) { return invoker::Invoke<Any>(0xCB5945E1B855852F, p0); } // 0xCB5945E1B855852F b1207
	static Any _JOURNAL_GET_ENTRY_INFO(Any p0, Any p1) { return invoker::Invoke<Any>(0x5514C3E60673530F, p0, p1); } // 0x5514C3E60673530F b1207
	static Any _JORUNAL_GET_TEXTURE_WITH_LAYOUT(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x62CC549B3B8EA2AA, p0, p1, p2); } // 0x62CC549B3B8EA2AA b1207
	static void _JORUNAL_MARK_READ(Any p0) { invoker::Invoke<Void>(0xE4509BABE59BD24E, p0); } // 0xE4509BABE59BD24E b1207
	static void _JORUNAL_CLEAR_ALL_PROGRESS() { invoker::Invoke<Void>(0xF402978DE6F88D6E); } // 0xF402978DE6F88D6E b1207
	static Any _0xB6857100F8FD433C(Any p0, Any p1) { return invoker::Invoke<Any>(0xB6857100F8FD433C, p0, p1); } // 0xB6857100F8FD433C b1207
	static void _0xF1E6979C0B779985(Any p0) { invoker::Invoke<Void>(0xF1E6979C0B779985, p0); } // 0xF1E6979C0B779985 b1207
	static Any _0xBE1067CD1C9570F6(Any p0) { return invoker::Invoke<Any>(0xBE1067CD1C9570F6, p0); } // 0xBE1067CD1C9570F6 b1207
	static void _0x51DE09A2196BD951(Any p0, Any p1) { invoker::Invoke<Void>(0x51DE09A2196BD951, p0, p1); } // 0x51DE09A2196BD951 b1207
	static Any _CREATE_PROMPT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x29FA7910726C3889, p0, p1, p2, p3, p4, p5); } // 0x29FA7910726C3889 b1207
	static Any _BEGIN_REGISTER_PROMPT() { return invoker::Invoke<Any>(0x04F97DE45A519419); } // 0x04F97DE45A519419 b1207
	static void _END_REGISTER_PROMPT(Any p0) { invoker::Invoke<Void>(0xF7AA2696A22AD8B9, p0); } // 0xF7AA2696A22AD8B9 b1207
	static void _PROMPT_SET_PRIORITY(Any p0, Any p1) { invoker::Invoke<Void>(0xCA24F528D0D16289, p0, p1); } // 0xCA24F528D0D16289 b1207
	static Any _PROMPT_SET_CONTROL_ACTION(Any p0, Any p1) { return invoker::Invoke<Any>(0xB5352B7494A08258, p0, p1); } // 0xB5352B7494A08258 b1207
	static void _PROMPT_SET_ALLOWED_ACTION(Any p0, Any p1) { invoker::Invoke<Void>(0x565C1CE183CB0EAF, p0, p1); } // 0x565C1CE183CB0EAF b1207
	static void _PROMPT_SET_STANDARD_MODE(Any p0, Any p1) { invoker::Invoke<Void>(0xCC6656799977741B, p0, p1); } // 0xCC6656799977741B b1207
	static Any _PROMPT_HAS_STANDARD_MODE_COMPLETED(Any p0, Any p1) { return invoker::Invoke<Any>(0xC92AC953F0A982AE, p0, p1); } // 0xC92AC953F0A982AE b1207
	static void _PROMPT_SET_PRESSED_TIMED_MODE(Any p0, Any p1) { invoker::Invoke<Void>(0x1473D3AF51D54276, p0, p1); } // 0x1473D3AF51D54276 b1207
	static Any _PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED(Any p0) { return invoker::Invoke<Any>(0x3CE854D250A88DAF, p0); } // 0x3CE854D250A88DAF b1207
	static Any _PROMPT_HAS_PRESSED_TIMED_MODE_FAILED(Any p0) { return invoker::Invoke<Any>(0x1A17B9ECFF617562, p0); } // 0x1A17B9ECFF617562 b1207
	static void _PROMPT_SET_HOLD_MODE(Any p0, Any p1) { invoker::Invoke<Void>(0x94073D5CA3F16B7B, p0, p1); } // 0x94073D5CA3F16B7B b1207
	static void _PROMPT_SET_STANDARDIZED_HOLD_MODE(Any p0, Any p1) { invoker::Invoke<Void>(0x74C7D7B72ED0D3CF, p0, p1); } // 0x74C7D7B72ED0D3CF b1207
	static void _PROMPT_SET_HOLD_INDEFINITELY_MODE(Any p0) { invoker::Invoke<Void>(0xEA5CCF4EEB2F82D1, p0); } // 0xEA5CCF4EEB2F82D1 b1207
	static void _PROMPT_SET_HOLD_AUTO_FILL_MODE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3CE932E737C145D6, p0, p1, p2); } // 0x3CE932E737C145D6 b1207
	static Any _0xA3F2149AA24F3D8E() { return invoker::Invoke<Any>(0xA3F2149AA24F3D8E); } // 0xA3F2149AA24F3D8E b1207
	static Any _PROMPT_HAS_HOLD_AUTO_FILL_MODE(Any p0) { return invoker::Invoke<Any>(0x8010BEBD0D5ED5BC, p0); } // 0x8010BEBD0D5ED5BC b1207
	static Any _0xB60C9F9ED47ABB76(Any p0) { return invoker::Invoke<Any>(0xB60C9F9ED47ABB76, p0); } // 0xB60C9F9ED47ABB76 b1207
	static Any _PROMPT_IS_HOLD_MODE_RUNNING(Any p0) { return invoker::Invoke<Any>(0xC7D70EAEF92EFF48, p0); } // 0xC7D70EAEF92EFF48 b1207
	static Any _PROMPT_HAS_HOLD_MODE_COMPLETED(Any p0) { return invoker::Invoke<Any>(0xE0F65F0640EF0617, p0); } // 0xE0F65F0640EF0617 b1207
	static Any _0x81801291806DBC50(Any p0) { return invoker::Invoke<Any>(0x81801291806DBC50, p0); } // 0x81801291806DBC50 b1207
	static void _PROMPT_SET_MASH_MODE(Any p0, Any p1) { invoker::Invoke<Void>(0xDF6423BF071C7F71, p0, p1); } // 0xDF6423BF071C7F71 b1207
	static void _PROMPT_SET_MASH_INDEFINITELY_MODE(Any p0) { invoker::Invoke<Void>(0x7B66E89312727274, p0); } // 0x7B66E89312727274 b1207
	static void _PROMPT_SET_MASH_WITH_RESISTANCE_MODE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xCD1BDFF15EFA79F5, p0, p1, p2, p3); } // 0xCD1BDFF15EFA79F5 b1207
	static void _PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xDC0CB602DEADBA53, p0, p1, p2, p3); } // 0xDC0CB602DEADBA53 b1207
	static void _PROMPT_SET_MASH_AUTO_FILL_MODE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x6C39587D7CC66801, p0, p1, p2); } // 0x6C39587D7CC66801 b1207
	static void _PROMPT_SET_MASH_MANUAL_MODE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x32DF729D8BD3C1C6, p0, p1, p2, p3, p4); } // 0x32DF729D8BD3C1C6 b1207
	static void _PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x179DCF71F705DA20, p0, p1, p2, p3, p4); } // 0x179DCF71F705DA20 b1207
	static Any _0xA6C6A4ADB3BAC409(Any p0) { return invoker::Invoke<Any>(0xA6C6A4ADB3BAC409, p0); } // 0xA6C6A4ADB3BAC409 b1207
	static Any _0xCD072523791DDC1B(Any p0) { return invoker::Invoke<Any>(0xCD072523791DDC1B, p0); } // 0xCD072523791DDC1B b1207
	static Any _0xB0E8599243B3F568(Any p0) { return invoker::Invoke<Any>(0xB0E8599243B3F568, p0); } // 0xB0E8599243B3F568 b1207
	static Any _PROMPT_HAS_MASH_MODE_COMPLETED(Any p0) { return invoker::Invoke<Any>(0x845CE958416DC473, p0); } // 0x845CE958416DC473 b1207
	static Any _PROMPT_HAS_MASH_MODE_FAILED(Any p0) { return invoker::Invoke<Any>(0x25B18E530CF39D6F, p0); } // 0x25B18E530CF39D6F b1207
	static Any _PROMPT_GET_MASH_MODE_PROGRESS(Any p0) { return invoker::Invoke<Any>(0x8A9585293863B8A5, p0); } // 0x8A9585293863B8A5 b1207
	static void _PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS(Any p0, Any p1) { invoker::Invoke<Void>(0xA0D1D79C6036A855, p0, p1); } // 0xA0D1D79C6036A855 b1207
	static void _PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0x7D393C247FB9B431, p0, p1); } // 0x7D393C247FB9B431 b1207
	static void _PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0x56DBB26F98582C29, p0, p1); } // 0x56DBB26F98582C29 b1207
	static void _PROMPT_SET_ROTATE_MODE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x7ABE7095FB3D2581, p0, p1, p2); } // 0x7ABE7095FB3D2581 b1207
	static void _PROMPT_SET_TARGET_MODE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x5F6503D9CD2754EB, p0, p1, p2, p3); } // 0x5F6503D9CD2754EB b1207
	static void _PROMPT_SET_TARGET_MODE_TARGET(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5E019C45DD3B6A14, p0, p1, p2); } // 0x5E019C45DD3B6A14 b1207
	static void _PROMPT_SET_TARGET_MODE_PROGRESS(Any p0, Any p1) { invoker::Invoke<Void>(0x00123054BEC8A30F, p0, p1); } // 0x00123054BEC8A30F b1207
	static void _PROMPT_SET_BEAT_MODE(Any p0, Any p1) { invoker::Invoke<Void>(0xF957A1654C6322FE, p0, p1); } // 0xF957A1654C6322FE b1207
	static Any _PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW(Any p0) { return invoker::Invoke<Any>(0x1FE4788AB1430C55, p0); } // 0x1FE4788AB1430C55 b1207
	static void _PROMPT_SET_BEAT_MODE_GRAYED_OUT(Any p0, Any p1) { invoker::Invoke<Void>(0xB487A4936FBF40AC, p0, p1); } // 0xB487A4936FBF40AC b1207
	static void _PROMPT_RESTART_MODES(Any p0) { invoker::Invoke<Void>(0xDC6C55DFA2C24EE5, p0); } // 0xDC6C55DFA2C24EE5 b1207
	static void _PROMPT_SET_SPINNER_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0xAC6586A7FDCD4B68, p0, p1); } // 0xAC6586A7FDCD4B68 b1207
	static void _PROMPT_SET_SPINNER_POSITION(Any p0, Any p1) { invoker::Invoke<Void>(0x832CB510DE546282, p0, p1); } // 0x832CB510DE546282 b1207
	static void _PROMPT_SET_URGENT_PULSING_ENABLED(Any p0, Any p1) { invoker::Invoke<Void>(0xC5F428EE08FA7F2C, p0, p1); } // 0xC5F428EE08FA7F2C b1207
	static Any _PROMPT_GET_URGENT_PULSING_ENABLED(Any p0) { return invoker::Invoke<Any>(0x1FBA0DABECDDB52B, p0); } // 0x1FBA0DABECDDB52B b1207
	static void _PROMPT_SET_TAG(Any p0, Any p1) { invoker::Invoke<Void>(0xDEC85C174751292B, p0, p1); } // 0xDEC85C174751292B b1207
	static Any _PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Any p0) { return invoker::Invoke<Any>(0xB796970BD125FCE8, p0); } // 0xB796970BD125FCE8 b1207
	static Any _PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT(Any p0, Any p1) { return invoker::Invoke<Any>(0xCB73D7521E7103F0, p0, p1); } // 0xCB73D7521E7103F0 b1207
	static void _PROMPT_SET_GROUP(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2F11D3A254169EA4, p0, p1, p2); } // 0x2F11D3A254169EA4 b1207
	static void _PROMPT_REMOVE_GROUP(Any p0, Any p1) { invoker::Invoke<Void>(0x4E52C800A28F7BE8, p0, p1); } // 0x4E52C800A28F7BE8 b1207
	static Any _PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xC65A45D4453C2627, p0, p1, p2, p3, p4); } // 0xC65A45D4453C2627 b1207
	static Any _PROMPT_GET_GROUP_ACTIVE_PAGE(Any p0) { return invoker::Invoke<Any>(0xC1FCC36C3F7286C8, p0); } // 0xC1FCC36C3F7286C8 b1207
	static Any _PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x315C81D760609108, p0, p1, p2, p3, p4, p5, p6); } // 0x315C81D760609108 b1207
	static Any _PROMPT_DOES_AMBIENT_GROUP_EXIST(Any p0) { return invoker::Invoke<Any>(0xEB550B927B34A1BB, p0); } // 0xEB550B927B34A1BB b1207
	static void _PROMPT_ADD_GROUP_LINK(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x684C96CC7C66E8EF, p0, p1, p2); } // 0x684C96CC7C66E8EF b1207
	static void _PROMPT_ADD_GROUP_RETURN_LINK(Any p0, Any p1) { invoker::Invoke<Void>(0x837972ED28159536, p0, p1); } // 0x837972ED28159536 b1207
	static void _PROMPT_SET_TRANSPORT_MODE(Any p0, Any p1) { invoker::Invoke<Void>(0x876E4A35C73A6655, p0, p1); } // 0x876E4A35C73A6655 b1207
	static Any _0xF1622CE88A1946FB() { return invoker::Invoke<Any>(0xF1622CE88A1946FB); } // 0xF1622CE88A1946FB b1207
	static void _PROMPT_DELETE(Any p0) { invoker::Invoke<Void>(0x00EDE88D4D13CF59, p0); } // 0x00EDE88D4D13CF59 b1207
	static Any _PROMPT_IS_VALID(Any p0) { return invoker::Invoke<Any>(0x347469FBDD1589A9, p0); } // 0x347469FBDD1589A9 b1207
	static Any _PROMPT_IS_ACTIVE(Any p0) { return invoker::Invoke<Any>(0x546E342E01DE71CF, p0); } // 0x546E342E01DE71CF b1207
	static void _PROMPT_SET_VISIBLE(Any p0, Any p1) { invoker::Invoke<Void>(0x71215ACCFDE075EE, p0, p1); } // 0x71215ACCFDE075EE b1207
	static void _PROMPT_SET_ENABLED(Any p0, Any p1) { invoker::Invoke<Void>(0x8A0FB4D03A630D21, p0, p1); } // 0x8A0FB4D03A630D21 b1207
	static void _PROMPT_SET_TEXT(Any p0, Any p1) { invoker::Invoke<Void>(0x5DD02A8318420DD7, p0, p1); } // 0x5DD02A8318420DD7 b1207
	static void _PROMPT_SET_ATTRIBUTE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x560E76D5E2E1803F, p0, p1, p2); } // 0x560E76D5E2E1803F b1207
	static void _0xF4A5C4509BF923B1(Any p0, Any p1) { invoker::Invoke<Void>(0xF4A5C4509BF923B1, p0, p1); } // 0xF4A5C4509BF923B1 b1207
	static void _0x53CE46C01A089DA1(Any p0, Any p1) { invoker::Invoke<Void>(0x53CE46C01A089DA1, p0, p1); } // 0x53CE46C01A089DA1 b1207
	static void _0xA520C7B05FA4EB2A(Any p0, Any p1) { invoker::Invoke<Void>(0xA520C7B05FA4EB2A, p0, p1); } // 0xA520C7B05FA4EB2A b1207
	static void _0x4D107406667423BE(Any p0, Any p1) { invoker::Invoke<Void>(0x4D107406667423BE, p0, p1); } // 0x4D107406667423BE b1207
	static void _PROMPT_SET_POSITION(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xAE84C5EE2C384FB3, p0, p1, p2, p3); } // 0xAE84C5EE2C384FB3 b1207
	static void _0x0C718001B77CA468(Any p0, Any p1) { invoker::Invoke<Void>(0x0C718001B77CA468, p0, p1); } // 0x0C718001B77CA468 b1207
	static Any _PROMPT_IS_PRESSED(Any p0) { return invoker::Invoke<Any>(0x21E60E230086697F, p0); } // 0x21E60E230086697F b1207
	static Any _PROMPT_IS_JUST_PRESSED(Any p0) { return invoker::Invoke<Any>(0x2787CC611D3FACC5, p0); } // 0x2787CC611D3FACC5 b1207
	static Any _PROMPT_IS_JUST_RELEASED(Any p0) { return invoker::Invoke<Any>(0x635CC82FA297A827, p0); } // 0x635CC82FA297A827 b1207
	static Any _PROMPT_IS_RELEASED(Any p0) { return invoker::Invoke<Any>(0xAFC887BA7A7756D6, p0); } // 0xAFC887BA7A7756D6 b1207
	static void _PROMPT_GLOBAL_ENABLE_PROMPT_TYPE_THIS_FRAME(Any p0) { invoker::Invoke<Void>(0x06565032897BA861, p0); } // 0x06565032897BA861 b1207
	static void _PROMPT_GLOBAL_DISABLE_PROMPT_TYPE_THIS_FRAME(Any p0) { invoker::Invoke<Void>(0xFC094EF26DD153FA, p0); } // 0xFC094EF26DD153FA b1207
	static void _PROMPT_GLOBAL_FILTER_CLEAR() { invoker::Invoke<Void>(0x6A2F820452017EA2); } // 0x6A2F820452017EA2 b1207
	static void _PROMPT_GLOBAL_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(Any p0) { invoker::Invoke<Void>(0x530A428705BE5DEF, p0); } // 0x530A428705BE5DEF b1207
	static void _PROMPT_GLOBAL_CLEAR_FAVOURED_PED_FOR_CONFLICT_RESOLUTION() { invoker::Invoke<Void>(0x51259AE5C72D4A1B); } // 0x51259AE5C72D4A1B b1207
	static Any _PROMPT_IS_ENABLED(Any p0) { return invoker::Invoke<Any>(0x0D00EDDFB58B7F28, p0); } // 0x0D00EDDFB58B7F28 b1207
	static Any _0x1BE19185B8AFE299() { return invoker::Invoke<Any>(0x1BE19185B8AFE299); } // 0x1BE19185B8AFE299 b1207
	static Any _0xD6BD313CFA41E57A() { return invoker::Invoke<Any>(0xD6BD313CFA41E57A); } // 0xD6BD313CFA41E57A b1207
	static Any _0xD9459157EB22C895() { return invoker::Invoke<Any>(0xD9459157EB22C895); } // 0xD9459157EB22C895 b1207
	static Any _0x6095358C4142932A() { return invoker::Invoke<Any>(0x6095358C4142932A); } // 0x6095358C4142932A b1207
	static void _PROMPT_SET_ORDERING_AS_INPUT_TYPE(Any p0, Any p1) { invoker::Invoke<Void>(0x2F385ECC5200938D, p0, p1); } // 0x2F385ECC5200938D b1207
	static Any _0xD877AF112AD2B41B() { return invoker::Invoke<Any>(0xD877AF112AD2B41B); } // 0xD877AF112AD2B41B b1207
	static Any _0x53CB4B502E1C57EA() { return invoker::Invoke<Any>(0x53CB4B502E1C57EA); } // 0x53CB4B502E1C57EA b1207
	static Any _0xE961BF23EAB76B12() { return invoker::Invoke<Any>(0xE961BF23EAB76B12); } // 0xE961BF23EAB76B12 b1207
	static void REMOVE_MP_GAMER_TAG(Any p0) { invoker::Invoke<Void>(0x839BFD7D7E49FE09, p0); } // 0x839BFD7D7E49FE09 b1207
	static Any IS_MP_GAMER_TAG_ACTIVE(Any p0) { return invoker::Invoke<Any>(0x6E1C31E14C7A5F97, p0); } // 0x6E1C31E14C7A5F97 b1207
	static Any _0x502E1591A504F843() { return invoker::Invoke<Any>(0x502E1591A504F843); } // 0x502E1591A504F843 b1207
	static Any _0x93171DDDAB274EB8() { return invoker::Invoke<Any>(0x93171DDDAB274EB8); } // 0x93171DDDAB274EB8 b1207
	static void _0x25B9C78A25105C35(Any p0, Any p1) { invoker::Invoke<Void>(0x25B9C78A25105C35, p0, p1); } // 0x25B9C78A25105C35 b1207
	static Any _0x84BD27DDF9575816() { return invoker::Invoke<Any>(0x84BD27DDF9575816); } // 0x84BD27DDF9575816 b1207
	static Any _0xEF7AB1A0E8C86170() { return invoker::Invoke<Any>(0xEF7AB1A0E8C86170); } // 0xEF7AB1A0E8C86170 b1207
	static Any _0xEA6F4B8D4B4B5B3E() { return invoker::Invoke<Any>(0xEA6F4B8D4B4B5B3E); } // 0xEA6F4B8D4B4B5B3E b1207
	static Any _0x1EA716E0628A6F44() { return invoker::Invoke<Any>(0x1EA716E0628A6F44); } // 0x1EA716E0628A6F44 b1207
	static Any _0xA0D7CE5F83259663() { return invoker::Invoke<Any>(0xA0D7CE5F83259663); } // 0xA0D7CE5F83259663 b1207
	static void _0x5F57522BC1EB9D9D(Any p0, Any p1) { invoker::Invoke<Void>(0x5F57522BC1EB9D9D, p0, p1); } // 0x5F57522BC1EB9D9D b1207
	static void _0x95384C6CE1526EFF(Any p0, Any p1) { invoker::Invoke<Void>(0x95384C6CE1526EFF, p0, p1); } // 0x95384C6CE1526EFF b1207
	static Any _0xFFF6579CF0139FCE() { return invoker::Invoke<Any>(0xFFF6579CF0139FCE); } // 0xFFF6579CF0139FCE b1207
	static Any _0x1F9A64C2804B3471() { return invoker::Invoke<Any>(0x1F9A64C2804B3471); } // 0x1F9A64C2804B3471 b1207
}

namespace _NAMESPACE29
{
	static void _0x66F9EB44342BB4C5(Any p0, Any p1) { invoker::Invoke<Void>(0x66F9EB44342BB4C5, p0, p1); } // 0x66F9EB44342BB4C5 b1207
	static void _0x0B9F7A01EC50448D(Any p0, Any p1) { invoker::Invoke<Void>(0x0B9F7A01EC50448D, p0, p1); } // 0x0B9F7A01EC50448D b1207
	static void _0x0EABF182FBB63D72(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0EABF182FBB63D72, p0, p1, p2); } // 0x0EABF182FBB63D72 b1207
	static Any _0x6098139150DCC745(Any p0, Any p1) { return invoker::Invoke<Any>(0x6098139150DCC745, p0, p1); } // 0x6098139150DCC745 b1207
	static void _0x873C792E07A32C8B(Any p0, Any p1) { invoker::Invoke<Void>(0x873C792E07A32C8B, p0, p1); } // 0x873C792E07A32C8B b1207
}

namespace _NAMESPACE30
{
	static Any _0xF12E4CCAF249DC10() { return invoker::Invoke<Any>(0xF12E4CCAF249DC10); } // 0xF12E4CCAF249DC10 b1207
	static Any _0x7F5858AAB5A58CCE() { return invoker::Invoke<Any>(0x7F5858AAB5A58CCE); } // 0x7F5858AAB5A58CCE b1207
	static Any _0x61CAE9D1FD055E44() { return invoker::Invoke<Any>(0x61CAE9D1FD055E44); } // 0x61CAE9D1FD055E44 b1207
	static Any _0xF7F51A57349739F2() { return invoker::Invoke<Any>(0xF7F51A57349739F2); } // 0xF7F51A57349739F2 b1207
}

namespace INTERIOR
{
	static Any IS_VALID_INTERIOR(Any p0) { return invoker::Invoke<Any>(0x017C1B3159F79F6C, p0); } // 0x017C1B3159F79F6C b1207
	static void _0x8451E87D3C2B0286(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x8451E87D3C2B0286, p0, p1, p2); } // 0x8451E87D3C2B0286 b1207
	static Any _0x3039BE60B3749716(Any p0) { return invoker::Invoke<Any>(0x3039BE60B3749716, p0); } // 0x3039BE60B3749716 b1207
	static Any _0x2C9746D0CA15BE1C(Any p0) { return invoker::Invoke<Any>(0x2C9746D0CA15BE1C, p0); } // 0x2C9746D0CA15BE1C b1207
	static Any IS_INTERIOR_SCENE() { return invoker::Invoke<Any>(0x4200F14D6F840A9A); } // 0x4200F14D6F840A9A b1207
	static void CLEAR_ROOM_FOR_ENTITY(Any p0) { invoker::Invoke<Void>(0xA1762D5BBFCA13A8, p0); } // 0xA1762D5BBFCA13A8 b1207
	static void FORCE_ROOM_FOR_ENTITY(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBC29A9894C976945, p0, p1, p2); } // 0xBC29A9894C976945 b1207
	static Any GET_ROOM_KEY_FROM_ENTITY(Any p0) { return invoker::Invoke<Any>(0x076E46E0EB52AFC6, p0); } // 0x076E46E0EB52AFC6 b1207
	static Any GET_KEY_FOR_ENTITY_IN_ROOM(Any p0) { return invoker::Invoke<Any>(0x27D7B6F79E1F4603, p0); } // 0x27D7B6F79E1F4603 b1207
	static Any GET_INTERIOR_FROM_ENTITY(Any p0) { return invoker::Invoke<Any>(0xB417689857646F61, p0); } // 0xB417689857646F61 b1207
	static void _0x82EBB79E258FA2B7(Any p0, Any p1) { invoker::Invoke<Void>(0x5BD616735F16BF5C, p0, p1); } // 0x5BD616735F16BF5C b1207
	static Any _0x115B4AA8FB28AB43() { return invoker::Invoke<Any>(0x115B4AA8FB28AB43); } // 0x115B4AA8FB28AB43 b1207
	static void CLEAR_ROOM_FOR_GAME_VIEWPORT() { invoker::Invoke<Void>(0x951A049765E0D450); } // 0x951A049765E0D450 b1207
	static Any _0xBC8A281FF125C655() { return invoker::Invoke<Any>(0xBC8A281FF125C655); } // 0xBC8A281FF125C655 b1207
	static Any GET_INTERIOR_AT_COORDS(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xCDD36C9E5C469070, p0, p1, p2); } // 0xCDD36C9E5C469070 b1207
	static void PIN_INTERIOR_IN_MEMORY(Any p0) { invoker::Invoke<Void>(0xBD3D33EABF680168, p0); } // 0xBD3D33EABF680168 b1207
	static void UNPIN_INTERIOR(Any p0) { invoker::Invoke<Void>(0x07FD1A0B814F6055, p0); } // 0x07FD1A0B814F6055 b1207
	static Any IS_INTERIOR_READY(Any p0) { return invoker::Invoke<Any>(0x941560D2D45DBFC8, p0); } // 0x941560D2D45DBFC8 b1207
	static Any _0xB5EF6FEF2DC9EBED() { return invoker::Invoke<Any>(0xB5EF6FEF2DC9EBED); } // 0xB5EF6FEF2DC9EBED b1207
	static Any GET_INTERIOR_AT_COORDS_WITH_TYPE(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xAAD6170AA33B13C0, p0, p1, p2, p3); } // 0xAAD6170AA33B13C0 b1207
	static Any GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x3543AEA1816D1D2B, p0, p1, p2, p3); } // 0x3543AEA1816D1D2B b1207
	static Any _ARE_COORDS_COLLIDING_WITH_EXTERIOR(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xF291396B517E25B2, p0, p1, p2); } // 0xF291396B517E25B2 b1207
	static Any GET_INTERIOR_FROM_COLLISION(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x5054D1A5218FA696, p0, p1, p2); } // 0x5054D1A5218FA696 b1207
	static void ACTIVATE_INTERIOR_ENTITY_SET(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x174D0AAB11CED739, p0, p1, p2); } // 0x174D0AAB11CED739 b1207
	static void DEACTIVATE_INTERIOR_ENTITY_SET(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x33B81A2C07A51FFF, p0, p1, p2); } // 0x33B81A2C07A51FFF b1207
	static Any IS_INTERIOR_ENTITY_SET_ACTIVE(Any p0, Any p1) { return invoker::Invoke<Any>(0x32810CA2125F5842, p0, p1); } // 0x32810CA2125F5842 b1207
	static Any _0xD56FF170710FC826(Any p0, Any p1) { return invoker::Invoke<Any>(0xD56FF170710FC826, p0, p1); } // 0xD56FF170710FC826 b1207
	static void DISABLE_INTERIOR(Any p0, Any p1) { invoker::Invoke<Void>(0x3C2B92A1A07D4FCE, p0, p1); } // 0x3C2B92A1A07D4FCE b1207
	static void _0x2533F2AB0EB9C6F9(Any p0, Any p1) { invoker::Invoke<Void>(0x2533F2AB0EB9C6F9, p0, p1); } // 0x2533F2AB0EB9C6F9 b1207
	static void _0xFE2B3D5500B1B2E4(Any p0, Any p1) { invoker::Invoke<Void>(0xFE2B3D5500B1B2E4, p0, p1); } // 0xFE2B3D5500B1B2E4 b1207
}

namespace _NAMESPACE32
{
	static Any _0x13D234A2A3F66E63(Any p0) { return invoker::Invoke<Any>(0x13D234A2A3F66E63, p0); } // 0x13D234A2A3F66E63 b1207
	static Any _0xADDD1E7C0ECF7D95(Any p0, Any p1) { return invoker::Invoke<Any>(0xADDD1E7C0ECF7D95, p0, p1); } // 0xADDD1E7C0ECF7D95 b1207
	static Any _0xE80E50BEE276A54A(Any p0, Any p1) { return invoker::Invoke<Any>(0xE80E50BEE276A54A, p0, p1); } // 0xE80E50BEE276A54A b1207
	static Any _0x112BCA290D2EB53C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x112BCA290D2EB53C, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x112BCA290D2EB53C b1207
	static void _0x46743BBFEDBC859E(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x46743BBFEDBC859E, p0, p1, p2); } // 0x46743BBFEDBC859E b1207
	static void _0x65A5F70F4A292EBE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x65A5F70F4A292EBE, p0, p1, p2); } // 0x65A5F70F4A292EBE b1207
	static void _0x9A113C660AEA3832(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x9A113C660AEA3832, p0, p1, p2); } // 0x9A113C660AEA3832 b1207
	static Any _0xD740F11FBC8AEF43() { return invoker::Invoke<Any>(0xD740F11FBC8AEF43); } // 0xD740F11FBC8AEF43 b1207
	static Any _0xF9933164965533B7() { return invoker::Invoke<Any>(0xF9933164965533B7); } // 0xF9933164965533B7 b1207
	static Any _0x4AEF1FB5B9011D75(Any p0) { return invoker::Invoke<Any>(0x4AEF1FB5B9011D75, p0); } // 0x4AEF1FB5B9011D75 b1207
	static Any _0xA4550FE9C512E3DD(Any p0) { return invoker::Invoke<Any>(0xA4550FE9C512E3DD, p0); } // 0xA4550FE9C512E3DD b1207
	static Any _0x245D07651B1D183B(Any p0, Any p1) { return invoker::Invoke<Any>(0x245D07651B1D183B, p0, p1); } // 0x245D07651B1D183B b1207
	static Any _0x2BAE4880DCDD560B(Any p0, Any p1) { return invoker::Invoke<Any>(0x2BAE4880DCDD560B, p0, p1); } // 0x2BAE4880DCDD560B b1207
	static Any _0x2E1CDC1FF3B8473E(Any p0, Any p1) { return invoker::Invoke<Any>(0x2E1CDC1FF3B8473E, p0, p1); } // 0x2E1CDC1FF3B8473E b1207
	static Any _0x0C093C1787F18519(Any p0, Any p1) { return invoker::Invoke<Any>(0x0C093C1787F18519, p0, p1); } // 0x0C093C1787F18519 b1207
	static Any _0xAB5F12746A099A0E(Any p0, Any p1) { return invoker::Invoke<Any>(0xAB5F12746A099A0E, p0, p1); } // 0xAB5F12746A099A0E b1207
	static Any _0x0FBBFFC891A97C81(Any p0) { return invoker::Invoke<Any>(0x0FBBFFC891A97C81, p0); } // 0x0FBBFFC891A97C81 b1207
	static Any _0xB881CA836CC4B6D4(Any p0) { return invoker::Invoke<Any>(0xB881CA836CC4B6D4, p0); } // 0xB881CA836CC4B6D4 b1207
	static Any _0x4C543D5DFCD2DAFD(Any p0, Any p1) { return invoker::Invoke<Any>(0x4C543D5DFCD2DAFD, p0, p1); } // 0x4C543D5DFCD2DAFD b1207
	static Any _0x886DFD3E185C8A89(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x886DFD3E185C8A89, p0, p1, p2, p3, p4); } // 0x886DFD3E185C8A89 b1207
	static Any _0x751A7E0EAEDAD0D3() { return invoker::Invoke<Any>(0x751A7E0EAEDAD0D3); } // 0x751A7E0EAEDAD0D3 b1207
	static Any _0x5D6182F3BCE1333B(Any p0, Any p1) { return invoker::Invoke<Any>(0x5D6182F3BCE1333B, p0, p1); } // 0x5D6182F3BCE1333B b1207
	static Any _0x9700E8EFC4AB9089(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x9700E8EFC4AB9089, p0, p1, p2, p3); } // 0x9700E8EFC4AB9089 b1207
	static Any _0x025A1B1FB03FBF61(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x025A1B1FB03FBF61, p0, p1, p2, p3, p4); } // 0x025A1B1FB03FBF61 b1207
	static Any _0xCD9A485F2B383B44(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xCD9A485F2B383B44, p0, p1, p2, p3); } // 0xCD9A485F2B383B44 b1207
	static Any _0xCB5D11F9508A928D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xCB5D11F9508A928D, p0, p1, p2, p3, p4, p5, p6); } // 0xCB5D11F9508A928D b1207
	static Any _0xD80A8854DB5CFBA5(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xD80A8854DB5CFBA5, p0, p1, p2, p3); } // 0xD80A8854DB5CFBA5 b1207
	static Any _0x3E4E811480B3AE79(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x3E4E811480B3AE79, p0, p1, p2, p3); } // 0x3E4E811480B3AE79 b1207
	static Any _0xB4158C8C9A3B5DCE(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xB4158C8C9A3B5DCE, p0, p1, p2, p3); } // 0xB4158C8C9A3B5DCE b1207
	static Any _0xDCCAA7C3BFD88862(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xDCCAA7C3BFD88862, p0, p1, p2, p3, p4, p5); } // 0xDCCAA7C3BFD88862 b1207
	static Any _0xF2753D691BCDA314(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xF2753D691BCDA314, p0, p1, p2); } // 0xF2753D691BCDA314 b1207
	static Any _0x80D78BDC9D88EF07(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x80D78BDC9D88EF07, p0, p1, p2, p3); } // 0x80D78BDC9D88EF07 b1207
	static Any _0x640F890C3E5A3FFD(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x640F890C3E5A3FFD, p0, p1, p2); } // 0x640F890C3E5A3FFD b1207
	static Any _0x82FA24C3D3FCD9B7(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x82FA24C3D3FCD9B7, p0, p1, p2); } // 0x82FA24C3D3FCD9B7 b1207
	static Any _0x42A2F33A1942E865(Any p0) { return invoker::Invoke<Any>(0x42A2F33A1942E865, p0); } // 0x42A2F33A1942E865 b1207
	static Any _0x734311E2852760D0(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x734311E2852760D0, p0, p1, p2); } // 0x734311E2852760D0 b1207
	static Any _0x22E590F108289A9D(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x22E590F108289A9D, p0, p1, p2, p3); } // 0x22E590F108289A9D b1207
	static Any _0x88B58B83A43A8CAB() { return invoker::Invoke<Any>(0x88B58B83A43A8CAB); } // 0x88B58B83A43A8CAB b1207
	static Any _0xD08685BA892DBFAB(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xD08685BA892DBFAB, p0, p1, p2, p3); } // 0xD08685BA892DBFAB b1207
	static void _0x0349404A22736740(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0349404A22736740, p0, p1, p2); } // 0x0349404A22736740 b1207
	static Any _0x6D2F987736A42D4C() { return invoker::Invoke<Any>(0x6D2F987736A42D4C); } // 0x6D2F987736A42D4C b1207
	static void _0x766315A564594401(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x766315A564594401, p0, p1, p2); } // 0x766315A564594401 b1207
	static void _0x6A564540FAC12211(Any p0, Any p1) { invoker::Invoke<Void>(0x6A564540FAC12211, p0, p1); } // 0x6A564540FAC12211 b1207
	static Any _0x3D10D7179D7034AF(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x3D10D7179D7034AF, p0, p1, p2); } // 0x3D10D7179D7034AF b1207
	static Any _0x227522FD59DDB7E8(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x227522FD59DDB7E8, p0, p1, p2); } // 0x227522FD59DDB7E8 b1207
	static Any _0xC97E0D2302382211(Any p0, Any p1) { return invoker::Invoke<Any>(0xC97E0D2302382211, p0, p1); } // 0xC97E0D2302382211 b1207
	static Any _0xE787F05DFC977BDE(Any p0, Any p1) { return invoker::Invoke<Any>(0xE787F05DFC977BDE, p0, p1); } // 0xE787F05DFC977BDE b1207
	static Any _0xE843D21A8E2498AA(Any p0, Any p1) { return invoker::Invoke<Any>(0xE843D21A8E2498AA, p0, p1); } // 0xE843D21A8E2498AA b1207
	static Any _0x033EE4B89F3AC545(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x033EE4B89F3AC545, p0, p1, p2); } // 0x033EE4B89F3AC545 b1207
	static Any _0xBE012571B25F5ACA(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xBE012571B25F5ACA, p0, p1, p2, p3, p4); } // 0xBE012571B25F5ACA b1207
	static Any _0x780C5B9AE2819807(Any p0, Any p1) { return invoker::Invoke<Any>(0x780C5B9AE2819807, p0, p1); } // 0x780C5B9AE2819807 b1207
	static Any _0x6452B1D357D81742(Any p0, Any p1) { return invoker::Invoke<Any>(0x6452B1D357D81742, p0, p1); } // 0x6452B1D357D81742 b1207
	static Any _0xB991FE166FAF84FD() { return invoker::Invoke<Any>(0xB991FE166FAF84FD); } // 0xB991FE166FAF84FD b1207
	static Any _0x9AC53CB6907B4428(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x9AC53CB6907B4428, p0, p1, p2); } // 0x9AC53CB6907B4428 b1207
	static Any _0x9D21B185ABC2DBC4(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x9D21B185ABC2DBC4, p0, p1, p2, p3); } // 0x9D21B185ABC2DBC4 b1207
	static void _0x75CFAC49301E134F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x75CFAC49301E134F, p0, p1, p2); } // 0x75CFAC49301E134F b1207
	static Any _0x9D21B185ABC2DBC5(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x9D21B185ABC2DBC5, p0, p1, p2, p3); } // 0x9D21B185ABC2DBC5 b1207
	static void _0x75CFAC49301E134E(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x75CFAC49301E134E, p0, p1, p2); } // 0x75CFAC49301E134E b1207
	static Any _0x46DB71883EE9D5AF(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x46DB71883EE9D5AF, p0, p1, p2, p3); } // 0x46DB71883EE9D5AF b1207
	static void _0x951847CEF3D829FF(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x951847CEF3D829FF, p0, p1, p2); } // 0x951847CEF3D829FF b1207
	static Any _0x6862E4D93F64CF01(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x6862E4D93F64CF01, p0, p1, p2, p3); } // 0x6862E4D93F64CF01 b1207
	static Any _0x597F571DDEE3FFAC() { return invoker::Invoke<Any>(0x597F571DDEE3FFAC); } // 0x597F571DDEE3FFAC b1207
	static Any _0xA6AA9F56BC6CFF58() { return invoker::Invoke<Any>(0xA6AA9F56BC6CFF58); } // 0xA6AA9F56BC6CFF58 b1207
	static Any _0x644CCB76A76CFBD6() { return invoker::Invoke<Any>(0x644CCB76A76CFBD6); } // 0x644CCB76A76CFBD6 b1207
	static Any _0x3112ADB9D5F3426B() { return invoker::Invoke<Any>(0x3112ADB9D5F3426B); } // 0x3112ADB9D5F3426B b1207
	static void _0xE36D4A38D28D9CFB(Any p0) { invoker::Invoke<Void>(0xE36D4A38D28D9CFB, p0); } // 0xE36D4A38D28D9CFB b1207
	static Any _0x7C7E4AB748EA3B07() { return invoker::Invoke<Any>(0x7C7E4AB748EA3B07); } // 0x7C7E4AB748EA3B07 b1207
	static Any _0xFC7563F482781A3D() { return invoker::Invoke<Any>(0xFC7563F482781A3D); } // 0xFC7563F482781A3D b1207
	static void _0xC04F47D488EF9EBA(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xC04F47D488EF9EBA, p0, p1, p2, p3); } // 0xC04F47D488EF9EBA b1207
	static void _0x9E58207B194488AC(Any p0, Any p1) { invoker::Invoke<Void>(0x9E58207B194488AC, p0, p1); } // 0x9E58207B194488AC b1207
	static void _0xFD41D1D4350F6413(Any p0) { invoker::Invoke<Void>(0xFD41D1D4350F6413, p0); } // 0xFD41D1D4350F6413 b1207
	static void _0x9B4E793B1CB6550A() { invoker::Invoke<Void>(0x9B4E793B1CB6550A); } // 0x9B4E793B1CB6550A b1207
	static Any _0xF666EF30F4F0AC4E() { return invoker::Invoke<Any>(0xF666EF30F4F0AC4E); } // 0xF666EF30F4F0AC4E b1207
	static void _0xD5D72F1624F3BA7C(Any p0) { invoker::Invoke<Void>(0xD5D72F1624F3BA7C, p0); } // 0xD5D72F1624F3BA7C b1207
	static void _0xE3A46370F70F3607(Any p0, Any p1) { invoker::Invoke<Void>(0xE3A46370F70F3607, p0, p1); } // 0xE3A46370F70F3607 b1207
	static void _0xE1F45A67A9F0DCBC(Any p0) { invoker::Invoke<Void>(0xE1F45A67A9F0DCBC, p0); } // 0xE1F45A67A9F0DCBC b1207
	static void _0x6968CE7AC32F6788(Any p0) { invoker::Invoke<Void>(0x6968CE7AC32F6788, p0); } // 0x6968CE7AC32F6788 b1207
}

namespace ITEMDATABASE
{
	static Any _ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x856FF92C57742AE5, p0, p1, p2); } // 0x856FF92C57742AE5 b1207
	static Any _ITEM_DATABASE_GET_FITS_SLOT_COUNT(Any p0) { return invoker::Invoke<Any>(0x2970D1D6BFCF9B46, p0); } // 0x2970D1D6BFCF9B46 b1207
	static Any _ITEM_DATABASE_GET_FITS_SLOT_INFO(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x77210C146CED5261, p0, p1, p2); } // 0x77210C146CED5261 b1207
	static Any _ITEM_DATABASE_GET_HAS_SLOT_COUNT(Any p0) { return invoker::Invoke<Any>(0x44915068579D7710, p0); } // 0x44915068579D7710 b1207
	static Any _ITEM_DATABASE_GET_HAS_SLOT_INFO(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x8A9BD0DB7E8376CF, p0, p1, p2); } // 0x8A9BD0DB7E8376CF b1207
	static Any _0x2A610BEE7D341CC4() { return invoker::Invoke<Any>(0x2A610BEE7D341CC4); } // 0x2A610BEE7D341CC4 b1207
	static Any _ITEM_DATABASE_FILLOUT_ITEM_INFO(Any p0, Any p1) { return invoker::Invoke<Any>(0xFE90ABBCBFDC13B2, p0, p1); } // 0xFE90ABBCBFDC13B2 b1207
	static Any _ITEM_DATABASE_FILLOUT_ACQUIRE_COST(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x74F7928816E4E181, p0, p1, p2); } // 0x74F7928816E4E181 b1207
	static Any _ITEM_DATABASE_FILLOUT_SELL_PRICE(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x7A62A2EEDE1C3766, p0, p1, p2); } // 0x7A62A2EEDE1C3766 b1207
	static Any _ITEM_DATABASE_FILLOUT_SATCHEL_DATA(Any p0, Any p1) { return invoker::Invoke<Any>(0x4776EFD78F75C23F, p0, p1); } // 0x4776EFD78F75C23F b1207
	static Any _ITEM_DATABASE_FILLOUT_UI_DATA(Any p0, Any p1) { return invoker::Invoke<Any>(0xB86F7CC2DC67AC60, p0, p1); } // 0xB86F7CC2DC67AC60 b1207
	static Any _0x74C3B1093728D263() { return invoker::Invoke<Any>(0x74C3B1093728D263); } // 0x74C3B1093728D263 b1207
	static Any _ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(Any p0, Any p1) { return invoker::Invoke<Any>(0x9379BE60DC55BBE6, p0, p1); } // 0x9379BE60DC55BBE6 b1207
	static Any _ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Any p0, Any p1) { return invoker::Invoke<Any>(0xCF2D360D27FD1ABF, p0, p1); } // 0xCF2D360D27FD1ABF b1207
	static Any _ITEM_DATABASE_FILLOUT_TAG_DATA(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x5A11D6EEA17165B0, p0, p1, p2, p3); } // 0x5A11D6EEA17165B0 b1207
	static Any _ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(Any p0) { return invoker::Invoke<Any>(0x01FDDAD392D04144, p0); } // 0x01FDDAD392D04144 b1207
	static Any _ITEM_DATABASE_GET_ACQUIRE_COST(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x6772A83C67A25775, p0, p1, p2); } // 0x6772A83C67A25775 b1207
	static Any _ITEM_DATABASE_CREATE_ITEM_COLLECTION(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x71EFA7999AE79408, p0, p1, p2); } // 0x71EFA7999AE79408 b1207
	static Any _0xD389A2549C4EFB30(Any p0) { return invoker::Invoke<Any>(0xD389A2549C4EFB30, p0); } // 0xD389A2549C4EFB30 b1207
	static Any _0x8750F69A720C2E41(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x8750F69A720C2E41, p0, p1, p2); } // 0x8750F69A720C2E41 b1207
	static Any _0xCBB7B6EDFA933ADE(Any p0) { return invoker::Invoke<Any>(0xCBB7B6EDFA933ADE, p0); } // 0xCBB7B6EDFA933ADE b1207
	static Any _ITEM_DATABASE_IS_INTRINSIC_ITEM(Any p0) { return invoker::Invoke<Any>(0x337F88E3A063995E, p0); } // 0x337F88E3A063995E b1207
	static Any _ITEM_DATABASE_IS_OVERPOWERED_ITEM(Any p0) { return invoker::Invoke<Any>(0x337F88E3A063995F, p0); } // 0x337F88E3A063995F b1207
	static Any _ITEM_DATABASE_IS_KEY_VALID(Any p0, Any p1) { return invoker::Invoke<Any>(0x6D5D51B188333FD1, p0, p1); } // 0x6D5D51B188333FD1 b1207
	static Any _ITEM_DATABASE_GET_BUNDLE_ID(Any p0) { return invoker::Invoke<Any>(0x891A45960B6B768A, p0); } // 0x891A45960B6B768A b1207
	static Any _ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(Any p0, Any p1) { return invoker::Invoke<Any>(0x3332695B01015DF9, p0, p1); } // 0x3332695B01015DF9 b1207
	static Any _ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x5D48A77E4B668B57, p0, p1, p2, p3); } // 0x5D48A77E4B668B57 b1207
	static Any _0x4308812A6E9CA62E() { return invoker::Invoke<Any>(0x4308812A6E9CA62E); } // 0x4308812A6E9CA62E b1207
	static Any _0xA97EE5E4589FCF5A() { return invoker::Invoke<Any>(0xA97EE5E4589FCF5A); } // 0xA97EE5E4589FCF5A b1207
	static Any _0x7A35A72A692BE9DB() { return invoker::Invoke<Any>(0x7A35A72A692BE9DB); } // 0x7A35A72A692BE9DB b1207
	static Any _0x3A0B667ABFF87F6E() { return invoker::Invoke<Any>(0x3A0B667ABFF87F6E); } // 0x3A0B667ABFF87F6E b1207
	static Any _ITEM_DATABASE_IS_SHOP_KEY_VALID(Any p0) { return invoker::Invoke<Any>(0x00B9507D8E1D8716, p0); } // 0x00B9507D8E1D8716 b1207
	static Any _ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(Any p0) { return invoker::Invoke<Any>(0xC568B1A0F17C7025, p0); } // 0xC568B1A0F17C7025 b1207
	static Any _ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x4A79B41B4EB91F4E, p0, p1, p2); } // 0x4A79B41B4EB91F4E b1207
	static Any _ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xCFB06801F5099B25, p0, p1, p2); } // 0xCFB06801F5099B25 b1207
	static Any _ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x76C752D788A76813, p0, p1, p2, p3); } // 0x76C752D788A76813 b1207
	static Any _ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xE0EA5C031AE5539F, p0, p1, p2, p3, p4); } // 0xE0EA5C031AE5539F b1207
	static Any _0x17721003A66C72BF() { return invoker::Invoke<Any>(0x17721003A66C72BF); } // 0x17721003A66C72BF b1207
	static Any _ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(Any p0) { return invoker::Invoke<Any>(0x3AFE5182C45A84F6, p0); } // 0x3AFE5182C45A84F6 b1207
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_INFO(Any p0, Any p1) { return invoker::Invoke<Any>(0x66A6D76B6BB999B4, p0, p1); } // 0x66A6D76B6BB999B4 b1207
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x86FCB565CCA0CFA7, p0, p1, p2); } // 0x86FCB565CCA0CFA7 b1207
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xD66114469978B55B, p0, p1, p2); } // 0xD66114469978B55B b1207
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xF04247092F193B75, p0, p1, p2, p3); } // 0xF04247092F193B75 b1207
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x9A60570657A7B635, p0, p1, p2, p3); } // 0x9A60570657A7B635 b1207
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xB347C100DF0C9B7F, p0, p1, p2); } // 0xB347C100DF0C9B7F b1207
	static Any _ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xF32BEF578B3DBAE8, p0, p1, p2, p3, p4, p5); } // 0xF32BEF578B3DBAE8 b1207
	static Any _ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(Any p0) { return invoker::Invoke<Any>(0x4CE753203FA42214, p0); } // 0x4CE753203FA42214 b1207
	static Any _ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xB52E20F6767A09A2, p0, p1, p2, p3); } // 0xB52E20F6767A09A2 b1207
	static Any _0xF8D09EF8CE61D7BF() { return invoker::Invoke<Any>(0xF8D09EF8CE61D7BF); } // 0xF8D09EF8CE61D7BF b1207
	static Any _ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(Any p0, Any p1) { return invoker::Invoke<Any>(0x4EB37AAB79AB0C48, p0, p1); } // 0x4EB37AAB79AB0C48 b1207
	static Any _ITEM_DATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY(Any p0, Any p1) { return invoker::Invoke<Any>(0x40C5D95818823C94, p0, p1); } // 0x40C5D95818823C94 b1207
	static Any _ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(Any p0) { return invoker::Invoke<Any>(0x5AAAF40E9B224F5E, p0); } // 0x5AAAF40E9B224F5E b1207
	static Any _ITEM_DATABASE_GET_MODIFIED_PRICE(Any p0, Any p1) { return invoker::Invoke<Any>(0xCB92EC9C004732B4, p0, p1); } // 0xCB92EC9C004732B4 b1207
	static Any _ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(Any p0) { return invoker::Invoke<Any>(0x1289D8315235856D, p0); } // 0x1289D8315235856D b1207
	static Any _ITEM_DATABASE_FILLOUT_MODIFIER(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x60614A0AB580A2B5, p0, p1, p2); } // 0x60614A0AB580A2B5 b1207
	static Any _0xEF254F1A4C08B7E6() { return invoker::Invoke<Any>(0xEF254F1A4C08B7E6); } // 0xEF254F1A4C08B7E6 b1207
	static Any _0x3FAA928A79591761() { return invoker::Invoke<Any>(0x3FAA928A79591761); } // 0x3FAA928A79591761 b1207
	static Any _0x48229CE0C7938237() { return invoker::Invoke<Any>(0x48229CE0C7938237); } // 0x48229CE0C7938237 b1207
	static Any _0x121D2005DD64496B() { return invoker::Invoke<Any>(0x121D2005DD64496B); } // 0x121D2005DD64496B b1207
	static Any _0x8D029948CA29409B() { return invoker::Invoke<Any>(0x8D029948CA29409B); } // 0x8D029948CA29409B b1207
	static Any _ITEM_DATABASE_DOES_ITEM_HAVE_TAG(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xFF5FB5605AD56856, p0, p1, p2); } // 0xFF5FB5605AD56856 b1207
	static Any _0x99C6EA66DFE73757() { return invoker::Invoke<Any>(0x99C6EA66DFE73757); } // 0x99C6EA66DFE73757 b1207
	static Any _ITEM_DATABASE_GET_ITEM_TAG_TYPE(Any p0, Any p1) { return invoker::Invoke<Any>(0x6111B8F9413F413A, p0, p1); } // 0x6111B8F9413F413A b1207
	static Any _ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(Any p0) { return invoker::Invoke<Any>(0xCEC6A41E8910486A, p0); } // 0xCEC6A41E8910486A b1207
	static Any _ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(Any p0, Any p1) { return invoker::Invoke<Any>(0x49885D82A13EEAEA, p0, p1); } // 0x49885D82A13EEAEA b1207
	static Any _ITEM_DATABASE_LOCALIZATION_GET_TYPE(Any p0, Any p1) { return invoker::Invoke<Any>(0xCABF5D41D0073D4A, p0, p1); } // 0xCABF5D41D0073D4A b1207
	static Any _ITEM_DATABASE_LOCALIZATION_GET_VALUE(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x9AE5610FDCED6EA7, p0, p1, p2); } // 0x9AE5610FDCED6EA7 b1207
	static Any _0xF4452CE83118C738() { return invoker::Invoke<Any>(0xF4452CE83118C738); } // 0xF4452CE83118C738 b1207
}

namespace ITEMSET
{
	static Any CREATE_ITEMSET(Any p0) { return invoker::Invoke<Any>(0xA1AF16083320065A, p0); } // 0xA1AF16083320065A b1207
	static void DESTROY_ITEMSET(Any p0) { invoker::Invoke<Void>(0x712BC69F10549B92, p0); } // 0x712BC69F10549B92 b1207
	static Any IS_ITEMSET_VALID(Any p0) { return invoker::Invoke<Any>(0xD30765D153EF5C76, p0); } // 0xD30765D153EF5C76 b1207
	static Any ADD_TO_ITEMSET(Any p0, Any p1) { return invoker::Invoke<Any>(0xABE74510883C7950, p0, p1); } // 0xABE74510883C7950 b1207
	static void REMOVE_FROM_ITEMSET(Any p0, Any p1) { invoker::Invoke<Void>(0xC5BAA432B429DC24, p0, p1); } // 0xC5BAA432B429DC24 b1207
	static Any GET_ITEMSET_SIZE(Any p0) { return invoker::Invoke<Any>(0x55F2E375AC6018A9, p0); } // 0x55F2E375AC6018A9 b1207
	static Any GET_INDEXED_ITEM_IN_ITEMSET(Any p0, Any p1) { return invoker::Invoke<Any>(0x275A2E2C0FAB7612, p0, p1); } // 0x275A2E2C0FAB7612 b1207
	static Any _0x9FC3CDB5CE815901(Any p0, Any p1) { return invoker::Invoke<Any>(0x9FC3CDB5CE815901, p0, p1); } // 0x9FC3CDB5CE815901 b1207
	static Any IS_IN_ITEMSET(Any p0, Any p1) { return invoker::Invoke<Any>(0xD1503C2EE2FE688C, p0, p1); } // 0xD1503C2EE2FE688C b1207
	static void CLEAN_ITEMSET(Any p0) { invoker::Invoke<Void>(0x85F3A86CA9021FB0, p0); } // 0x85F3A86CA9021FB0 b1207
	static void _0x20A4BF0E09BEE146(Any p0) { invoker::Invoke<Void>(0x20A4BF0E09BEE146, p0); } // 0x20A4BF0E09BEE146 b1207
}

namespace _NAMESPACE35
{
	static void _0xF60386770878A98F(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xF60386770878A98F, p0, p1, p2, p3, p4); } // 0xF60386770878A98F b1207
	static void _0x785177E4D57D7389(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x785177E4D57D7389, p0, p1, p2, p3, p4); } // 0x785177E4D57D7389 b1207
	static Any _0xC08E804C91F47C80() { return invoker::Invoke<Any>(0xC08E804C91F47C80); } // 0xC08E804C91F47C80 b1207
	static Any _0xFFEBE5AA96BC2E4E(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xFFEBE5AA96BC2E4E, p0, p1, p2); } // 0xFFEBE5AA96BC2E4E b1207
	static void _0x15ABD5004CAD2D99(Any p0) { invoker::Invoke<Void>(0x15ABD5004CAD2D99, p0); } // 0x15ABD5004CAD2D99 b1207
	static Any _0xF611DE44AEB36A1D() { return invoker::Invoke<Any>(0xF611DE44AEB36A1D); } // 0xF611DE44AEB36A1D b1207
	static Any _0x3D2674828A4E6B3C() { return invoker::Invoke<Any>(0x3D2674828A4E6B3C); } // 0x3D2674828A4E6B3C b1207
	static void _0xC5EB2755FA25F1E9(Any p0) { invoker::Invoke<Void>(0xC5EB2755FA25F1E9, p0); } // 0xC5EB2755FA25F1E9 b1207
	static Any _0x54310AAB97B92816(Any p0) { return invoker::Invoke<Any>(0x54310AAB97B92816, p0); } // 0x54310AAB97B92816 b1207
	static void _0x0E3BDEED21BEB945(Any p0, Any p1) { invoker::Invoke<Void>(0x0E3BDEED21BEB945, p0, p1); } // 0x0E3BDEED21BEB945 b1207
	static void _0x093A9D1F72DF0D19(Any p0, Any p1) { invoker::Invoke<Void>(0x093A9D1F72DF0D19, p0, p1); } // 0x093A9D1F72DF0D19 b1207
	static Any _0xC76F252371150D9A() { return invoker::Invoke<Any>(0xC76F252371150D9A); } // 0xC76F252371150D9A b1207
	static Any _0xDD5FD601481F648B(Any p0) { return invoker::Invoke<Any>(0xDD5FD601481F648B, p0); } // 0xDD5FD601481F648B b1207
	static void _0xA80FF73F772ACF6A(Any p0, Any p1) { invoker::Invoke<Void>(0xA80FF73F772ACF6A, p0, p1); } // 0xA80FF73F772ACF6A b1207
	static void _0x062B4A4A3396351D(Any p0) { invoker::Invoke<Void>(0x062B4A4A3396351D, p0); } // 0x062B4A4A3396351D b1207
	static void _0x331D349E0380B097(Any p0) { invoker::Invoke<Void>(0x331D349E0380B097, p0); } // 0x331D349E0380B097 b1207
	static void _0x292AD61A33A7A485() { invoker::Invoke<Void>(0x292AD61A33A7A485); } // 0x292AD61A33A7A485 b1207
	static void _0x07E8B8B20570271C(Any p0) { invoker::Invoke<Void>(0x07E8B8B20570271C, p0); } // 0x07E8B8B20570271C b1207
	static void _0x22741652985C84D0(Any p0, Any p1) { invoker::Invoke<Void>(0x22741652985C84D0, p0, p1); } // 0x22741652985C84D0 b1207
	static void _0x9C4352134B2835FB(Any p0, Any p1) { invoker::Invoke<Void>(0x9C4352134B2835FB, p0, p1); } // 0x9C4352134B2835FB b1207
	static Any _0x9EF07CFBB19A9733() { return invoker::Invoke<Any>(0x9EF07CFBB19A9733); } // 0x9EF07CFBB19A9733 b1207
	static void _0x8DE82BC774F3B862(Any p0) { invoker::Invoke<Void>(0x8DE82BC774F3B862, p0); } // 0x8DE82BC774F3B862 b1207
	static void _0x956510F8C36B5C64() { invoker::Invoke<Void>(0x956510F8C36B5C64); } // 0x956510F8C36B5C64 b1207
	static void _0x4752F68EB7F2D280(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4752F68EB7F2D280, p0, p1, p2); } // 0x4752F68EB7F2D280 b1207
	static void _0x5E6F375CA101C108(Any p0, Any p1) { invoker::Invoke<Void>(0x5E6F375CA101C108, p0, p1); } // 0x5E6F375CA101C108 b1207
	static void _0x9BBDCB8DF789EBC1(Any p0, Any p1) { invoker::Invoke<Void>(0x9BBDCB8DF789EBC1, p0, p1); } // 0x9BBDCB8DF789EBC1 b1207
	static Any _0xAD401C63158ACBAA(Any p0) { return invoker::Invoke<Any>(0xAD401C63158ACBAA, p0); } // 0xAD401C63158ACBAA b1207
	static Any _0x148E7AC8141C9E64(Any p0) { return invoker::Invoke<Any>(0x148E7AC8141C9E64, p0); } // 0x148E7AC8141C9E64 b1207
	static void _0xEDFC6C1FD1C964F5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xEDFC6C1FD1C964F5, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xEDFC6C1FD1C964F5 b1207
	static Any _0xF0B67BAD53C35BD9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xF0B67BAD53C35BD9, p0, p1, p2, p3, p4, p5, p6); } // 0xF0B67BAD53C35BD9 b1207
	static Any _0x018F30D762E62DF8(Any p0, Any p1) { return invoker::Invoke<Any>(0x018F30D762E62DF8, p0, p1); } // 0x018F30D762E62DF8 b1207
	static Any _0x318F0F9A4426CFA2(Any p0, Any p1) { return invoker::Invoke<Any>(0x318F0F9A4426CFA2, p0, p1); } // 0x318F0F9A4426CFA2 b1207
	static Any _0x95878B13E272EF1F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x95878B13E272EF1F, p0, p1, p2, p3, p4, p5, p6); } // 0x95878B13E272EF1F b1207
	static void _0x10827B5A0AAC56A7(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x10827B5A0AAC56A7, p0, p1, p2); } // 0x10827B5A0AAC56A7 b1207
	static void _0xD7494DED50C6EF52(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD7494DED50C6EF52, p0, p1, p2); } // 0xD7494DED50C6EF52 b1207
	static Any _0x69E181772886F48B(Any p0) { return invoker::Invoke<Any>(0x69E181772886F48B, p0); } // 0x69E181772886F48B b1207
	static Any _0x0BB6DE7D23C60626(Any p0) { return invoker::Invoke<Any>(0x0BB6DE7D23C60626, p0); } // 0x0BB6DE7D23C60626 b1207
	static Any _0xF0FBFB9AB15F7734(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xF0FBFB9AB15F7734, p0, p1, p2); } // 0xF0FBFB9AB15F7734 b1207
	static void _0x522F74636DF10201(Any p0, Any p1) { invoker::Invoke<Void>(0x522F74636DF10201, p0, p1); } // 0x522F74636DF10201 b1207
	static void _0xDA1A9ADC4E3D4B16(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDA1A9ADC4E3D4B16, p0, p1, p2); } // 0xDA1A9ADC4E3D4B16 b1207
	static void _0xC805EB785824F712(Any p0) { invoker::Invoke<Void>(0xC805EB785824F712, p0); } // 0xC805EB785824F712 b1207
	static void _0x710448D44A64C213(Any p0) { invoker::Invoke<Void>(0x710448D44A64C213, p0); } // 0x710448D44A64C213 b1207
	static Any _0xECE3C34B270428D5() { return invoker::Invoke<Any>(0xECE3C34B270428D5); } // 0xECE3C34B270428D5 b1207
	static Any _0xA22C46F16359471C() { return invoker::Invoke<Any>(0xA22C46F16359471C); } // 0xA22C46F16359471C b1207
	static Any _0x82F11E1296996574() { return invoker::Invoke<Any>(0x82F11E1296996574); } // 0x82F11E1296996574 b1207
	static void _0x3852237A3D9DF145(Any p0) { invoker::Invoke<Void>(0x3852237A3D9DF145, p0); } // 0x3852237A3D9DF145 b1207
	static Any _0x0EAF918F751F27BA(Any p0) { return invoker::Invoke<Any>(0x0EAF918F751F27BA, p0); } // 0x0EAF918F751F27BA b1207
	static Any _0xC0DF161950FB101E(Any p0) { return invoker::Invoke<Any>(0xC0DF161950FB101E, p0); } // 0xC0DF161950FB101E b1207
	static Any _0xE4D6E45F491A66CB(Any p0, Any p1) { return invoker::Invoke<Any>(0xE4D6E45F491A66CB, p0, p1); } // 0xE4D6E45F491A66CB b1207
	static Any _0xE9EB79CBF9C0F58A(Any p0) { return invoker::Invoke<Any>(0xE9EB79CBF9C0F58A, p0); } // 0xE9EB79CBF9C0F58A b1207
	static void _0x21213B833EF4DAE7(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x21213B833EF4DAE7, p0, p1, p2); } // 0x21213B833EF4DAE7 b1207
	static void _0x61B98367D93F012F(Any p0) { invoker::Invoke<Void>(0x61B98367D93F012F, p0); } // 0x61B98367D93F012F b1207
	static void _0x6ABC50979655BEE7(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x6ABC50979655BEE7, p0, p1, p2); } // 0x6ABC50979655BEE7 b1207
	static void _0x390710D2DAFA6BFF(Any p0, Any p1) { invoker::Invoke<Void>(0x390710D2DAFA6BFF, p0, p1); } // 0x390710D2DAFA6BFF b1207
	static Any _0x35E5E21F9159849C(Any p0) { return invoker::Invoke<Any>(0x35E5E21F9159849C, p0); } // 0x35E5E21F9159849C b1207
	static Any _0xDAEFDFDB2AEECE37(Any p0) { return invoker::Invoke<Any>(0xDAEFDFDB2AEECE37, p0); } // 0xDAEFDFDB2AEECE37 b1207
	static Any _0x259CE340A8738814(Any p0) { return invoker::Invoke<Any>(0x259CE340A8738814, p0); } // 0x259CE340A8738814 b1207
	static Any _0xE083BEDA81709891() { return invoker::Invoke<Any>(0xE083BEDA81709891); } // 0xE083BEDA81709891 b1207
	static Any _0x89E005B1662F6E48(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x89E005B1662F6E48, p0, p1, p2); } // 0x89E005B1662F6E48 b1207
	static Any _0x3738B784DDD35CC6() { return invoker::Invoke<Any>(0x3738B784DDD35CC6); } // 0x3738B784DDD35CC6 b1207
	static Any _0x0BDFEBCF40A5F7E3() { return invoker::Invoke<Any>(0x0BDFEBCF40A5F7E3); } // 0x0BDFEBCF40A5F7E3 b1207
	static Any _0x009CF9A29972C298() { return invoker::Invoke<Any>(0x009CF9A29972C298); } // 0x009CF9A29972C298 b1207
	static Any _0x75CBF20BA47E4F89(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x75CBF20BA47E4F89, p0, p1, p2, p3); } // 0x75CBF20BA47E4F89 b1207
	static void _0x55F37F5F3F2475E1() { invoker::Invoke<Void>(0x55F37F5F3F2475E1); } // 0x55F37F5F3F2475E1 b1207
	static void _0xBD944A3D36E992DE() { invoker::Invoke<Void>(0xBD944A3D36E992DE); } // 0xBD944A3D36E992DE b1207
	static void _0x987BE590FB9D41E5(Any p0) { invoker::Invoke<Void>(0x987BE590FB9D41E5, p0); } // 0x987BE590FB9D41E5 b1207
	static void _0xDCF12B89624AAC96(Any p0) { invoker::Invoke<Void>(0xDCF12B89624AAC96, p0); } // 0xDCF12B89624AAC96 b1207
	static Any _0xDDCE8E960D1DE240() { return invoker::Invoke<Any>(0xDDCE8E960D1DE240); } // 0xDDCE8E960D1DE240 b1207
	static void _0xDEA083C16BB91345() { invoker::Invoke<Void>(0xDEA083C16BB91345); } // 0xDEA083C16BB91345 b1207
	static void _0x9C8A2BF37E966464(Any p0, Any p1) { invoker::Invoke<Void>(0x9C8A2BF37E966464, p0, p1); } // 0x9C8A2BF37E966464 b1207
	static Any _0x9D5C9A5A3321B128(Any p0) { return invoker::Invoke<Any>(0x9D5C9A5A3321B128, p0); } // 0x9D5C9A5A3321B128 b1207
	static Any _0x0F230DE0DDBE3649(Any p0) { return invoker::Invoke<Any>(0x0F230DE0DDBE3649, p0); } // 0x0F230DE0DDBE3649 b1207
	static Any _0x9945A3E2528A02E8(Any p0) { return invoker::Invoke<Any>(0x9945A3E2528A02E8, p0); } // 0x9945A3E2528A02E8 b1207
	static Any _0x717DA2281DF90855(Any p0) { return invoker::Invoke<Any>(0x717DA2281DF90855, p0); } // 0x717DA2281DF90855 b1207
	static void _0x9B4C564BFA7CFF37(Any p0) { invoker::Invoke<Void>(0x9B4C564BFA7CFF37, p0); } // 0x9B4C564BFA7CFF37 b1207
	static void _0x4B52BF96E225D230(Any p0) { invoker::Invoke<Void>(0x4B52BF96E225D230, p0); } // 0x4B52BF96E225D230 b1207
	static Any _0x2728C77FBC4B9796() { return invoker::Invoke<Any>(0x2728C77FBC4B9796); } // 0x2728C77FBC4B9796 b1207
	static Any _0x856CE8FDE2416602(Any p0) { return invoker::Invoke<Any>(0x856CE8FDE2416602, p0); } // 0x856CE8FDE2416602 b1207
	static Any _0x7351DA734F989F4E(Any p0) { return invoker::Invoke<Any>(0x7351DA734F989F4E, p0); } // 0x7351DA734F989F4E b1207
	static Any _0x76CF93D4B416B288(Any p0) { return invoker::Invoke<Any>(0x76CF93D4B416B288, p0); } // 0x76CF93D4B416B288 b1207
	static void _0xF19706B1F8FFA88F(Any p0, Any p1) { invoker::Invoke<Void>(0xF19706B1F8FFA88F, p0, p1); } // 0xF19706B1F8FFA88F b1207
	static void _0x2001687F9562FD9D(Any p0) { invoker::Invoke<Void>(0x2001687F9562FD9D, p0); } // 0x2001687F9562FD9D b1207
	static void _0xC61EDEBF16CD9668(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xC61EDEBF16CD9668, p0, p1, p2); } // 0xC61EDEBF16CD9668 b1207
	static void _0xE9AC8466ABE484BB(Any p0, Any p1) { invoker::Invoke<Void>(0xE9AC8466ABE484BB, p0, p1); } // 0xE9AC8466ABE484BB b1207
	static Any _0x40851BCC33ACD9AB(Any p0) { return invoker::Invoke<Any>(0x40851BCC33ACD9AB, p0); } // 0x40851BCC33ACD9AB b1207
	static Any _0xF46108C50A22B029() { return invoker::Invoke<Any>(0xF46108C50A22B029); } // 0xF46108C50A22B029 b1207
	static void _0x7803436E68C32B26() { invoker::Invoke<Void>(0x7803436E68C32B26); } // 0x7803436E68C32B26 b1207
	static void _0xC310239ACCCF5579() { invoker::Invoke<Void>(0xC310239ACCCF5579); } // 0xC310239ACCCF5579 b1207
	static void _0x29CD4896ECB66C12() { invoker::Invoke<Void>(0x29CD4896ECB66C12); } // 0x29CD4896ECB66C12 b1207
	static void _0xE94B5E938619712E() { invoker::Invoke<Void>(0xE94B5E938619712E); } // 0xE94B5E938619712E b1207
	static Any _0x7FC667F6DDFBCDCC(Any p0) { return invoker::Invoke<Any>(0x7FC667F6DDFBCDCC, p0); } // 0x7FC667F6DDFBCDCC b1207
	static void _0x9C5BD8C562565CE6(Any p0) { invoker::Invoke<Void>(0x9C5BD8C562565CE6, p0); } // 0x9C5BD8C562565CE6 b1207
	static Any _0xCBFB4951F2E3934C() { return invoker::Invoke<Any>(0xCBFB4951F2E3934C); } // 0xCBFB4951F2E3934C b1207
	static void _0x819ADD5EF1742F47(Any p0, Any p1) { invoker::Invoke<Void>(0x819ADD5EF1742F47, p0, p1); } // 0x819ADD5EF1742F47 b1207
	static void _0x00DB0BC05E3FAA4E(Any p0, Any p1) { invoker::Invoke<Void>(0x00DB0BC05E3FAA4E, p0, p1); } // 0x00DB0BC05E3FAA4E b1207
	static void _0x0C392DB374655176(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x0C392DB374655176, p0, p1, p2, p3, p4); } // 0x0C392DB374655176 b1207
	static Any _0xC687A23E166DCF68(Any p0) { return invoker::Invoke<Any>(0xC687A23E166DCF68, p0); } // 0xC687A23E166DCF68 b1207
	static Any _0x002BABE0B7D53136() { return invoker::Invoke<Any>(0x002BABE0B7D53136); } // 0x002BABE0B7D53136 b1207
	static Any _0x26934083D3F2579C(Any p0) { return invoker::Invoke<Any>(0x26934083D3F2579C, p0); } // 0x26934083D3F2579C b1207
	static Any _0x532C5FDDB986EE5C(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x532C5FDDB986EE5C, p0, p1, p2); } // 0x532C5FDDB986EE5C b1207
	static Any _0xB527099D1E1EED49(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xB527099D1E1EED49, p0, p1, p2); } // 0xB527099D1E1EED49 b1207
	static void _0xBCC6DC59E32A2BDC(Any p0) { invoker::Invoke<Void>(0xBCC6DC59E32A2BDC, p0); } // 0xBCC6DC59E32A2BDC b1207
	static void _0xE0FA74AA3CCE650B(Any p0, Any p1) { invoker::Invoke<Void>(0xE0FA74AA3CCE650B, p0, p1); } // 0xE0FA74AA3CCE650B b1207
	static void _0x73BAD7B2F2DB50DE(Any p0, Any p1) { invoker::Invoke<Void>(0x73BAD7B2F2DB50DE, p0, p1); } // 0x73BAD7B2F2DB50DE b1207
	static void _0xD6C0A8C7C0B2F82C(Any p0, Any p1) { invoker::Invoke<Void>(0xD6C0A8C7C0B2F82C, p0, p1); } // 0xD6C0A8C7C0B2F82C b1207
	static void _0xFEC85339AACA2A35(Any p0, Any p1) { invoker::Invoke<Void>(0xFEC85339AACA2A35, p0, p1); } // 0xFEC85339AACA2A35 b1207
	static void _0x7EF2A2FE38D74456(Any p0, Any p1) { invoker::Invoke<Void>(0x7EF2A2FE38D74456, p0, p1); } // 0x7EF2A2FE38D74456 b1207
	static Any _0xC7DC5A0A7DF608CB(Any p0) { return invoker::Invoke<Any>(0xC7DC5A0A7DF608CB, p0); } // 0xC7DC5A0A7DF608CB b1207
	static void _0xDE5FAA741A781F73(Any p0, Any p1) { invoker::Invoke<Void>(0xDE5FAA741A781F73, p0, p1); } // 0xDE5FAA741A781F73 b1207
	static void _0x362086B911657B1A(Any p0, Any p1) { invoker::Invoke<Void>(0x362086B911657B1A, p0, p1); } // 0x362086B911657B1A b1207
	static void _0x8F9DE75680275C9F(Any p0) { invoker::Invoke<Void>(0x8F9DE75680275C9F, p0); } // 0x8F9DE75680275C9F b1207
	static void _0x67EBDD958835956C(Any p0) { invoker::Invoke<Void>(0x67EBDD958835956C, p0); } // 0x67EBDD958835956C b1207
	static void _0x9772395CC73E8D1F(Any p0, Any p1) { invoker::Invoke<Void>(0x9772395CC73E8D1F, p0, p1); } // 0x9772395CC73E8D1F b1207
	static void _0x26D558692B25DD95(Any p0) { invoker::Invoke<Void>(0x26D558692B25DD95, p0); } // 0x26D558692B25DD95 b1207
	static Any _0x0DBACA9C38C9A686(Any p0) { return invoker::Invoke<Any>(0x0DBACA9C38C9A686, p0); } // 0x0DBACA9C38C9A686 b1207
	static Any _0xD743C4293F47AFAD() { return invoker::Invoke<Any>(0xD743C4293F47AFAD); } // 0xD743C4293F47AFAD b1207
	static void _0x8C598A930F471938(Any p0, Any p1) { invoker::Invoke<Void>(0x8C598A930F471938, p0, p1); } // 0x8C598A930F471938 b1207
	static void _0x35815F372D43E1E5(Any p0, Any p1) { invoker::Invoke<Void>(0x35815F372D43E1E5, p0, p1); } // 0x35815F372D43E1E5 b1207
	static void _0xA1B0E6301E2E02A6(Any p0, Any p1) { invoker::Invoke<Void>(0xA1B0E6301E2E02A6, p0, p1); } // 0xA1B0E6301E2E02A6 b1207
	static void _0xAD3E07C37A7C1ADC(Any p0, Any p1) { invoker::Invoke<Void>(0xAD3E07C37A7C1ADC, p0, p1); } // 0xAD3E07C37A7C1ADC b1207
	static void _0xA8A74AA79FB67159(Any p0, Any p1) { invoker::Invoke<Void>(0xA8A74AA79FB67159, p0, p1); } // 0xA8A74AA79FB67159 b1207
	static void _0x7E7BF59F89FC6C6D(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x7E7BF59F89FC6C6D, p0, p1, p2, p3); } // 0x7E7BF59F89FC6C6D b1207
	static Any _0x2F9005E2EA4E5EE4() { return invoker::Invoke<Any>(0x2F9005E2EA4E5EE4); } // 0x2F9005E2EA4E5EE4 b1207
}

namespace LOCALIZATION
{
	static Any _GET_SYSTEM_LANGUAGE() { return invoker::Invoke<Any>(0x3C1A05F86AE6ACB5); } // 0x3C1A05F86AE6ACB5 b1207
	static Any GET_CURRENT_LANGUAGE() { return invoker::Invoke<Any>(0xDB917DA5C6835FCC); } // 0xDB917DA5C6835FCC b1207
	static Any _0x45D50415E4D885FF() { return invoker::Invoke<Any>(0x45D50415E4D885FF); } // 0x45D50415E4D885FF b1207
	static Any _0x76E30B799EBEEA0F() { return invoker::Invoke<Any>(0x76E30B799EBEEA0F); } // 0x76E30B799EBEEA0F b1207
}

namespace MAP
{
	static Any GET_BLIP_FROM_ENTITY(Any p0) { return invoker::Invoke<Any>(0x6D2C41A8BD6D6FD0, p0); } // 0x6D2C41A8BD6D6FD0 b1207
	static Any GET_MAIN_PLAYER_BLIP_ID() { return invoker::Invoke<Any>(0x5CD2889B2B381D45); } // 0x5CD2889B2B381D45 b1207
	static Any _0x3E593DF9C2962EC6(Any p0) { return invoker::Invoke<Any>(0x3E593DF9C2962EC6, p0); } // 0x3E593DF9C2962EC6 b1207
	static Any _0x554D9D53F696D002(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x554D9D53F696D002, p0, p1, p2, p3); } // 0x554D9D53F696D002 b1207
	static Any _0x23F74C2FDA6E7C61(Any p0, Any p1) { return invoker::Invoke<Any>(0x23F74C2FDA6E7C61, p0, p1); } // 0x23F74C2FDA6E7C61 b1207
	static Any _0xA486008892065FB9() { return invoker::Invoke<Any>(0xA486008892065FB9); } // 0xA486008892065FB9 b1207
	static Any _0x45F13B7E0A15C880(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x45F13B7E0A15C880, p0, p1, p2, p3, p4); } // 0x45F13B7E0A15C880 b1207
	static Any _0xEC174ADBCB611ECC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0xEC174ADBCB611ECC, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xEC174ADBCB611ECC b1207
	static Any _0xA6EF0C54A3443E70(Any p0, Any p1) { return invoker::Invoke<Any>(0xA6EF0C54A3443E70, p0, p1); } // 0xA6EF0C54A3443E70 b1207
	static Any _0xEDD964B7984AC291(Any p0, Any p1) { return invoker::Invoke<Any>(0xEDD964B7984AC291, p0, p1); } // 0xEDD964B7984AC291 b1207
	static Any _0xBD62D98799A3DAF0(Any p0, Any p1) { return invoker::Invoke<Any>(0xBD62D98799A3DAF0, p0, p1); } // 0xBD62D98799A3DAF0 b1207
	static Any _0x662D364ABF16DE2F(Any p0, Any p1) { return invoker::Invoke<Any>(0x662D364ABF16DE2F, p0, p1); } // 0x662D364ABF16DE2F b1207
	static Any _0xB059D7BD3D78C16F(Any p0, Any p1) { return invoker::Invoke<Any>(0xB059D7BD3D78C16F, p0, p1); } // 0xB059D7BD3D78C16F b1207
	static void _0x250C75EB1728CC0D(Any p0) { invoker::Invoke<Void>(0x250C75EB1728CC0D, p0); } // 0x250C75EB1728CC0D b1207
	static void SET_BLIP_FLASH_TIMER(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x02FF4CF43B7209D1, p0, p1, p2); } // 0x02FF4CF43B7209D1 b1207
	static Any SET_BLIP_FLASHES(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x0DF2B55F717DDB10, p0, p1, p2); } // 0x0DF2B55F717DDB10 b1207
	static void TRIGGER_SONAR_BLIP(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x72DD432F3CDFC0EE, p0, p1, p2, p3); } // 0x72DD432F3CDFC0EE b1207
	static void _0x0C7A2289A5C4D7C9(Any p0, Any p1) { invoker::Invoke<Void>(0x0C7A2289A5C4D7C9, p0, p1); } // 0x0C7A2289A5C4D7C9 b1207
	static void _0x60734CC207C9833C(Any p0) { invoker::Invoke<Void>(0x6E6E64788C07D2E0, p0); } // 0x6E6E64788C07D2E0 b1207
	static void SET_BLIP_COORDS(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4FF674F5E23D49CE, p0, p1, p2, p3); } // 0x4FF674F5E23D49CE b1207
	static Any GET_BLIP_COORDS(Any p0) { return invoker::Invoke<Any>(0x201C319797BDA603, p0); } // 0x201C319797BDA603 b1207
	static void SET_BLIP_SPRITE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x74F74D3207ED525C, p0, p1, p2); } // 0x74F74D3207ED525C b1207
	static Any _0x01B928CA2E198B01(Any p0) { return invoker::Invoke<Any>(0x01B928CA2E198B01, p0); } // 0x01B928CA2E198B01 b1207
	static void SET_BLIP_NAME_FROM_TEXT_FILE(Any p0, Any p1) { invoker::Invoke<Void>(0x0A062D6D7C0B2C2C, p0, p1); } // 0x0A062D6D7C0B2C2C b1207
	static void _0x9CB1A1623062F402(Any p0, Any p1) { invoker::Invoke<Void>(0x9CB1A1623062F402, p0, p1); } // 0x9CB1A1623062F402 b1207
	static Any _0x093DD5A31BC2B459() { return invoker::Invoke<Any>(0x093DD5A31BC2B459); } // 0x093DD5A31BC2B459 b1207
	static void SET_BLIP_ROTATION(Any p0, Any p1) { invoker::Invoke<Void>(0x6049966A94FBE706, p0, p1); } // 0x6049966A94FBE706 b1207
	static void SET_BLIP_SCALE(Any p0, Any p1) { invoker::Invoke<Void>(0xD38744167B2FA257, p0, p1); } // 0xD38744167B2FA257 b1207
	static void REMOVE_BLIP(Any p0) { invoker::Invoke<Void>(0xF2C3C9DA47AAA54A, p0); } // 0xF2C3C9DA47AAA54A b1207
	static Any DOES_BLIP_EXIST(Any p0) { return invoker::Invoke<Any>(0xCD82FA174080B3B1, p0); } // 0xCD82FA174080B3B1 b1207
	static Any _0x9FA00E2FC134A9D0(Any p0) { return invoker::Invoke<Any>(0x9FA00E2FC134A9D0, p0); } // 0x9FA00E2FC134A9D0 b1207
	static void SET_RADAR_ZOOM(Any p0) { invoker::Invoke<Void>(0xCAF6489DA2C8DD9E, p0); } // 0xCAF6489DA2C8DD9E b1207
	static Any _0xDEEDE7C41742E011() { return invoker::Invoke<Any>(0xDEEDE7C41742E011); } // 0xDEEDE7C41742E011 b1207
	static Any _0xE9F676788F8D5E1E(Any p0) { return invoker::Invoke<Any>(0xE9F676788F8D5E1E, p0); } // 0xE9F676788F8D5E1E b1207
	static Any IS_BLIP_ON_MINIMAP(Any p0) { return invoker::Invoke<Any>(0x46534526B9CD2D17, p0); } // 0x46534526B9CD2D17 b1207
	static Any FORCE_SONAR_BLIPS_THIS_FRAME() { return invoker::Invoke<Any>(0xEE1C7BA69BB74B08); } // 0xEE1C7BA69BB74B08 b1207
	static void SET_GPS_FLAGS(Any p0, Any p1) { invoker::Invoke<Void>(0x5DE61C90DDECFA2D, p0, p1); } // 0x5DE61C90DDECFA2D b1207
	static Any _0x4D3771237C79FF41() { return invoker::Invoke<Any>(0x4D3771237C79FF41); } // 0x4D3771237C79FF41 b1207
	static void SET_GPS_CUSTOM_ROUTE_RENDER(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF6CEF599FC470B33, p0, p1, p2); } // 0xF6CEF599FC470B33 b1207
	static void CLEAR_GPS_CUSTOM_ROUTE() { invoker::Invoke<Void>(0x1EAA5674B4D181C5); } // 0x1EAA5674B4D181C5 b1207
	static void START_GPS_MULTI_ROUTE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3D3D15AF7BCAAF83, p0, p1, p2); } // 0x3D3D15AF7BCAAF83 b1207
	static void ADD_POINT_TO_GPS_MULTI_ROUTE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x64C59DD6834FA942, p0, p1, p2, p3); } // 0x64C59DD6834FA942 b1207
	static void SET_GPS_MULTI_ROUTE_RENDER(Any p0) { invoker::Invoke<Void>(0x4426D65E029A4DC0, p0); } // 0x4426D65E029A4DC0 b1207
	static void CLEAR_GPS_MULTI_ROUTE() { invoker::Invoke<Void>(0x9E0AB9AAEE87CE28); } // 0x9E0AB9AAEE87CE28 b1207
	static void _0x6B44F13D888F770D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x6B44F13D888F770D, p0, p1, p2, p3, p4, p5); } // 0x6B44F13D888F770D b1207
	static void CLEAR_GPS_PLAYER_WAYPOINT() { invoker::Invoke<Void>(0x08FDC6F796E350D1); } // 0x08FDC6F796E350D1 b1207
	static void _0xD3F58E9316B7FC2A(Any p0) { invoker::Invoke<Void>(0xD3F58E9316B7FC2A, p0); } // 0xD3F58E9316B7FC2A b1207
	static void SET_WAYPOINT_OFF() { invoker::Invoke<Void>(0xFA8C41E8020D3439); } // 0xFA8C41E8020D3439 b1207
	static Any IS_WAYPOINT_ACTIVE() { return invoker::Invoke<Any>(0x202B1BBFC6AB5EE4); } // 0x202B1BBFC6AB5EE4 b1207
	static Any _0x29B30D07C3F7873B() { return invoker::Invoke<Any>(0x29B30D07C3F7873B); } // 0x29B30D07C3F7873B b1207
	static Any _0xF08E42BFA46BDFF8() { return invoker::Invoke<Any>(0xF08E42BFA46BDFF8); } // 0xF08E42BFA46BDFF8 b1207
	static Any _0xA1B4052C2A3DCC1E() { return invoker::Invoke<Any>(0xA1B4052C2A3DCC1E); } // 0xA1B4052C2A3DCC1E b1207
	static Any _0x3FBB838AEA30C1D8() { return invoker::Invoke<Any>(0x3FBB838AEA30C1D8); } // 0x3FBB838AEA30C1D8 b1207
	static Any _0xF47A1EB2A538A3A3() { return invoker::Invoke<Any>(0xF47A1EB2A538A3A3); } // 0xF47A1EB2A538A3A3 b1207
	static Any _0x3FDA2B79AEEE351C(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x3FDA2B79AEEE351C, p0, p1, p2, p3); } // 0x3FDA2B79AEEE351C b1207
	static void DISPLAY_RADAR(Any p0) { invoker::Invoke<Void>(0x1B3DA717B9AFF828, p0); } // 0x1B3DA717B9AFF828 b1207
	static void _0x9C113883487FD53C(Any p0, Any p1) { invoker::Invoke<Void>(0x9C113883487FD53C, p0, p1); } // 0x9C113883487FD53C b1207
	static void _0x1392105DA88BBFFB(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x1392105DA88BBFFB, p0, p1, p2, p3, p4); } // 0x1392105DA88BBFFB b1207
	static void _0xE057FEA9A22EB3EE(Any p0) { invoker::Invoke<Void>(0xE057FEA9A22EB3EE, p0); } // 0xE057FEA9A22EB3EE b1207
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoker::Invoke<Void>(0xA8EBBAE986FB5457); } // 0xA8EBBAE986FB5457 b1207
	static void _SET_MINIMAP_REVEALED(Any p0) { invoker::Invoke<Void>(0x4B8F743A4A6D2FF8, p0); } // 0x4B8F743A4A6D2FF8 b1207
	static void _0x63E7279D04160477(Any p0, Any p1) { invoker::Invoke<Void>(0x63E7279D04160477, p0, p1); } // 0x63E7279D04160477 b1207
	static Any _0xE5A7F70B7C0F3271() { return invoker::Invoke<Any>(0xE5A7F70B7C0F3271); } // 0xE5A7F70B7C0F3271 b1207
	static void _0x632AA10BF7EA53D3(Any p0, Any p1) { invoker::Invoke<Void>(0x632AA10BF7EA53D3, p0, p1); } // 0x632AA10BF7EA53D3 b1207
	static void _0x0923DBF87DFF735E(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x73348402566ECB6E, p0, p1, p2, p3); } // 0x73348402566ECB6E b1207
	static Any _0x63CBBD6CA6F321F9() { return invoker::Invoke<Any>(0x63CBBD6CA6F321F9); } // 0x63CBBD6CA6F321F9 b1207
	static void _0xEB3CB3386C775D72(Any p0) { invoker::Invoke<Void>(0xEB3CB3386C775D72, p0); } // 0xEB3CB3386C775D72 b1207
	static void _0xF8096DF9B87246E3(Any p0) { invoker::Invoke<Void>(0xF8096DF9B87246E3, p0); } // 0xF8096DF9B87246E3 b1207
	static void _0xA657EC9DBC6CC900(Any p0) { invoker::Invoke<Void>(0xA657EC9DBC6CC900, p0); } // 0xA657EC9DBC6CC900 b1207
	static void LOCK_MINIMAP_ANGLE(Any p0) { invoker::Invoke<Void>(0x0BFD145EF819FB3A, p0); } // 0x0BFD145EF819FB3A b1207
	static void UNLOCK_MINIMAP_ANGLE() { invoker::Invoke<Void>(0x5373DE8E179BC2A0); } // 0x5373DE8E179BC2A0 b1207
	static void _0x563FCB6620523917(Any p0, Any p1) { invoker::Invoke<Void>(0x563FCB6620523917, p0, p1); } // 0x563FCB6620523917 b1207
	static void _0x6786D7AFAC3162B3(Any p0) { invoker::Invoke<Void>(0x6786D7AFAC3162B3, p0); } // 0x6786D7AFAC3162B3 b1207
	static Any _0xE38450DBCBC70E3D(Any p0, Any p1) { return invoker::Invoke<Any>(0xE38450DBCBC70E3D, p0, p1); } // 0xE38450DBCBC70E3D b1207
	static void _0xD8C7162AB2E2AF45(Any p0) { invoker::Invoke<Void>(0xD8C7162AB2E2AF45, p0); } // 0xD8C7162AB2E2AF45 b1207
	static void _0xDA98246C7A3C2189(Any p0) { invoker::Invoke<Void>(0xDA98246C7A3C2189, p0); } // 0xDA98246C7A3C2189 b1207
	static Any _0x3F81EA4275D39D6F(Any p0) { return invoker::Invoke<Any>(0x3F81EA4275D39D6F, p0); } // 0x3F81EA4275D39D6F b1207
	static void _0xE0884C184728C75B(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xE0884C184728C75B, p0, p1, p2, p3); } // 0xE0884C184728C75B b1207
	static void _0x44813684F72B563C(Any p0, Any p1) { invoker::Invoke<Void>(0x44813684F72B563C, p0, p1); } // 0x44813684F72B563C b1207
	static void _0x97F6F158CC5B5CA2(Any p0, Any p1) { invoker::Invoke<Void>(0x97F6F158CC5B5CA2, p0, p1); } // 0x97F6F158CC5B5CA2 b1207
	static void _0xBB68D4D3CA3DE402(Any p0, Any p1) { invoker::Invoke<Void>(0xBB68D4D3CA3DE402, p0, p1); } // 0xBB68D4D3CA3DE402 b1207
	static Any _0x3CB8859F04763C78(Any p0, Any p1) { return invoker::Invoke<Any>(0x3CB8859F04763C78, p0, p1); } // 0x3CB8859F04763C78 b1207
	static void _0x7563CBCA99253D1A(Any p0, Any p1) { invoker::Invoke<Void>(0x7563CBCA99253D1A, p0, p1); } // 0x7563CBCA99253D1A b1207
	static Any _0x1726963E6049DB53() { return invoker::Invoke<Any>(0x1726963E6049DB53); } // 0x1726963E6049DB53 b1207
}

namespace MINIGAME
{
	static void _0x6480723D3BE535B6(Any p0) { invoker::Invoke<Void>(0x6480723D3BE535B6, p0); } // 0x6480723D3BE535B6 b1207
	static void _0x3DF7EE3A76185108() { invoker::Invoke<Void>(0x3DF7EE3A76185108); } // 0x3DF7EE3A76185108 b1207
	static Any _0xE1F365C4C8F259D8(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xE1F365C4C8F259D8, p0, p1, p2); } // 0xE1F365C4C8F259D8 b1207
	static Any _0xE53A308AC35877A8() { return invoker::Invoke<Any>(0xE53A308AC35877A8); } // 0xE53A308AC35877A8 b1207
	static Any _0x580F34C726387226(Any p0, Any p1) { return invoker::Invoke<Any>(0x580F34C726387226, p0, p1); } // 0x580F34C726387226 b1207
	static void _0x0876326238914A3F() { invoker::Invoke<Void>(0x0876326238914A3F); } // 0x0876326238914A3F b1207
	static Any _0x3FFE60DD8A936551() { return invoker::Invoke<Any>(0x3FFE60DD8A936551); } // 0x3FFE60DD8A936551 b1207
	static Any _0x18A0D48DF9211C07() { return invoker::Invoke<Any>(0x18A0D48DF9211C07); } // 0x18A0D48DF9211C07 b1207
	static Any _MINIGAME_IS_CONNECTED_TO_SERVER(Any p0) { return invoker::Invoke<Any>(0x2A0C4736AC5AF0CE, p0); } // 0x2A0C4736AC5AF0CE b1207
	static Any _0x39654E1F68B78287() { return invoker::Invoke<Any>(0x39654E1F68B78287); } // 0x39654E1F68B78287 b1207
	static Any _0x3EECAADAB0D9FE29() { return invoker::Invoke<Any>(0x3EECAADAB0D9FE29); } // 0x3EECAADAB0D9FE29 b1207
	static Any _0xD39D32EB3B52DD83() { return invoker::Invoke<Any>(0xD39D32EB3B52DD83); } // 0xD39D32EB3B52DD83 b1207
	static Any _0x8593A8CB0ED2C3B4() { return invoker::Invoke<Any>(0x8593A8CB0ED2C3B4); } // 0x8593A8CB0ED2C3B4 b1207
	static Any _0xF6AC6085D8D6C004() { return invoker::Invoke<Any>(0xF6AC6085D8D6C004); } // 0xF6AC6085D8D6C004 b1207
	static Any _MINIGAME_LEAVE_TABLE(Any p0) { return invoker::Invoke<Any>(0xF5446E47941E654C, p0); } // 0xF5446E47941E654C b1207
	static Any _MINIGAME_GET_NEXT_EVENT_TYPE() { return invoker::Invoke<Any>(0x578907F59BA01B6C); } // 0x578907F59BA01B6C b1207
	static Any _MINIGAME_GET_NEXT_EVENT(Any p0, Any p1) { return invoker::Invoke<Any>(0xDF728C5AE137FC13, p0, p1); } // 0xDF728C5AE137FC13 b1207
	static void _MINIGAME_POP_NEXT_EVENT() { invoker::Invoke<Void>(0x833E03BAEBADC4B0); } // 0x833E03BAEBADC4B0 b1207
	static Any _0x3B31732FADE5BAF3() { return invoker::Invoke<Any>(0x3B31732FADE5BAF3); } // 0x3B31732FADE5BAF3 b1207
	static Any _0x578907F59BA01B6D() { return invoker::Invoke<Any>(0x578907F59BA01B6D); } // 0x578907F59BA01B6D b1207
	static Any _0xDF728C5AE137FC14() { return invoker::Invoke<Any>(0xDF728C5AE137FC14); } // 0xDF728C5AE137FC14 b1207
	static Any _MINIGAME_IS_REQUEST_PENDING(Any p0) { return invoker::Invoke<Any>(0x9105A4A2556FA937, p0); } // 0x9105A4A2556FA937 b1207
	static Any _0x644439B5387EE57E(Any p0, Any p1) { return invoker::Invoke<Any>(0x644439B5387EE57E, p0, p1); } // 0x644439B5387EE57E b1207
	static Any _0x15E90B6A993017AA() { return invoker::Invoke<Any>(0x15E90B6A993017AA); } // 0x15E90B6A993017AA b1207
	static Any _0x10342CC82E8356E9() { return invoker::Invoke<Any>(0x10342CC82E8356E9); } // 0x10342CC82E8356E9 b1207
	static Any _0x32A7C216344D623B(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x32A7C216344D623B, p0, p1, p2); } // 0x32A7C216344D623B b1207
	static Any _0xEC819D612038EF4B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0xEC819D612038EF4B, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xEC819D612038EF4B b1207
	static Any _POKER_GET_GAME_SETTINGS_FOR_ID(Any p0) { return invoker::Invoke<Any>(0x2D20E12E1990D584, p0); } // 0x2D20E12E1990D584 b1207
	static Any _POKER_BUY_IN(Any p0, Any p1) { return invoker::Invoke<Any>(0xB4D610EA5A1FDE74, p0, p1); } // 0xB4D610EA5A1FDE74 b1207
	static Any _POKER_CALL(Any p0, Any p1) { return invoker::Invoke<Any>(0x8DED681B161EBD78, p0, p1); } // 0x8DED681B161EBD78 b1207
	static Any _POKER_CHECK(Any p0, Any p1) { return invoker::Invoke<Any>(0x49A045628D9B1B86, p0, p1); } // 0x49A045628D9B1B86 b1207
	static Any _POKER_FOLD(Any p0) { return invoker::Invoke<Any>(0x3DFAB7D9BB45B5BE, p0); } // 0x3DFAB7D9BB45B5BE b1207
	static Any _POKER_RAISE(Any p0, Any p1) { return invoker::Invoke<Any>(0xECCF45A79A17BB96, p0, p1); } // 0xECCF45A79A17BB96 b1207
	static Any _POKER_REVEAL(Any p0) { return invoker::Invoke<Any>(0x2F2131DB0A8B02DC, p0); } // 0x2F2131DB0A8B02DC b1207
	static void _0x58521E6DCDE97D74(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x58521E6DCDE97D74, p0, p1, p2); } // 0x58521E6DCDE97D74 b1207
	static void _0xF6DE98516FD3AC9B() { invoker::Invoke<Void>(0xF6DE98516FD3AC9B); } // 0xF6DE98516FD3AC9B b1207
	static Any _0x3F4FD4BED07AB8C4(Any p0) { return invoker::Invoke<Any>(0x3F4FD4BED07AB8C4, p0); } // 0x3F4FD4BED07AB8C4 b1207
	static Any _0x3AE451860F03CA8A(Any p0, Any p1) { return invoker::Invoke<Any>(0x3AE451860F03CA8A, p0, p1); } // 0x3AE451860F03CA8A b1207
	static Any _0x012027C28F421F46(Any p0, Any p1) { return invoker::Invoke<Any>(0x012027C28F421F46, p0, p1); } // 0x012027C28F421F46 b1207
	static void _0x455ECCA0715C507F() { invoker::Invoke<Void>(0x455ECCA0715C507F); } // 0x455ECCA0715C507F b1207
	static Any _DOMINOES_BUY_IN(Any p0) { return invoker::Invoke<Any>(0x399E6CD12FC8CA89, p0); } // 0x399E6CD12FC8CA89 b1207
	static Any _DOMINOES_PLACE_DOMINO(Any p0, Any p1) { return invoker::Invoke<Any>(0xB79A29B33BF29BA5, p0, p1); } // 0xB79A29B33BF29BA5 b1207
	static Any _DOMINOES_REQUEST_VALID_PLACEMENTS(Any p0) { return invoker::Invoke<Any>(0xE26AEE7E67D9E21D, p0); } // 0xE26AEE7E67D9E21D b1207
	static Any _0xA2DB3C6270C122E3() { return invoker::Invoke<Any>(0xA2DB3C6270C122E3); } // 0xA2DB3C6270C122E3 b1207
	static Any _0x398066F893149856() { return invoker::Invoke<Any>(0x398066F893149856); } // 0x398066F893149856 b1207
	static Any _0xBEA7D3CB47E1479C() { return invoker::Invoke<Any>(0xBEA7D3CB47E1479C); } // 0xBEA7D3CB47E1479C b1207
	static Any _0x910B088E51A511AC() { return invoker::Invoke<Any>(0x910B088E51A511AC); } // 0x910B088E51A511AC b1207
	static Any _0x9DD95B405AB4983E() { return invoker::Invoke<Any>(0x9DD95B405AB4983E); } // 0x9DD95B405AB4983E b1207
}

namespace MISC
{
	static Any GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(Any p0) { return invoker::Invoke<Any>(0x40DC2907A9697EF7, p0); } // 0x40DC2907A9697EF7 b1207
	static Any _0x72904D3D62AF5839() { return invoker::Invoke<Any>(0x72904D3D62AF5839); } // 0x72904D3D62AF5839 b1207
	static Any _0xC43CD2668B204419() { return invoker::Invoke<Any>(0xC43CD2668B204419); } // 0xC43CD2668B204419 b1207
	static Any _0x5FC9357C26DAEFCE() { return invoker::Invoke<Any>(0x5FC9357C26DAEFCE); } // 0x5FC9357C26DAEFCE b1207
	static void SET_RANDOM_SEED(Any p0) { invoker::Invoke<Void>(0x5CD7A49104AFCB6B, p0); } // 0x5CD7A49104AFCB6B b1207
	static void SET_TIME_SCALE(Any p0) { invoker::Invoke<Void>(0x9682AF6050854856, p0); } // 0x9682AF6050854856 b1207
	static void SET_MISSION_FLAG(Any p0) { invoker::Invoke<Void>(0x36694B456BE80D0A, p0); } // 0x36694B456BE80D0A b1207
	static Any GET_MISSION_FLAG() { return invoker::Invoke<Any>(0xB15CD1CF58771DE1); } // 0xB15CD1CF58771DE1 b1207
	static Any _0x5801BE2DF2AF07EC() { return invoker::Invoke<Any>(0x5801BE2DF2AF07EC); } // 0x5801BE2DF2AF07EC b1207
	static void SET_RANDOM_EVENT_FLAG(Any p0) { invoker::Invoke<Void>(0xB1ADCCC4150C6473, p0); } // 0xB1ADCCC4150C6473 b1207
	static Any GET_RANDOM_EVENT_FLAG() { return invoker::Invoke<Any>(0x924D54E5698AE3E0); } // 0x924D54E5698AE3E0 b1207
	static void _0x9BF2C0C568C61641(Any p0) { invoker::Invoke<Void>(0x9BF2C0C568C61641, p0); } // 0x9BF2C0C568C61641 b1207
	static void _0x4DCDF92BF64236CD(Any p0, Any p1) { invoker::Invoke<Void>(0xCC7FC854B956A128, p0, p1); } // 0xCC7FC854B956A128 b1207
	static void _0x31125FD509D9043F(Any p0) { invoker::Invoke<Void>(0x9935F76407C32539, p0); } // 0x9935F76407C32539 b1207
	static Any _0xFF252E2BAFB7330F() { return invoker::Invoke<Any>(0xFF252E2BAFB7330F); } // 0xFF252E2BAFB7330F b1207
	static void _0xEB078CA2B5E82ADD(Any p0, Any p1) { invoker::Invoke<Void>(0x91D657230BC208D2, p0, p1); } // 0x91D657230BC208D2 b1207
	static void _0x703CC7F60CBB2B57(Any p0) { invoker::Invoke<Void>(0x1694A053DFB61A34, p0); } // 0x1694A053DFB61A34 b1207
	static Any _0xAF530E56505D1BD6(Any p0) { return invoker::Invoke<Any>(0xAF530E56505D1BD6, p0); } // 0xAF530E56505D1BD6 b1207
	static void _0x8951EB9C6906D3C8() { invoker::Invoke<Void>(0xB16FC7B364D86585); } // 0xB16FC7B364D86585 b1207
	static Any _0xF81C53561D15F330() { return invoker::Invoke<Any>(0xF81C53561D15F330); } // 0xF81C53561D15F330 b1207
	static void _0x1096603B519C905F(Any p0) { invoker::Invoke<Void>(0x1096603B519C905F, p0); } // 0x1096603B519C905F b1207
	static void _0xCC3EDC5614B03F61(Any p0) { invoker::Invoke<Void>(0xCC3EDC5614B03F61, p0); } // 0xCC3EDC5614B03F61 b1207
	static Any _0x708DF841B8F27AA2() { return invoker::Invoke<Any>(0x708DF841B8F27AA2); } // 0x708DF841B8F27AA2 b1207
	static void _0xDA4D8EB04E8E2928(Any p0) { invoker::Invoke<Void>(0xDA4D8EB04E8E2928, p0); } // 0xDA4D8EB04E8E2928 b1207
	static void _0xB08C4FA25BC29DB9(Any p0) { invoker::Invoke<Void>(0xB08C4FA25BC29DB9, p0); } // 0xB08C4FA25BC29DB9 b1207
	static Any _0x4BEB42AEBCA732E9() { return invoker::Invoke<Any>(0x4BEB42AEBCA732E9); } // 0x4BEB42AEBCA732E9 b1207
	static Any _0x51021D36F62AAA83() { return invoker::Invoke<Any>(0x51021D36F62AAA83); } // 0x51021D36F62AAA83 b1207
	static void _0x0730E518486DEEC3(Any p0) { invoker::Invoke<Void>(0x0730E518486DEEC3, p0); } // 0x0730E518486DEEC3 b1207
	static void _0x59174F1AFE095B5A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x59174F1AFE095B5A, p0, p1, p2, p3, p4, p5); } // 0x59174F1AFE095B5A b1207
	static void _0x2C6A07AF9AEDABD8(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x2C6A07AF9AEDABD8, p0, p1, p2, p3, p4); } // 0x2C6A07AF9AEDABD8 b1207
	static Any _0x7F4CE164D9A11DFE() { return invoker::Invoke<Any>(0x7F4CE164D9A11DFE); } // 0x7F4CE164D9A11DFE b1207
	static Any _0x1359C181BC625503() { return invoker::Invoke<Any>(0x1359C181BC625503); } // 0x1359C181BC625503 b1207
	static void SET_RANDOM_WEATHER_TYPE(Any p0, Any p1) { invoker::Invoke<Void>(0x6E5A7FBEECAB3C72, p0, p1); } // 0x6E5A7FBEECAB3C72 b1207
	static void CLEAR_WEATHER_TYPE_PERSIST() { invoker::Invoke<Void>(0xD85DFE5C131E4AE9); } // 0xD85DFE5C131E4AE9 b1207
	static Any _0xCE7690C0A0D1C36D() { return invoker::Invoke<Any>(0xCE7690C0A0D1C36D); } // 0xCE7690C0A0D1C36D b1207
	static void _GET_WEATHER_TYPE_TRANSITION(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0AC679B2342F14F2, p0, p1, p2); } // 0x0AC679B2342F14F2 b1207
	static void _SET_WEATHER_TYPE_TRANSITION(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xFA3E3CA8A1DE6D5D, p0, p1, p2, p3); } // 0xFA3E3CA8A1DE6D5D b1207
	static void _0xD74ACDF7DB8114AF(Any p0) { invoker::Invoke<Void>(0xD74ACDF7DB8114AF, p0); } // 0xD74ACDF7DB8114AF b1207
	static void _0xDD560ABEF5D3784C(Any p0, Any p1) { invoker::Invoke<Void>(0xDD560ABEF5D3784C, p0, p1); } // 0xDD560ABEF5D3784C b1207
	static void _0x2916B30DC6C41179(Any p0) { invoker::Invoke<Void>(0x2916B30DC6C41179, p0); } // 0x2916B30DC6C41179 b1207
	static void _0xD3F943B88F55376A(Any p0) { invoker::Invoke<Void>(0xD3F943B88F55376A, p0); } // 0xD3F943B88F55376A b1207
	static void _0x243CEDE8F916B994() { invoker::Invoke<Void>(0x243CEDE8F916B994); } // 0x243CEDE8F916B994 b1207
	static Any _0xBE83CAE8ED77A94F() { return invoker::Invoke<Any>(0xBE83CAE8ED77A94F); } // 0xBE83CAE8ED77A94F b1207
	static void CLEAR_OVERRIDE_WEATHER() { invoker::Invoke<Void>(0x80A398F16FFE3CC3); } // 0x80A398F16FFE3CC3 b1207
	static void _0x3373779BAF7CAF48(Any p0, Any p1) { invoker::Invoke<Void>(0x3373779BAF7CAF48, p0, p1); } // 0x3373779BAF7CAF48 b1207
	static void _0x0E71C80FA4EC8147(Any p0) { invoker::Invoke<Void>(0x0E71C80FA4EC8147, p0); } // 0x0E71C80FA4EC8147 b1207
	static void _0xB8F87EAD7533B176(Any p0) { invoker::Invoke<Void>(0x55123D5A7D9D3C42, p0); } // 0x55123D5A7D9D3C42 b1207
	static void _0xB3E6360DDE733E82(Any p0) { invoker::Invoke<Void>(0xF06C5B66DE20B2B8, p0); } // 0xF06C5B66DE20B2B8 b1207
	static Any _0xB98B78C3768AF6E0(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xB98B78C3768AF6E0, p0, p1, p2); } // 0xB98B78C3768AF6E0 b1207
	static void SET_WIND_SPEED(Any p0) { invoker::Invoke<Void>(0xD00C2D82DC04A99F, p0); } // 0xD00C2D82DC04A99F b1207
	static Any GET_WIND_SPEED() { return invoker::Invoke<Any>(0xFFB7E74E041150A4); } // 0xFFB7E74E041150A4 b1207
	static void SET_WIND_DIRECTION(Any p0) { invoker::Invoke<Void>(0xB56C4F5F57A45600, p0); } // 0xB56C4F5F57A45600 b1207
	static Any GET_WIND_DIRECTION() { return invoker::Invoke<Any>(0xF703E82F3FE14A5F); } // 0xF703E82F3FE14A5F b1207
	static void _SET_RAIN_FX_INTENSITY(Any p0) { invoker::Invoke<Void>(0x193DFC0526830FD6, p0); } // 0x193DFC0526830FD6 b1207
	static Any GET_RAIN_LEVEL() { return invoker::Invoke<Any>(0x931B5F4CC130224B); } // 0x931B5F4CC130224B b1207
	static void _0x745808BB01CEC6B9(Any p0) { invoker::Invoke<Void>(0x745808BB01CEC6B9, p0); } // 0x745808BB01CEC6B9 b1207
	static void _0xF6BEE7E80EC5CA40(Any p0) { invoker::Invoke<Void>(0xF6BEE7E80EC5CA40, p0); } // 0xF6BEE7E80EC5CA40 b1207
	static Any GET_SNOW_LEVEL() { return invoker::Invoke<Any>(0x1E5D727041BE1709); } // 0x1E5D727041BE1709 b1207
	static void FORCE_LIGHTNING_FLASH() { invoker::Invoke<Void>(0x369DB5B2510FA080); } // 0x369DB5B2510FA080 b1207
	static void _0x67943537D179597C(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x67943537D179597C, p0, p1, p2); } // 0x67943537D179597C b1207
	static void _0xA9342743B634A462(Any p0) { invoker::Invoke<Void>(0xA9342743B634A462, p0); } // 0xA9342743B634A462 b1207
	static Any GET_GAME_TIMER() { return invoker::Invoke<Any>(0x4F67E8ECA7D3F667); } // 0x4F67E8ECA7D3F667 b1207
	static Any _0x483B8C542103AD72() { return invoker::Invoke<Any>(0x483B8C542103AD72); } // 0x483B8C542103AD72 b1207
	static Any _GET_SYSTEM_TIME() { return invoker::Invoke<Any>(0xBE7F225417E35A7C); } // 0xBE7F225417E35A7C b1207
	static Any _GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL() { return invoker::Invoke<Any>(0xB0CE5E5ED8BB3581); } // 0xB0CE5E5ED8BB3581 b1207
	static Any _GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS() { return invoker::Invoke<Any>(0x63219768C586667C); } // 0x63219768C586667C b1207
	static void _RESET_SCRIPT_TIME_WITHIN_FRAME() { invoker::Invoke<Void>(0x1411A7CBC3A6EB7B); } // 0x1411A7CBC3A6EB7B b1207
	static Any GET_FRAME_TIME() { return invoker::Invoke<Any>(0x5E72022914CE3C38); } // 0x5E72022914CE3C38 b1207
	static Any _0x3F3172FEAE3AFE1C() { return invoker::Invoke<Any>(0x3F3172FEAE3AFE1C); } // 0x3F3172FEAE3AFE1C b1207
	static Any GET_FRAME_COUNT() { return invoker::Invoke<Any>(0x77DFA958FCF100C1); } // 0x77DFA958FCF100C1 b1207
	static Any _0x6BED40493A1AFDB8() { return invoker::Invoke<Any>(0x6BED40493A1AFDB8); } // 0x6BED40493A1AFDB8 b1207
	static Any _0xD2C9126410DFA1B2() { return invoker::Invoke<Any>(0xD2C9126410DFA1B2); } // 0xD2C9126410DFA1B2 b1207
	static Any GET_RANDOM_FLOAT_IN_RANGE(Any p0, Any p1) { return invoker::Invoke<Any>(0xE29F927A961F8AAA, p0, p1); } // 0xE29F927A961F8AAA b1207
	static Any GET_RANDOM_INT_IN_RANGE(Any p0, Any p1) { return invoker::Invoke<Any>(0xD53343AA4FB7DD28, p0, p1); } // 0xD53343AA4FB7DD28 b1207
	static Any GET_GROUND_Z_FOR_3D_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x24FA4267BB8D2431, p0, p1, p2, p3, p4); } // 0x24FA4267BB8D2431 b1207
	static Any GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x2A29CA9A6319E6AB, p0, p1, p2, p3, p4); } // 0x2A29CA9A6319E6AB b1207
	static Any _0xBBE5B63EFFB08E68(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xBBE5B63EFFB08E68, p0, p1, p2, p3, p4, p5, p6); } // 0xBBE5B63EFFB08E68 b1207
	static Any ASIN(Any p0) { return invoker::Invoke<Any>(0x6E3C15D296C15583, p0); } // 0x6E3C15D296C15583 b1207
	static Any ACOS(Any p0) { return invoker::Invoke<Any>(0x586690F0176DC575, p0); } // 0x586690F0176DC575 b1207
	static Any TAN(Any p0) { return invoker::Invoke<Any>(0x8C13DB96497B7ABF, p0); } // 0x8C13DB96497B7ABF b1207
	static Any ATAN(Any p0) { return invoker::Invoke<Any>(0x503054DED0B78027, p0); } // 0x503054DED0B78027 b1207
	static Any ATAN2(Any p0, Any p1) { return invoker::Invoke<Any>(0x965B220A066E3F07, p0, p1); } // 0x965B220A066E3F07 b1207
	static Any GET_DISTANCE_BETWEEN_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x0BE7F4E3CDBAFB28, p0, p1, p2, p3, p4, p5, p6); } // 0x0BE7F4E3CDBAFB28 b1207
	static Any GET_ANGLE_BETWEEN_2D_VECTORS(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xD0DFE1C486097BBB, p0, p1, p2, p3); } // 0xD0DFE1C486097BBB b1207
	static Any GET_HEADING_FROM_VECTOR_2D(Any p0, Any p1) { return invoker::Invoke<Any>(0x38D5202FF9271C62, p0, p1); } // 0x38D5202FF9271C62 b1207
	static Any _0x21C235BC64831E5A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x83ACC65D9ACEC5EF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x83ACC65D9ACEC5EF b1207
	static Any _0xF56DFB7B61BE7276(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoker::Invoke<Any>(0xAB6A04CEC428258B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xAB6A04CEC428258B b1207
	static void SET_BIT(Any p0, Any p1) { invoker::Invoke<Void>(0xF73FBE4845C43B5B, p0, p1); } // 0xF73FBE4845C43B5B b1207
	static void CLEAR_BIT(Any p0, Any p1) { invoker::Invoke<Void>(0x7D1D4A3602B6AD4E, p0, p1); } // 0x7D1D4A3602B6AD4E b1207
	static Any _0x8F4F050054005C27(Any p0, Any p1) { return invoker::Invoke<Any>(0x8F4F050054005C27, p0, p1); } // 0x8F4F050054005C27 b1207
	static Any _0x80E9C316EF84DD81() { return invoker::Invoke<Any>(0x80E9C316EF84DD81); } // 0x80E9C316EF84DD81 b1207
	static void _0xE84AAC1B22A73E99(Any p0, Any p1) { invoker::Invoke<Void>(0xE84AAC1B22A73E99, p0, p1); } // 0xE84AAC1B22A73E99 b1207
	static void _0xB909149F2BB5F6DA(Any p0, Any p1) { invoker::Invoke<Void>(0xB909149F2BB5F6DA, p0, p1); } // 0xB909149F2BB5F6DA b1207
	static Any _0xD2D74F89DF844A50() { return invoker::Invoke<Any>(0xD2D74F89DF844A50); } // 0xD2D74F89DF844A50 b1207
	static Hash GET_HASH_KEY(const char* key) { return invoker::Invoke<Any>(0xFD340785ADF8CFB7, key); } // 0xFD340785ADF8CFB7 b1207
	static Any _0xEF50E344A8F93784(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xEF50E344A8F93784, p0, p1, p2, p3); } // 0xEF50E344A8F93784 b1207
	static Any IS_POSITION_OCCUPIED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0x825CA3ED43831015, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x825CA3ED43831015 b1207
	static void CLEAR_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x3B882A96EA77D5B1, p0, p1, p2, p3, p4); } // 0x3B882A96EA77D5B1 b1207
	static void _0x2FCD528A397E5C88(Any p0, Any p1) { invoker::Invoke<Void>(0x2FCD528A397E5C88, p0, p1); } // 0x2FCD528A397E5C88 b1207
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xA4D83115C1E02F8A, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA4D83115C1E02F8A b1207
	static void SET_CREDITS_ACTIVE(Any p0) { invoker::Invoke<Void>(0xD37BECF862DA726F, p0); } // 0xD37BECF862DA726F b1207
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoker::Invoke<Void>(0x3D0EAC6385DD6100); } // 0x3D0EAC6385DD6100 b1207
	static void PAUSE_DEATH_ARREST_RESTART(Any p0) { invoker::Invoke<Void>(0x66AB6B6C7E72F393, p0); } // 0x66AB6B6C7E72F393 b1207
	static void IGNORE_NEXT_RESTART(Any p0) { invoker::Invoke<Void>(0x6C9FF40FF1B69F8F, p0); } // 0x6C9FF40FF1B69F8F b1207
	static void SET_FADE_IN_AFTER_DEATH_ARREST(Any p0) { invoker::Invoke<Void>(0xDF3B5846DE5904AF, p0); } // 0xDF3B5846DE5904AF b1207
	static void SET_FADE_IN_AFTER_LOAD(Any p0) { invoker::Invoke<Void>(0xAC806C4CAB973517, p0); } // 0xAC806C4CAB973517 b1207
	static Any OVERRIDE_SAVE_HOUSE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0xB2C69E11A37B5AF0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB2C69E11A37B5AF0 b1207
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoker::Invoke<Void>(0x867654CBC7606F2C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0x867654CBC7606F2C b1207
	static void _0xCBC9A21F6A2A679C(Any p0) { invoker::Invoke<Void>(0xCBC9A21F6A2A679C, p0); } // 0xCBC9A21F6A2A679C b1207
	static void GET_MODEL_DIMENSIONS(Hash model, Vector3* min, Vector3* max) { invoker::Invoke<Void>(0xDCB8DDD5D054A7E7, model, min, max); } // 0xDCB8DDD5D054A7E7 b1207
	static Any IS_BIT_SET(Any p0, Any p1) { return invoker::Invoke<Any>(0x4ED6CFDFE8D4131A, p0, p1); } // 0x4ED6CFDFE8D4131A b1207
	static Any _0x0A487CC74A517FB5() { return invoker::Invoke<Any>(0x0A487CC74A517FB5); } // 0x0A487CC74A517FB5 b1207
	static Any IS_MINIGAME_IN_PROGRESS() { return invoker::Invoke<Any>(0xF4D8BCD052E7EA1B); } // 0xF4D8BCD052E7EA1B b1207
	static Any _0x4FB556ACEFA93098() { return invoker::Invoke<Any>(0x4FB556ACEFA93098); } // 0x4FB556ACEFA93098 b1207
	static Any _0x58BCDC75BA52110A() { return invoker::Invoke<Any>(0x58BCDC75BA52110A); } // 0x58BCDC75BA52110A b1207
	static Any _0xFF4AAF3275BAAB4F() { return invoker::Invoke<Any>(0xFF4AAF3275BAAB4F); } // 0xFF4AAF3275BAAB4F b1207
	static Any _0x8F24157FEDB85EA2() { return invoker::Invoke<Any>(0x8F24157FEDB85EA2); } // 0x8F24157FEDB85EA2 b1207
	static Any _0x0177CF20345F44DD() { return invoker::Invoke<Any>(0x0177CF20345F44DD); } // 0x0177CF20345F44DD b1207
	static Any COMPARE_STRINGS(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xBFBB74A15EFC149B, p0, p1, p2, p3); } // 0xBFBB74A15EFC149B b1207
	static Any ABSI(Any p0) { return invoker::Invoke<Any>(0x0C214D5B8A38C828, p0); } // 0x0C214D5B8A38C828 b1207
	static Any ABSF(Any p0) { return invoker::Invoke<Any>(0x134549B388167CBF, p0); } // 0x134549B388167CBF b1207
	static Any IS_PROJECTILE_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x05B0061EFDFC8941, p0, p1, p2, p3, p4, p5, p6); } // 0x05B0061EFDFC8941 b1207
	static Any IS_PROJECTILE_TYPE_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x04965FB9E14235C7, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x04965FB9E14235C7 b1207
	static Any IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x928431F4133CD3D4, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x928431F4133CD3D4 b1207
	static Any _IS_PROJECTILE_TYPE_IN_RADIUS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xF51C9BAAD9ED64C4, p0, p1, p2, p3, p4, p5); } // 0xF51C9BAAD9ED64C4 b1207
	static Any _GET_PROJECTILE_NEAR_PED_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xD73C960A681052DF, p0, p1, p2, p3, p4, p5); } // 0xD73C960A681052DF b1207
	static Any _GET_PROJECTILE_NEAR_PED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x9578986A6105A6AD, p0, p1, p2, p3, p4, p5, p6); } // 0x9578986A6105A6AD b1207
	static Any IS_BULLET_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x9D09D8493747CF02, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x9D09D8493747CF02 b1207
	static Any IS_BULLET_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xC652FD308772D79E, p0, p1, p2, p3, p4); } // 0xC652FD308772D79E b1207
	static Any IS_BULLET_IN_BOX(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xC128137C52152741, p0, p1, p2, p3, p4, p5, p6); } // 0xC128137C52152741 b1207
	static Any HAS_BULLET_IMPACTED_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xC153E5BCCF411814, p0, p1, p2, p3, p4, p5); } // 0xC153E5BCCF411814 b1207
	static Any HAS_BULLET_IMPACTED_IN_BOX(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x3B6A4C05FB2B33AC, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x3B6A4C05FB2B33AC b1207
	static Any _0x7A76104CC2CC69E8(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x7A76104CC2CC69E8, p0, p1, p2); } // 0x7A76104CC2CC69E8 b1207
	static Any _0xDC416CA762BC4F43(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xDC416CA762BC4F43, p0, p1, p2, p3, p4, p5); } // 0xDC416CA762BC4F43 b1207
	static Any _0x970339EFA4FDE518(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x970339EFA4FDE518, p0, p1, p2); } // 0x970339EFA4FDE518 b1207
	static Any IS_ORBIS_VERSION() { return invoker::Invoke<Any>(0x88CFAE250D3E0C71); } // 0x88CFAE250D3E0C71 b1207
	static Any IS_DURANGO_VERSION() { return invoker::Invoke<Any>(0xD1CCC2A2639D325F); } // 0xD1CCC2A2639D325F b1207
	static Any IS_PC_VERSION() { return invoker::Invoke<Any>(0xB0FB6CFAA5A1C833); } // 0xB0FB6CFAA5A1C833 b1207
	static Any _0x268AB8420A9E4ED7() { return invoker::Invoke<Any>(0x268AB8420A9E4ED7); } // 0x268AB8420A9E4ED7 b1207
	static Any IS_STRING_NULL(Any p0) { return invoker::Invoke<Any>(0x602102324604D96B, p0); } // 0x602102324604D96B b1207
	static Any IS_STRING_NULL_OR_EMPTY(Any p0) { return invoker::Invoke<Any>(0x2CF12F9ACF18F048, p0); } // 0x2CF12F9ACF18F048 b1207
	static Any _0x375F5870A7B8BEC1(Any p0) { return invoker::Invoke<Any>(0x375F5870A7B8BEC1, p0); } // 0x375F5870A7B8BEC1 b1207
	static Any ARE_STRINGS_EQUAL(Any p0, Any p1) { return invoker::Invoke<Any>(0xD3852F22AB713A1F, p0, p1); } // 0xD3852F22AB713A1F b1207
	static Any _DOES_STRING_EXIST_IN_STRING(Any p0, Any p1) { return invoker::Invoke<Any>(0x9382D5D43D2AA6FF, p0, p1); } // 0x9382D5D43D2AA6FF b1207
	static void _0x3C3C7B1B5EC08764() { invoker::Invoke<Void>(0x3C3C7B1B5EC08764); } // 0x3C3C7B1B5EC08764 b1207
	static Any _0x94E8CA3DEE952789(Any p0, Any p1) { return invoker::Invoke<Any>(0x94E8CA3DEE952789, p0, p1); } // 0x94E8CA3DEE952789 b1207
	static Any _0x5B4A8121A47D844D(Any p0) { return invoker::Invoke<Any>(0x5B4A8121A47D844D, p0); } // 0x5B4A8121A47D844D b1207
	static Any _0xF2DD2298B3AF23E2() { return invoker::Invoke<Any>(0xF2DD2298B3AF23E2); } // 0xF2DD2298B3AF23E2 b1207
	static void _STRING_FORMAT_INT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCF11C0CEB40C401B, p0, p1, p2); } // 0xCF11C0CEB40C401B b1207
	static Any _0x74ACA66484CEBAF0() { return invoker::Invoke<Any>(0x74ACA66484CEBAF0); } // 0x74ACA66484CEBAF0 b1207
	static void _0x49C44FE78A135A1D(Any p0) { invoker::Invoke<Void>(0x49C44FE78A135A1D, p0); } // 0x49C44FE78A135A1D b1207
	static Any _0x2B6846401D68E563(Any p0, Any p1) { return invoker::Invoke<Any>(0x2B6846401D68E563, p0, p1); } // 0x2B6846401D68E563 b1207
	static Any _0x6C4DBF553885F9EB() { return invoker::Invoke<Any>(0x6C4DBF553885F9EB); } // 0x6C4DBF553885F9EB b1207
	static Any _0xF216F74101968DB0() { return invoker::Invoke<Any>(0xF216F74101968DB0); } // 0xF216F74101968DB0 b1207
	static Any _CREATE_VAR_STRING(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xFA925AC00EB830B9, p0, p1, p2); } // 0xFA925AC00EB830B9 b1207
	static Any _0xBCC2CFADEA1AEA6C(Any p0) { return invoker::Invoke<Any>(0xBCC2CFADEA1AEA6C, p0); } // 0xBCC2CFADEA1AEA6C b1207
	static void SET_BITS_IN_RANGE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x324DC1CEF57F31E6, p0, p1, p2, p3); } // 0x324DC1CEF57F31E6 b1207
	static Any GET_BITS_IN_RANGE(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x68E1352AF48F905D, p0, p1, p2); } // 0x68E1352AF48F905D b1207
	static void SET_GAME_PAUSED(Any p0) { invoker::Invoke<Void>(0xFAEC088D28B1DE4A, p0); } // 0xFAEC088D28B1DE4A b1207
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(Any p0) { invoker::Invoke<Void>(0x3215376E79F6EA18, p0); } // 0x3215376E79F6EA18 b1207
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(Any p0) { invoker::Invoke<Void>(0x8ABD939C2E5D00ED, p0); } // 0x8ABD939C2E5D00ED b1207
	static void _0xD4958E8CF0DE0DD0(Any p0) { invoker::Invoke<Void>(0xD4958E8CF0DE0DD0, p0); } // 0xD4958E8CF0DE0DD0 b1207
	static Any _0xB711EB4BC8D06013() { return invoker::Invoke<Any>(0xB711EB4BC8D06013); } // 0xB711EB4BC8D06013 b1207
	static Any _0xEA6DC3A8ADD2005F() { return invoker::Invoke<Any>(0xEA6DC3A8ADD2005F); } // 0xEA6DC3A8ADD2005F b1207
	static Any _0xF9E7DBB39080640B() { return invoker::Invoke<Any>(0xF9E7DBB39080640B); } // 0xF9E7DBB39080640B b1207
	static Any _0x279B0696DA4657EB(Any p0) { return invoker::Invoke<Any>(0x279B0696DA4657EB, p0); } // 0x279B0696DA4657EB b1207
	static Any _0x1B065A2BF7953815(Any p0) { return invoker::Invoke<Any>(0x1B065A2BF7953815, p0); } // 0x1B065A2BF7953815 b1207
	static Any _0x6C7B68D3CE60E8DE(Any p0) { return invoker::Invoke<Any>(0x6C7B68D3CE60E8DE, p0); } // 0x6C7B68D3CE60E8DE b1207
	static Any _0x627B68D9CE6EE8DE(Any p0) { return invoker::Invoke<Any>(0x627B68D9CE6EE8DE, p0); } // 0x627B68D9CE6EE8DE b1207
	static Any _0x7CF96F1250EF3221(Any p0) { return invoker::Invoke<Any>(0x7CF96F1250EF3221, p0); } // 0x7CF96F1250EF3221 b1207
	static void _COPY_MEMORY(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF7AC7DC0DEE7C9BE, p0, p1, p2); } // 0xF7AC7DC0DEE7C9BE b1207
	static void ENABLE_DISPATCH_SERVICE(Any p0, Any p1) { invoker::Invoke<Void>(0x50E52637EF70EF77, p0, p1); } // 0x50E52637EF70EF77 b1207
	static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(Any p0, Any p1) { invoker::Invoke<Void>(0x66947E61A44DE2C6, p0, p1); } // 0x66947E61A44DE2C6 b1207
	static Any CREATE_INCIDENT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x3F892CAF67444AE7, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x3F892CAF67444AE7 b1207
	static Any _0xAB3D3F45436DB1D8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xAB3D3F45436DB1D8, p0, p1, p2, p3, p4, p5, p6); } // 0xAB3D3F45436DB1D8 b1207
	static void DELETE_INCIDENT(Any p0) { invoker::Invoke<Void>(0x5CFD0F0D6AAE0AEE, p0); } // 0x5CFD0F0D6AAE0AEE b1207
	static Any IS_INCIDENT_VALID(Any p0) { return invoker::Invoke<Any>(0x39F2B1BAD412246A, p0); } // 0x39F2B1BAD412246A b1207
	static void _0x9617B6E5F6537B63(Any p0) { invoker::Invoke<Void>(0x9617B6E5F6537B63, p0); } // 0x9617B6E5F6537B63 b1207
	static Any _0x5EBDA1A3B8CB5EF7() { return invoker::Invoke<Any>(0x5EBDA1A3B8CB5EF7); } // 0x5EBDA1A3B8CB5EF7 b1207
	static Any _0x03BA619C81A646B3() { return invoker::Invoke<Any>(0x03BA619C81A646B3); } // 0x03BA619C81A646B3 b1207
	static Any _0x88CB484364EFB37A() { return invoker::Invoke<Any>(0x88CB484364EFB37A); } // 0x88CB484364EFB37A b1207
	static Any _0x3233C4EC0514C7EC() { return invoker::Invoke<Any>(0x3233C4EC0514C7EC); } // 0x3233C4EC0514C7EC b1207
	static Any _0x39D6DACE323A20B6() { return invoker::Invoke<Any>(0x39D6DACE323A20B6); } // 0x39D6DACE323A20B6 b1207
	static Any _0xBD090F5B1DB82189() { return invoker::Invoke<Any>(0xBD090F5B1DB82189); } // 0xBD090F5B1DB82189 b1207
	static void _0xF569E33FB72ED28E() { invoker::Invoke<Void>(0xF569E33FB72ED28E); } // 0xF569E33FB72ED28E b1207
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoker::Invoke<Void>(0xC7817264BC4B6377); } // 0xC7817264BC4B6377 b1207
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(Any p0) { invoker::Invoke<Void>(0xEAB6823B82FBD283, p0); } // 0xEAB6823B82FBD283 b1207
	static void _0x96498D922D8D0D0A() { invoker::Invoke<Void>(0x96498D922D8D0D0A); } // 0x96498D922D8D0D0A b1207
	static void _0x27A1B170AA8AF84C(Any p0) { invoker::Invoke<Void>(0x27A1B170AA8AF84C, p0); } // 0x27A1B170AA8AF84C b1207
	static void _0x54EC7B6BC72BAD69() { invoker::Invoke<Void>(0x54EC7B6BC72BAD69); } // 0x54EC7B6BC72BAD69 b1207
	static void _0x89314FB3463E28DE(Any p0) { invoker::Invoke<Void>(0x89314FB3463E28DE, p0); } // 0x89314FB3463E28DE b1207
	static void _0x4B0501A468B749F8() { invoker::Invoke<Void>(0x4B0501A468B749F8); } // 0x4B0501A468B749F8 b1207
	static void _0x6BCF7B5CD338281A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x6BCF7B5CD338281A, p0, p1, p2); } // 0x6BCF7B5CD338281A b1207
	static Any _0xA2D5A26208421426() { return invoker::Invoke<Any>(0xA2D5A26208421426); } // 0xA2D5A26208421426 b1207
	static Any _0x49F751F6868DDC5B() { return invoker::Invoke<Any>(0x49F751F6868DDC5B); } // 0x49F751F6868DDC5B b1207
	static void _0xD9F692D349249528() { invoker::Invoke<Void>(0xEF42F56F69877125); } // 0xEF42F56F69877125 b1207
	static void _0xB8721407EE9C3FF6(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xE4EE55E63FA9AF45, p0, p1, p2, p3); } // 0xE4EE55E63FA9AF45 b1207
	static void _0xB3CD58CCA6CDA852() { invoker::Invoke<Void>(0xD93B6516C6878267); } // 0xD93B6516C6878267 b1207
	static void DISPLAY_ONSCREEN_KEYBOARD(int p0, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength) { invoker::Invoke<Void>(0x044131118D8DB3CD, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); } // 0x044131118D8DB3CD b1207
	static Any UPDATE_ONSCREEN_KEYBOARD() { return invoker::Invoke<Any>(0x37DF360F235A3893); } // 0x37DF360F235A3893 b1207
	static const char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoker::Invoke<const char*>(0xAFB4CF58A4A292B1); } // 0xAFB4CF58A4A292B1 b1207
	static Any _0x58A39BE597CE99CD() { return invoker::Invoke<Any>(0x58A39BE597CE99CD); } // 0x58A39BE597CE99CD b1207
	static Any _0x5CB71EAA1429A358() { return invoker::Invoke<Any>(0x5CB71EAA1429A358); } // 0x5CB71EAA1429A358 b1207
	static void _REMOVE_STEALTH_KILL(Any p0, Any p1) { invoker::Invoke<Void>(0x7ACF124C12A2B045, p0, p1); } // 0x7ACF124C12A2B045 b1207
	static Any _0xFD0759658268FD8E(Any p0) { return invoker::Invoke<Any>(0xFD0759658268FD8E, p0); } // 0xFD0759658268FD8E b1207
	static Any _0x2E036F0480B8BF02() { return invoker::Invoke<Any>(0x2E036F0480B8BF02); } // 0x2E036F0480B8BF02 b1207
	static Any _0xB3E9BE963F10C445() { return invoker::Invoke<Any>(0xB3E9BE963F10C445); } // 0xB3E9BE963F10C445 b1207
	static Any _0x8AE059F47158417E() { return invoker::Invoke<Any>(0x8AE059F47158417E); } // 0x8AE059F47158417E b1207
	static Any _0x334CE0DA4FAF330C() { return invoker::Invoke<Any>(0x334CE0DA4FAF330C); } // 0x334CE0DA4FAF330C b1207
	static Any _0xBA62B4D80FA66BD6() { return invoker::Invoke<Any>(0xBA62B4D80FA66BD6); } // 0xBA62B4D80FA66BD6 b1207
	static Any _0x769E848C66E3C2BB() { return invoker::Invoke<Any>(0x769E848C66E3C2BB); } // 0x769E848C66E3C2BB b1207
	static Any _0x29D1F6DF864A094E() { return invoker::Invoke<Any>(0x29D1F6DF864A094E); } // 0x29D1F6DF864A094E b1207
	static Any _0xB89AEC71AFF2B599() { return invoker::Invoke<Any>(0xB89AEC71AFF2B599); } // 0xB89AEC71AFF2B599 b1207
	static Any _0xECBABD0307FB216F() { return invoker::Invoke<Any>(0xECBABD0307FB216F); } // 0xECBABD0307FB216F b1207
	static Any _0xF4743E2ECC02B3DA() { return invoker::Invoke<Any>(0xF4743E2ECC02B3DA); } // 0xF4743E2ECC02B3DA b1207
	static Any _0x4FFA0386A6216113() { return invoker::Invoke<Any>(0x4FFA0386A6216113); } // 0x4FFA0386A6216113 b1207
	static Any _0x22FC52CF470CC98D() { return invoker::Invoke<Any>(0x22FC52CF470CC98D); } // 0x22FC52CF470CC98D b1207
	static Any _0x9297DACF3A2CDFF7() { return invoker::Invoke<Any>(0x9297DACF3A2CDFF7); } // 0x9297DACF3A2CDFF7 b1207
	static Any _0xDC057B86FC157031() { return invoker::Invoke<Any>(0xDC057B86FC157031); } // 0xDC057B86FC157031 b1207
	static Any _0x9A252AA23D7098F2() { return invoker::Invoke<Any>(0x9A252AA23D7098F2); } // 0x9A252AA23D7098F2 b1207
	static Any _0xBDC6E364C9C78178(Any p0) { return invoker::Invoke<Any>(0xBDC6E364C9C78178, p0); } // 0xBDC6E364C9C78178 b1207
	static Any _0xDC8D2FF478DF9553(Any p0) { return invoker::Invoke<Any>(0xDC8D2FF478DF9553, p0); } // 0xDC8D2FF478DF9553 b1207
	static Any _0x716F17F8A0419F95(Any p0) { return invoker::Invoke<Any>(0x716F17F8A0419F95, p0); } // 0x716F17F8A0419F95 b1207
	static Any _0xFEC1D4B5C82C176F(Any p0) { return invoker::Invoke<Any>(0xFEC1D4B5C82C176F, p0); } // 0xFEC1D4B5C82C176F b1207
	static void _0x553D67295DDD2309(Any p0) { invoker::Invoke<Void>(0x553D67295DDD2309, p0); } // 0x553D67295DDD2309 b1207
	static Any _0xF18AF483DF70BBDE() { return invoker::Invoke<Any>(0xF18AF483DF70BBDE); } // 0xF18AF483DF70BBDE b1207
	static Any _0xEE04C0AFD4EFAF0E(Any p0) { return invoker::Invoke<Any>(0xEE04C0AFD4EFAF0E, p0); } // 0xEE04C0AFD4EFAF0E b1207
	static Any _0x3FFB15534067DCD4(Any p0) { return invoker::Invoke<Any>(0x3FFB15534067DCD4, p0); } // 0x3FFB15534067DCD4 b1207
	static Any _0xE578C8AE173719B3(Any p0) { return invoker::Invoke<Any>(0xE578C8AE173719B3, p0); } // 0xE578C8AE173719B3 b1207
	static Any _0x18013392501CE5DC(Any p0) { return invoker::Invoke<Any>(0x18013392501CE5DC, p0); } // 0x18013392501CE5DC b1207
	static Any _0x33982467B1E349EF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x33982467B1E349EF, p0, p1, p2, p3, p4, p5, p6); } // 0x33982467B1E349EF b1207
	static Any _0x8314FC2013ECE2DA(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x8314FC2013ECE2DA, p0, p1, p2); } // 0x8314FC2013ECE2DA b1207
	static void _0x4D5C9CC7E7E23E09() { invoker::Invoke<Void>(0x4D5C9CC7E7E23E09); } // 0x4D5C9CC7E7E23E09 b1207
	static Any _0x870708A6E147A9AD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x870708A6E147A9AD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x870708A6E147A9AD b1207
	static Any _0xE98D55C5983F2509(Any p0) { return invoker::Invoke<Any>(0xE98D55C5983F2509, p0); } // 0xE98D55C5983F2509 b1207
	static void _0xFC6ECB9170145ECE() { invoker::Invoke<Void>(0xFC6ECB9170145ECE); } // 0xFC6ECB9170145ECE b1207
	static Any _0x35165C658077CD0B() { return invoker::Invoke<Any>(0x35165C658077CD0B); } // 0x35165C658077CD0B b1207
	static Any _0x4B101DBCC9482F2D(Any p0) { return invoker::Invoke<Any>(0x4B101DBCC9482F2D, p0); } // 0x4B101DBCC9482F2D b1207
	static Any _0xF236C84C6ADFCB2F() { return invoker::Invoke<Any>(0xF236C84C6ADFCB2F); } // 0xF236C84C6ADFCB2F b1207
	static void _0xA3A8926951471C82() { invoker::Invoke<Void>(0xA3A8926951471C82); } // 0xA3A8926951471C82 b1207
	static void _0x88BC5F4AEF77FC4E(Any p0, Any p1) { invoker::Invoke<Void>(0x88BC5F4AEF77FC4E, p0, p1); } // 0x88BC5F4AEF77FC4E b1207
	static Any _0xFDF38E2B711BF78E(Any p0, Any p1) { return invoker::Invoke<Any>(0xFDF38E2B711BF78E, p0, p1); } // 0xFDF38E2B711BF78E b1207
	static void _0xEB946B9E579729AD(Any p0, Any p1) { invoker::Invoke<Void>(0xEB946B9E579729AD, p0, p1); } // 0xEB946B9E579729AD b1207
	static void _0x6AC4AF46A6B8DFB2(Any p0) { invoker::Invoke<Void>(0x6AC4AF46A6B8DFB2, p0); } // 0x6AC4AF46A6B8DFB2 b1207
	static Any _0x8DB104CCEBCD58C5(Any p0, Any p1) { return invoker::Invoke<Any>(0x8DB104CCEBCD58C5, p0, p1); } // 0x8DB104CCEBCD58C5 b1207
	static void _0x68319452C5064ABA(Any p0, Any p1) { invoker::Invoke<Void>(0x68319452C5064ABA, p0, p1); } // 0x68319452C5064ABA b1207
	static void _0xDE2C3B74D2B3705C(Any p0, Any p1) { invoker::Invoke<Void>(0xDE2C3B74D2B3705C, p0, p1); } // 0xDE2C3B74D2B3705C b1207
	static void _0x49F3241C28EBBFBC(Any p0) { invoker::Invoke<Void>(0x49F3241C28EBBFBC, p0); } // 0x49F3241C28EBBFBC b1207
	static void _0x183672FE838A661B(Any p0) { invoker::Invoke<Void>(0x183672FE838A661B, p0); } // 0x183672FE838A661B b1207
	static void _0x38C0C9CAE1544500(Any p0) { invoker::Invoke<Void>(0x38C0C9CAE1544500, p0); } // 0x38C0C9CAE1544500 b1207
	static void _0x154340E87D8CC178(Any p0) { invoker::Invoke<Void>(0x154340E87D8CC178, p0); } // 0x154340E87D8CC178 b1207
	static void _0x94FCADCF9F0C368E(Any p0) { invoker::Invoke<Void>(0x94FCADCF9F0C368E, p0); } // 0x94FCADCF9F0C368E b1207
	static Any _0x0D0AE5081F88CFE1(Any p0) { return invoker::Invoke<Any>(0x0D0AE5081F88CFE1, p0); } // 0x0D0AE5081F88CFE1 b1207
	static void _0xAF3A84C7DE6A1DC5(Any p0, Any p1) { invoker::Invoke<Void>(0xAF3A84C7DE6A1DC5, p0, p1); } // 0xAF3A84C7DE6A1DC5 b1207
	static void _0x48E4D50F87A96AA5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x48E4D50F87A96AA5, p0, p1, p2, p3, p4, p5); } // 0x48E4D50F87A96AA5 b1207
	static Any _0xB1F6665AA54DCD5C(Any p0) { return invoker::Invoke<Any>(0xB1F6665AA54DCD5C, p0); } // 0xB1F6665AA54DCD5C b1207
	static Any _0x8BB99B85444544D9(Any p0, Any p1) { return invoker::Invoke<Any>(0x8BB99B85444544D9, p0, p1); } // 0x8BB99B85444544D9 b1207
	static Any _0x6F02B5E50511721E(Any p0) { return invoker::Invoke<Any>(0x6F02B5E50511721E, p0); } // 0x6F02B5E50511721E b1207
	static Any _0xCC1BAF72D571DB8D(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xCC1BAF72D571DB8D, p0, p1, p2); } // 0xCC1BAF72D571DB8D b1207
	static Any _0x5170DDA6D63ACAAA(Any p0) { return invoker::Invoke<Any>(0x5170DDA6D63ACAAA, p0); } // 0x5170DDA6D63ACAAA b1207
	static void _0x674B90BE1115846D(Any p0, Any p1) { invoker::Invoke<Void>(0x674B90BE1115846D, p0, p1); } // 0x674B90BE1115846D b1207
	static void _0xAB26DEEE120FD3FD(Any p0, Any p1) { invoker::Invoke<Void>(0xAB26DEEE120FD3FD, p0, p1); } // 0xAB26DEEE120FD3FD b1207
	static void _0x082C043C7AFC3747(Any p0, Any p1) { invoker::Invoke<Void>(0x082C043C7AFC3747, p0, p1); } // 0x082C043C7AFC3747 b1207
	static void _0x40D72189F46D2E15(Any p0, Any p1) { invoker::Invoke<Void>(0x40D72189F46D2E15, p0, p1); } // 0x40D72189F46D2E15 b1207
	static void _0xBB282CF5D2333FB8(Any p0, Any p1) { invoker::Invoke<Void>(0xBB282CF5D2333FB8, p0, p1); } // 0xBB282CF5D2333FB8 b1207
	static Any _0xAD44856A1CD29635() { return invoker::Invoke<Any>(0xAD44856A1CD29635); } // 0xAD44856A1CD29635 b1207
	static Any _0x38C2BF94D15F464D(Any p0) { return invoker::Invoke<Any>(0x38C2BF94D15F464D, p0); } // 0x38C2BF94D15F464D b1207
	static void _0x3A87FDA8F1B6CDFB(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3A87FDA8F1B6CDFB, p0, p1, p2); } // 0x3A87FDA8F1B6CDFB b1207
	static void _0x4647842FE8F31C1E(Any p0, Any p1) { invoker::Invoke<Void>(0x4647842FE8F31C1E, p0, p1); } // 0x4647842FE8F31C1E b1207
	static Any _0xF9B91C5129EABC08(Any p0, Any p1) { return invoker::Invoke<Any>(0xF9B91C5129EABC08, p0, p1); } // 0xF9B91C5129EABC08 b1207
	static void _0x9B47971234169990(Any p0, Any p1) { invoker::Invoke<Void>(0x9B47971234169990, p0, p1); } // 0x9B47971234169990 b1207
	static void _0xF63FA29D4A9ACA86(Any p0, Any p1) { invoker::Invoke<Void>(0xF63FA29D4A9ACA86, p0, p1); } // 0xF63FA29D4A9ACA86 b1207
	static Any _0x8C0F6A3D7236DEEB() { return invoker::Invoke<Any>(0x8C0F6A3D7236DEEB); } // 0x8C0F6A3D7236DEEB b1207
	static void _0x7FA58CED69405F9A(Any p0, Any p1) { invoker::Invoke<Void>(0x7FA58CED69405F9A, p0, p1); } // 0x7FA58CED69405F9A b1207
	static void _0xA08111B053D84B4D(Any p0) { invoker::Invoke<Void>(0xA08111B053D84B4D, p0); } // 0xA08111B053D84B4D b1207
	static Any _0xACB7E1418A8B6E32(Any p0) { return invoker::Invoke<Any>(0xACB7E1418A8B6E32, p0); } // 0xACB7E1418A8B6E32 b1207
	static void _0xE97240065406CB80(Any p0, Any p1) { invoker::Invoke<Void>(0xE97240065406CB80, p0, p1); } // 0xE97240065406CB80 b1207
	static Any _0x4CABE596D632E4B0(Any p0) { return invoker::Invoke<Any>(0x4CABE596D632E4B0, p0); } // 0x4CABE596D632E4B0 b1207
	static void _0xAFF2FD8ADD927585() { invoker::Invoke<Void>(0xAFF2FD8ADD927585); } // 0xAFF2FD8ADD927585 b1207
	static Any _0xFAED234C7F53ABEB() { return invoker::Invoke<Any>(0xFAED234C7F53ABEB); } // 0xFAED234C7F53ABEB b1207
	static Any _0x0358B8A41916C613(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x0358B8A41916C613, p0, p1, p2, p3); } // 0x0358B8A41916C613 b1207
	static Any _0xA565FAC215CBC77D() { return invoker::Invoke<Any>(0xA565FAC215CBC77D); } // 0xA565FAC215CBC77D b1207
}

namespace _NAMESPACE40
{
	static Any _0xE54DC27571D5EDC5() { return invoker::Invoke<Any>(0xE54DC27571D5EDC5); } // 0xE54DC27571D5EDC5 b1207
	static Any _0x57E798B56C45EE15(Any p0) { return invoker::Invoke<Any>(0x57E798B56C45EE15, p0); } // 0x57E798B56C45EE15 b1207
	static Any _0x57E798B57C45EE16(Any p0) { return invoker::Invoke<Any>(0x57E798B57C45EE16, p0); } // 0x57E798B57C45EE16 b1207
	static Any _0xE54DC27571D5EDC4() { return invoker::Invoke<Any>(0xE54DC27571D5EDC4); } // 0xE54DC27571D5EDC4 b1207
	static Any _0x57E798B54C45EE1A(Any p0) { return invoker::Invoke<Any>(0x57E798B54C45EE1A, p0); } // 0x57E798B54C45EE1A b1207
	static void _0xE824CE7D13FCB300(Any p0, Any p1) { invoker::Invoke<Void>(0xE824CE7D13FCB300, p0, p1); } // 0xE824CE7D13FCB300 b1207
	static Any _0xE824CE7D13FCB35E(Any p0) { return invoker::Invoke<Any>(0xE824CE7D13FCB35E, p0); } // 0xE824CE7D13FCB35E b1207
	static Any _0xE4E2C581F127A11C() { return invoker::Invoke<Any>(0xE4E2C581F127A11C); } // 0xE4E2C581F127A11C b1207
	static Any _0x8C32D86E9556ED86() { return invoker::Invoke<Any>(0x8C32D86E9556ED86); } // 0x8C32D86E9556ED86 b1207
	static Any _0x12F65317708749A5() { return invoker::Invoke<Any>(0x12F65317708749A5); } // 0x12F65317708749A5 b1207
	static Any _0x3A04F0169DA87A9D() { return invoker::Invoke<Any>(0x3A04F0169DA87A9D); } // 0x3A04F0169DA87A9D b1207
	static Any _0x9AABABF8313C3516() { return invoker::Invoke<Any>(0x9AABABF8313C3516); } // 0x9AABABF8313C3516 b1207
	static void _0x25855B1574BF8CD5(Any p0) { invoker::Invoke<Void>(0x25855B1574BF8CD5, p0); } // 0x25855B1574BF8CD5 b1207
	static void _0x7F89E15A8FB8DE97() { invoker::Invoke<Void>(0x7F89E15A8FB8DE97); } // 0x7F89E15A8FB8DE97 b1207
	static Any _0x7E8F86A4FA33033C() { return invoker::Invoke<Any>(0x7E8F86A4FA33033C); } // 0x7E8F86A4FA33033C b1207
}

namespace _NAMESPACE41
{
	static Any _0x0C02DABFA3B98176() { return invoker::Invoke<Any>(0x0C02DABFA3B98176); } // 0x0C02DABFA3B98176 b1207
	static Any _0x466BC8769CF26A7A(Any p0) { return invoker::Invoke<Any>(0x466BC8769CF26A7A, p0); } // 0x466BC8769CF26A7A b1207
	static Any _0xBC3422DC91667621(Any p0) { return invoker::Invoke<Any>(0xBC3422DC91667621, p0); } // 0xBC3422DC91667621 b1207
	static Any _0x282D36FF103D78DF() { return invoker::Invoke<Any>(0x282D36FF103D78DF); } // 0x282D36FF103D78DF b1207
	static Any _0xAEC5F0119867E457() { return invoker::Invoke<Any>(0xAEC5F0119867E457); } // 0xAEC5F0119867E457 b1207
	static Any _0xA46FD001D1BE896C() { return invoker::Invoke<Any>(0xA46FD001D1BE896C); } // 0xA46FD001D1BE896C b1207
	static Any _0x07AD9E43FD478527() { return invoker::Invoke<Any>(0x07AD9E43FD478527); } // 0x07AD9E43FD478527 b1207
	static Any _0x8A67120DBC299525() { return invoker::Invoke<Any>(0x8A67120DBC299525); } // 0x8A67120DBC299525 b1207
}

namespace NETSHOPPING
{
	static Any _0xC019112F8995DC1C() { return invoker::Invoke<Any>(0xC019112F8995DC1C); } // 0xC019112F8995DC1C b1207
	static Any _CASH_INVENTORY_TRANSACTION_READY_FOR_TRANSITIONING() { return invoker::Invoke<Any>(0xFCC24220FDDAC929); } // 0xFCC24220FDDAC929 b1207
	static Any _0x6CE9FB6332B5E46E() { return invoker::Invoke<Any>(0x6CE9FB6332B5E46E); } // 0x6CE9FB6332B5E46E b1207
	static Any _0xD1CE92D1D9BE170A() { return invoker::Invoke<Any>(0xD1CE92D1D9BE170A); } // 0xD1CE92D1D9BE170A b1207
	static Any _CASH_INVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xFFEA09CCEC4AF32F, p0, p1, p2, p3); } // 0xFFEA09CCEC4AF32F b1207
	static Any _CASH_INVENTORY_TRANSACTION_START(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xF039EC27F4490E96, p0, p1, p2); } // 0xF039EC27F4490E96 b1207
	static Any _CASH_INVENTORY_TRANSACTION_FIND(Any p0) { return invoker::Invoke<Any>(0x52A226ADF4A270D2, p0); } // 0x52A226ADF4A270D2 b1207
	static Any _CASH_INVENTORY_TRANSACTION_DELETE(Any p0) { return invoker::Invoke<Any>(0x59EF5D516E2D96B9, p0); } // 0x59EF5D516E2D96B9 b1207
	static Any _0x6C9F12700BCE69F4() { return invoker::Invoke<Any>(0x6C9F12700BCE69F4); } // 0x6C9F12700BCE69F4 b1207
	static Any _CASH_INVENTORY_TRANSACTION_ADD_ITEM_WITH_INGREDIENTS(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x3745C002F5A21C45, p0, p1, p2); } // 0x3745C002F5A21C45 b1207
	static Any _0xF65D2D35037BF5EC() { return invoker::Invoke<Any>(0xF65D2D35037BF5EC); } // 0xF65D2D35037BF5EC b1207
	static Any _0x52BDE32F21BA3B6D() { return invoker::Invoke<Any>(0x52BDE32F21BA3B6D); } // 0x52BDE32F21BA3B6D b1207
	static Any _0x7616B5F0895C2D99() { return invoker::Invoke<Any>(0x7616B5F0895C2D99); } // 0x7616B5F0895C2D99 b1207
	static Any _CASH_INVENTORY_TRANSACTION_GET_NUMBER_ITEMS(Any p0) { return invoker::Invoke<Any>(0xCF2D04D076847478, p0); } // 0xCF2D04D076847478 b1207
	static Any _0xBD2D520C51CCFF52(Any p0) { return invoker::Invoke<Any>(0xBD2D520C51CCFF52, p0); } // 0xBD2D520C51CCFF52 b1207
	static Any _CASH_INVENTORY_TRANSACTION_CHECKOUT(Any p0) { return invoker::Invoke<Any>(0x592BC00BF6629BE7, p0); } // 0x592BC00BF6629BE7 b1207
	static Any _CASH_INVENTORY_TRANSACTION_CHECKOUT_STATUS(Any p0, Any p1) { return invoker::Invoke<Any>(0x26C008791D066F37, p0, p1); } // 0x26C008791D066F37 b1207
	static Any _0xB6F4557060EF0FB4() { return invoker::Invoke<Any>(0xB6F4557060EF0FB4); } // 0xB6F4557060EF0FB4 b1207
	static Any _0x98412398BBE73F61() { return invoker::Invoke<Any>(0x98412398BBE73F61); } // 0x98412398BBE73F61 b1207
	static Any _0xCE54C9ABE6FBC6DB() { return invoker::Invoke<Any>(0xCE54C9ABE6FBC6DB); } // 0xCE54C9ABE6FBC6DB b1207
	static Any _0xA0B7094629724974() { return invoker::Invoke<Any>(0xA0B7094629724974); } // 0xA0B7094629724974 b1207
	static Any _0x92A32BA29622763F() { return invoker::Invoke<Any>(0x92A32BA29622763F); } // 0x92A32BA29622763F b1207
	static Any _0x3FA09DD57B93C0DE() { return invoker::Invoke<Any>(0x3FA09DD57B93C0DE); } // 0x3FA09DD57B93C0DE b1207
	static Any _0xD1555FBC96C88444() { return invoker::Invoke<Any>(0xD1555FBC96C88444); } // 0xD1555FBC96C88444 b1207
}

namespace NETWORK
{
	static Any NETWORK_IS_SIGNED_ONLINE() { return invoker::Invoke<Any>(0x1077788E268557C2); } // 0x1077788E268557C2 b1207
	static Any _0x74FB3E29E6D10FA9() { return invoker::Invoke<Any>(0x74FB3E29E6D10FA9); } // 0x74FB3E29E6D10FA9 b1207
	static Any _NETWORK_ARE_ROS_AVAILABLE() { return invoker::Invoke<Any>(0x85443FF4C328F53B); } // 0x85443FF4C328F53B b1207
	static Any NETWORK_IS_CLOUD_AVAILABLE() { return invoker::Invoke<Any>(0x9A4CF4F48AD77302); } // 0x9A4CF4F48AD77302 b1207
	static Any _0x67A5589628E0CFF6() { return invoker::Invoke<Any>(0x67A5589628E0CFF6); } // 0x67A5589628E0CFF6 b1207
	static Any NETWORK_IS_HOST() { return invoker::Invoke<Any>(0x8DB296B814EDDA07); } // 0x8DB296B814EDDA07 b1207
	static Any NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoker::Invoke<Any>(0x25CB5A9F37BFD063); } // 0x25CB5A9F37BFD063 b1207
	static Any _0x595F028698072DD9(Any p0) { return invoker::Invoke<Any>(0x595F028698072DD9, p0); } // 0x595F028698072DD9 b1207
	static Any _0x83F28CE49FBBFFBA() { return invoker::Invoke<Any>(0x83F28CE49FBBFFBA); } // 0x83F28CE49FBBFFBA b1207
	static Any _0x246545C37C27A717() { return invoker::Invoke<Any>(0x246545C37C27A717); } // 0x246545C37C27A717 b1207
	static Any _0xF23A6D6C11D8EC15() { return invoker::Invoke<Any>(0xF23A6D6C11D8EC15); } // 0xF23A6D6C11D8EC15 b1207
	static Any _0x3E8CCE6769DB5F34() { return invoker::Invoke<Any>(0x3E8CCE6769DB5F34); } // 0x3E8CCE6769DB5F34 b1207
	static Any _0x83FE8D7229593017() { return invoker::Invoke<Any>(0x83FE8D7229593017); } // 0x83FE8D7229593017 b1207
	static Any _0x8FF6059DA26E688A() { return invoker::Invoke<Any>(0x8FF6059DA26E688A); } // 0x8FF6059DA26E688A b1207
	static Any _0x78A9535AF83715C6() { return invoker::Invoke<Any>(0x78A9535AF83715C6); } // 0x78A9535AF83715C6 b1207
	static Any _0xDA4B1A479C414FB2() { return invoker::Invoke<Any>(0xDA4B1A479C414FB2); } // 0xDA4B1A479C414FB2 b1207
	static Any _0xFC6FCF4C03F1BBF6() { return invoker::Invoke<Any>(0xFC6FCF4C03F1BBF6); } // 0xFC6FCF4C03F1BBF6 b1207
	static Any _0x160F0CE6D76A39C9() { return invoker::Invoke<Any>(0x160F0CE6D76A39C9); } // 0x160F0CE6D76A39C9 b1207
	static Any _0x2FB53C631A49BE92() { return invoker::Invoke<Any>(0x2FB53C631A49BE92); } // 0x2FB53C631A49BE92 b1207
	static void _0xE5FF65CFF5160752() { invoker::Invoke<Void>(0xE5FF65CFF5160752); } // 0xE5FF65CFF5160752 b1207
	static Any NETWORK_CAN_ACCESS_MULTIPLAYER(Any p0) { return invoker::Invoke<Any>(0xAF50DA1A3F8B1BA4, p0); } // 0xAF50DA1A3F8B1BA4 b1207
	static Any _0x2A8112A974DE1EF6() { return invoker::Invoke<Any>(0x2A8112A974DE1EF6); } // 0x2A8112A974DE1EF6 b1207
	static Any _0xDD7806FD0543BC3D() { return invoker::Invoke<Any>(0xDD7806FD0543BC3D); } // 0xDD7806FD0543BC3D b1207
	static Any _0xA95470DA137587F5() { return invoker::Invoke<Any>(0xA95470DA137587F5); } // 0xA95470DA137587F5 b1207
	static Any _0xBB697756309D77EE(Any p0) { return invoker::Invoke<Any>(0xBB697756309D77EE, p0); } // 0xBB697756309D77EE b1207
	static Any _0xDD73C9838CE7181D() { return invoker::Invoke<Any>(0xDD73C9838CE7181D); } // 0xDD73C9838CE7181D b1207
	static Any _0x2C5BD9A43987AA27(Any p0) { return invoker::Invoke<Any>(0x2C5BD9A43987AA27, p0); } // 0x2C5BD9A43987AA27 b1207
	static Any _0x86FD10251A7118A4() { return invoker::Invoke<Any>(0x86FD10251A7118A4); } // 0x86FD10251A7118A4 b1207
	static void _0x3E74A687A73979C6(Any p0) { invoker::Invoke<Void>(0x3E74A687A73979C6, p0); } // 0x3E74A687A73979C6 b1207
	static Any NETWORK_SESSION_IS_PRIVATE() { return invoker::Invoke<Any>(0xCEF70AA5B3F89BA1); } // 0xCEF70AA5B3F89BA1 b1207
	static Any _0x04019AE4956D4393() { return invoker::Invoke<Any>(0x04019AE4956D4393); } // 0x04019AE4956D4393 b1207
	static Any _0x2989E131FDE37E97() { return invoker::Invoke<Any>(0x2989E131FDE37E97); } // 0x2989E131FDE37E97 b1207
	static Any _0x309BBEBEA8A3986C() { return invoker::Invoke<Any>(0x309BBEBEA8A3986C); } // 0x309BBEBEA8A3986C b1207
	static Any _0x39A8EF7AF29A192C() { return invoker::Invoke<Any>(0x39A8EF7AF29A192C); } // 0x39A8EF7AF29A192C b1207
	static Any _0x23D9C1F2E4098EDC() { return invoker::Invoke<Any>(0x23D9C1F2E4098EDC); } // 0x23D9C1F2E4098EDC b1207
	static Any _0x2F54B146D3EDCE4D() { return invoker::Invoke<Any>(0x2F54B146D3EDCE4D); } // 0x2F54B146D3EDCE4D b1207
	static Any _0xF0C0C94B404206FA() { return invoker::Invoke<Any>(0xF0C0C94B404206FA); } // 0xF0C0C94B404206FA b1207
	static Any _0x1413B6BF27AB7A95() { return invoker::Invoke<Any>(0x1413B6BF27AB7A95); } // 0x1413B6BF27AB7A95 b1207
	static Any _0xBAFFDE5F953720D9() { return invoker::Invoke<Any>(0xBAFFDE5F953720D9); } // 0xBAFFDE5F953720D9 b1207
	static Any _0xAFA14F98327791CE() { return invoker::Invoke<Any>(0xAFA14F98327791CE); } // 0xAFA14F98327791CE b1207
	static Any _0x8FB7C254CFCBF78E(Any p0) { return invoker::Invoke<Any>(0x8FB7C254CFCBF78E, p0); } // 0x8FB7C254CFCBF78E b1207
	static Any _0x9E762A595CF88E4A() { return invoker::Invoke<Any>(0x9E762A595CF88E4A); } // 0x9E762A595CF88E4A b1207
	static Any _0xE72E5C1289BD1F40(Any p0) { return invoker::Invoke<Any>(0xE72E5C1289BD1F40, p0); } // 0xE72E5C1289BD1F40 b1207
	static Any _0xA6F1BAABFF6AD7B9() { return invoker::Invoke<Any>(0xA6F1BAABFF6AD7B9); } // 0xA6F1BAABFF6AD7B9 b1207
	static Any _0x0DD051B1BF4B8BD6() { return invoker::Invoke<Any>(0x0DD051B1BF4B8BD6); } // 0x0DD051B1BF4B8BD6 b1207
	static Any _0xCCF878D50F8AB10D() { return invoker::Invoke<Any>(0xCCF878D50F8AB10D); } // 0xCCF878D50F8AB10D b1207
	static Any _0xF20B18A330E6DB5C() { return invoker::Invoke<Any>(0xF20B18A330E6DB5C); } // 0xF20B18A330E6DB5C b1207
	static Any _0x0F44A5C78D114922() { return invoker::Invoke<Any>(0x0F44A5C78D114922); } // 0x0F44A5C78D114922 b1207
	static Any _0xECE6A0C1B59CD8BE() { return invoker::Invoke<Any>(0xECE6A0C1B59CD8BE); } // 0xECE6A0C1B59CD8BE b1207
	static Any _0x17C21B7319A05047() { return invoker::Invoke<Any>(0x17C21B7319A05047); } // 0x17C21B7319A05047 b1207
	static Any _0xF2CBC969C4F090C7() { return invoker::Invoke<Any>(0xF2CBC969C4F090C7); } // 0xF2CBC969C4F090C7 b1207
	static void _0xFD4272A137703449() { invoker::Invoke<Void>(0xFD4272A137703449); } // 0xFD4272A137703449 b1207
	static Any _0x236905C700FDB54D() { return invoker::Invoke<Any>(0x236905C700FDB54D); } // 0x236905C700FDB54D b1207
	static Any _0x71FA2D1880C48032() { return invoker::Invoke<Any>(0x71FA2D1880C48032); } // 0x71FA2D1880C48032 b1207
	static Any _NETWORK_GET_SERVER_TIME() { return invoker::Invoke<Any>(0x6D03BFBD643B2A02); } // 0x6D03BFBD643B2A02 b1207
	static Any _0xD972DF67326F966E() { return invoker::Invoke<Any>(0xD972DF67326F966E); } // 0xD972DF67326F966E b1207
	static Any _0xD7C95D322FF57522() { return invoker::Invoke<Any>(0xD7C95D322FF57522); } // 0xD7C95D322FF57522 b1207
	static Any _0x11A7ADCD629E170F() { return invoker::Invoke<Any>(0x11A7ADCD629E170F); } // 0x11A7ADCD629E170F b1207
	static Any _0x669E223E64B1903C() { return invoker::Invoke<Any>(0x669E223E64B1903C); } // 0x669E223E64B1903C b1207
	static Any _0xE28C13ECC36FF14E() { return invoker::Invoke<Any>(0xE28C13ECC36FF14E); } // 0xE28C13ECC36FF14E b1207
	static Any _0x65F040D91001ED4B() { return invoker::Invoke<Any>(0x65F040D91001ED4B); } // 0x65F040D91001ED4B b1207
	static Any _0x0E54D4DA6018FF8E() { return invoker::Invoke<Any>(0x0E54D4DA6018FF8E); } // 0x0E54D4DA6018FF8E b1207
	static Any NETWORK_IS_FINDING_GAMERS() { return invoker::Invoke<Any>(0xDDDF64C91BFCF0AA); } // 0xDDDF64C91BFCF0AA b1207
	static Any _0xF9B83B77929D8863() { return invoker::Invoke<Any>(0xF9B83B77929D8863); } // 0xF9B83B77929D8863 b1207
	static Any _0x7BCA0A3972708436() { return invoker::Invoke<Any>(0x7BCA0A3972708436); } // 0x7BCA0A3972708436 b1207
	static void NETWORK_CLEAR_FOUND_GAMERS() { invoker::Invoke<Void>(0x6D14CCEE1B40381A); } // 0x6D14CCEE1B40381A b1207
	static Any _0xFBDFE1C1356E12E8() { return invoker::Invoke<Any>(0xFBDFE1C1356E12E8); } // 0xFBDFE1C1356E12E8 b1207
	static Any _0x25189F9908E9CD65() { return invoker::Invoke<Any>(0x25189F9908E9CD65); } // 0x25189F9908E9CD65 b1207
	static Any _0x5AE17C6B0134B7F1() { return invoker::Invoke<Any>(0x5AE17C6B0134B7F1); } // 0x5AE17C6B0134B7F1 b1207
	static Any _0xDDAEB478E58F8DEA() { return invoker::Invoke<Any>(0xDDAEB478E58F8DEA); } // 0xDDAEB478E58F8DEA b1207
	static Any _0x86E0660E4F5C956D() { return invoker::Invoke<Any>(0x86E0660E4F5C956D); } // 0x86E0660E4F5C956D b1207
	static void _0x7AC752103856FB20(Any p0) { invoker::Invoke<Void>(0x7AC752103856FB20, p0); } // 0x7AC752103856FB20 b1207
	static Any NETWORK_IS_GAME_IN_PROGRESS() { return invoker::Invoke<Any>(0x10FAB35428CCC9D7); } // 0x10FAB35428CCC9D7 b1207
	static Any NETWORK_IS_SESSION_ACTIVE() { return invoker::Invoke<Any>(0xD83C2B94E7508980); } // 0xD83C2B94E7508980 b1207
	static Any NETWORK_IS_IN_SESSION() { return invoker::Invoke<Any>(0xCA97246103B63917); } // 0xCA97246103B63917 b1207
	static Any _0xC5196C42DE19F646() { return invoker::Invoke<Any>(0xC5196C42DE19F646); } // 0xC5196C42DE19F646 b1207
	static Any NETWORK_IS_SESSION_STARTED() { return invoker::Invoke<Any>(0x9DE624D2FC4B603F); } // 0x9DE624D2FC4B603F b1207
	static Any NETWORK_CAN_SESSION_END() { return invoker::Invoke<Any>(0x4EEBC3694E49C572); } // 0x4EEBC3694E49C572 b1207
	static Any _0x225640E09EFFDC3F() { return invoker::Invoke<Any>(0x225640E09EFFDC3F); } // 0x225640E09EFFDC3F b1207
	static Any _0xE546BDA1B3E288EE() { return invoker::Invoke<Any>(0xE546BDA1B3E288EE); } // 0xE546BDA1B3E288EE b1207
	static Any _0x78335E12DB0BF961() { return invoker::Invoke<Any>(0x78335E12DB0BF961); } // 0x78335E12DB0BF961 b1207
	static Any _0x51F33DBC1A41CBFD() { return invoker::Invoke<Any>(0x51F33DBC1A41CBFD); } // 0x51F33DBC1A41CBFD b1207
	static Any _0x0AE241A4A9ADEEEC() { return invoker::Invoke<Any>(0x0AE241A4A9ADEEEC); } // 0x0AE241A4A9ADEEEC b1207
	static Any _0x3215BBE34D3418C5() { return invoker::Invoke<Any>(0x3215BBE34D3418C5); } // 0x3215BBE34D3418C5 b1207
	static Any _0x8DC9AA3B508B1A85() { return invoker::Invoke<Any>(0x8DC9AA3B508B1A85); } // 0x8DC9AA3B508B1A85 b1207
	static Any _0xD3A3C8B9F3BDEF81() { return invoker::Invoke<Any>(0xD3A3C8B9F3BDEF81); } // 0xD3A3C8B9F3BDEF81 b1207
	static Any _0x18B94666CF610AEB() { return invoker::Invoke<Any>(0x18B94666CF610AEB); } // 0x18B94666CF610AEB b1207
	static Any _0x981146E5C9CE9250() { return invoker::Invoke<Any>(0x981146E5C9CE9250); } // 0x981146E5C9CE9250 b1207
	static Any _0xBF8276E51761F9DA() { return invoker::Invoke<Any>(0xBF8276E51761F9DA); } // 0xBF8276E51761F9DA b1207
	static Any _0xDCA4A74135E1DEA5() { return invoker::Invoke<Any>(0xDCA4A74135E1DEA5); } // 0xDCA4A74135E1DEA5 b1207
	static Any _0xD0498AD30E16B6BD() { return invoker::Invoke<Any>(0xD0498AD30E16B6BD); } // 0xD0498AD30E16B6BD b1207
	static Any _0xF23D6475640D29EB() { return invoker::Invoke<Any>(0xF23D6475640D29EB); } // 0xF23D6475640D29EB b1207
	static void _0x704F92B3AF20D857(Any p0) { invoker::Invoke<Void>(0x704F92B3AF20D857, p0); } // 0x704F92B3AF20D857 b1207
	static Any _0xF342F6BD0A8287D5() { return invoker::Invoke<Any>(0xF342F6BD0A8287D5); } // 0xF342F6BD0A8287D5 b1207
	static Any _0xD39A72AE5EBD57E5() { return invoker::Invoke<Any>(0xD39A72AE5EBD57E5); } // 0xD39A72AE5EBD57E5 b1207
	static Any _0xE47001B7CB8B98AE() { return invoker::Invoke<Any>(0xE47001B7CB8B98AE); } // 0xE47001B7CB8B98AE b1207
	static Any _0xD1FFB246F4E088AC() { return invoker::Invoke<Any>(0xD1FFB246F4E088AC); } // 0xD1FFB246F4E088AC b1207
	static Any _0x27B1AE4D8C652F08(Any p0) { return invoker::Invoke<Any>(0x27B1AE4D8C652F08, p0); } // 0x27B1AE4D8C652F08 b1207
	static Any _0x6C27442A225A241A() { return invoker::Invoke<Any>(0x6C27442A225A241A); } // 0x6C27442A225A241A b1207
	static Any _0xE59F4924BD3A718D(Any p0) { return invoker::Invoke<Any>(0xE59F4924BD3A718D, p0); } // 0xE59F4924BD3A718D b1207
	static Any _0x16EFB123C4451032(Any p0, Any p1) { return invoker::Invoke<Any>(0x16EFB123C4451032, p0, p1); } // 0x16EFB123C4451032 b1207
	static Any _0xE79BA3BC265895DA(Any p0) { return invoker::Invoke<Any>(0xE79BA3BC265895DA, p0); } // 0xE79BA3BC265895DA b1207
	static Any _0xC0CFFDA87C2C163D(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xC0CFFDA87C2C163D, p0, p1, p2); } // 0xC0CFFDA87C2C163D b1207
	static Any _0x5ED39DA62BEB1330(Any p0) { return invoker::Invoke<Any>(0x5ED39DA62BEB1330, p0); } // 0x5ED39DA62BEB1330 b1207
	static Any _0xB2CEA5105AAC8DDE(Any p0) { return invoker::Invoke<Any>(0xB2CEA5105AAC8DDE, p0); } // 0xB2CEA5105AAC8DDE b1207
	static Any _0x3AA0CDC63696166D(Any p0) { return invoker::Invoke<Any>(0x3AA0CDC63696166D, p0); } // 0x3AA0CDC63696166D b1207
	static Any _0xE483BB6BE686F632() { return invoker::Invoke<Any>(0xE483BB6BE686F632); } // 0xE483BB6BE686F632 b1207
	static Any _0xE8E633215471BB5D() { return invoker::Invoke<Any>(0xE8E633215471BB5D); } // 0xE8E633215471BB5D b1207
	static Any _0xA2837A5E21FB5A58() { return invoker::Invoke<Any>(0xA2837A5E21FB5A58); } // 0xA2837A5E21FB5A58 b1207
	static Any _0xE39600E50D608693() { return invoker::Invoke<Any>(0xE39600E50D608693); } // 0xE39600E50D608693 b1207
	static Any _0xD7BAD4062074B9C1() { return invoker::Invoke<Any>(0xD7BAD4062074B9C1); } // 0xD7BAD4062074B9C1 b1207
	static Any _0xCA58D4FD20D70F24() { return invoker::Invoke<Any>(0xCA58D4FD20D70F24); } // 0xCA58D4FD20D70F24 b1207
	static Any _0xC028B3F52C707C49() { return invoker::Invoke<Any>(0xC028B3F52C707C49); } // 0xC028B3F52C707C49 b1207
	static Any _0xFC4165C9165C166F() { return invoker::Invoke<Any>(0xFC4165C9165C166F); } // 0xFC4165C9165C166F b1207
	static Any _0x5B9C6AC118FD4774() { return invoker::Invoke<Any>(0x5B9C6AC118FD4774); } // 0x5B9C6AC118FD4774 b1207
	static Any _0x9BCF28FB5D65A9BE() { return invoker::Invoke<Any>(0x9BCF28FB5D65A9BE); } // 0x9BCF28FB5D65A9BE b1207
	static Any _0x3B82ACC3F4B6240C() { return invoker::Invoke<Any>(0x3B82ACC3F4B6240C); } // 0x3B82ACC3F4B6240C b1207
	static void _0xA4484173759749B1() { invoker::Invoke<Void>(0xA4484173759749B1); } // 0xA4484173759749B1 b1207
	static Any _0x603469298A4308AF() { return invoker::Invoke<Any>(0x603469298A4308AF); } // 0x603469298A4308AF b1207
	static Any _0xF5C5929E07512F80() { return invoker::Invoke<Any>(0xF5C5929E07512F80); } // 0xF5C5929E07512F80 b1207
	static Any _0x2FC5650B0271CB57() { return invoker::Invoke<Any>(0x2FC5650B0271CB57); } // 0x2FC5650B0271CB57 b1207
	static Any _0x11820D1AE80DEA39() { return invoker::Invoke<Any>(0x11820D1AE80DEA39); } // 0x11820D1AE80DEA39 b1207
	static Any _0xFD8B834A8BA05048() { return invoker::Invoke<Any>(0xFD8B834A8BA05048); } // 0xFD8B834A8BA05048 b1207
	static Any _0xF1B84178F8674195() { return invoker::Invoke<Any>(0xF1B84178F8674195); } // 0xF1B84178F8674195 b1207
	static Any _NETWORK_GET_RANDOM_INT_IN_RANGE() { return invoker::Invoke<Any>(0xE30CF56F1EFA5F43); } // 0xE30CF56F1EFA5F43 b1207
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1CA59E306ECB80A5, p0, p1, p2); } // 0x1CA59E306ECB80A5 b1207
	static Any NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoker::Invoke<Any>(0x2910669969E9535E); } // 0x2910669969E9535E b1207
	static Any _NETWORK_GET_NUM_PARTICIPANTS_HOST() { return invoker::Invoke<Any>(0xA6C90FBC38E395EE); } // 0xA6C90FBC38E395EE b1207
	static Any NETWORK_GET_NUM_PARTICIPANTS() { return invoker::Invoke<Any>(0x18D0456E86604654); } // 0x18D0456E86604654 b1207
	static Any NETWORK_GET_SCRIPT_STATUS() { return invoker::Invoke<Any>(0x57D158647A6BFABF); } // 0x57D158647A6BFABF b1207
	static Any NETWORK_REGISTER_HOST_BROADCAST_VARIABLES() { return invoker::Invoke<Any>(0x3E9B2F01C50DF595); } // 0x3E9B2F01C50DF595 b1207
	static Any _0xBA24095EA96DFE17() { return invoker::Invoke<Any>(0xBA24095EA96DFE17); } // 0xBA24095EA96DFE17 b1207
	static Any NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES() { return invoker::Invoke<Any>(0x3364AA97340CA215); } // 0x3364AA97340CA215 b1207
	static Any _0x690806BC83BC8CA2() { return invoker::Invoke<Any>(0x690806BC83BC8CA2); } // 0x690806BC83BC8CA2 b1207
	static Any _0x5D10B3795F3FC886() { return invoker::Invoke<Any>(0x5D10B3795F3FC886); } // 0x5D10B3795F3FC886 b1207
	static Any NETWORK_GET_PLAYER_INDEX() { return invoker::Invoke<Any>(0x24FB80D107371267); } // 0x24FB80D107371267 b1207
	static Any NETWORK_GET_PARTICIPANT_INDEX() { return invoker::Invoke<Any>(0x1B84DF6AF2A46938); } // 0x1B84DF6AF2A46938 b1207
	static Any _NETWORK_GET_PED_PLAYER() { return invoker::Invoke<Any>(0x6C0E2E0125610278); } // 0x6C0E2E0125610278 b1207
	static Any NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoker::Invoke<Any>(0xA4A79DD2D9600654); } // 0xA4A79DD2D9600654 b1207
	static Any NETWORK_IS_PLAYER_CONNECTED() { return invoker::Invoke<Any>(0x93DC1BE4E1ABE9D1); } // 0x93DC1BE4E1ABE9D1 b1207
	static Any _0xCF61D4B4702EE9EB() { return invoker::Invoke<Any>(0xCF61D4B4702EE9EB); } // 0xCF61D4B4702EE9EB b1207
	static Any NETWORK_IS_PARTICIPANT_ACTIVE() { return invoker::Invoke<Any>(0x6FF8FF40B6357D45); } // 0x6FF8FF40B6357D45 b1207
	static Any NETWORK_IS_PLAYER_ACTIVE(Any p0) { return invoker::Invoke<Any>(0xB8DFD30D6973E135, p0); } // 0xB8DFD30D6973E135 b1207
	static Any NETWORK_IS_PLAYER_A_PARTICIPANT(Any p0) { return invoker::Invoke<Any>(0x3CA58F6CB7CBD784, p0); } // 0x3CA58F6CB7CBD784 b1207
	static Any NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoker::Invoke<Any>(0x83CD99A1E6061AB5); } // 0x83CD99A1E6061AB5 b1207
	static Any _0xB4A25351D79B444C() { return invoker::Invoke<Any>(0xB4A25351D79B444C); } // 0xB4A25351D79B444C b1207
	static Any NETWORK_SET_MISSION_FINISHED() { return invoker::Invoke<Any>(0x3B3D11CD9FFCDFC9); } // 0x3B3D11CD9FFCDFC9 b1207
	static Any NETWORK_IS_SCRIPT_ACTIVE(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x9D40DF90FAD26098, p0, p1, p2, p3); } // 0x9D40DF90FAD26098 b1207
	static Any _0x1B89BC43B6E69107() { return invoker::Invoke<Any>(0x1B89BC43B6E69107); } // 0x1B89BC43B6E69107 b1207
	static Any _0x31DAD2CD6D49546E() { return invoker::Invoke<Any>(0x31DAD2CD6D49546E); } // 0x31DAD2CD6D49546E b1207
	static Any _0xFB9ECED5B68F3B78() { return invoker::Invoke<Any>(0xFB9ECED5B68F3B78); } // 0xFB9ECED5B68F3B78 b1207
	static Any NETWORK_GET_NUM_SCRIPT_PARTICIPANTS() { return invoker::Invoke<Any>(0x3658E8CD94FC121A); } // 0x3658E8CD94FC121A b1207
	static Any _0x638A3A81733086DB() { return invoker::Invoke<Any>(0x638A3A81733086DB); } // 0x638A3A81733086DB b1207
	static Any _0x1AD5B71586B94820() { return invoker::Invoke<Any>(0x1AD5B71586B94820); } // 0x1AD5B71586B94820 b1207
	static Any _0x2302C0264EA58D31() { return invoker::Invoke<Any>(0x2302C0264EA58D31); } // 0x2302C0264EA58D31 b1207
	static Any _0x9C725D149622BFDE() { return invoker::Invoke<Any>(0x9C725D149622BFDE); } // 0x9C725D149622BFDE b1207
	static Any PARTICIPANT_ID() { return invoker::Invoke<Any>(0x90986E8876CE0A83); } // 0x90986E8876CE0A83 b1207
	static Any PARTICIPANT_ID_TO_INT() { return invoker::Invoke<Any>(0x57A3BDDAD8E5AA0A); } // 0x57A3BDDAD8E5AA0A b1207
	static Any NETWORK_GET_DESTROYER_OF_NETWORK_ID() { return invoker::Invoke<Any>(0x7A1ADEEF01740A24); } // 0x7A1ADEEF01740A24 b1207
	static Any _0x6CF82A7F65A5AD5F() { return invoker::Invoke<Any>(0x6CF82A7F65A5AD5F); } // 0x6CF82A7F65A5AD5F b1207
	static Any _0x236321F1178A5446() { return invoker::Invoke<Any>(0x236321F1178A5446); } // 0x236321F1178A5446 b1207
	static Any _NETWORK_GET_DESROYER_OF_ENTITY() { return invoker::Invoke<Any>(0x4CACA84440FA26F6); } // 0x4CACA84440FA26F6 b1207
	static Any NETWORK_GET_ENTITY_KILLER_OF_PLAYER() { return invoker::Invoke<Any>(0x42B2DAA6B596F5F8); } // 0x42B2DAA6B596F5F8 b1207
	static Any NETWORK_RESURRECT_LOCAL_PLAYER() { return invoker::Invoke<Any>(0xEA23C49EAA83ACFB); } // 0xEA23C49EAA83ACFB b1207
	static Any _0x4154B7D8C75E5DCF() { return invoker::Invoke<Any>(0x4154B7D8C75E5DCF); } // 0x4154B7D8C75E5DCF b1207
	static Any NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME() { return invoker::Invoke<Any>(0x2D95C7E2D7E07307); } // 0x2D95C7E2D7E07307 b1207
	static Any _0x524FF0AEFF9C3973() { return invoker::Invoke<Any>(0x524FF0AEFF9C3973); } // 0x524FF0AEFF9C3973 b1207
	static Any _0xB07D3185E11657A5() { return invoker::Invoke<Any>(0xB07D3185E11657A5); } // 0xB07D3185E11657A5 b1207
	static Any NETWORK_GET_NETWORK_ID_FROM_ENTITY() { return invoker::Invoke<Any>(0xA11700682F3AD45C); } // 0xA11700682F3AD45C b1207
	static Any NETWORK_GET_ENTITY_FROM_NETWORK_ID() { return invoker::Invoke<Any>(0xCE4E5D9B0A4FF560); } // 0xCE4E5D9B0A4FF560 b1207
	static Any NETWORK_GET_ENTITY_IS_NETWORKED(Any p0) { return invoker::Invoke<Any>(0xC7827959479DCC78, p0); } // 0xC7827959479DCC78 b1207
	static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Any p0) { invoker::Invoke<Void>(0x06FAACD625D80CAA, p0); } // 0x06FAACD625D80CAA b1207
	static Any NETWORK_DOES_NETWORK_ID_EXIST(Any p0) { return invoker::Invoke<Any>(0x38CE16C96BD11344, p0); } // 0x38CE16C96BD11344 b1207
	static Any NETWORK_REQUEST_CONTROL_OF_NETWORK_ID() { return invoker::Invoke<Any>(0xA670B3662FAFFBD0); } // 0xA670B3662FAFFBD0 b1207
	static Any NETWORK_HAS_CONTROL_OF_NETWORK_ID() { return invoker::Invoke<Any>(0x4D36070FE0215186); } // 0x4D36070FE0215186 b1207
	static Any NETWORK_REQUEST_CONTROL_OF_ENTITY(Any p0) { return invoker::Invoke<Any>(0xB69317BF5E782347, p0); } // 0xB69317BF5E782347 b1207
	static Any _0xAAA92B631B13F614() { return invoker::Invoke<Any>(0xAAA92B631B13F614); } // 0xAAA92B631B13F614 b1207
	static Any NETWORK_HAS_CONTROL_OF_ENTITY(Any p0) { return invoker::Invoke<Any>(0x01BF60A500E28887, p0); } // 0x01BF60A500E28887 b1207
	static Any NETWORK_HAS_CONTROL_OF_PICKUP() { return invoker::Invoke<Any>(0x5BC9495F0B3B6FA6); } // 0x5BC9495F0B3B6FA6 b1207
	static Any _0x26A5C12FACFF8724() { return invoker::Invoke<Any>(0x26A5C12FACFF8724); } // 0x26A5C12FACFF8724 b1207
	static Any _0xF260AF6F43953316() { return invoker::Invoke<Any>(0xF260AF6F43953316); } // 0xF260AF6F43953316 b1207
	static Any VEH_TO_NET() { return invoker::Invoke<Any>(0xB4C94523F023419C); } // 0xB4C94523F023419C b1207
	static Any PED_TO_NET(Any p0) { return invoker::Invoke<Any>(0x0EDEC3C276198689, p0); } // 0x0EDEC3C276198689 b1207
	static Any OBJ_TO_NET() { return invoker::Invoke<Any>(0x99BFDC94A603E541); } // 0x99BFDC94A603E541 b1207
	static Any _0xE0D73CDDEA79DDCD() { return invoker::Invoke<Any>(0xE0D73CDDEA79DDCD); } // 0xE0D73CDDEA79DDCD b1207
	static Any NET_TO_VEH() { return invoker::Invoke<Any>(0x367B936610BA360C); } // 0x367B936610BA360C b1207
	static Any NET_TO_PED(Any p0) { return invoker::Invoke<Any>(0xBDCD95FC216A8B3E, p0); } // 0xBDCD95FC216A8B3E b1207
	static Any NET_TO_OBJ() { return invoker::Invoke<Any>(0xD8515F5FEA14CB3F); } // 0xD8515F5FEA14CB3F b1207
	static Any NET_TO_ENT() { return invoker::Invoke<Any>(0xBFFEAB45A9A9094A); } // 0xBFFEAB45A9A9094A b1207
	static Any _0xD7F6781A0ABAF6FB() { return invoker::Invoke<Any>(0xD7F6781A0ABAF6FB); } // 0xD7F6781A0ABAF6FB b1207
	static Any _0x74F99EF7EF503398() { return invoker::Invoke<Any>(0x74F99EF7EF503398); } // 0x74F99EF7EF503398 b1207
	static Any _0xD08066E00D26C448() { return invoker::Invoke<Any>(0xD08066E00D26C448); } // 0xD08066E00D26C448 b1207
	static Any _0x0CC28C08613BA9E5() { return invoker::Invoke<Any>(0x0CC28C08613BA9E5); } // 0x0CC28C08613BA9E5 b1207
	static Any NETWORK_GET_LOCAL_HANDLE() { return invoker::Invoke<Any>(0xE86051786B66CD8E); } // 0xE86051786B66CD8E b1207
	static void NETWORK_HANDLE_FROM_PLAYER(Any p0, Any p1) { invoker::Invoke<Void>(0x388EB2B86C73B6B3, p0, p1); } // 0x388EB2B86C73B6B3 b1207
	static Any _0xBC1D768F2F5D6C05() { return invoker::Invoke<Any>(0xBC1D768F2F5D6C05); } // 0xBC1D768F2F5D6C05 b1207
	static Any NETWORK_HANDLE_FROM_FRIEND() { return invoker::Invoke<Any>(0xD45CB817D7E177D2); } // 0xD45CB817D7E177D2 b1207
	static Any NETWORK_GET_GAMERTAG_FROM_HANDLE() { return invoker::Invoke<Any>(0x426141162EBE5CDB); } // 0x426141162EBE5CDB b1207
	static Any _0xD66C9E72B3CC4982(Any p0, Any p1) { return invoker::Invoke<Any>(0xD66C9E72B3CC4982, p0, p1); } // 0xD66C9E72B3CC4982 b1207
	static Any _0x58CC181719256197(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x58CC181719256197, p0, p1, p2); } // 0x58CC181719256197 b1207
	static Any _0x7FEE4F07C54B6B3C() { return invoker::Invoke<Any>(0x7FEE4F07C54B6B3C); } // 0x7FEE4F07C54B6B3C b1207
	static Any NETWORK_ARE_HANDLES_THE_SAME(Any p0, Any p1) { return invoker::Invoke<Any>(0x57DBA049E110F217, p0, p1); } // 0x57DBA049E110F217 b1207
	static Any NETWORK_IS_HANDLE_VALID(Any p0) { return invoker::Invoke<Any>(0x6F79B93B0A8E4133, p0); } // 0x6F79B93B0A8E4133 b1207
	static Any NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Any p0) { return invoker::Invoke<Any>(0xCE5F689CF5A0A49D, p0); } // 0xCE5F689CF5A0A49D b1207
	static Any NETWORK_IS_GAMER_IN_MY_SESSION(Any p0) { return invoker::Invoke<Any>(0x0F10B05DDF8D16E9, p0); } // 0x0F10B05DDF8D16E9 b1207
	static Any NETWORK_SHOW_PROFILE_UI() { return invoker::Invoke<Any>(0x859ED1CEA343FCA8); } // 0x859ED1CEA343FCA8 b1207
	static Any _0x5759160AC17C13CE() { return invoker::Invoke<Any>(0x5759160AC17C13CE); } // 0x5759160AC17C13CE b1207
	static Any _0xF302AB9D978352EE() { return invoker::Invoke<Any>(0xF302AB9D978352EE); } // 0xF302AB9D978352EE b1207
	static Any _0x4538EE7C321590BC() { return invoker::Invoke<Any>(0x4538EE7C321590BC); } // 0x4538EE7C321590BC b1207
	static Any _0xA47D48D06AA5A188() { return invoker::Invoke<Any>(0xA47D48D06AA5A188); } // 0xA47D48D06AA5A188 b1207
	static Any _0xDB7ABDD203FA3704() { return invoker::Invoke<Any>(0xDB7ABDD203FA3704); } // 0xDB7ABDD203FA3704 b1207
	static Any _0xA94ECE191D90637A() { return invoker::Invoke<Any>(0xA94ECE191D90637A); } // 0xA94ECE191D90637A b1207
	static Any _0x5CB8B0C846D0F30B() { return invoker::Invoke<Any>(0x5CB8B0C846D0F30B); } // 0x5CB8B0C846D0F30B b1207
	static Any _0xFF36F36B07E69059() { return invoker::Invoke<Any>(0xFF36F36B07E69059); } // 0xFF36F36B07E69059 b1207
	static Any _0xA3EEC0A5AFF3FC5B() { return invoker::Invoke<Any>(0xA3EEC0A5AFF3FC5B); } // 0xA3EEC0A5AFF3FC5B b1207
	static Any _0xB389289F031F059A() { return invoker::Invoke<Any>(0xB389289F031F059A); } // 0xB389289F031F059A b1207
	static Any _0x1AF5E28E64A76A9F() { return invoker::Invoke<Any>(0x1AF5E28E64A76A9F); } // 0x1AF5E28E64A76A9F b1207
	static Any _0x1F51F367B710A832() { return invoker::Invoke<Any>(0x1F51F367B710A832); } // 0x1F51F367B710A832 b1207
	static Any _0xDA1BFED8582F61F0() { return invoker::Invoke<Any>(0xDA1BFED8582F61F0); } // 0xDA1BFED8582F61F0 b1207
	static Any _0x232E1EB23CDB313C() { return invoker::Invoke<Any>(0x232E1EB23CDB313C); } // 0x232E1EB23CDB313C b1207
	static Any _0x3E4A16BC669E71B3() { return invoker::Invoke<Any>(0x3E4A16BC669E71B3); } // 0x3E4A16BC669E71B3 b1207
	static Any _0xE348D1404BD80146() { return invoker::Invoke<Any>(0xE348D1404BD80146); } // 0xE348D1404BD80146 b1207
	static Any _0x665161D250850A9F() { return invoker::Invoke<Any>(0x665161D250850A9F); } // 0x665161D250850A9F b1207
	static Any _0x5659D87BE674AB17() { return invoker::Invoke<Any>(0x5659D87BE674AB17); } // 0x5659D87BE674AB17 b1207
	static Any NETWORK_IS_FRIEND() { return invoker::Invoke<Any>(0x1A24A179F9B31654); } // 0x1A24A179F9B31654 b1207
	static Any NETWORK_IS_PENDING_FRIEND() { return invoker::Invoke<Any>(0x0BE73DA6984A6E33); } // 0x0BE73DA6984A6E33 b1207
	static Any NETWORK_ADD_FRIEND() { return invoker::Invoke<Any>(0x8E02D73914064223); } // 0x8E02D73914064223 b1207
	static Any _0x55F618F68AB854D3() { return invoker::Invoke<Any>(0x55F618F68AB854D3); } // 0x55F618F68AB854D3 b1207
	static Any _0x99ABE9BF9DADA162() { return invoker::Invoke<Any>(0x99ABE9BF9DADA162); } // 0x99ABE9BF9DADA162 b1207
	static Any _0x9C25E8EC4C535FBD() { return invoker::Invoke<Any>(0x9C25E8EC4C535FBD); } // 0x9C25E8EC4C535FBD b1207
	static Any NETWORK_SET_FRIENDLY_FIRE_OPTION() { return invoker::Invoke<Any>(0xF808475FA571D823); } // 0xF808475FA571D823 b1207
	static void NETWORK_SET_RICH_PRESENCE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x1DCCACDCFC569362, p0, p1, p2, p3); } // 0x1DCCACDCFC569362 b1207
	static Any NETWORK_GET_TIMEOUT_TIME() { return invoker::Invoke<Any>(0x5ED0356A0CE3A34F); } // 0x5ED0356A0CE3A34F b1207
	static Any _0xBC7D36946D19E60E() { return invoker::Invoke<Any>(0xBC7D36946D19E60E); } // 0xBC7D36946D19E60E b1207
	static Any _0xC964FCD3D1720697() { return invoker::Invoke<Any>(0xC964FCD3D1720697); } // 0xC964FCD3D1720697 b1207
	static Any _0xEC089F84A9C16C62() { return invoker::Invoke<Any>(0xEC089F84A9C16C62); } // 0xEC089F84A9C16C62 b1207
	static Any _0x7182EDDA1EE7DB5A() { return invoker::Invoke<Any>(0x7182EDDA1EE7DB5A); } // 0x7182EDDA1EE7DB5A b1207
	static Any _0xE1BC73D6815BA361() { return invoker::Invoke<Any>(0xE1BC73D6815BA361); } // 0xE1BC73D6815BA361 b1207
	static void _0x02C4C6C2900D84DF(Any p0, Any p1) { invoker::Invoke<Void>(0x02C4C6C2900D84DF, p0, p1); } // 0x02C4C6C2900D84DF b1207
	static void _0xD78A26024BB13E08(Any p0) { invoker::Invoke<Void>(0xD78A26024BB13E08, p0); } // 0xD78A26024BB13E08 b1207
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Any p0, Any p1) { invoker::Invoke<Void>(0xE05E81A888FA63C8, p0, p1); } // 0xE05E81A888FA63C8 b1207
	static Any _SET_NETWORK_ID_SYNC_TO_PLAYER() { return invoker::Invoke<Any>(0xA8A024587329F36A); } // 0xA8A024587329F36A b1207
	static Any _0x9ED3108D6847760A() { return invoker::Invoke<Any>(0x9ED3108D6847760A); } // 0x9ED3108D6847760A b1207
	static Any _0xD785864798258032() { return invoker::Invoke<Any>(0xD785864798258032); } // 0xD785864798258032 b1207
	static Any _NETWORK_SET_ENTITY_LINKED_TO_NETWORK() { return invoker::Invoke<Any>(0xF1CA12B18AEF5298); } // 0xF1CA12B18AEF5298 b1207
	static Any _0xE31A04513237DC89() { return invoker::Invoke<Any>(0xE31A04513237DC89); } // 0xE31A04513237DC89 b1207
	static Any SET_NETWORK_ID_VISIBLE_IN_CUTSCENE() { return invoker::Invoke<Any>(0xA6928482543022B4); } // 0xA6928482543022B4 b1207
	static Any _0xA1607996431332DF() { return invoker::Invoke<Any>(0xA1607996431332DF); } // 0xA1607996431332DF b1207
	static Any _0xA6C0787443C9583E() { return invoker::Invoke<Any>(0xA6C0787443C9583E); } // 0xA6C0787443C9583E b1207
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(Any p0, Any p1) { invoker::Invoke<Void>(0xD1065D68947E7B6E, p0, p1); } // 0xD1065D68947E7B6E b1207
	static Any _0x89D803CD48622150() { return invoker::Invoke<Any>(0x89D803CD48622150); } // 0x89D803CD48622150 b1207
	static Any SET_LOCAL_PLAYER_INVISIBLE_LOCALLY() { return invoker::Invoke<Any>(0xE5F773C1A1D9D168); } // 0xE5F773C1A1D9D168 b1207
	static void SET_PLAYER_INVISIBLE_LOCALLY(Any p0, Any p1) { invoker::Invoke<Void>(0x12B37D54667DB0B8, p0, p1); } // 0x12B37D54667DB0B8 b1207
	static Any SET_PLAYER_VISIBLE_LOCALLY() { return invoker::Invoke<Any>(0xFAA10F1FAFB11AF2); } // 0xFAA10F1FAFB11AF2 b1207
	static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE0031D3C8F36AB82, p0, p1, p2); } // 0xE0031D3C8F36AB82 b1207
	static Any _0x51D99497ABF3F451() { return invoker::Invoke<Any>(0x51D99497ABF3F451); } // 0x51D99497ABF3F451 b1207
	static Any _0xC1E1A3D5ED7617B8() { return invoker::Invoke<Any>(0xC1E1A3D5ED7617B8); } // 0xC1E1A3D5ED7617B8 b1207
	static Any IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID() { return invoker::Invoke<Any>(0x6E192E33AD436366); } // 0x6E192E33AD436366 b1207
	static Any ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID() { return invoker::Invoke<Any>(0xD45B1FFCCD52FF19); } // 0xD45B1FFCCD52FF19 b1207
	static Any IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xD82CF8E64C8729D8, p0, p1, p2, p3, p4); } // 0xD82CF8E64C8729D8 b1207
	static Any IS_SPHERE_VISIBLE_TO_PLAYER() { return invoker::Invoke<Any>(0xDC3A310219E5DA62); } // 0xDC3A310219E5DA62 b1207
	static Any RESERVE_NETWORK_MISSION_OBJECTS() { return invoker::Invoke<Any>(0x4E5C93BD0C32FBF8); } // 0x4E5C93BD0C32FBF8 b1207
	static Any _0xE7DDA8BD3BCF751C() { return invoker::Invoke<Any>(0xE7DDA8BD3BCF751C); } // 0xE7DDA8BD3BCF751C b1207
	static void RESERVE_NETWORK_MISSION_PEDS(Any p0) { invoker::Invoke<Void>(0xB60FEBA45333D36F, p0); } // 0xB60FEBA45333D36F b1207
	static void _0x807E119F80231732(Any p0) { invoker::Invoke<Void>(0x807E119F80231732, p0); } // 0x807E119F80231732 b1207
	static Any RESERVE_NETWORK_MISSION_VEHICLES() { return invoker::Invoke<Any>(0x76B02E21ED27A469); } // 0x76B02E21ED27A469 b1207
	static Any _0x9F24A34863FD35DA() { return invoker::Invoke<Any>(0x9F24A34863FD35DA); } // 0x9F24A34863FD35DA b1207
	static Any _0x4D40E7D749BC6E6D() { return invoker::Invoke<Any>(0x4D40E7D749BC6E6D); } // 0x4D40E7D749BC6E6D b1207
	static Any CAN_REGISTER_MISSION_OBJECTS(Any p0) { return invoker::Invoke<Any>(0x800DD4721A8B008B, p0); } // 0x800DD4721A8B008B b1207
	static Any CAN_REGISTER_MISSION_PEDS(Any p0) { return invoker::Invoke<Any>(0xBCBF4FEF9FA5D781, p0); } // 0xBCBF4FEF9FA5D781 b1207
	static Any CAN_REGISTER_MISSION_VEHICLES() { return invoker::Invoke<Any>(0x7277F1F2E085EE74); } // 0x7277F1F2E085EE74 b1207
	static Any _0xF0460C7BF80011EA() { return invoker::Invoke<Any>(0xF0460C7BF80011EA); } // 0xF0460C7BF80011EA b1207
	static Any CAN_REGISTER_MISSION_ENTITIES() { return invoker::Invoke<Any>(0x69778E7564BADE6D); } // 0x69778E7564BADE6D b1207
	static Any GET_NUM_RESERVED_MISSION_OBJECTS() { return invoker::Invoke<Any>(0xAA81B5F10BC43AC2); } // 0xAA81B5F10BC43AC2 b1207
	static Any GET_NUM_RESERVED_MISSION_PEDS() { return invoker::Invoke<Any>(0x1F13D5AE5CB17E17); } // 0x1F13D5AE5CB17E17 b1207
	static Any GET_NUM_RESERVED_MISSION_VEHICLES() { return invoker::Invoke<Any>(0xCF3A965906452031); } // 0xCF3A965906452031 b1207
	static Any _0x62BE3ECC79FBD004() { return invoker::Invoke<Any>(0x62BE3ECC79FBD004); } // 0x62BE3ECC79FBD004 b1207
	static Any _0x12B6281B6C6706C0() { return invoker::Invoke<Any>(0x12B6281B6C6706C0); } // 0x12B6281B6C6706C0 b1207
	static Any _0xCB215C4B56A7FAE7() { return invoker::Invoke<Any>(0xCB215C4B56A7FAE7); } // 0xCB215C4B56A7FAE7 b1207
	static Any _0x0CD9AB83489430EA() { return invoker::Invoke<Any>(0x0CD9AB83489430EA); } // 0x0CD9AB83489430EA b1207
	static Any _0xD2BA051B94CA9BCC() { return invoker::Invoke<Any>(0xD2BA051B94CA9BCC); } // 0xD2BA051B94CA9BCC b1207
	static Any _0x5E71E72A94985214() { return invoker::Invoke<Any>(0x5E71E72A94985214); } // 0x5E71E72A94985214 b1207
	static Any _0xC7BE335216B5EC7C() { return invoker::Invoke<Any>(0xC7BE335216B5EC7C); } // 0xC7BE335216B5EC7C b1207
	static Any _0x0C1F7D49C39D2289() { return invoker::Invoke<Any>(0x0C1F7D49C39D2289); } // 0x0C1F7D49C39D2289 b1207
	static Any _0x0AFCE529F69B21FF() { return invoker::Invoke<Any>(0x0AFCE529F69B21FF); } // 0x0AFCE529F69B21FF b1207
	static Any _0xA72835064DD63E4C() { return invoker::Invoke<Any>(0xA72835064DD63E4C); } // 0xA72835064DD63E4C b1207
	static Any _0x75FC34A2BA345BD1() { return invoker::Invoke<Any>(0x75FC34A2BA345BD1); } // 0x75FC34A2BA345BD1 b1207
	static Any _0x979765465A6F25FC() { return invoker::Invoke<Any>(0x979765465A6F25FC); } // 0x979765465A6F25FC b1207
	static Any _0x5133CF81924F1129() { return invoker::Invoke<Any>(0x5133CF81924F1129); } // 0x5133CF81924F1129 b1207
	static Any GET_NETWORK_TIME() { return invoker::Invoke<Any>(0x7A5487FE9FAA6B48); } // 0x7A5487FE9FAA6B48 b1207
	static Any GET_NETWORK_TIME_ACCURATE() { return invoker::Invoke<Any>(0x89023FBBF9200E9F); } // 0x89023FBBF9200E9F b1207
	static Any HAS_NETWORK_TIME_STARTED() { return invoker::Invoke<Any>(0x46718ACEEDEAFC84); } // 0x46718ACEEDEAFC84 b1207
	static Any GET_TIME_OFFSET(Any p0, Any p1) { return invoker::Invoke<Any>(0x017008CCDAD48503, p0, p1); } // 0x017008CCDAD48503 b1207
	static Any IS_TIME_LESS_THAN() { return invoker::Invoke<Any>(0xCB2CF5148012C8D0); } // 0xCB2CF5148012C8D0 b1207
	static Any IS_TIME_MORE_THAN() { return invoker::Invoke<Any>(0xDE350F8651E4346C); } // 0xDE350F8651E4346C b1207
	static Any GET_TIME_DIFFERENCE(Any p0, Any p1) { return invoker::Invoke<Any>(0xA2C6FC031D46FFF0, p0, p1); } // 0xA2C6FC031D46FFF0 b1207
	static Any GET_CLOUD_TIME_AS_INT() { return invoker::Invoke<Any>(0x9A73240B49945C76); } // 0x9A73240B49945C76 b1207
	static Any _GET_DATE_AND_TIME_FROM_UNIX_EPOCH() { return invoker::Invoke<Any>(0xAC97AF97FA68E5D5); } // 0xAC97AF97FA68E5D5 b1207
	static Any NETWORK_SET_IN_SPECTATOR_MODE() { return invoker::Invoke<Any>(0x423DE3854BB50894); } // 0x423DE3854BB50894 b1207
	static Any _0xFBF1ECFB39A77B5F() { return invoker::Invoke<Any>(0xFBF1ECFB39A77B5F); } // 0xFBF1ECFB39A77B5F b1207
	static Any NETWORK_IS_IN_SPECTATOR_MODE() { return invoker::Invoke<Any>(0x048746E388762E11); } // 0x048746E388762E11 b1207
	static Any _0x5B709519997ECF0F() { return invoker::Invoke<Any>(0x5B709519997ECF0F); } // 0x5B709519997ECF0F b1207
	static void NETWORK_SET_IN_MP_CUTSCENE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x9CA5DE655269FEC4, p0, p1, p2, p3); } // 0x9CA5DE655269FEC4 b1207
	static Any NETWORK_IS_IN_MP_CUTSCENE() { return invoker::Invoke<Any>(0x6CC27C9FA2040220); } // 0x6CC27C9FA2040220 b1207
	static Any NETWORK_IS_PLAYER_IN_MP_CUTSCENE() { return invoker::Invoke<Any>(0x63F9EE203C3619F2); } // 0x63F9EE203C3619F2 b1207
	static Any _0x442B4347B6EC36E8() { return invoker::Invoke<Any>(0x442B4347B6EC36E8); } // 0x442B4347B6EC36E8 b1207
	static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(Any p0) { invoker::Invoke<Void>(0x5FFE9B4144F9712F, p0); } // 0x5FFE9B4144F9712F b1207
	static Any _0x21D04D7BC538C146() { return invoker::Invoke<Any>(0x21D04D7BC538C146); } // 0x21D04D7BC538C146 b1207
	static Any _0xDCA6ABDB9288FBE4() { return invoker::Invoke<Any>(0xDCA6ABDB9288FBE4); } // 0xDCA6ABDB9288FBE4 b1207
	static Any _0xEE5AE9956743BA20() { return invoker::Invoke<Any>(0xEE5AE9956743BA20); } // 0xEE5AE9956743BA20 b1207
	static Any _0xFA38B52F91B59075() { return invoker::Invoke<Any>(0xFA38B52F91B59075); } // 0xFA38B52F91B59075 b1207
	static Any _0x42871327315EDAE8() { return invoker::Invoke<Any>(0x42871327315EDAE8); } // 0x42871327315EDAE8 b1207
	static Any _0xEB1A4DD8352EC828() { return invoker::Invoke<Any>(0xEB1A4DD8352EC828); } // 0xEB1A4DD8352EC828 b1207
	static Any _0xFD1AC0B3858F224C() { return invoker::Invoke<Any>(0xFD1AC0B3858F224C); } // 0xFD1AC0B3858F224C b1207
	static Any _0xA63E4F050F20021F() { return invoker::Invoke<Any>(0xA63E4F050F20021F); } // 0xA63E4F050F20021F b1207
	static Any _0xEEB7818B1D307212() { return invoker::Invoke<Any>(0xEEB7818B1D307212); } // 0xEEB7818B1D307212 b1207
	static Any _0xA35E7BF20FA269E0() { return invoker::Invoke<Any>(0xA35E7BF20FA269E0); } // 0xA35E7BF20FA269E0 b1207
	static Any _0x0BF90CBB6B72977B() { return invoker::Invoke<Any>(0x0BF90CBB6B72977B); } // 0x0BF90CBB6B72977B b1207
	static Any _0x7B3FF2D193628126() { return invoker::Invoke<Any>(0x7B3FF2D193628126); } // 0x7B3FF2D193628126 b1207
	static Any _0x19B52C20B5C4757C() { return invoker::Invoke<Any>(0x19B52C20B5C4757C); } // 0x19B52C20B5C4757C b1207
	static Any _0xF94A0D5B254375DF() { return invoker::Invoke<Any>(0xF94A0D5B254375DF); } // 0xF94A0D5B254375DF b1207
	static Any _0x6CEE2E30021DAEC6() { return invoker::Invoke<Any>(0x6CEE2E30021DAEC6); } // 0x6CEE2E30021DAEC6 b1207
	static Any _0x44D59EC597BBF348() { return invoker::Invoke<Any>(0x44D59EC597BBF348); } // 0x44D59EC597BBF348 b1207
	static Any _0xB131E686BD97B3F8() { return invoker::Invoke<Any>(0xB131E686BD97B3F8); } // 0xB131E686BD97B3F8 b1207
	static Any _0xEB6027FD1B4600D5() { return invoker::Invoke<Any>(0xEB6027FD1B4600D5); } // 0xEB6027FD1B4600D5 b1207
	static Any _0x405DDEFB1F531B18() { return invoker::Invoke<Any>(0x405DDEFB1F531B18); } // 0x405DDEFB1F531B18 b1207
	static Any _0x43CF999205084B4B() { return invoker::Invoke<Any>(0x43CF999205084B4B); } // 0x43CF999205084B4B b1207
	static Any _0x13F592FC3BF0EA84() { return invoker::Invoke<Any>(0x13F592FC3BF0EA84); } // 0x13F592FC3BF0EA84 b1207
	static Any _0xCF23AB5BD47B384D() { return invoker::Invoke<Any>(0xCF23AB5BD47B384D); } // 0xCF23AB5BD47B384D b1207
	static Any _0xE5634491A58C2703() { return invoker::Invoke<Any>(0xE5634491A58C2703); } // 0xE5634491A58C2703 b1207
	static Any _0x59577799F6AE2F34() { return invoker::Invoke<Any>(0x59577799F6AE2F34); } // 0x59577799F6AE2F34 b1207
	static Any _0xBDCC671B911040F9() { return invoker::Invoke<Any>(0xBDCC671B911040F9); } // 0xBDCC671B911040F9 b1207
	static Any _0x0608326F7B98C08D() { return invoker::Invoke<Any>(0x0608326F7B98C08D); } // 0x0608326F7B98C08D b1207
	static Any _0x5D3C528B7A7DF836() { return invoker::Invoke<Any>(0x5D3C528B7A7DF836); } // 0x5D3C528B7A7DF836 b1207
	static Any _0x2686BD9566B65EDA() { return invoker::Invoke<Any>(0x2686BD9566B65EDA); } // 0x2686BD9566B65EDA b1207
	static Any _0xBB1EC8C2EEF33BAA() { return invoker::Invoke<Any>(0xBB1EC8C2EEF33BAA); } // 0xBB1EC8C2EEF33BAA b1207
	static Any _0x67CCDF74C4DF7169() { return invoker::Invoke<Any>(0x67CCDF74C4DF7169); } // 0x67CCDF74C4DF7169 b1207
	static Any _0xC8B6D18E22484643() { return invoker::Invoke<Any>(0xC8B6D18E22484643); } // 0xC8B6D18E22484643 b1207
	static Any _0x97BCE4C4B3191228() { return invoker::Invoke<Any>(0x97BCE4C4B3191228); } // 0x97BCE4C4B3191228 b1207
	static Any _0x41452E8A3B9C0C4B() { return invoker::Invoke<Any>(0x41452E8A3B9C0C4B); } // 0x41452E8A3B9C0C4B b1207
	static Any _0x89EC2FC89ECB1005() { return invoker::Invoke<Any>(0x89EC2FC89ECB1005); } // 0x89EC2FC89ECB1005 b1207
	static Any _0x61BFBAA795E712AD() { return invoker::Invoke<Any>(0x61BFBAA795E712AD); } // 0x61BFBAA795E712AD b1207
	static Any _0x765E60A1DCB8B1CE() { return invoker::Invoke<Any>(0x765E60A1DCB8B1CE); } // 0x765E60A1DCB8B1CE b1207
	static Any _0x691E4DE5309EAEFC() { return invoker::Invoke<Any>(0x691E4DE5309EAEFC); } // 0x691E4DE5309EAEFC b1207
	static void _0x17E0198B3882C2CB() { invoker::Invoke<Void>(0x17E0198B3882C2CB); } // 0x17E0198B3882C2CB b1207
	static void NETWORK_END_TUTORIAL_SESSION() { invoker::Invoke<Void>(0xD0AFAFF5A51D72F7); } // 0xD0AFAFF5A51D72F7 b1207
	static Any NETWORK_IS_IN_TUTORIAL_SESSION() { return invoker::Invoke<Any>(0xADA24309FE08DACF); } // 0xADA24309FE08DACF b1207
	static Any _0x35F0B98A8387274D() { return invoker::Invoke<Any>(0x35F0B98A8387274D); } // 0x35F0B98A8387274D b1207
	static Any _0x3B39236746714134() { return invoker::Invoke<Any>(0x3B39236746714134); } // 0x3B39236746714134 b1207
	static Any _NETWORK_IS_PLAYER_EQUAL_TO_INDEX() { return invoker::Invoke<Any>(0x9DE986FC9A87C474); } // 0x9DE986FC9A87C474 b1207
	static Any _0x4B05B97BA46F419D() { return invoker::Invoke<Any>(0x4B05B97BA46F419D); } // 0x4B05B97BA46F419D b1207
	static Any _0xF3354D6CA46F419D() { return invoker::Invoke<Any>(0xF3354D6CA46F419D); } // 0xF3354D6CA46F419D b1207
	static Any _0xDC6AD5C046F33AB4() { return invoker::Invoke<Any>(0xDC6AD5C046F33AB4); } // 0xDC6AD5C046F33AB4 b1207
	static Any _0x6C7E04E9DE451789() { return invoker::Invoke<Any>(0x6C7E04E9DE451789); } // 0x6C7E04E9DE451789 b1207
	static Any _0x007FF852DCF49DA4() { return invoker::Invoke<Any>(0x007FF852DCF49DA4); } // 0x007FF852DCF49DA4 b1207
	static Any _0xD9267375834C5EAB() { return invoker::Invoke<Any>(0xD9267375834C5EAB); } // 0xD9267375834C5EAB b1207
	static Any _0xBBDF066252829606() { return invoker::Invoke<Any>(0xBBDF066252829606); } // 0xBBDF066252829606 b1207
	static Any _0x919B3C98ED8292F9() { return invoker::Invoke<Any>(0x919B3C98ED8292F9); } // 0x919B3C98ED8292F9 b1207
	static Any _HAS_TUNABLES_BEEN_DOWNLOADED() { return invoker::Invoke<Any>(0x0467C11ED88B7D28); } // 0x0467C11ED88B7D28 b1207
	static Any NETWORK_DOES_TUNABLE_EXIST() { return invoker::Invoke<Any>(0x85E5F8B9B898B20A); } // 0x85E5F8B9B898B20A b1207
	static Any NETWORK_ACCESS_TUNABLE_INT() { return invoker::Invoke<Any>(0x8BE1146DFD5D4468); } // 0x8BE1146DFD5D4468 b1207
	static Any NETWORK_ACCESS_TUNABLE_BOOL() { return invoker::Invoke<Any>(0xAA6A47A573ABB75A); } // 0xAA6A47A573ABB75A b1207
	static Any _0xA25E006B36719774() { return invoker::Invoke<Any>(0xA25E006B36719774); } // 0xA25E006B36719774 b1207
	static Any _0xA18393089C05E49C() { return invoker::Invoke<Any>(0xA18393089C05E49C); } // 0xA18393089C05E49C b1207
	static Any _0xB2AD5D29A99D4B26() { return invoker::Invoke<Any>(0xB2AD5D29A99D4B26); } // 0xB2AD5D29A99D4B26 b1207
	static Any _0x894B5ECAB45D2342() { return invoker::Invoke<Any>(0x894B5ECAB45D2342); } // 0x894B5ECAB45D2342 b1207
	static Any _0x407091CF6037118E() { return invoker::Invoke<Any>(0x407091CF6037118E); } // 0x407091CF6037118E b1207
	static Any _0x4C61B39930D045DA() { return invoker::Invoke<Any>(0x4C61B39930D045DA); } // 0x4C61B39930D045DA b1207
	static Any _0x3A3D5568AF297CD5() { return invoker::Invoke<Any>(0x3A3D5568AF297CD5); } // 0x3A3D5568AF297CD5 b1207
	static Any _0x02E97CE283648CD9(Any p0) { return invoker::Invoke<Any>(0x02E97CE283648CD9, p0); } // 0x02E97CE283648CD9 b1207
	static Any _0x65E65CA6A0FE59D4(Any p0) { return invoker::Invoke<Any>(0x65E65CA6A0FE59D4, p0); } // 0x65E65CA6A0FE59D4 b1207
	static Any _0x668AF6E4933AC13F() { return invoker::Invoke<Any>(0x668AF6E4933AC13F); } // 0x668AF6E4933AC13F b1207
	static Any _0x782C94DB6469634D() { return invoker::Invoke<Any>(0x782C94DB6469634D); } // 0x782C94DB6469634D b1207
	static Any _0xC59AB6A04333C502() { return invoker::Invoke<Any>(0xC59AB6A04333C502); } // 0xC59AB6A04333C502 b1207
	static Any _0xDFFC15AA63D04AAB() { return invoker::Invoke<Any>(0xDFFC15AA63D04AAB); } // 0xDFFC15AA63D04AAB b1207
	static void _0x966DD84FB6A46017() { invoker::Invoke<Void>(0x966DD84FB6A46017); } // 0x966DD84FB6A46017 b1207
	static Any _0xF4AC4FA844FD559A() { return invoker::Invoke<Any>(0xF4AC4FA844FD559A); } // 0xF4AC4FA844FD559A b1207
	static Any _0xA9EB4D606076615D() { return invoker::Invoke<Any>(0xA9EB4D606076615D); } // 0xA9EB4D606076615D b1207
	static Any _0x0B6009A90B8495F1() { return invoker::Invoke<Any>(0x0B6009A90B8495F1); } // 0x0B6009A90B8495F1 b1207
	static Any _0xCD53E6CBF609C012() { return invoker::Invoke<Any>(0xCD53E6CBF609C012); } // 0xCD53E6CBF609C012 b1207
	static Any _0xF40EF49B3099E98E() { return invoker::Invoke<Any>(0xF40EF49B3099E98E); } // 0xF40EF49B3099E98E b1207
	static Any _0x8C109958C9BB559D() { return invoker::Invoke<Any>(0x8C109958C9BB559D); } // 0x8C109958C9BB559D b1207
	static Any _0x69D22E183580113F() { return invoker::Invoke<Any>(0x69D22E183580113F); } // 0x69D22E183580113F b1207
	static Any _0xE931354FEA710038() { return invoker::Invoke<Any>(0xE931354FEA710038); } // 0xE931354FEA710038 b1207
	static Any _0xF8F0705E77A0E705() { return invoker::Invoke<Any>(0xF8F0705E77A0E705); } // 0xF8F0705E77A0E705 b1207
	static Any _0x76160E0396142765() { return invoker::Invoke<Any>(0x76160E0396142765); } // 0x76160E0396142765 b1207
	static Any _0xADB56322EEDFBDC9() { return invoker::Invoke<Any>(0xADB56322EEDFBDC9); } // 0xADB56322EEDFBDC9 b1207
	static Any _0xF9F0B3028431967B() { return invoker::Invoke<Any>(0xF9F0B3028431967B); } // 0xF9F0B3028431967B b1207
	static Any _0x2D053EA815702DD1() { return invoker::Invoke<Any>(0x2D053EA815702DD1); } // 0x2D053EA815702DD1 b1207
	static Any _0x566CEB0542EF5ECF() { return invoker::Invoke<Any>(0x566CEB0542EF5ECF); } // 0x566CEB0542EF5ECF b1207
	static Any _0xCAF50048C8D0FBA0() { return invoker::Invoke<Any>(0xCAF50048C8D0FBA0); } // 0xCAF50048C8D0FBA0 b1207
	static Any _0xA6BF569956C60A60() { return invoker::Invoke<Any>(0xA6BF569956C60A60); } // 0xA6BF569956C60A60 b1207
	static Any _0x409FE0CA6A4D1D49() { return invoker::Invoke<Any>(0x409FE0CA6A4D1D49); } // 0x409FE0CA6A4D1D49 b1207
	static Any _0xE0CB4AB15CB32710() { return invoker::Invoke<Any>(0xE0CB4AB15CB32710); } // 0xE0CB4AB15CB32710 b1207
	static Any _0x21A99A72B00D8002() { return invoker::Invoke<Any>(0x21A99A72B00D8002); } // 0x21A99A72B00D8002 b1207
	static Any _0x104080CA9E519B00() { return invoker::Invoke<Any>(0x104080CA9E519B00); } // 0x104080CA9E519B00 b1207
	static Any _0x63E9DCBC8B0931ED() { return invoker::Invoke<Any>(0x63E9DCBC8B0931ED); } // 0x63E9DCBC8B0931ED b1207
	static Any _0x97764E8AC6487A9A() { return invoker::Invoke<Any>(0x97764E8AC6487A9A); } // 0x97764E8AC6487A9A b1207
	static Any _0x9993F1E11944A3DD() { return invoker::Invoke<Any>(0x9993F1E11944A3DD); } // 0x9993F1E11944A3DD b1207
	static Any _0x24CD8FAEA1368379() { return invoker::Invoke<Any>(0x24CD8FAEA1368379); } // 0x24CD8FAEA1368379 b1207
	static Any _0x5F0E99071582DECA() { return invoker::Invoke<Any>(0x5F0E99071582DECA); } // 0x5F0E99071582DECA b1207
	static Any _0xF794765390A6DCA5() { return invoker::Invoke<Any>(0xF794765390A6DCA5); } // 0xF794765390A6DCA5 b1207
	static Any _0x98539FC453AEA639() { return invoker::Invoke<Any>(0x98539FC453AEA639); } // 0x98539FC453AEA639 b1207
	static Any _0x6506BFA755FB209C() { return invoker::Invoke<Any>(0x6506BFA755FB209C); } // 0x6506BFA755FB209C b1207
	static Any _0x7FD2990AF016795E() { return invoker::Invoke<Any>(0x7FD2990AF016795E); } // 0x7FD2990AF016795E b1207
	static Any _0x5E0165278F6339EE() { return invoker::Invoke<Any>(0x5E0165278F6339EE); } // 0x5E0165278F6339EE b1207
	static Any _0x2D5DC831176D0114() { return invoker::Invoke<Any>(0x2D5DC831176D0114); } // 0x2D5DC831176D0114 b1207
	static Any _0xEBFA8D50ADDC54C4() { return invoker::Invoke<Any>(0xEBFA8D50ADDC54C4); } // 0xEBFA8D50ADDC54C4 b1207
	static Any _0x162C23CA83ED0A62() { return invoker::Invoke<Any>(0x162C23CA83ED0A62); } // 0x162C23CA83ED0A62 b1207
	static Any _0x40F7E66472DF3E5C() { return invoker::Invoke<Any>(0x40F7E66472DF3E5C); } // 0x40F7E66472DF3E5C b1207
	static Any _0x5A34CD9C3C5BEC44() { return invoker::Invoke<Any>(0x5A34CD9C3C5BEC44); } // 0x5A34CD9C3C5BEC44 b1207
	static Any _0x68103E2247887242() { return invoker::Invoke<Any>(0x68103E2247887242); } // 0x68103E2247887242 b1207
	static Any _0xF98DDE0A8ED09323() { return invoker::Invoke<Any>(0xF98DDE0A8ED09323); } // 0xF98DDE0A8ED09323 b1207
	static Any _0xF53E48461B71EECB() { return invoker::Invoke<Any>(0xF53E48461B71EECB); } // 0xF53E48461B71EECB b1207
	static Any _0xD4022C7286B0DFA2() { return invoker::Invoke<Any>(0xD4022C7286B0DFA2); } // 0xD4022C7286B0DFA2 b1207
	static Any _0xB72999D3120599DF() { return invoker::Invoke<Any>(0xB72999D3120599DF); } // 0xB72999D3120599DF b1207
	static Any _0x2A48D9567940598F() { return invoker::Invoke<Any>(0x2A48D9567940598F); } // 0x2A48D9567940598F b1207
	static Any _0xA21E3BAD0A42D199() { return invoker::Invoke<Any>(0xA21E3BAD0A42D199); } // 0xA21E3BAD0A42D199 b1207
	static Any _0xCC4E72C339461ED1() { return invoker::Invoke<Any>(0xCC4E72C339461ED1); } // 0xCC4E72C339461ED1 b1207
	static Any _0x356F9FB0698C1FEB() { return invoker::Invoke<Any>(0x356F9FB0698C1FEB); } // 0x356F9FB0698C1FEB b1207
	static Any _0xCAF4CA2F87779F8F() { return invoker::Invoke<Any>(0xCAF4CA2F87779F8F); } // 0xCAF4CA2F87779F8F b1207
	static Any _0xB5C4B18B12A2AF23() { return invoker::Invoke<Any>(0xB5C4B18B12A2AF23); } // 0xB5C4B18B12A2AF23 b1207
	static Any _0xE2C3CEC3C0903A00() { return invoker::Invoke<Any>(0xE2C3CEC3C0903A00); } // 0xE2C3CEC3C0903A00 b1207
	static Any TEXTURE_DOWNLOAD_REQUEST(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x16160DA74A8E74A2, p0, p1, p2, p3); } // 0x16160DA74A8E74A2 b1207
	static Any _0x9B5DB6CEAFAA10BB() { return invoker::Invoke<Any>(0x9B5DB6CEAFAA10BB); } // 0x9B5DB6CEAFAA10BB b1207
	static Any _0x308F96458B7087CC() { return invoker::Invoke<Any>(0x308F96458B7087CC); } // 0x308F96458B7087CC b1207
	static Any _0x6E2FD8CF7EB10E53() { return invoker::Invoke<Any>(0x6E2FD8CF7EB10E53); } // 0x6E2FD8CF7EB10E53 b1207
	static void TEXTURE_DOWNLOAD_RELEASE(Any p0) { invoker::Invoke<Void>(0x487EB90B98E9FB19, p0); } // 0x487EB90B98E9FB19 b1207
	static Any _0x7A17B7981560FFA5() { return invoker::Invoke<Any>(0x7A17B7981560FFA5); } // 0x7A17B7981560FFA5 b1207
	static Any TEXTURE_DOWNLOAD_GET_NAME(Any p0) { return invoker::Invoke<Any>(0x3448505B6E35262D, p0); } // 0x3448505B6E35262D b1207
	static Any _GET_STATUS_OF_TEXTURE_DOWNLOAD(Any p0) { return invoker::Invoke<Any>(0x8BD6C6DEA20E82C6, p0); } // 0x8BD6C6DEA20E82C6 b1207
	static Any _0xCBAC13F065C47596() { return invoker::Invoke<Any>(0xCBAC13F065C47596); } // 0xCBAC13F065C47596 b1207
	static Any _0xCD954F330693F5F2() { return invoker::Invoke<Any>(0xCD954F330693F5F2); } // 0xCD954F330693F5F2 b1207
	static Any _0xFBC30B70B3CDB87E() { return invoker::Invoke<Any>(0xFBC30B70B3CDB87E); } // 0xFBC30B70B3CDB87E b1207
	static Any _0x814729078AED6D30() { return invoker::Invoke<Any>(0x814729078AED6D30); } // 0x814729078AED6D30 b1207
	static Any _IS_ROCKSTAR_BANNED() { return invoker::Invoke<Any>(0x8020A73847E0CA7D); } // 0x8020A73847E0CA7D b1207
	static Any _0xA699957E60D80214() { return invoker::Invoke<Any>(0xA699957E60D80214); } // 0xA699957E60D80214 b1207
	static Any _0xDEB2B99A1AF1A2A6() { return invoker::Invoke<Any>(0xDEB2B99A1AF1A2A6); } // 0xDEB2B99A1AF1A2A6 b1207
	static Any _0x0A428058079EE65C() { return invoker::Invoke<Any>(0x0A428058079EE65C); } // 0x0A428058079EE65C b1207
	static Any _0xAADED99A6B268A27() { return invoker::Invoke<Any>(0xAADED99A6B268A27); } // 0xAADED99A6B268A27 b1207
	static Any _0x63246A24F5747510() { return invoker::Invoke<Any>(0x63246A24F5747510); } // 0x63246A24F5747510 b1207
	static Any _0xE258570E0C116A66() { return invoker::Invoke<Any>(0xE258570E0C116A66); } // 0xE258570E0C116A66 b1207
	static Any _0x4440FEE3EFE78F54() { return invoker::Invoke<Any>(0x4440FEE3EFE78F54); } // 0x4440FEE3EFE78F54 b1207
	static Any _0xE404BFF0ABA23CDC() { return invoker::Invoke<Any>(0xE404BFF0ABA23CDC); } // 0xE404BFF0ABA23CDC b1207
	static Any _0xC223D299C670413D() { return invoker::Invoke<Any>(0xC223D299C670413D); } // 0xC223D299C670413D b1207
	static Any _0xA021095C983F20D8() { return invoker::Invoke<Any>(0xA021095C983F20D8); } // 0xA021095C983F20D8 b1207
	static Any _0x6D87BA8EF15226CD() { return invoker::Invoke<Any>(0x6D87BA8EF15226CD); } // 0x6D87BA8EF15226CD b1207
	static Any _0x277865A734918AE6() { return invoker::Invoke<Any>(0x277865A734918AE6); } // 0x277865A734918AE6 b1207
	static Any _0xBB51299166B844F3() { return invoker::Invoke<Any>(0xBB51299166B844F3); } // 0xBB51299166B844F3 b1207
	static void _0x5A91BCEF74944E93(Any p0, Any p1) { invoker::Invoke<Void>(0x5A91BCEF74944E93, p0, p1); } // 0x5A91BCEF74944E93 b1207
	static Any _0x0E2C3AEE6CE603B7() { return invoker::Invoke<Any>(0x0E2C3AEE6CE603B7); } // 0x0E2C3AEE6CE603B7 b1207
	static Any _0x0B6B4507AC5EA8B8() { return invoker::Invoke<Any>(0x0B6B4507AC5EA8B8); } // 0x0B6B4507AC5EA8B8 b1207
	static Any _0x1BB50CD340A996E6() { return invoker::Invoke<Any>(0x1BB50CD340A996E6); } // 0x1BB50CD340A996E6 b1207
	static Any _0x101F538C25ABB39A() { return invoker::Invoke<Any>(0x101F538C25ABB39A); } // 0x101F538C25ABB39A b1207
	static void _0xC505036A35AFD01B(Any p0) { invoker::Invoke<Void>(0xC505036A35AFD01B, p0); } // 0xC505036A35AFD01B b1207
	static Any _0x3034C77C79A58880() { return invoker::Invoke<Any>(0x3034C77C79A58880); } // 0x3034C77C79A58880 b1207
	static Any _0x267C78C60E806B9A() { return invoker::Invoke<Any>(0x267C78C60E806B9A); } // 0x267C78C60E806B9A b1207
	static Any _0x6BFF5F84102DF80A() { return invoker::Invoke<Any>(0x6BFF5F84102DF80A); } // 0x6BFF5F84102DF80A b1207
	static void _0x5C497525F803486B() { invoker::Invoke<Void>(0x5C497525F803486B); } // 0x5C497525F803486B b1207
	static Any _0x16D3D49902F697BB() { return invoker::Invoke<Any>(0x16D3D49902F697BB); } // 0x16D3D49902F697BB b1207
	static Any _0xD414BE129BB81B32() { return invoker::Invoke<Any>(0xD414BE129BB81B32); } // 0xD414BE129BB81B32 b1207
	static Any _0x0E3A041ED6AC2B45() { return invoker::Invoke<Any>(0x0E3A041ED6AC2B45); } // 0x0E3A041ED6AC2B45 b1207
	static Any _0x350C23949E43686C() { return invoker::Invoke<Any>(0x350C23949E43686C); } // 0x350C23949E43686C b1207
	static Any _0xFF8FCF9FFC458A1C() { return invoker::Invoke<Any>(0xFF8FCF9FFC458A1C); } // 0xFF8FCF9FFC458A1C b1207
	static Any _0x3765C3A3E8192E10() { return invoker::Invoke<Any>(0x3765C3A3E8192E10); } // 0x3765C3A3E8192E10 b1207
	static Any _0x52C1EADAF7B10302() { return invoker::Invoke<Any>(0x52C1EADAF7B10302); } // 0x52C1EADAF7B10302 b1207
	static Any _0xAEDF1BC1C133D6E3() { return invoker::Invoke<Any>(0xAEDF1BC1C133D6E3); } // 0xAEDF1BC1C133D6E3 b1207
	static Any _0x6FD992C4A1C1B986() { return invoker::Invoke<Any>(0x6FD992C4A1C1B986); } // 0x6FD992C4A1C1B986 b1207
	static Any _0x255A5EF65EDA9167(Any p0) { return invoker::Invoke<Any>(0x255A5EF65EDA9167, p0); } // 0x255A5EF65EDA9167 b1207
	static Any _0xDCC4B7F7112E8AB7() { return invoker::Invoke<Any>(0xDCC4B7F7112E8AB7); } // 0xDCC4B7F7112E8AB7 b1207
	static Any _0x455156F47DC6B78C() { return invoker::Invoke<Any>(0x455156F47DC6B78C); } // 0x455156F47DC6B78C b1207
	static Any _0xD041A32992A55F84() { return invoker::Invoke<Any>(0xD041A32992A55F84); } // 0xD041A32992A55F84 b1207
	static Any _0x0C8BC052AE87D744() { return invoker::Invoke<Any>(0x0C8BC052AE87D744); } // 0x0C8BC052AE87D744 b1207
	static Any _0x5CD3AAD8FF9ED121() { return invoker::Invoke<Any>(0x5CD3AAD8FF9ED121); } // 0x5CD3AAD8FF9ED121 b1207
	static void _0x51951DE06C0D1C40(Any p0, Any p1) { invoker::Invoke<Void>(0x51951DE06C0D1C40, p0, p1); } // 0x51951DE06C0D1C40 b1207
	static Any _0xE3AB5EEFCB6671A2() { return invoker::Invoke<Any>(0xE3AB5EEFCB6671A2); } // 0xE3AB5EEFCB6671A2 b1207
	static Any _0x9B39B0555CC692B5() { return invoker::Invoke<Any>(0x9B39B0555CC692B5); } // 0x9B39B0555CC692B5 b1207
	static Any _0xFE53B1F8D43F19BF(Any p0, Any p1) { return invoker::Invoke<Any>(0xFE53B1F8D43F19BF, p0, p1); } // 0xFE53B1F8D43F19BF b1207
	static Any _0x862C5040F4888741() { return invoker::Invoke<Any>(0x862C5040F4888741); } // 0x862C5040F4888741 b1207
	static Any _0x2CD41AC000E6F611() { return invoker::Invoke<Any>(0x2CD41AC000E6F611); } // 0x2CD41AC000E6F611 b1207
	static Any _0xACC44768AF229042() { return invoker::Invoke<Any>(0xACC44768AF229042); } // 0xACC44768AF229042 b1207
	static Any _0x7E300B5B86AB1D1A() { return invoker::Invoke<Any>(0x7E300B5B86AB1D1A); } // 0x7E300B5B86AB1D1A b1207
	static Any _0x07F723401B9D921C() { return invoker::Invoke<Any>(0x07F723401B9D921C); } // 0x07F723401B9D921C b1207
	static Any _0xE525878A35B9EEBD() { return invoker::Invoke<Any>(0xE525878A35B9EEBD); } // 0xE525878A35B9EEBD b1207
	static Any _0x8E7CE19219669AEB() { return invoker::Invoke<Any>(0x8E7CE19219669AEB); } // 0x8E7CE19219669AEB b1207
	static Any _0x2C4E98DDA475364F() { return invoker::Invoke<Any>(0x2C4E98DDA475364F); } // 0x2C4E98DDA475364F b1207
	static Any _0x3F0ABAE38A0515AD() { return invoker::Invoke<Any>(0x3F0ABAE38A0515AD); } // 0x3F0ABAE38A0515AD b1207
	static Any _0x3F2EE18A3E294801() { return invoker::Invoke<Any>(0x3F2EE18A3E294801); } // 0x3F2EE18A3E294801 b1207
	static Any _0x777D0571A466B520() { return invoker::Invoke<Any>(0x777D0571A466B520); } // 0x777D0571A466B520 b1207
	static Any _0xD0541EF28E9C4783() { return invoker::Invoke<Any>(0xD0541EF28E9C4783); } // 0xD0541EF28E9C4783 b1207
	static Any _0xFBE782B3165AC8EC(Any p0) { return invoker::Invoke<Any>(0xFBE782B3165AC8EC, p0); } // 0xFBE782B3165AC8EC b1207
	static Any _0x271F95E55C663B8B(Any p0, Any p1) { return invoker::Invoke<Any>(0x271F95E55C663B8B, p0, p1); } // 0x271F95E55C663B8B b1207
	static Any _0x64A36BA85CE01A81() { return invoker::Invoke<Any>(0x64A36BA85CE01A81); } // 0x64A36BA85CE01A81 b1207
	static Any _0xE10F2D7715ABABEC() { return invoker::Invoke<Any>(0xE10F2D7715ABABEC); } // 0xE10F2D7715ABABEC b1207
	static Any _0x7A8E8DF782B47EB0() { return invoker::Invoke<Any>(0x7A8E8DF782B47EB0); } // 0x7A8E8DF782B47EB0 b1207
	static Any _0x77B299E8799B1332(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x77B299E8799B1332, p0, p1, p2); } // 0x77B299E8799B1332 b1207
	static Any _0x923346025512DFB7() { return invoker::Invoke<Any>(0x923346025512DFB7); } // 0x923346025512DFB7 b1207
	static Any _0xDB438CC9BC6F4022() { return invoker::Invoke<Any>(0xDB438CC9BC6F4022); } // 0xDB438CC9BC6F4022 b1207
	static Any _0x32C90CDFAF40514C() { return invoker::Invoke<Any>(0x32C90CDFAF40514C); } // 0x32C90CDFAF40514C b1207
	static Any _0x29FE035D35B8589C() { return invoker::Invoke<Any>(0x29FE035D35B8589C); } // 0x29FE035D35B8589C b1207
	static Any _0x273E04A3A7AD1F2D() { return invoker::Invoke<Any>(0x273E04A3A7AD1F2D); } // 0x273E04A3A7AD1F2D b1207
	static Any _0x157D8F3DE12B307F() { return invoker::Invoke<Any>(0x157D8F3DE12B307F); } // 0x157D8F3DE12B307F b1207
	static Any _0x6D206D383BB5F6B1() { return invoker::Invoke<Any>(0x6D206D383BB5F6B1); } // 0x6D206D383BB5F6B1 b1207
	static Any _0x4664D213A0CCAF40() { return invoker::Invoke<Any>(0x4664D213A0CCAF40); } // 0x4664D213A0CCAF40 b1207
	static Any _0x12AEB56B489415C5() { return invoker::Invoke<Any>(0x12AEB56B489415C5); } // 0x12AEB56B489415C5 b1207
	static Any _0x37A834AEC6A4F74A() { return invoker::Invoke<Any>(0x37A834AEC6A4F74A); } // 0x37A834AEC6A4F74A b1207
	static Any _0xFEFCC345CE357453() { return invoker::Invoke<Any>(0xFEFCC345CE357453); } // 0xFEFCC345CE357453 b1207
	static void _0x49CF17A564918E8D() { invoker::Invoke<Void>(0x49CF17A564918E8D); } // 0x49CF17A564918E8D b1207
	static Any _0xD637D327080CD86E() { return invoker::Invoke<Any>(0xD637D327080CD86E); } // 0xD637D327080CD86E b1207
	static Any _0x564552C6AF1EEAB1() { return invoker::Invoke<Any>(0x564552C6AF1EEAB1); } // 0x564552C6AF1EEAB1 b1207
	static Any _0x3FE141FDB990E3D1() { return invoker::Invoke<Any>(0x3FE141FDB990E3D1); } // 0x3FE141FDB990E3D1 b1207
	static Any _0x9ADAC065D9F6706F() { return invoker::Invoke<Any>(0x9ADAC065D9F6706F); } // 0x9ADAC065D9F6706F b1207
	static Any _0xAC6153A0722F524C() { return invoker::Invoke<Any>(0xAC6153A0722F524C); } // 0xAC6153A0722F524C b1207
	static Any _0xA197C35F73AC0F12() { return invoker::Invoke<Any>(0xA197C35F73AC0F12); } // 0xA197C35F73AC0F12 b1207
}

namespace OBJECT
{
	static Any CREATE_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x509D5878EB39E842, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x509D5878EB39E842 b1207
	static Any CREATE_OBJECT_NO_OFFSET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x9A294B2138ABB884, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x9A294B2138ABB884 b1207
	static void DELETE_OBJECT(Any p0) { invoker::Invoke<Void>(0x931914268722C263, p0); } // 0x931914268722C263 b1207
	static Any PLACE_OBJECT_ON_GROUND_PROPERLY(Any p0, Any p1) { return invoker::Invoke<Any>(0x58A850EAEE20FAA3, p0, p1); } // 0x58A850EAEE20FAA3 b1207
	static Any SLIDE_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x2FDFF4107B8C1147, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x2FDFF4107B8C1147 b1207
	static void SET_OBJECT_TARGETTABLE(Any p0, Any p1) { invoker::Invoke<Void>(0x8A7391690F5AFD81, p0, p1); } // 0x8A7391690F5AFD81 b1207
	static Any _0x581EDBE56E8D62C9() { return invoker::Invoke<Any>(0x581EDBE56E8D62C9); } // 0x581EDBE56E8D62C9 b1207
	static void _0xA22712E8471AA08E(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA22712E8471AA08E, p0, p1, p2); } // 0xA22712E8471AA08E b1207
	static Any _0xF6E88489B4E6EBE5() { return invoker::Invoke<Any>(0xF6E88489B4E6EBE5); } // 0xF6E88489B4E6EBE5 b1207
	static void _0xE157A8A336C7F04A(Any p0, Any p1) { invoker::Invoke<Void>(0xE157A8A336C7F04A, p0, p1); } // 0xE157A8A336C7F04A b1207
	static Any _0x46CBCF0E98A4E156() { return invoker::Invoke<Any>(0x46CBCF0E98A4E156); } // 0x46CBCF0E98A4E156 b1207
	static Any GET_CLOSEST_OBJECT_OF_TYPE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0xE143FA2249364369, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xE143FA2249364369 b1207
	static Any HAS_OBJECT_BEEN_BROKEN(Any p0) { return invoker::Invoke<Any>(0x8ABFB70C49CC43E2, p0); } // 0x8ABFB70C49CC43E2 b1207
	static Any HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x761B0E69AC4D007E, p0, p1, p2, p3, p4, p5); } // 0x761B0E69AC4D007E b1207
	static Any _GET_OBJECT_OFFSET_FROM_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x163E252DE035A133, p0, p1, p2, p3, p4, p5, p6); } // 0x163E252DE035A133 b1207
	static void _0xD99229FE93B46286(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xD99229FE93B46286, p0, p1, p2, p3, p4, p5); } // 0xD99229FE93B46286 b1207
	static Any _0xB5DED7B65C604FDF(Any p0) { return invoker::Invoke<Any>(0xB5DED7B65C604FDF, p0); } // 0xB5DED7B65C604FDF b1207
	static void REMOVE_DOOR_FROM_SYSTEM(Any p0) { invoker::Invoke<Void>(0x464D8E1427156FE4, p0); } // 0x464D8E1427156FE4 b1207
	static void DOOR_SYSTEM_SET_DOOR_STATE(Any p0, Any p1) { invoker::Invoke<Void>(0x6BAB9442830C7F53, p0, p1); } // 0x6BAB9442830C7F53 b1207
	static Any DOOR_SYSTEM_GET_DOOR_STATE(Any p0) { return invoker::Invoke<Any>(0x160AA1B32F6139B8, p0); } // 0x160AA1B32F6139B8 b1207
	static void DOOR_SYSTEM_SET_AUTOMATIC_RATE(Any p0, Any p1) { invoker::Invoke<Void>(0x03C27E13B42A0E82, p0, p1); } // 0x03C27E13B42A0E82 b1207
	static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Any p0, Any p1) { invoker::Invoke<Void>(0x9BA001CB45CBF627, p0, p1); } // 0x9BA001CB45CBF627 b1207
	static void _0xB3B1546D23DF8DE1(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xB3B1546D23DF8DE1, p0, p1, p2, p3, p4); } // 0xB3B1546D23DF8DE1 b1207
	static void DOOR_SYSTEM_SET_OPEN_RATIO(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xB6E6FBA95C7324AC, p0, p1, p2); } // 0xB6E6FBA95C7324AC b1207
	static void _0x3A77DAE8B4FD7586(Any p0, Any p1) { invoker::Invoke<Void>(0x3A77DAE8B4FD7586, p0, p1); } // 0x3A77DAE8B4FD7586 b1207
	static void _0x1F1FABFE9B2A1254(Any p0, Any p1) { invoker::Invoke<Void>(0x1F1FABFE9B2A1254, p0, p1); } // 0x1F1FABFE9B2A1254 b1207
	static Any _0x4F89DAD4156BA145() { return invoker::Invoke<Any>(0x4F89DAD4156BA145); } // 0x4F89DAD4156BA145 b1207
	static Any _0x985767F5FA45BC44() { return invoker::Invoke<Any>(0x985767F5FA45BC44); } // 0x985767F5FA45BC44 b1207
	static Any _0x8433E1954BE323FC(Any p0) { return invoker::Invoke<Any>(0x8433E1954BE323FC, p0); } // 0x8433E1954BE323FC b1207
	static Any _0x6E2AA80BB0C03728(Any p0, Any p1) { return invoker::Invoke<Any>(0x6E2AA80BB0C03728, p0, p1); } // 0x6E2AA80BB0C03728 b1207
	static void _0x1BC47A9DEDC8DF5D(Any p0, Any p1) { invoker::Invoke<Void>(0x1BC47A9DEDC8DF5D, p0, p1); } // 0x1BC47A9DEDC8DF5D b1207
	static Any DOOR_SYSTEM_GET_OPEN_RATIO(Any p0) { return invoker::Invoke<Any>(0x65499865FCA6E5EC, p0); } // 0x65499865FCA6E5EC b1207
	static void _0x7F458B543006C8FE(Any p0, Any p1) { invoker::Invoke<Void>(0x7F458B543006C8FE, p0, p1); } // 0x7F458B543006C8FE b1207
	static Any _0xACD4F9831DFAD7F5(Any p0) { return invoker::Invoke<Any>(0xACD4F9831DFAD7F5, p0); } // 0xACD4F9831DFAD7F5 b1207
	static void _0x0C0A373D181BF900(Any p0) { invoker::Invoke<Void>(0x0C0A373D181BF900, p0); } // 0x0C0A373D181BF900 b1207
	static void _0xA93F925F1942E434(Any p0, Any p1) { invoker::Invoke<Void>(0xA93F925F1942E434, p0, p1); } // 0xA93F925F1942E434 b1207
	static Any _0x4D8611DFE1126478(Any p0) { return invoker::Invoke<Any>(0x4D8611DFE1126478, p0); } // 0x4D8611DFE1126478 b1207
	static void _0x57C242543B7B8FB9(Any p0, Any p1) { invoker::Invoke<Void>(0x57C242543B7B8FB9, p0, p1); } // 0x57C242543B7B8FB9 b1207
	static void _0x4AE07EBA3462C5D5(Any p0, Any p1) { invoker::Invoke<Void>(0x4AE07EBA3462C5D5, p0, p1); } // 0x4AE07EBA3462C5D5 b1207
	static void _0x22031584496CFB70(Any p0, Any p1) { invoker::Invoke<Void>(0x22031584496CFB70, p0, p1); } // 0x22031584496CFB70 b1207
	static void _0xC07B91B996C1DE89(Any p0, Any p1) { invoker::Invoke<Void>(0xC07B91B996C1DE89, p0, p1); } // 0xC07B91B996C1DE89 b1207
	static Any IS_DOOR_REGISTERED_WITH_SYSTEM(Any p0) { return invoker::Invoke<Any>(0xC153C43EA202C8C1, p0); } // 0xC153C43EA202C8C1 b1207
	static Any IS_DOOR_CLOSED(Any p0) { return invoker::Invoke<Any>(0xC531EE8A1145A149, p0); } // 0xC531EE8A1145A149 b1207
	static Any _0x0943113E02322164(Any p0, Any p1) { return invoker::Invoke<Any>(0x0943113E02322164, p0, p1); } // 0x0943113E02322164 b1207
	static Any _0x614D0B4533F842D3(Any p0) { return invoker::Invoke<Any>(0x614D0B4533F842D3, p0); } // 0x614D0B4533F842D3 b1207
	static void _0x276AAF0F1C7F2494(Any p0, Any p1) { invoker::Invoke<Void>(0x276AAF0F1C7F2494, p0, p1); } // 0x276AAF0F1C7F2494 b1207
	static Any _0xEBA314768FB35D58(Any p0) { return invoker::Invoke<Any>(0xEBA314768FB35D58, p0); } // 0xEBA314768FB35D58 b1207
	static void _0x5230BF34EB0EC645(Any p0) { invoker::Invoke<Void>(0x5230BF34EB0EC645, p0); } // 0x5230BF34EB0EC645 b1207
	static Any DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xBFA48E2FF417213F, p0, p1, p2, p3, p4, p5); } // 0xBFA48E2FF417213F b1207
	static Any IS_POINT_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoker::Invoke<Any>(0x2A70BAE8883E4C81, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x2A70BAE8883E4C81 b1207
	static Any _0x4D89D607CB3DD1D2() { return invoker::Invoke<Any>(0x4D89D607CB3DD1D2); } // 0x4D89D607CB3DD1D2 b1207
	static void SET_OBJECT_PHYSICS_PARAMS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoker::Invoke<Void>(0xF6DF6E90DE7DF90F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xF6DF6E90DE7DF90F b1207
	static Any GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, Any p1) { return invoker::Invoke<Any>(0xB6FBFD079B8D0596, p0, p1); } // 0xB6FBFD079B8D0596 b1207
	static Any _0x235C863DA77BD88D() { return invoker::Invoke<Any>(0x235C863DA77BD88D); } // 0x235C863DA77BD88D b1207
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Any p0, Any p1) { invoker::Invoke<Void>(0x406137F8EF90EAF5, p0, p1); } // 0x406137F8EF90EAF5 b1207
	static void _0xE7E4C198B0185900(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE7E4C198B0185900, p0, p1, p2); } // 0xE7E4C198B0185900 b1207
	static void _0x8462BE2341A55B6F(Any p0) { invoker::Invoke<Void>(0x8462BE2341A55B6F, p0); } // 0x8462BE2341A55B6F b1207
	static void _0xAAACF33CBF9B990A(Any p0, Any p1) { invoker::Invoke<Void>(0xAAACF33CBF9B990A, p0, p1); } // 0xAAACF33CBF9B990A b1207
	static Any _0xE4EFB315BCD2A838() { return invoker::Invoke<Any>(0xE4EFB315BCD2A838); } // 0xE4EFB315BCD2A838 b1207
	static void _0xF9C1681347C8BD15(Any p0) { invoker::Invoke<Void>(0xF9C1681347C8BD15, p0); } // 0xF9C1681347C8BD15 b1207
	static Any _0x58DE624FA7FB0E7F(Any p0) { return invoker::Invoke<Any>(0x58DE624FA7FB0E7F, p0); } // 0x58DE624FA7FB0E7F b1207
	static Any _0x491439AEF410A2FC() { return invoker::Invoke<Any>(0x491439AEF410A2FC); } // 0x491439AEF410A2FC b1207
	static void _0xFFB99FFD17F65889(Any p0, Any p1) { invoker::Invoke<Void>(0xFFB99FFD17F65889, p0, p1); } // 0xFFB99FFD17F65889 b1207
	static Any _0xCEAB54F4632C6EF6() { return invoker::Invoke<Any>(0xCEAB54F4632C6EF6); } // 0xCEAB54F4632C6EF6 b1207
	static void TRACK_OBJECT_VISIBILITY(Any p0) { invoker::Invoke<Void>(0xB252BC036B525623, p0); } // 0xB252BC036B525623 b1207
	static Any IS_OBJECT_VISIBLE(Any p0) { return invoker::Invoke<Any>(0x8B32ACE6326A7546, p0); } // 0x8B32ACE6326A7546 b1207
	static Any _0xEB6F1A9B5510A5D2() { return invoker::Invoke<Any>(0xEB6F1A9B5510A5D2); } // 0xEB6F1A9B5510A5D2 b1207
	static Any _0xE2B3B852B537C398() { return invoker::Invoke<Any>(0xE2B3B852B537C398); } // 0xE2B3B852B537C398 b1207
	static Any _0x6579860A5558524A() { return invoker::Invoke<Any>(0x6579860A5558524A); } // 0x6579860A5558524A b1207
	static void _0xDFA1237F5228263F(Any p0, Any p1) { invoker::Invoke<Void>(0xDFA1237F5228263F, p0, p1); } // 0xDFA1237F5228263F b1207
	static Any _0xFA3B61EC249B4674(Any p0) { return invoker::Invoke<Any>(0xFA3B61EC249B4674, p0); } // 0xFA3B61EC249B4674 b1207
	static void _0xF49574E2332A8F06(Any p0, Any p1) { invoker::Invoke<Void>(0xF49574E2332A8F06, p0, p1); } // 0xF49574E2332A8F06 b1207
	static void _0x63E39F09310F481F(Any p0, Any p1) { invoker::Invoke<Void>(0x63E39F09310F481F, p0, p1); } // 0x63E39F09310F481F b1207
	static void _0x04D1D4E411CE52D0(Any p0, Any p1) { invoker::Invoke<Void>(0x04D1D4E411CE52D0, p0, p1); } // 0x04D1D4E411CE52D0 b1207
	static void _0x7FCD49388BC9B775(Any p0, Any p1) { invoker::Invoke<Void>(0x7FCD49388BC9B775, p0, p1); } // 0x7FCD49388BC9B775 b1207
	static Any GET_RAYFIRE_MAP_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xB48FCED898292E52, p0, p1, p2, p3, p4); } // 0xB48FCED898292E52 b1207
	static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(Any p0, Any p1) { invoker::Invoke<Void>(0x5C29F698D404C5E1, p0, p1); } // 0x5C29F698D404C5E1 b1207
	static Any GET_STATE_OF_RAYFIRE_MAP_OBJECT(Any p0) { return invoker::Invoke<Any>(0x899BA936634A322E, p0); } // 0x899BA936634A322E b1207
	static Any DOES_RAYFIRE_MAP_OBJECT_EXIST(Any p0) { return invoker::Invoke<Any>(0x52AF537A0C5B8AAD, p0); } // 0x52AF537A0C5B8AAD b1207
	static Any GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Any p0) { return invoker::Invoke<Any>(0x260EE4FDBDF4DB01, p0); } // 0x260EE4FDBDF4DB01 b1207
	static Any CREATE_PICKUP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0xFBA08C503DD5FA58, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFBA08C503DD5FA58 b1207
	static Any CREATE_PICKUP_ROTATE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoker::Invoke<Any>(0x891804727E0A98B7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x891804727E0A98B7 b1207
	static Any CREATE_AMBIENT_PICKUP() { return invoker::Invoke<Any>(0x673966A0C0FD7171); } // 0x673966A0C0FD7171 b1207
	static Any CREATE_PORTABLE_PICKUP() { return invoker::Invoke<Any>(0x2EAF1FDB2FB55698); } // 0x2EAF1FDB2FB55698 b1207
	static Any ATTACH_PORTABLE_PICKUP_TO_PED() { return invoker::Invoke<Any>(0x8DC39368BDD57755); } // 0x8DC39368BDD57755 b1207
	static Any DETACH_PORTABLE_PICKUP_FROM_PED() { return invoker::Invoke<Any>(0xCF463D1E9A0AECB1); } // 0xCF463D1E9A0AECB1 b1207
	static Any _0x2777150CC7D9365E() { return invoker::Invoke<Any>(0x2777150CC7D9365E); } // 0x2777150CC7D9365E b1207
	static Any _0x0BF3B3BD47D79C08() { return invoker::Invoke<Any>(0x0BF3B3BD47D79C08); } // 0x0BF3B3BD47D79C08 b1207
	static Any _0x3E2616E7EA539480() { return invoker::Invoke<Any>(0x3E2616E7EA539480); } // 0x3E2616E7EA539480 b1207
	static Any _0x78857FC65CADB909() { return invoker::Invoke<Any>(0x78857FC65CADB909); } // 0x78857FC65CADB909 b1207
	static Any GET_SAFE_PICKUP_COORDS() { return invoker::Invoke<Any>(0x6E16BC2503FF1FF0); } // 0x6E16BC2503FF1FF0 b1207
	static Any GET_PICKUP_COORDS(Any p0) { return invoker::Invoke<Any>(0x225B8B35C88029B3, p0); } // 0x225B8B35C88029B3 b1207
	static void REMOVE_ALL_PICKUPS_OF_TYPE(Any p0) { invoker::Invoke<Void>(0x27F9D613092159CF, p0); } // 0x27F9D613092159CF b1207
	static Any HAS_PICKUP_BEEN_COLLECTED(Any p0) { return invoker::Invoke<Any>(0x80EC48E6679313F9, p0); } // 0x80EC48E6679313F9 b1207
	static void REMOVE_PICKUP(Any p0) { invoker::Invoke<Void>(0x3288D8ACAECD2AB2, p0); } // 0x3288D8ACAECD2AB2 b1207
	static Any _0x634C19521485AB25() { return invoker::Invoke<Any>(0x634C19521485AB25); } // 0x634C19521485AB25 b1207
	static Any DOES_PICKUP_EXIST(Any p0) { return invoker::Invoke<Any>(0xAFC1CA75AD4074D1, p0); } // 0xAFC1CA75AD4074D1 b1207
	static Any DOES_PICKUP_OBJECT_EXIST(Any p0) { return invoker::Invoke<Any>(0xD9EFB6DBF7DAAEA3, p0); } // 0xD9EFB6DBF7DAAEA3 b1207
	static Any GET_PICKUP_OBJECT(Any p0) { return invoker::Invoke<Any>(0x5099BC55630B25AE, p0); } // 0x5099BC55630B25AE b1207
	static Any _0x0378C08504160D0D() { return invoker::Invoke<Any>(0x0378C08504160D0D); } // 0x0378C08504160D0D b1207
	static Any _0x007BD043587F7C82() { return invoker::Invoke<Any>(0x007BD043587F7C82); } // 0x007BD043587F7C82 b1207
	static Any DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xF9C36251F6E48E33, p0, p1, p2, p3, p4); } // 0xF9C36251F6E48E33 b1207
	static Any SET_PICKUP_REGENERATION_TIME() { return invoker::Invoke<Any>(0x78015C9B4B3ECC9D); } // 0x78015C9B4B3ECC9D b1207
	static Any _0x758A5C1B3B1E1990() { return invoker::Invoke<Any>(0x758A5C1B3B1E1990); } // 0x758A5C1B3B1E1990 b1207
	static Any _0x94F3D956BFAEAE18() { return invoker::Invoke<Any>(0x94F3D956BFAEAE18); } // 0x94F3D956BFAEAE18 b1207
	static Any _0x88EAEC617CD26926() { return invoker::Invoke<Any>(0x88EAEC617CD26926); } // 0x88EAEC617CD26926 b1207
	static void _0xB8F5062070BB6DBD(Any p0, Any p1) { invoker::Invoke<Void>(0xB8F5062070BB6DBD, p0, p1); } // 0xB8F5062070BB6DBD b1207
	static void _0x92E87F60F21A0C3A(Any p0, Any p1) { invoker::Invoke<Void>(0x92E87F60F21A0C3A, p0, p1); } // 0x92E87F60F21A0C3A b1207
	static Any _0x1F5E07E14A86FAFC() { return invoker::Invoke<Any>(0x1F5E07E14A86FAFC); } // 0x1F5E07E14A86FAFC b1207
	static Any SET_TEAM_PICKUP_OBJECT() { return invoker::Invoke<Any>(0x53E0DF1A2A3CF0CA); } // 0x53E0DF1A2A3CF0CA b1207
	static Any _0x9F52AD67D1A91BAD() { return invoker::Invoke<Any>(0x9F52AD67D1A91BAD); } // 0x9F52AD67D1A91BAD b1207
	static Any _0x92AEFB5F6E294023() { return invoker::Invoke<Any>(0x92AEFB5F6E294023); } // 0x92AEFB5F6E294023 b1207
	static Any _0x318516E02DE3ECE2() { return invoker::Invoke<Any>(0x318516E02DE3ECE2); } // 0x318516E02DE3ECE2 b1207
	static Any _0x4A8CB328CD6F1C9B() { return invoker::Invoke<Any>(0x4A8CB328CD6F1C9B); } // 0x4A8CB328CD6F1C9B b1207
	static Any _0x81218CE01B672219() { return invoker::Invoke<Any>(0x81218CE01B672219); } // 0x81218CE01B672219 b1207
	static Any _0xAC9AE68F0A463752() { return invoker::Invoke<Any>(0xAC9AE68F0A463752); } // 0xAC9AE68F0A463752 b1207
	static Any _0xEB9740A38FD6D634() { return invoker::Invoke<Any>(0xEB9740A38FD6D634); } // 0xEB9740A38FD6D634 b1207
	static Any _0x1607C7D9B3021DF5() { return invoker::Invoke<Any>(0x1607C7D9B3021DF5); } // 0x1607C7D9B3021DF5 b1207
	static Any _0xF92099527DB8E2A7() { return invoker::Invoke<Any>(0xF92099527DB8E2A7); } // 0xF92099527DB8E2A7 b1207
	static Any _0x20135AF9C10D2A3D() { return invoker::Invoke<Any>(0x20135AF9C10D2A3D); } // 0x20135AF9C10D2A3D b1207
	static Any _0x00EE08603EADEE92() { return invoker::Invoke<Any>(0x00EE08603EADEE92); } // 0x00EE08603EADEE92 b1207
	static void _0xDE116ECFFDD4B997(Any p0, Any p1) { invoker::Invoke<Void>(0xDE116ECFFDD4B997, p0, p1); } // 0xDE116ECFFDD4B997 b1207
	static Any _GET_WEAPON_HASH_FROM_PICKUP() { return invoker::Invoke<Any>(0x08F96CA6C551AD51); } // 0x08F96CA6C551AD51 b1207
	static Any _0x44B09A23D728045A() { return invoker::Invoke<Any>(0x44B09A23D728045A); } // 0x44B09A23D728045A b1207
	static void _SET_OBJECT_TEXTURE_VARIATION(Any p0, Any p1) { invoker::Invoke<Void>(0x971DA0055324D033, p0, p1); } // 0x971DA0055324D033 b1207
	static Any _0x3397CD4E0353DFBA() { return invoker::Invoke<Any>(0x3397CD4E0353DFBA); } // 0x3397CD4E0353DFBA b1207
	static void _0x7D7285EFEAB5AF15(Any p0, Any p1) { invoker::Invoke<Void>(0x7D7285EFEAB5AF15, p0, p1); } // 0x7D7285EFEAB5AF15 b1207
	static void _0xC8E21C1677DC5E6F(Any p0, Any p1) { invoker::Invoke<Void>(0xC8E21C1677DC5E6F, p0, p1); } // 0xC8E21C1677DC5E6F b1207
	static void _0x2797C633DCDBBAC5(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2797C633DCDBBAC5, p0, p1, p2); } // 0x2797C633DCDBBAC5 b1207
	static void _0x9A74A9CADFA8A598(Any p0) { invoker::Invoke<Void>(0x9A74A9CADFA8A598, p0); } // 0x9A74A9CADFA8A598 b1207
	static void _0xF40AB58D83C35027(Any p0) { invoker::Invoke<Void>(0xF40AB58D83C35027, p0); } // 0xF40AB58D83C35027 b1207
	static void _0x646564A3B7DF68F8(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x646564A3B7DF68F8, p0, p1, p2); } // 0x646564A3B7DF68F8 b1207
	static void _0xCBFBD38F2E0A263B(Any p0, Any p1) { invoker::Invoke<Void>(0xCBFBD38F2E0A263B, p0, p1); } // 0xCBFBD38F2E0A263B b1207
	static Any _0x5EAAD83F8CFB4575() { return invoker::Invoke<Any>(0x5EAAD83F8CFB4575); } // 0x5EAAD83F8CFB4575 b1207
	static void SET_FORCE_OBJECT_THIS_FRAME(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xF538081986E49E9D, p0, p1, p2, p3); } // 0xF538081986E49E9D b1207
	static Any _0xD91E55B6C005EB09() { return invoker::Invoke<Any>(0xD91E55B6C005EB09); } // 0xD91E55B6C005EB09 b1207
	static void _MARK_OBJECT_FOR_DELETION(Any p0) { invoker::Invoke<Void>(0xADBE4809F19F927A, p0); } // 0xADBE4809F19F927A b1207
	static void _0xCAAF2BCCFEF37F77(Any p0, Any p1) { invoker::Invoke<Void>(0xCAAF2BCCFEF37F77, p0, p1); } // 0xCAAF2BCCFEF37F77 b1207
	static Any _0x08C5825A2932EA7B() { return invoker::Invoke<Any>(0x08C5825A2932EA7B); } // 0x08C5825A2932EA7B b1207
	static Any _0x7D4411D6736CD295(Any p0, Any p1) { return invoker::Invoke<Any>(0x7D4411D6736CD295, p0, p1); } // 0x7D4411D6736CD295 b1207
	static Any _0x250EBB11E81A10BE(Any p0) { return invoker::Invoke<Any>(0x250EBB11E81A10BE, p0); } // 0x250EBB11E81A10BE b1207
	static Any _0x2BF1953C0C21AC88(Any p0) { return invoker::Invoke<Any>(0x2BF1953C0C21AC88, p0); } // 0x2BF1953C0C21AC88 b1207
	static Any _0xB6CBD40F8EA69E8A(Any p0) { return invoker::Invoke<Any>(0xB6CBD40F8EA69E8A, p0); } // 0xB6CBD40F8EA69E8A b1207
	static void _0x1461DF6DB886BE3F(Any p0) { invoker::Invoke<Void>(0x1461DF6DB886BE3F, p0); } // 0x1461DF6DB886BE3F b1207
	static Any _0xF65EDE5D02A7A760() { return invoker::Invoke<Any>(0xF65EDE5D02A7A760); } // 0xF65EDE5D02A7A760 b1207
	static Any _0x98D2D9C053A1F449() { return invoker::Invoke<Any>(0x98D2D9C053A1F449); } // 0x98D2D9C053A1F449 b1207
	static Any _0xE1C708BA4885796B() { return invoker::Invoke<Any>(0xE1C708BA4885796B); } // 0xE1C708BA4885796B b1207
	static Any _0xB7017DA4D498269F() { return invoker::Invoke<Any>(0xB7017DA4D498269F); } // 0xB7017DA4D498269F b1207
	static void _0xE124889AE0521FCF(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xE124889AE0521FCF, p0, p1, p2, p3); } // 0xE124889AE0521FCF b1207
	static void _0xD503D6F0986D58BC(Any p0, Any p1) { invoker::Invoke<Void>(0xD503D6F0986D58BC, p0, p1); } // 0xD503D6F0986D58BC b1207
	static Any _0xAEE6C800E124CFE1() { return invoker::Invoke<Any>(0xAEE6C800E124CFE1); } // 0xAEE6C800E124CFE1 b1207
}

namespace PAD
{
	static void _0x2804658EB7D8A50B(Any p0, Any p1) { invoker::Invoke<Void>(0x2804658EB7D8A50B, p0, p1); } // 0x2804658EB7D8A50B b1207
	static Any _0xDDCEB0F26C89C00F() { return invoker::Invoke<Any>(0xDDCEB0F26C89C00F); } // 0xDDCEB0F26C89C00F b1207
	static Any _0xBC0884BC590951C7(Any p0, Any p1) { return invoker::Invoke<Any>(0xBC0884BC590951C7, p0, p1); } // 0xBC0884BC590951C7 b1207
	static Any IS_CONTROL_ENABLED(Any p0, Any p1) { return invoker::Invoke<Any>(0x1CEA6BFDF248E5D9, p0, p1); } // 0x1CEA6BFDF248E5D9 b1207
	static Any IS_CONTROL_PRESSED(Any p0, Any p1) { return invoker::Invoke<Any>(0xF3A21BCD95725A4A, p0, p1); } // 0xF3A21BCD95725A4A b1207
	static Any IS_CONTROL_RELEASED(Any p0, Any p1) { return invoker::Invoke<Any>(0x648EE3E7F38877DD, p0, p1); } // 0x648EE3E7F38877DD b1207
	static Any IS_CONTROL_JUST_PRESSED(Any p0, Any p1) { return invoker::Invoke<Any>(0x580417101DDB492F, p0, p1); } // 0x580417101DDB492F b1207
	static Any IS_CONTROL_JUST_RELEASED(Any p0, Any p1) { return invoker::Invoke<Any>(0x50F940259D3841E6, p0, p1); } // 0x50F940259D3841E6 b1207
	static Any GET_CONTROL_VALUE(Any p0, Any p1) { return invoker::Invoke<Any>(0xD95E79E8686D2C27, p0, p1); } // 0xD95E79E8686D2C27 b1207
	static Any GET_CONTROL_NORMAL(Any p0, Any p1) { return invoker::Invoke<Any>(0xEC3C9B8D5327B563, p0, p1); } // 0xEC3C9B8D5327B563 b1207
	static Any GET_CONTROL_UNBOUND_NORMAL(Any p0, Any p1) { return invoker::Invoke<Any>(0x5B84D09CEC5209C5, p0, p1); } // 0x5B84D09CEC5209C5 b1207
	static Any _SET_CONTROL_NORMAL(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xE8A25867FBA3B05E, p0, p1, p2); } // 0xE8A25867FBA3B05E b1207
	static Any IS_DISABLED_CONTROL_PRESSED(Any p0, Any p1) { return invoker::Invoke<Any>(0xE2587F8CBBD87B1D, p0, p1); } // 0xE2587F8CBBD87B1D b1207
	static Any IS_DISABLED_CONTROL_JUST_PRESSED(Any p0, Any p1) { return invoker::Invoke<Any>(0x91AEF906BCA88877, p0, p1); } // 0x91AEF906BCA88877 b1207
	static Any IS_DISABLED_CONTROL_JUST_RELEASED(Any p0, Any p1) { return invoker::Invoke<Any>(0x305C8DCD79DA8B0F, p0, p1); } // 0x305C8DCD79DA8B0F b1207
	static Any GET_DISABLED_CONTROL_NORMAL(Any p0, Any p1) { return invoker::Invoke<Any>(0x11E65974A982637C, p0, p1); } // 0x11E65974A982637C b1207
	static Any GET_DISABLED_CONTROL_UNBOUND_NORMAL(Any p0, Any p1) { return invoker::Invoke<Any>(0x4F8A26A890FD62FB, p0, p1); } // 0x4F8A26A890FD62FB b1207
	static Any _0xD7D22F5592AED8BA(Any p0) { return invoker::Invoke<Any>(0xD7D22F5592AED8BA, p0); } // 0xD7D22F5592AED8BA b1207
	static Any _0x771DFCB24D19C2F6() { return invoker::Invoke<Any>(0x771DFCB24D19C2F6); } // 0x771DFCB24D19C2F6 b1207
	static Any _IS_INPUT_DISABLED() { return invoker::Invoke<Any>(0xA571D46727E2B718); } // 0xA571D46727E2B718 b1207
	static Any _0x43F35DDB2905D945() { return invoker::Invoke<Any>(0x43F35DDB2905D945); } // 0x43F35DDB2905D945 b1207
	static Any _0xBD629C1C4F501C80(Any p0) { return invoker::Invoke<Any>(0xBD629C1C4F501C80, p0); } // 0xBD629C1C4F501C80 b1207
	static Any _0x6CD79468A1E595C6() { return invoker::Invoke<Any>(0x6CD79468A1E595C6); } // 0x6CD79468A1E595C6 b1207
	static Any _0x8290252FFF36ACB5() { return invoker::Invoke<Any>(0x8290252FFF36ACB5); } // 0x8290252FFF36ACB5 b1207
	static Any _0xCB0360EFEFB2580D() { return invoker::Invoke<Any>(0xCB0360EFEFB2580D); } // 0xCB0360EFEFB2580D b1207
	static Any _0xA45884DB10EC7EE3() { return invoker::Invoke<Any>(0xA45884DB10EC7EE3); } // 0xA45884DB10EC7EE3 b1207
	static void SET_PAD_SHAKE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x48B3886C1358D0D5, p0, p1, p2); } // 0x48B3886C1358D0D5 b1207
	static void _0x14D29BB12D47F68C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x14D29BB12D47F68C, p0, p1, p2, p3, p4); } // 0x14D29BB12D47F68C b1207
	static void STOP_PAD_SHAKE(Any p0) { invoker::Invoke<Void>(0x38C16A305E8CDC8D, p0); } // 0x38C16A305E8CDC8D b1207
	static void _0xF239400E16C23E08(Any p0, Any p1) { invoker::Invoke<Void>(0xF239400E16C23E08, p0, p1); } // 0xF239400E16C23E08 b1207
	static void _0xA0CEFCEA390AAB9B(Any p0) { invoker::Invoke<Void>(0xA0CEFCEA390AAB9B, p0); } // 0xA0CEFCEA390AAB9B b1207
	static Any IS_LOOK_INVERTED() { return invoker::Invoke<Any>(0x77B612531280010D); } // 0x77B612531280010D b1207
	static void SET_INPUT_EXCLUSIVE(Any p0, Any p1) { invoker::Invoke<Void>(0xEDE476E5EE29EDB1, p0, p1); } // 0xEDE476E5EE29EDB1 b1207
	static void DISABLE_CONTROL_ACTION(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xFE99B66D079CF6BC, p0, p1, p2); } // 0xFE99B66D079CF6BC b1207
	static void ENABLE_CONTROL_ACTION(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x351220255D64C155, p0, p1, p2); } // 0x351220255D64C155 b1207
	static void DISABLE_ALL_CONTROL_ACTIONS(Any p0) { invoker::Invoke<Void>(0x5F4B6931816E599B, p0); } // 0x5F4B6931816E599B b1207
	static void _0x5F217BC1190503D8(Any p0, Any p1) { invoker::Invoke<Void>(0x5F217BC1190503D8, p0, p1); } // 0x5F217BC1190503D8 b1207
	static void _0x709BA8C08C5C008D() { invoker::Invoke<Void>(0x709BA8C08C5C008D); } // 0x709BA8C08C5C008D b1207
	static Any _0x1252C029FC8EBB4D() { return invoker::Invoke<Any>(0x1252C029FC8EBB4D); } // 0x1252C029FC8EBB4D b1207
}

namespace PATHFIND
{
	static void SET_ROADS_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xBF1A602B5BA52FEE, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xBF1A602B5BA52FEE b1207
	static void SET_ROADS_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x1A5AA1208AF5DB59, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x1A5AA1208AF5DB59 b1207
	static void _0xC1799FAFD2FDF52B(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xC1799FAFD2FDF52B, p0, p1, p2, p3); } // 0xC1799FAFD2FDF52B b1207
	static void _0xD17672447692478E(Any p0, Any p1) { invoker::Invoke<Void>(0xD17672447692478E, p0, p1); } // 0xD17672447692478E b1207
	static void SET_ROADS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x1EE7063B80FFC77C, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1EE7063B80FFC77C b1207
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x0027501B9F3B407E, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x0027501B9F3B407E b1207
	static void _0xAFE2AE66F6251C66(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xAFE2AE66F6251C66, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xAFE2AE66F6251C66 b1207
	static void _0x4358BCF14C91761C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x4358BCF14C91761C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x4358BCF14C91761C b1207
	static void _0xB03944057FD735BA(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xB03944057FD735BA, p0, p1, p2); } // 0xB03944057FD735BA b1207
	static void _0x6C3F12ECEB6D2E2A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x6C3F12ECEB6D2E2A, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x6C3F12ECEB6D2E2A b1207
	static void _0x5A4E1A41E3A02AD0(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5A4E1A41E3A02AD0, p0, p1, p2); } // 0x5A4E1A41E3A02AD0 b1207
	static Any GET_CLOSEST_VEHICLE_NODE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x240A18690AE96513, p0, p1, p2, p3, p4, p5, p6); } // 0x240A18690AE96513 b1207
	static Any _0xCA27A86CAA4E98ED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xCA27A86CAA4E98ED, p0, p1, p2, p3, p4, p5, p6); } // 0xCA27A86CAA4E98ED b1207
	static Any GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x23CFFD4CCB243354, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x23CFFD4CCB243354 b1207
	static Any GET_NTH_CLOSEST_VEHICLE_NODE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x5A6D8DF6FBC5D0C4, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x5A6D8DF6FBC5D0C4 b1207
	static Any GET_NTH_CLOSEST_VEHICLE_NODE_ID(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x116443008E5CEFC3, p0, p1, p2, p3, p4, p5, p6); } // 0x116443008E5CEFC3 b1207
	static Any _0x591B40D4390DB54A() { return invoker::Invoke<Any>(0x591B40D4390DB54A); } // 0x591B40D4390DB54A b1207
	static Any _0x4114EAA8A7F7766D() { return invoker::Invoke<Any>(0x4114EAA8A7F7766D); } // 0x4114EAA8A7F7766D b1207
	static Any _0x2FAC235A6062F14A() { return invoker::Invoke<Any>(0x2FAC235A6062F14A); } // 0x2FAC235A6062F14A b1207
	static Any _0x5829A02AF4F0B3CB() { return invoker::Invoke<Any>(0x5829A02AF4F0B3CB); } // 0x5829A02AF4F0B3CB b1207
	static Any _0x8E8D72FF24DEE1FB() { return invoker::Invoke<Any>(0x8E8D72FF24DEE1FB); } // 0x8E8D72FF24DEE1FB b1207
	static Any GET_VEHICLE_NODE_IS_SWITCHED_OFF(Any p0) { return invoker::Invoke<Any>(0x28533DBDDF7C2C97, p0); } // 0x28533DBDDF7C2C97 b1207
	static Any GET_CLOSEST_ROAD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0x132F52BBA570FE92, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x132F52BBA570FE92 b1207
	static Any _0xF7B79A50B905A30D() { return invoker::Invoke<Any>(0xF7B79A50B905A30D); } // 0xF7B79A50B905A30D b1207
	static Any _0x07FB139B592FA687() { return invoker::Invoke<Any>(0x07FB139B592FA687); } // 0x07FB139B592FA687 b1207
	static Any GET_RANDOM_VEHICLE_NODE() { return invoker::Invoke<Any>(0x93E0DB8440B73A7D); } // 0x93E0DB8440B73A7D b1207
	static Any _0xA3791B915B8B84C6() { return invoker::Invoke<Any>(0xA3791B915B8B84C6); } // 0xA3791B915B8B84C6 b1207
	static Any IS_POINT_ON_ROAD(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x125BF4ABFC536B09, p0, p1, p2, p3); } // 0x125BF4ABFC536B09 b1207
	static void SET_PED_PATHS_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x34F060F4BF92E018, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x34F060F4BF92E018 b1207
	static void _0xE5EF9DE716FF737E(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE5EF9DE716FF737E, p0, p1, p2); } // 0xE5EF9DE716FF737E b1207
	static Any GET_SAFE_COORD_FOR_PED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xB61C8E878A4199CA, p0, p1, p2, p3, p4, p5); } // 0xB61C8E878A4199CA b1207
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xE04B48F2CC926253, p0, p1, p2, p3, p4, p5, p6); } // 0xE04B48F2CC926253 b1207
	static void _0xCF213A5FC3ABFC08(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCF213A5FC3ABFC08, p0, p1, p2); } // 0xCF213A5FC3ABFC08 b1207
	static void ADD_NAVMESH_REQUIRED_REGION(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x387EAD7EE42F6685, p0, p1, p2); } // 0x387EAD7EE42F6685 b1207
	static Any IS_NAVMESH_LOADED_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xF813C7E63F9062A5, p0, p1, p2, p3, p4, p5); } // 0xF813C7E63F9062A5 b1207
	static Any _0x01708E8DD3FF8C65() { return invoker::Invoke<Any>(0x01708E8DD3FF8C65); } // 0x01708E8DD3FF8C65 b1207
	static Any _0x7C334FF4D9215912(Any p0) { return invoker::Invoke<Any>(0x7C334FF4D9215912, p0); } // 0x7C334FF4D9215912 b1207
	static Any _0x527B97C203BB8606(Any p0) { return invoker::Invoke<Any>(0x527B97C203BB8606, p0); } // 0x527B97C203BB8606 b1207
	static Any _0x5AC0944C156E5F44(Any p0) { return invoker::Invoke<Any>(0x5AC0944C156E5F44, p0); } // 0x5AC0944C156E5F44 b1207
	static Any _0x495CFAB2924237C7(Any p0) { return invoker::Invoke<Any>(0x495CFAB2924237C7, p0); } // 0x495CFAB2924237C7 b1207
	static Any _0x5A3B54ADDF5472A3(Any p0) { return invoker::Invoke<Any>(0x5A3B54ADDF5472A3, p0); } // 0x5A3B54ADDF5472A3 b1207
	static Any _0xA33914B00CA55756(Any p0, Any p1) { return invoker::Invoke<Any>(0xA33914B00CA55756, p0, p1); } // 0xA33914B00CA55756 b1207
	static Any _0x44026E3DB3CED602(Any p0, Any p1) { return invoker::Invoke<Any>(0x44026E3DB3CED602, p0, p1); } // 0x44026E3DB3CED602 b1207
	static Any ADD_NAVMESH_BLOCKING_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0xFCD5C8E06E502F5A, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFCD5C8E06E502F5A b1207
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoker::Invoke<Void>(0x46399A7895957C0E, p0); } // 0x46399A7895957C0E b1207
	static Any DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) { return invoker::Invoke<Any>(0x0EAEB0DB4B132399, p0); } // 0x0EAEB0DB4B132399 b1207
	static Any _0x19C7567D2F2287D6(Any p0, Any p1) { return invoker::Invoke<Any>(0x19C7567D2F2287D6, p0, p1); } // 0x19C7567D2F2287D6 b1207
	static void _0x2C87C3E1C7B96EE2(Any p0) { invoker::Invoke<Void>(0x2C87C3E1C7B96EE2, p0); } // 0x2C87C3E1C7B96EE2 b1207
	static Any _0xDE0EA444735C1368(Any p0) { return invoker::Invoke<Any>(0xDE0EA444735C1368, p0); } // 0xDE0EA444735C1368 b1207
	static void _0x6DAD6630AE4A74CB(Any p0, Any p1) { invoker::Invoke<Void>(0x6DAD6630AE4A74CB, p0, p1); } // 0x6DAD6630AE4A74CB b1207
	static Any _0x348F211CA2404039(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x348F211CA2404039, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x348F211CA2404039 b1207
	static Any _0x661BB1E1FF77742D(Any p0) { return invoker::Invoke<Any>(0x661BB1E1FF77742D, p0); } // 0x661BB1E1FF77742D b1207
	static Any _0x3A0F82F6EE2291C8(Any p0) { return invoker::Invoke<Any>(0x3A0F82F6EE2291C8, p0); } // 0x3A0F82F6EE2291C8 b1207
	static Any _0x8800776E410EB669() { return invoker::Invoke<Any>(0x8800776E410EB669); } // 0x8800776E410EB669 b1207
	static Any _0xF61CFEDEAB627BFA(Any p0) { return invoker::Invoke<Any>(0xF61CFEDEAB627BFA, p0); } // 0xF61CFEDEAB627BFA b1207
	static Any _0xD470725E0703D22F(Any p0) { return invoker::Invoke<Any>(0xD470725E0703D22F, p0); } // 0xD470725E0703D22F b1207
	static Any _0x430F8319AE56C8A9(Any p0, Any p1) { return invoker::Invoke<Any>(0x430F8319AE56C8A9, p0, p1); } // 0x430F8319AE56C8A9 b1207
	static Any _0x336511A34F2E5185(Any p0, Any p1) { return invoker::Invoke<Any>(0x336511A34F2E5185, p0, p1); } // 0x336511A34F2E5185 b1207
	static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Any p0) { invoker::Invoke<Void>(0x0B919E1FB47CC4E0, p0); } // 0x0B919E1FB47CC4E0 b1207
	static Any SET_IGNORE_NO_GPS_FLAG() { return invoker::Invoke<Any>(0x72751156E7678833); } // 0x72751156E7678833 b1207
	static Any _0xBBB45C3CF5C8AA85() { return invoker::Invoke<Any>(0xBBB45C3CF5C8AA85); } // 0xBBB45C3CF5C8AA85 b1207
	static Any _0xEFC535C9FAF563B3(Any p0) { return invoker::Invoke<Any>(0xEFC535C9FAF563B3, p0); } // 0xEFC535C9FAF563B3 b1207
	static Any _0x665B21666351CB37() { return invoker::Invoke<Any>(0x665B21666351CB37); } // 0x665B21666351CB37 b1207
	static Any _0x869DAACBBE9FA006() { return invoker::Invoke<Any>(0x869DAACBBE9FA006); } // 0x869DAACBBE9FA006 b1207
	static Any _0x54F4D7B6670FBB5A(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x54F4D7B6670FBB5A, p0, p1, p2, p3, p4); } // 0x54F4D7B6670FBB5A b1207
	static void _0x34C9AF25649172D0(Any p0) { invoker::Invoke<Void>(0x34C9AF25649172D0, p0); } // 0x34C9AF25649172D0 b1207
	static void _0xF2A2177AC848B3A8(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF2A2177AC848B3A8, p0, p1, p2); } // 0xF2A2177AC848B3A8 b1207
	static void _0x4BDEBEA5702B97A9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x4BDEBEA5702B97A9, p0, p1, p2, p3, p4, p5); } // 0x4BDEBEA5702B97A9 b1207
	static Any _0x264E9A5CD78C338F() { return invoker::Invoke<Any>(0x264E9A5CD78C338F); } // 0x264E9A5CD78C338F b1207
	static Any _0x869A7015BD4606E9() { return invoker::Invoke<Any>(0x869A7015BD4606E9); } // 0x869A7015BD4606E9 b1207
	static Any _0xFD5BB35AAB83FD48() { return invoker::Invoke<Any>(0xFD5BB35AAB83FD48); } // 0xFD5BB35AAB83FD48 b1207
	static Any _0x4907D0E4FB26EE65() { return invoker::Invoke<Any>(0x4907D0E4FB26EE65); } // 0x4907D0E4FB26EE65 b1207
	static Any _0x65A8196B8D7F5E0B() { return invoker::Invoke<Any>(0x65A8196B8D7F5E0B); } // 0x65A8196B8D7F5E0B b1207
	static Any _0x240915043CB799D7() { return invoker::Invoke<Any>(0x240915043CB799D7); } // 0x240915043CB799D7 b1207
	static Any _0xA1A3DE1C215C7394() { return invoker::Invoke<Any>(0xA1A3DE1C215C7394); } // 0xA1A3DE1C215C7394 b1207
	static Any _0x2DD5F78D73B24172() { return invoker::Invoke<Any>(0x2DD5F78D73B24172); } // 0x2DD5F78D73B24172 b1207
}

namespace PED
{
	static Any CREATE_PED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0xD49F9B0955C367DE, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD49F9B0955C367DE b1207
	static void DELETE_PED(Any p0) { invoker::Invoke<Void>(0xCC0EF140F99365C5, p0); } // 0xCC0EF140F99365C5 b1207
	static void _0x39A2FC5AF55A52B1(Any p0, Any p1) { invoker::Invoke<Void>(0x39A2FC5AF55A52B1, p0, p1); } // 0x39A2FC5AF55A52B1 b1207
	static Any _0x7C08E7CB8D951B70() { return invoker::Invoke<Any>(0x7C08E7CB8D951B70); } // 0x7C08E7CB8D951B70 b1207
	static void _0x36E4B61DC56DE77C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x36E4B61DC56DE77C, p0, p1, p2, p3, p4); } // 0x36E4B61DC56DE77C b1207
	static Any CLONE_PED(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xEF29A16337FACADB, p0, p1, p2, p3); } // 0xEF29A16337FACADB b1207
	static Any CLONE_PED_TO_TARGET() { return invoker::Invoke<Any>(0xE952D6431689AD9A); } // 0xE952D6431689AD9A b1207
	static Any IS_PED_IN_VEHICLE(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xA3EE4A07279BB9DB, p0, p1, p2); } // 0xA3EE4A07279BB9DB b1207
	static Any IS_PED_IN_MODEL(Any p0, Any p1) { return invoker::Invoke<Any>(0x796D90EFB19AA332, p0, p1); } // 0x796D90EFB19AA332 b1207
	static Any IS_PED_IN_ANY_VEHICLE(Any p0, Any p1) { return invoker::Invoke<Any>(0x997ABD671D25CA0B, p0, p1); } // 0x997ABD671D25CA0B b1207
	static void _0x9851DE7AEC10B4E1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x9851DE7AEC10B4E1, p0, p1, p2, p3, p4, p5); } // 0x9851DE7AEC10B4E1 b1207
	static Any IS_PED_INJURED(Any p0) { return invoker::Invoke<Any>(0x84A2DD9AC37C35C1, p0); } // 0x84A2DD9AC37C35C1 b1207
	static Any IS_PED_FATALLY_INJURED(Any p0) { return invoker::Invoke<Any>(0xD839450756ED5A80, p0); } // 0xD839450756ED5A80 b1207
	static Any IS_PED_DEAD_OR_DYING(Any p0, Any p1) { return invoker::Invoke<Any>(0x3317DEDB88C95038, p0, p1); } // 0x3317DEDB88C95038 b1207
	static void _0x66C047719B0E80E1(Any p0, Any p1) { invoker::Invoke<Void>(0x66C047719B0E80E1, p0, p1); } // 0x66C047719B0E80E1 b1207
	static Any IS_PED_AIMING_FROM_COVER(Any p0) { return invoker::Invoke<Any>(0x3998B1276A3300E5, p0); } // 0x3998B1276A3300E5 b1207
	static Any IS_PED_RELOADING(Any p0) { return invoker::Invoke<Any>(0x24B100C68C645951, p0); } // 0x24B100C68C645951 b1207
	static Any IS_PED_A_PLAYER(Any p0) { return invoker::Invoke<Any>(0x12534C348C6CB68B, p0); } // 0x12534C348C6CB68B b1207
	static Any CREATE_PED_INSIDE_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x7DD959874C1FD534, p0, p1, p2, p3, p4, p5); } // 0x7DD959874C1FD534 b1207
	static void SET_PED_DESIRED_HEADING(Any p0, Any p1) { invoker::Invoke<Void>(0xAA5A7ECE2AA8FE70, p0, p1); } // 0xAA5A7ECE2AA8FE70 b1207
	static Any _FREEZE_PED_CAMERA_ROTATION() { return invoker::Invoke<Any>(0xFF287323B0E2C69A); } // 0xFF287323B0E2C69A b1207
	static Any IS_PED_FACING_PED(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xD71649DB0A545AA3, p0, p1, p2); } // 0xD71649DB0A545AA3 b1207
	static Any IS_PED_IN_MELEE_COMBAT(Any p0) { return invoker::Invoke<Any>(0x4E209B2C1EAD5159, p0); } // 0x4E209B2C1EAD5159 b1207
	static Any _0x6DB875AFC584FA32(Any p0, Any p1) { return invoker::Invoke<Any>(0x6DB875AFC584FA32, p0, p1); } // 0x6DB875AFC584FA32 b1207
	static Any IS_PED_STOPPED(Any p0) { return invoker::Invoke<Any>(0x530944F6F4B8A214, p0); } // 0x530944F6F4B8A214 b1207
	static Any _0x84D0BF2B21862059(Any p0) { return invoker::Invoke<Any>(0x84D0BF2B21862059, p0); } // 0x84D0BF2B21862059 b1207
	static Any _0x09D7AFD3716DA8E1(Any p0, Any p1) { return invoker::Invoke<Any>(0x09D7AFD3716DA8E1, p0, p1); } // 0x09D7AFD3716DA8E1 b1207
	static Any _0x9C81338B2E62CE0A(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x9C81338B2E62CE0A, p0, p1, p2); } // 0x9C81338B2E62CE0A b1207
	static Any _0xB7DBB2986B87E230(Any p0, Any p1) { return invoker::Invoke<Any>(0xB7DBB2986B87E230, p0, p1); } // 0xB7DBB2986B87E230 b1207
	static Any _0xD355E2F1BB41087E(Any p0, Any p1) { return invoker::Invoke<Any>(0xD355E2F1BB41087E, p0, p1); } // 0xD355E2F1BB41087E b1207
	static Any IS_ANY_PED_SHOOTING_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0xA0D3D71EA1086C55, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA0D3D71EA1086C55 b1207
	static Any IS_PED_SHOOTING(Any p0) { return invoker::Invoke<Any>(0x34616828CD07F1A1, p0); } // 0x34616828CD07F1A1 b1207
	static Any _0x285D36C5C72B0569(Any p0) { return invoker::Invoke<Any>(0x285D36C5C72B0569, p0); } // 0x285D36C5C72B0569 b1207
	static void SET_PED_ACCURACY(Any p0, Any p1) { invoker::Invoke<Void>(0x7AEFB85C1D49DEB6, p0, p1); } // 0x7AEFB85C1D49DEB6 b1207
	static Any GET_PED_ACCURACY(Any p0) { return invoker::Invoke<Any>(0x37F4AD56ECBC0CD6, p0); } // 0x37F4AD56ECBC0CD6 b1207
	static Any IS_PED_MODEL(Any p0, Any p1) { return invoker::Invoke<Any>(0xC9D55B1A358A5BF7, p0, p1); } // 0xC9D55B1A358A5BF7 b1207
	static void EXPLODE_PED_HEAD(Any p0, Any p1) { invoker::Invoke<Void>(0x2D05CED3A38D0F3A, p0, p1); } // 0x2D05CED3A38D0F3A b1207
	static void ADD_ARMOUR_TO_PED(Any p0, Any p1) { invoker::Invoke<Void>(0x5BA652A0CD14DF2F, p0, p1); } // 0x5BA652A0CD14DF2F b1207
	static void _0x5CA20FBE49891BBD(Any p0, Any p1) { invoker::Invoke<Void>(0x5CA20FBE49891BBD, p0, p1); } // 0x5CA20FBE49891BBD b1207
	static void SET_PED_INTO_VEHICLE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF75B0D629E1C063D, p0, p1, p2); } // 0xF75B0D629E1C063D b1207
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(Any p0) { invoker::Invoke<Void>(0x9E8C908F41584ECD, p0); } // 0x9E8C908F41584ECD b1207
	static void _0x606D529DADA3C940(Any p0, Any p1) { invoker::Invoke<Void>(0x606D529DADA3C940, p0, p1); } // 0x606D529DADA3C940 b1207
	static Any IS_PED_MALE(Any p0) { return invoker::Invoke<Any>(0x6D9F5FAA7488BA46, p0); } // 0x6D9F5FAA7488BA46 b1207
	static Any IS_PED_HUMAN(Any p0) { return invoker::Invoke<Any>(0xB980061DA992779D, p0); } // 0xB980061DA992779D b1207
	static Any GET_VEHICLE_PED_IS_IN(Any p0, Any p1) { return invoker::Invoke<Any>(0x9A9112A0FE9A4713, p0, p1); } // 0x9A9112A0FE9A4713 b1207
	static void RESET_PED_LAST_VEHICLE(Any p0) { invoker::Invoke<Void>(0xBB8DE8CF6A8DD8BB, p0); } // 0xBB8DE8CF6A8DD8BB b1207
	static Any _0xC6136B40FFFB778B() { return invoker::Invoke<Any>(0xC6136B40FFFB778B); } // 0xC6136B40FFFB778B b1207
	static void _0x6E8B87139854022D(Any p0, Any p1) { invoker::Invoke<Void>(0x6E8B87139854022D, p0, p1); } // 0x6E8B87139854022D b1207
	static Any _0x313778EDCA9158E2() { return invoker::Invoke<Any>(0x313778EDCA9158E2); } // 0x313778EDCA9158E2 b1207
	static void _0xED9582B3DA8F02B4(Any p0) { invoker::Invoke<Void>(0xED9582B3DA8F02B4, p0); } // 0xED9582B3DA8F02B4 b1207
	static void _0xF008E0BA1FE1D644(Any p0) { invoker::Invoke<Void>(0xF008E0BA1FE1D644, p0); } // 0xF008E0BA1FE1D644 b1207
	static void _0x7D4E70A67A651C71(Any p0) { invoker::Invoke<Void>(0x7D4E70A67A651C71, p0); } // 0x7D4E70A67A651C71 b1207
	static Any _0x62DE46F061CAA468() { return invoker::Invoke<Any>(0x62DE46F061CAA468); } // 0x62DE46F061CAA468 b1207
	static Any _0x5C16855277819BBF() { return invoker::Invoke<Any>(0x5C16855277819BBF); } // 0x5C16855277819BBF b1207
	static Any _0x5E420FF293EE5472() { return invoker::Invoke<Any>(0x5E420FF293EE5472); } // 0x5E420FF293EE5472 b1207
	static void _0xA77FA7BE9312F8C0(Any p0) { invoker::Invoke<Void>(0xA77FA7BE9312F8C0, p0); } // 0xA77FA7BE9312F8C0 b1207
	static void _0x9E3842E5DAD69F80(Any p0) { invoker::Invoke<Void>(0x9E3842E5DAD69F80, p0); } // 0x9E3842E5DAD69F80 b1207
	static void _0xAB0D553FE20A6E25(Any p0) { invoker::Invoke<Void>(0xAB0D553FE20A6E25, p0); } // 0xAB0D553FE20A6E25 b1207
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(Any p0) { invoker::Invoke<Void>(0x7A556143A1C03898, p0); } // 0x7A556143A1C03898 b1207
	static void _0xC0258742B034DFAF(Any p0) { invoker::Invoke<Void>(0xC0258742B034DFAF, p0); } // 0xC0258742B034DFAF b1207
	static void _0xBA0980B5C0A11924(Any p0) { invoker::Invoke<Void>(0xBA0980B5C0A11924, p0); } // 0xBA0980B5C0A11924 b1207
	static Any _0xDB48E99F8E064E56() { return invoker::Invoke<Any>(0xDB48E99F8E064E56); } // 0xDB48E99F8E064E56 b1207
	static void _0x28CB6391ACEDD9DB(Any p0) { invoker::Invoke<Void>(0x28CB6391ACEDD9DB, p0); } // 0x28CB6391ACEDD9DB b1207
	static void _0x95423627A9CA598E(Any p0) { invoker::Invoke<Void>(0x95423627A9CA598E, p0); } // 0x95423627A9CA598E b1207
	static void _0x4759CC730F947C81() { invoker::Invoke<Void>(0x4759CC730F947C81); } // 0x4759CC730F947C81 b1207
	static Any _0xBFA6B7731C3BAF02() { return invoker::Invoke<Any>(0xBFA6B7731C3BAF02); } // 0xBFA6B7731C3BAF02 b1207
	static Any _0x0EE3F0D7FECCC54F() { return invoker::Invoke<Any>(0x0EE3F0D7FECCC54F); } // 0x0EE3F0D7FECCC54F b1207
	static void SET_PED_NON_CREATION_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xEE01041D559983EA, p0, p1, p2, p3, p4, p5); } // 0xEE01041D559983EA b1207
	static void CLEAR_PED_NON_CREATION_AREA() { invoker::Invoke<Void>(0x2E05208086BA0651); } // 0x2E05208086BA0651 b1207
	static void _0x7C00CFC48A782DC0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x7C00CFC48A782DC0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7C00CFC48A782DC0 b1207
	static void _0x19C975B81BE53C28(Any p0, Any p1) { invoker::Invoke<Void>(0x19C975B81BE53C28, p0, p1); } // 0x19C975B81BE53C28 b1207
	static void _0x028F76B6E78246EB(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x028F76B6E78246EB, p0, p1, p2, p3); } // 0x028F76B6E78246EB b1207
	static void _0x5337B721C51883A9(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5337B721C51883A9, p0, p1, p2); } // 0x5337B721C51883A9 b1207
	static Any _0xF89AA2BD01FC06B7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xF89AA2BD01FC06B7, p0, p1, p2, p3, p4, p5); } // 0xF89AA2BD01FC06B7 b1207
	static Any _0xAAB0FE202E9FC9F0(Any p0, Any p1) { return invoker::Invoke<Any>(0xAAB0FE202E9FC9F0, p0, p1); } // 0xAAB0FE202E9FC9F0 b1207
	static Any IS_PED_ON_MOUNT(Any p0) { return invoker::Invoke<Any>(0x460BC76A0E10655E, p0); } // 0x460BC76A0E10655E b1207
	static Any _0x95CBC65780DE7EB1(Any p0, Any p1) { return invoker::Invoke<Any>(0x95CBC65780DE7EB1, p0, p1); } // 0x95CBC65780DE7EB1 b1207
	static Any GET_MOUNT(Any p0) { return invoker::Invoke<Any>(0xE7E11B8DCBED1058, p0); } // 0xE7E11B8DCBED1058 b1207
	static Any _0x4C8B59171957BCF7(Any p0) { return invoker::Invoke<Any>(0x4C8B59171957BCF7, p0); } // 0x4C8B59171957BCF7 b1207
	static void _0xED1C764997A86D5A(Any p0, Any p1) { invoker::Invoke<Void>(0xED1C764997A86D5A, p0, p1); } // 0xED1C764997A86D5A b1207
	static void _0xB8AB265426CFE6DD(Any p0, Any p1) { invoker::Invoke<Void>(0xB8AB265426CFE6DD, p0, p1); } // 0xB8AB265426CFE6DD b1207
	static Any _0xE8D1CCB9375C101B(Any p0, Any p1) { return invoker::Invoke<Any>(0xE8D1CCB9375C101B, p0, p1); } // 0xE8D1CCB9375C101B b1207
	static void _0xA691C10054275290(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA691C10054275290, p0, p1, p2); } // 0xA691C10054275290 b1207
	static void _0x6734F0A6A52C371C(Any p0, Any p1) { invoker::Invoke<Void>(0x6734F0A6A52C371C, p0, p1); } // 0x6734F0A6A52C371C b1207
	static void _0x024EC9B649111915(Any p0, Any p1) { invoker::Invoke<Void>(0x024EC9B649111915, p0, p1); } // 0x024EC9B649111915 b1207
	static void _0x931B241409216C1F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x931B241409216C1F, p0, p1, p2); } // 0x931B241409216C1F b1207
	static Any _0xF103823FFE72BB49(Any p0) { return invoker::Invoke<Any>(0xF103823FFE72BB49, p0); } // 0xF103823FFE72BB49 b1207
	static void _0xBCC76708E5677E1D(Any p0, Any p1) { invoker::Invoke<Void>(0xBCC76708E5677E1D, p0, p1); } // 0xBCC76708E5677E1D b1207
	static Any _0x454AD4DA6C41B5BD(Any p0) { return invoker::Invoke<Any>(0x454AD4DA6C41B5BD, p0); } // 0x454AD4DA6C41B5BD b1207
	static void _0xA69899995997A63B(Any p0, Any p1) { invoker::Invoke<Void>(0xA69899995997A63B, p0, p1); } // 0xA69899995997A63B b1207
	static void _0x9B65444C07B782BF(Any p0, Any p1) { invoker::Invoke<Void>(0x9B65444C07B782BF, p0, p1); } // 0x9B65444C07B782BF b1207
	static Any _0xD543D3A8FDE4F185(Any p0, Any p1) { return invoker::Invoke<Any>(0xD543D3A8FDE4F185, p0, p1); } // 0xD543D3A8FDE4F185 b1207
	static Any _0x7FC84E85D98F063D(Any p0) { return invoker::Invoke<Any>(0x7FC84E85D98F063D, p0); } // 0x7FC84E85D98F063D b1207
	static Any _0x8BE24D74D74C6E9B() { return invoker::Invoke<Any>(0x8BE24D74D74C6E9B); } // 0x8BE24D74D74C6E9B b1207
	static Any _0x77243ED4F7CAAA55(Any p0) { return invoker::Invoke<Any>(0x77243ED4F7CAAA55, p0); } // 0x77243ED4F7CAAA55 b1207
	static Any IS_PED_ON_VEHICLE(Any p0) { return invoker::Invoke<Any>(0x67722AEB798E5FAB, p0); } // 0x67722AEB798E5FAB b1207
	static Any IS_PED_ON_SPECIFIC_VEHICLE(Any p0, Any p1) { return invoker::Invoke<Any>(0xEC5F66E459AF3BB2, p0, p1); } // 0xEC5F66E459AF3BB2 b1207
	static void _0xE0B61ED8BB37712F(Any p0) { invoker::Invoke<Void>(0xE0B61ED8BB37712F, p0); } // 0xE0B61ED8BB37712F b1207
	static void SET_PED_MONEY(Any p0, Any p1) { invoker::Invoke<Void>(0xA9C8960E8684C1B5, p0, p1); } // 0xA9C8960E8684C1B5 b1207
	static Any GET_PED_MONEY(Any p0) { return invoker::Invoke<Any>(0x3F69145BBA87BAE7, p0); } // 0x3F69145BBA87BAE7 b1207
	static void _0x9911F4A24485F653(Any p0) { invoker::Invoke<Void>(0x9911F4A24485F653, p0); } // 0x9911F4A24485F653 b1207
	static void _0x34EDDD59364AD74A(Any p0, Any p1) { invoker::Invoke<Void>(0x34EDDD59364AD74A, p0, p1); } // 0x34EDDD59364AD74A b1207
	static void _0x2D976DBDC731DF80(Any p0) { invoker::Invoke<Void>(0x2D976DBDC731DF80, p0); } // 0x2D976DBDC731DF80 b1207
	static Any IS_PED_SITTING_IN_VEHICLE(Any p0, Any p1) { return invoker::Invoke<Any>(0xA808AA1D79230FC2, p0, p1); } // 0xA808AA1D79230FC2 b1207
	static Any IS_PED_SITTING_IN_ANY_VEHICLE(Any p0) { return invoker::Invoke<Any>(0x826AA586EDB9FEF8, p0); } // 0x826AA586EDB9FEF8 b1207
	static Any IS_PED_ON_FOOT(Any p0) { return invoker::Invoke<Any>(0x01FEE67DB37F59B2, p0); } // 0x01FEE67DB37F59B2 b1207
	static Any IS_PED_PLANTING_BOMB(Any p0) { return invoker::Invoke<Any>(0xC70B5FAE151982D8, p0); } // 0xC70B5FAE151982D8 b1207
	static Any GET_DEAD_PED_PICKUP_COORDS(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xCD5003B097200F36, p0, p1, p2); } // 0xCD5003B097200F36 b1207
	static Any IS_PED_IN_ANY_BOAT(Any p0) { return invoker::Invoke<Any>(0x2E0E1C2B4F6CB339, p0); } // 0x2E0E1C2B4F6CB339 b1207
	static Any IS_PED_IN_ANY_HELI() { return invoker::Invoke<Any>(0x298B91AE825E5705); } // 0x298B91AE825E5705 b1207
	static Any IS_PED_IN_ANY_PLANE() { return invoker::Invoke<Any>(0x5FFF4CFC74D8FB80); } // 0x5FFF4CFC74D8FB80 b1207
	static Any IS_PED_IN_FLYING_VEHICLE() { return invoker::Invoke<Any>(0x9134873537FA419C); } // 0x9134873537FA419C b1207
	static Any _0x256EDD55C6BE1482() { return invoker::Invoke<Any>(0x256EDD55C6BE1482); } // 0x256EDD55C6BE1482 b1207
	static Any GET_PED_LAST_DAMAGE_BONE(Any p0, Any p1) { return invoker::Invoke<Any>(0xD75960F6BD9EA49C, p0, p1); } // 0xD75960F6BD9EA49C b1207
	static Any CLEAR_PED_LAST_DAMAGE_BONE() { return invoker::Invoke<Any>(0x8EF6B7AC68E2F01B); } // 0x8EF6B7AC68E2F01B b1207
	static Any _0x88EFFED5FE8B0B4A(Any p0) { return invoker::Invoke<Any>(0x88EFFED5FE8B0B4A, p0); } // 0x88EFFED5FE8B0B4A b1207
	static void _0x7528720101A807A5(Any p0, Any p1) { invoker::Invoke<Void>(0x7528720101A807A5, p0, p1); } // 0x7528720101A807A5 b1207
	static Any _0x6CFC373008A1EDAF() { return invoker::Invoke<Any>(0x6CFC373008A1EDAF); } // 0x6CFC373008A1EDAF b1207
	static Any _0xDACE03C65C6666DB() { return invoker::Invoke<Any>(0xDACE03C65C6666DB); } // 0xDACE03C65C6666DB b1207
	static Any _0xB29C553BA582D09E(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xB29C553BA582D09E, p0, p1, p2, p3); } // 0xB29C553BA582D09E b1207
	static Any _0x101B45C5F56D970F(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x101B45C5F56D970F, p0, p1, p2, p3); } // 0x101B45C5F56D970F b1207
	static Any _0x6B89FAA36FC909A3(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x6B89FAA36FC909A3, p0, p1, p2, p3); } // 0x6B89FAA36FC909A3 b1207
	static Any _0x9E7738B291706746(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x9E7738B291706746, p0, p1, p2); } // 0x9E7738B291706746 b1207
	static void SET_AI_WEAPON_DAMAGE_MODIFIER(Any p0) { invoker::Invoke<Void>(0x1B1E2A40A65B8521, p0); } // 0x1B1E2A40A65B8521 b1207
	static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoker::Invoke<Void>(0xEA16670E7BA4743C); } // 0xEA16670E7BA4743C b1207
	static void _0x73B6F907B913C860(Any p0, Any p1) { invoker::Invoke<Void>(0x73B6F907B913C860, p0, p1); } // 0x73B6F907B913C860 b1207
	static Any _0xA6D6F03095C88F59() { return invoker::Invoke<Any>(0xA6D6F03095C88F59); } // 0xA6D6F03095C88F59 b1207
	static Any _0x92C8EACA29F6BED6(Any p0) { return invoker::Invoke<Any>(0x92C8EACA29F6BED6, p0); } // 0x92C8EACA29F6BED6 b1207
	static void _0xD77AE48611B7B10A(Any p0, Any p1) { invoker::Invoke<Void>(0xD77AE48611B7B10A, p0, p1); } // 0xD77AE48611B7B10A b1207
	static Any _0x936E7CAD0AE2EE14(Any p0) { return invoker::Invoke<Any>(0x936E7CAD0AE2EE14, p0); } // 0x936E7CAD0AE2EE14 b1207
	static Any _0x069EDDF1FD4DEB0A() { return invoker::Invoke<Any>(0x069EDDF1FD4DEB0A); } // 0x069EDDF1FD4DEB0A b1207
	static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(Any p0) { invoker::Invoke<Void>(0x66460DEDDD417254, p0); } // 0x66460DEDDD417254 b1207
	static void _0xC2266AA617668AD3(Any p0, Any p1) { invoker::Invoke<Void>(0xC2266AA617668AD3, p0, p1); } // 0xC2266AA617668AD3 b1207
	static Any _0xDC9273D95976BA22(Any p0) { return invoker::Invoke<Any>(0xDC9273D95976BA22, p0); } // 0xDC9273D95976BA22 b1207
	static void _0x2BA918C823B8BA56(Any p0, Any p1) { invoker::Invoke<Void>(0x2BA918C823B8BA56, p0, p1); } // 0x2BA918C823B8BA56 b1207
	static void _0xDEE8D30AA5C2E28D(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDEE8D30AA5C2E28D, p0, p1, p2); } // 0xDEE8D30AA5C2E28D b1207
	static void _0xE1B3BE07D3AADDED(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE1B3BE07D3AADDED, p0, p1, p2); } // 0xE1B3BE07D3AADDED b1207
	static void _0x32CEDA9A0AB4CEF7(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x32CEDA9A0AB4CEF7, p0, p1, p2); } // 0x32CEDA9A0AB4CEF7 b1207
	static void _0x52A24D8A1DA89658(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x52A24D8A1DA89658, p0, p1, p2); } // 0x52A24D8A1DA89658 b1207
	static void _0x34B5CEAC180A5D6E(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x34B5CEAC180A5D6E, p0, p1, p2); } // 0x34B5CEAC180A5D6E b1207
	static void _0x4F27603E44A8E4C0(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4F27603E44A8E4C0, p0, p1, p2); } // 0x4F27603E44A8E4C0 b1207
	static Any _0x3FDCC1F8C17E303E() { return invoker::Invoke<Any>(0x3FDCC1F8C17E303E); } // 0x3FDCC1F8C17E303E b1207
	static Any _0x9B6808EC46BE849B() { return invoker::Invoke<Any>(0x9B6808EC46BE849B); } // 0x9B6808EC46BE849B b1207
	static void _0xC5B78E41DCF8227C(Any p0, Any p1) { invoker::Invoke<Void>(0xC5B78E41DCF8227C, p0, p1); } // 0xC5B78E41DCF8227C b1207
	static void SET_PED_CAN_BE_TARGETTED(Any p0, Any p1) { invoker::Invoke<Void>(0x63F58F7C80513AAD, p0, p1); } // 0x63F58F7C80513AAD b1207
	static Any SET_PED_CAN_BE_TARGETTED_BY_TEAM() { return invoker::Invoke<Any>(0xBF1CA77833E58F2C); } // 0xBF1CA77833E58F2C b1207
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x66B57B72E0836A76, p0, p1, p2); } // 0x66B57B72E0836A76 b1207
	static Any _0xFECA2081F61ED2CD() { return invoker::Invoke<Any>(0xFECA2081F61ED2CD); } // 0xFECA2081F61ED2CD b1207
	static Any IS_PED_FALLING(Any p0) { return invoker::Invoke<Any>(0xFB92A102F1C4DFA3, p0); } // 0xFB92A102F1C4DFA3 b1207
	static Any _0xD6740E14E4CEFC0B(Any p0) { return invoker::Invoke<Any>(0xD6740E14E4CEFC0B, p0); } // 0xD6740E14E4CEFC0B b1207
	static Any IS_PED_JUMPING(Any p0) { return invoker::Invoke<Any>(0xCEDABC5900A0BF97, p0); } // 0xCEDABC5900A0BF97 b1207
	static Any IS_PED_CLIMBING(Any p0) { return invoker::Invoke<Any>(0x53E8CB4F48BFE623, p0); } // 0x53E8CB4F48BFE623 b1207
	static Any _0x59643424B68D52B5(Any p0) { return invoker::Invoke<Any>(0x59643424B68D52B5, p0); } // 0x59643424B68D52B5 b1207
	static Any _0x577C60BA06D0EA64(Any p0) { return invoker::Invoke<Any>(0x577C60BA06D0EA64, p0); } // 0x577C60BA06D0EA64 b1207
	static Any IS_PED_VAULTING(Any p0) { return invoker::Invoke<Any>(0x117C70D1F5730B5E, p0); } // 0x117C70D1F5730B5E b1207
	static Any IS_PED_DIVING(Any p0) { return invoker::Invoke<Any>(0x5527B8246FEF9B11, p0); } // 0x5527B8246FEF9B11 b1207
	static Any _IS_PED_OPENING_A_DOOR(Any p0) { return invoker::Invoke<Any>(0x26AF0E8E30BD2A2C, p0); } // 0x26AF0E8E30BD2A2C b1207
	static Any _0x5C6C7C70CA302801(Any p0) { return invoker::Invoke<Any>(0x5C6C7C70CA302801, p0); } // 0x5C6C7C70CA302801 b1207
	static Any _0xB91AB3BE7F655D49(Any p0) { return invoker::Invoke<Any>(0xB91AB3BE7F655D49, p0); } // 0xB91AB3BE7F655D49 b1207
	static Any IS_PED_IN_ANY_TAXI(Any p0) { return invoker::Invoke<Any>(0x6E575D6A898AB852, p0); } // 0x6E575D6A898AB852 b1207
	static void SET_PED_ID_RANGE(Any p0, Any p1) { invoker::Invoke<Void>(0xF107E836A70DCE05, p0, p1); } // 0xF107E836A70DCE05 b1207
	static Any _0x31167ED4324B758D(Any p0) { return invoker::Invoke<Any>(0x31167ED4324B758D, p0); } // 0x31167ED4324B758D b1207
	static void SET_PED_HIGHLY_PERCEPTIVE(Any p0, Any p1) { invoker::Invoke<Void>(0x52D59AB61DDC05DD, p0, p1); } // 0x52D59AB61DDC05DD b1207
	static void _0x733C87D4CE22BEA2(Any p0) { invoker::Invoke<Void>(0x733C87D4CE22BEA2, p0); } // 0x733C87D4CE22BEA2 b1207
	static void _0x028E7B3BBA0BD2FC(Any p0) { invoker::Invoke<Void>(0x028E7B3BBA0BD2FC, p0); } // 0x028E7B3BBA0BD2FC b1207
	static Any _0xFA8C10DCE0706D43(Any p0) { return invoker::Invoke<Any>(0xFA8C10DCE0706D43, p0); } // 0xFA8C10DCE0706D43 b1207
	static Any _0x2BA9D7BF629F920C(Any p0) { return invoker::Invoke<Any>(0x2BA9D7BF629F920C, p0); } // 0x2BA9D7BF629F920C b1207
	static void SET_PED_SEEING_RANGE(Any p0, Any p1) { invoker::Invoke<Void>(0xF29CF591C4BF6CEE, p0, p1); } // 0xF29CF591C4BF6CEE b1207
	static Any _0x900CA00CE703E1E2(Any p0) { return invoker::Invoke<Any>(0x900CA00CE703E1E2, p0); } // 0x900CA00CE703E1E2 b1207
	static void SET_PED_HEARING_RANGE(Any p0, Any p1) { invoker::Invoke<Void>(0x33A8F7F7D5F7F33C, p0, p1); } // 0x33A8F7F7D5F7F33C b1207
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Any p0, Any p1) { invoker::Invoke<Void>(0x2DB492222FB21E26, p0, p1); } // 0x2DB492222FB21E26 b1207
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Any p0, Any p1) { invoker::Invoke<Void>(0x70793BDCA1E854D4, p0, p1); } // 0x70793BDCA1E854D4 b1207
	static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Any p0, Any p1) { invoker::Invoke<Void>(0x9C74B0BC831B753A, p0, p1); } // 0x9C74B0BC831B753A b1207
	static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Any p0, Any p1) { invoker::Invoke<Void>(0x3B6405E8AB34A907, p0, p1); } // 0x3B6405E8AB34A907 b1207
	static void _0x9AB33CB5834885B3(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x9AB33CB5834885B3, p0, p1, p2, p3, p4); } // 0x9AB33CB5834885B3 b1207
	static void _0x899DFA0009AC93DE(Any p0, Any p1) { invoker::Invoke<Void>(0x899DFA0009AC93DE, p0, p1); } // 0x899DFA0009AC93DE b1207
	static void _0x3A5697B80FED5EBE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x3A5697B80FED5EBE, p0, p1, p2, p3, p4); } // 0x3A5697B80FED5EBE b1207
	static void SET_PED_STEALTH_MOVEMENT(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x88CBB5CEB96B7BD2, p0, p1, p2, p3); } // 0x88CBB5CEB96B7BD2 b1207
	static Any GET_PED_STEALTH_MOVEMENT(Any p0) { return invoker::Invoke<Any>(0x7C2AC9CA66575FBF, p0); } // 0x7C2AC9CA66575FBF b1207
	static void _0x7DE9692C6F64CFE8(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x7DE9692C6F64CFE8, p0, p1, p2, p3); } // 0x7DE9692C6F64CFE8 b1207
	static Any _0xD5FE956C70FF370B(Any p0) { return invoker::Invoke<Any>(0xD5FE956C70FF370B, p0); } // 0xD5FE956C70FF370B b1207
	static Any _0xC48A9EB0D499B3E5(Any p0) { return invoker::Invoke<Any>(0xC48A9EB0D499B3E5, p0); } // 0xC48A9EB0D499B3E5 b1207
	static Any CREATE_GROUP(Any p0) { return invoker::Invoke<Any>(0x90370EBE0FEE1A3D, p0); } // 0x90370EBE0FEE1A3D b1207
	static void SET_PED_AS_GROUP_LEADER(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2A7819605465FBCE, p0, p1, p2); } // 0x2A7819605465FBCE b1207
	static void SET_PED_AS_GROUP_MEMBER(Any p0, Any p1) { invoker::Invoke<Void>(0x9F3480FE65DB31B5, p0, p1); } // 0x9F3480FE65DB31B5 b1207
	static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2E2F4240B3F24647, p0, p1, p2); } // 0x2E2F4240B3F24647 b1207
	static void REMOVE_GROUP(Any p0) { invoker::Invoke<Void>(0x8EB2F69076AF7053, p0); } // 0x8EB2F69076AF7053 b1207
	static void REMOVE_PED_FROM_GROUP(Any p0) { invoker::Invoke<Void>(0xED74007FFB146BC2, p0); } // 0xED74007FFB146BC2 b1207
	static Any IS_PED_GROUP_MEMBER(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x9BB01E3834671191, p0, p1, p2); } // 0x9BB01E3834671191 b1207
	static Any _0x878B68960C1C2A35(Any p0, Any p1) { return invoker::Invoke<Any>(0x878B68960C1C2A35, p0, p1); } // 0x878B68960C1C2A35 b1207
	static Any IS_PED_HANGING_ON_TO_VEHICLE(Any p0) { return invoker::Invoke<Any>(0x1C86D8AEF8254B78, p0); } // 0x1C86D8AEF8254B78 b1207
	static void SET_GROUP_SEPARATION_RANGE(Any p0, Any p1) { invoker::Invoke<Void>(0x4102C7858CFEE4E4, p0, p1); } // 0x4102C7858CFEE4E4 b1207
	static void _0x89E59DBD15E21177(Any p0, Any p1) { invoker::Invoke<Void>(0x89E59DBD15E21177, p0, p1); } // 0x89E59DBD15E21177 b1207
	static Any IS_PED_PRONE(Any p0) { return invoker::Invoke<Any>(0xD6A86331A537A7B9, p0); } // 0xD6A86331A537A7B9 b1207
	static Any _0x7583A9D35248B83F(Any p0) { return invoker::Invoke<Any>(0x7583A9D35248B83F, p0); } // 0x7583A9D35248B83F b1207
	static Any IS_PED_IN_COMBAT(Any p0, Any p1) { return invoker::Invoke<Any>(0x4859F1FC66A6278E, p0, p1); } // 0x4859F1FC66A6278E b1207
	static Any CAN_PED_IN_COMBAT_SEE_TARGET() { return invoker::Invoke<Any>(0xEAD42DE3610D0721); } // 0xEAD42DE3610D0721 b1207
	static Any IS_PED_JACKING(Any p0) { return invoker::Invoke<Any>(0x4AE4FF911DFB61DA, p0); } // 0x4AE4FF911DFB61DA b1207
	static Any IS_PED_BEING_JACKED(Any p0) { return invoker::Invoke<Any>(0x9A497FE2DF198913, p0); } // 0x9A497FE2DF198913 b1207
	static Any IS_PED_BEING_STUNNED(Any p0, Any p1) { return invoker::Invoke<Any>(0x4FBACCE3B4138EE8, p0, p1); } // 0x4FBACCE3B4138EE8 b1207
	static Any GET_PEDS_JACKER(Any p0) { return invoker::Invoke<Any>(0x9B128DC36C1E04CF, p0); } // 0x9B128DC36C1E04CF b1207
	static Any GET_JACK_TARGET(Any p0) { return invoker::Invoke<Any>(0x5486A79D9FBD342D, p0); } // 0x5486A79D9FBD342D b1207
	static Any IS_PED_FLEEING(Any p0) { return invoker::Invoke<Any>(0xBBCCE00B381F8482, p0); } // 0xBBCCE00B381F8482 b1207
	static Any IS_PED_IN_COVER(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x60DFD0691A170B88, p0, p1, p2); } // 0x60DFD0691A170B88 b1207
	static Any _0x2DD4E0E26DFAD97D(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x2DD4E0E26DFAD97D, p0, p1, p2); } // 0x2DD4E0E26DFAD97D b1207
	static Any _0x06FA94C835787C64(Any p0) { return invoker::Invoke<Any>(0x06FA94C835787C64, p0); } // 0x06FA94C835787C64 b1207
	static Any _0xBD6B242B8BD5543A(Any p0) { return invoker::Invoke<Any>(0xBD6B242B8BD5543A, p0); } // 0xBD6B242B8BD5543A b1207
	static Any IS_PED_IN_COVER_FACING_LEFT(Any p0) { return invoker::Invoke<Any>(0x845333B3150583AB, p0); } // 0x845333B3150583AB b1207
	static Any IS_PED_GOING_INTO_COVER(Any p0) { return invoker::Invoke<Any>(0x9F65DBC537E59AD5, p0); } // 0x9F65DBC537E59AD5 b1207
	static Any _0x77525BBF433F2CD6(Any p0) { return invoker::Invoke<Any>(0x77525BBF433F2CD6, p0); } // 0x77525BBF433F2CD6 b1207
	static Any _0xC22AA08A8ADB87D4(Any p0) { return invoker::Invoke<Any>(0xC22AA08A8ADB87D4, p0); } // 0xC22AA08A8ADB87D4 b1207
	static Any _0x569F1E1237508DEB(Any p0) { return invoker::Invoke<Any>(0x569F1E1237508DEB, p0); } // 0x569F1E1237508DEB b1207
	static Any _0x3BBDD6143FF16F98(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x3BBDD6143FF16F98, p0, p1, p2, p3, p4); } // 0x3BBDD6143FF16F98 b1207
	static Any _0x2B02DB082258625F(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x2B02DB082258625F, p0, p1, p2, p3, p4); } // 0x2B02DB082258625F b1207
	static Any _0xA0774E388CE4A679(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xA0774E388CE4A679, p0, p1, p2, p3); } // 0xA0774E388CE4A679 b1207
	static Any _0xBEC65C6049B3219D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xBEC65C6049B3219D, p0, p1, p2, p3, p4, p5); } // 0xBEC65C6049B3219D b1207
	static Any _0xBDED916A9F9B0604(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xBDED916A9F9B0604, p0, p1, p2, p3, p4, p5); } // 0xBDED916A9F9B0604 b1207
	static Any _0x4D0D2E3D8BC000EB(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x4D0D2E3D8BC000EB, p0, p1, p2); } // 0x4D0D2E3D8BC000EB b1207
	static Any GET_SEAT_PED_IS_TRYING_TO_ENTER(Any p0) { return invoker::Invoke<Any>(0x6F4C85ACD641BCD2, p0); } // 0x6F4C85ACD641BCD2 b1207
	static Any GET_PED_SOURCE_OF_DEATH(Any p0) { return invoker::Invoke<Any>(0x93C8B64DEB84728C, p0); } // 0x93C8B64DEB84728C b1207
	static Any GET_PED_CAUSE_OF_DEATH(Any p0) { return invoker::Invoke<Any>(0x16FFE42AB2D2DC59, p0); } // 0x16FFE42AB2D2DC59 b1207
	static Any GET_PED_TIME_OF_DEATH(Any p0) { return invoker::Invoke<Any>(0x1E98817B311AE98A, p0); } // 0x1E98817B311AE98A b1207
	static Any _0x5407B7288D0478B7(Any p0, Any p1) { return invoker::Invoke<Any>(0x5407B7288D0478B7, p0, p1); } // 0x5407B7288D0478B7 b1207
	static Any _0x7BE607DAFF382FD2(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x7BE607DAFF382FD2, p0, p1, p2); } // 0x7BE607DAFF382FD2 b1207
	static Any _0x336B3D200AB007CB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x336B3D200AB007CB, p0, p1, p2, p3, p4, p5); } // 0x336B3D200AB007CB b1207
	static Any _0xCD66FEA29400A0B5(Any p0) { return invoker::Invoke<Any>(0xCD66FEA29400A0B5, p0); } // 0xCD66FEA29400A0B5 b1207
	static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Any p0, Any p1) { invoker::Invoke<Void>(0xADB3F206518799E8, p0, p1); } // 0xADB3F206518799E8 b1207
	static Any _0x3CC4A718C258BDD0(Any p0) { return invoker::Invoke<Any>(0x3CC4A718C258BDD0, p0); } // 0x3CC4A718C258BDD0 b1207
	static void SET_PED_RELATIONSHIP_GROUP_HASH(Any p0, Any p1) { invoker::Invoke<Void>(0xC80A74AC829DDD92, p0, p1); } // 0xC80A74AC829DDD92 b1207
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBF25EB89375A37AD, p0, p1, p2); } // 0xBF25EB89375A37AD b1207
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5E29243FB56FC6D4, p0, p1, p2); } // 0x5E29243FB56FC6D4 b1207
	static Any ADD_RELATIONSHIP_GROUP(Any p0, Any p1) { return invoker::Invoke<Any>(0xF372BC22FCB88606, p0, p1); } // 0xF372BC22FCB88606 b1207
	static void REMOVE_RELATIONSHIP_GROUP(Any p0) { invoker::Invoke<Void>(0xB6BA2444AB393DA2, p0); } // 0xB6BA2444AB393DA2 b1207
	static Any GET_RELATIONSHIP_BETWEEN_PEDS(Any p0, Any p1) { return invoker::Invoke<Any>(0xEBA5AD3A0EAF7121, p0, p1); } // 0xEBA5AD3A0EAF7121 b1207
	static Any GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Any p0) { return invoker::Invoke<Any>(0x42FDD0F017B1E38E, p0); } // 0x42FDD0F017B1E38E b1207
	static Any GET_PED_RELATIONSHIP_GROUP_HASH(Any p0) { return invoker::Invoke<Any>(0x7DBDD04862D95F04, p0); } // 0x7DBDD04862D95F04 b1207
	static Any GET_RELATIONSHIP_BETWEEN_GROUPS(Any p0, Any p1) { return invoker::Invoke<Any>(0x9E6B70061662AE5C, p0, p1); } // 0x9E6B70061662AE5C b1207
	static void _0xDC91F22F09BC6C2F(Any p0, Any p1) { invoker::Invoke<Void>(0xDC91F22F09BC6C2F, p0, p1); } // 0xDC91F22F09BC6C2F b1207
	static Any _0x9629FAF6460D35CB() { return invoker::Invoke<Any>(0x9629FAF6460D35CB); } // 0x9629FAF6460D35CB b1207
	static Any _0x4E68C7EF706DF35D() { return invoker::Invoke<Any>(0x4E68C7EF706DF35D); } // 0x4E68C7EF706DF35D b1207
	static Any _0x3ACCE14DFA6BA8C2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x3ACCE14DFA6BA8C2, p0, p1, p2, p3, p4, p5, p6); } // 0x3ACCE14DFA6BA8C2 b1207
	static Any SET_PED_TO_INFORM_RESPECTED_FRIENDS() { return invoker::Invoke<Any>(0x112942C6E708F70B); } // 0x112942C6E708F70B b1207
	static Any _0x40C9155AF8BC13F3(Any p0) { return invoker::Invoke<Any>(0x40C9155AF8BC13F3, p0); } // 0x40C9155AF8BC13F3 b1207
	static Any _0xF4860514AD354226(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xF4860514AD354226, p0, p1, p2, p3, p4, p5); } // 0xF4860514AD354226 b1207
	static Any IS_PED_RESPONDING_TO_EVENT(Any p0, Any p1) { return invoker::Invoke<Any>(0x625B774D75C87068, p0, p1); } // 0x625B774D75C87068 b1207
	static Any _0x5E9FAF6C513347B4(Any p0, Any p1) { return invoker::Invoke<Any>(0x5E9FAF6C513347B4, p0, p1); } // 0x5E9FAF6C513347B4 b1207
	static Any _0x326F7951EF0D7F75(Any p0, Any p1) { return invoker::Invoke<Any>(0x326F7951EF0D7F75, p0, p1); } // 0x326F7951EF0D7F75 b1207
	static Any _0xE76687023D8C8505(Any p0, Any p1) { return invoker::Invoke<Any>(0xE76687023D8C8505, p0, p1); } // 0xE76687023D8C8505 b1207
	static Any _0xCB8F4C9343EBE240(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xCB8F4C9343EBE240, p0, p1, p2); } // 0xCB8F4C9343EBE240 b1207
	static void SET_PED_FIRING_PATTERN(Any p0, Any p1) { invoker::Invoke<Void>(0x9AC577F5A12AD8A9, p0, p1); } // 0x9AC577F5A12AD8A9 b1207
	static void _0x20E54854DEF6A54A(Any p0, Any p1) { invoker::Invoke<Void>(0x20E54854DEF6A54A, p0, p1); } // 0x20E54854DEF6A54A b1207
	static Any _0x244E8C282188E40F() { return invoker::Invoke<Any>(0x244E8C282188E40F); } // 0x244E8C282188E40F b1207
	static void SET_PED_SHOOT_RATE(Any p0, Any p1) { invoker::Invoke<Void>(0x614DA022990752DC, p0, p1); } // 0x614DA022990752DC b1207
	static void _0x3C529A827998F9B3(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3C529A827998F9B3, p0, p1, p2); } // 0x3C529A827998F9B3 b1207
	static void _0x1F44B7E283C09EDE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1F44B7E283C09EDE, p0, p1, p2); } // 0x1F44B7E283C09EDE b1207
	static void SET_COMBAT_FLOAT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xFF41B4B141ED981C, p0, p1, p2); } // 0xFF41B4B141ED981C b1207
	static Any GET_COMBAT_FLOAT(Any p0, Any p1) { return invoker::Invoke<Any>(0x52DFF8A10508090A, p0, p1); } // 0x52DFF8A10508090A b1207
	static void GET_GROUP_SIZE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x8DE69FE35CA09A45, p0, p1, p2); } // 0x8DE69FE35CA09A45 b1207
	static Any DOES_GROUP_EXIST(Any p0) { return invoker::Invoke<Any>(0x7C6B0C22F9F40BBE, p0); } // 0x7C6B0C22F9F40BBE b1207
	static Any _0x0455546F23FF08E4(Any p0) { return invoker::Invoke<Any>(0x0455546F23FF08E4, p0); } // 0x0455546F23FF08E4 b1207
	static Any _0x909AD9E9A92A10DF() { return invoker::Invoke<Any>(0x909AD9E9A92A10DF); } // 0x909AD9E9A92A10DF b1207
	static Any GET_PED_GROUP_INDEX(Any p0) { return invoker::Invoke<Any>(0xF162E133B4E7A675, p0); } // 0xF162E133B4E7A675 b1207
	static Any IS_PED_IN_GROUP(Any p0) { return invoker::Invoke<Any>(0x5891CAC5D4ACFF74, p0); } // 0x5891CAC5D4ACFF74 b1207
	static Any _0x917760CFE7A0E0F1(Any p0) { return invoker::Invoke<Any>(0x917760CFE7A0E0F1, p0); } // 0x917760CFE7A0E0F1 b1207
	static Any GET_PLAYER_PED_IS_FOLLOWING() { return invoker::Invoke<Any>(0x6A3975DEA89F9A17); } // 0x6A3975DEA89F9A17 b1207
	static void SET_GROUP_FORMATION(Any p0, Any p1) { invoker::Invoke<Void>(0xCE2F5FC3AF7E8C1E, p0, p1); } // 0xCE2F5FC3AF7E8C1E b1207
	static Any _0x13A1B061007C906B(Any p0) { return invoker::Invoke<Any>(0x13A1B061007C906B, p0); } // 0x13A1B061007C906B b1207
	static void SET_GROUP_FORMATION_SPACING(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x1D9D45004C28C916, p0, p1, p2, p3); } // 0x1D9D45004C28C916 b1207
	static void RESET_GROUP_FORMATION_DEFAULT_SPACING(Any p0) { invoker::Invoke<Void>(0x63DAB4CCB3273205, p0); } // 0x63DAB4CCB3273205 b1207
	static Any _0xB05CC690CDE8A4A9(Any p0, Any p1) { return invoker::Invoke<Any>(0xB05CC690CDE8A4A9, p0, p1); } // 0xB05CC690CDE8A4A9 b1207
	static void _0x4E23CD07BD161E06(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x4E23CD07BD161E06, p0, p1, p2, p3, p4); } // 0x4E23CD07BD161E06 b1207
	static Any _0xB05945C1E9E60D91(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xB05945C1E9E60D91, p0, p1, p2, p3); } // 0xB05945C1E9E60D91 b1207
	static Any _0x7CC7D3B7AF7FB71F(Any p0, Any p1) { return invoker::Invoke<Any>(0x7CC7D3B7AF7FB71F, p0, p1); } // 0x7CC7D3B7AF7FB71F b1207
	static void _0x478F6B9920446CE2(Any p0, Any p1) { invoker::Invoke<Void>(0x478F6B9920446CE2, p0, p1); } // 0x478F6B9920446CE2 b1207
	static void _0x0E9E95FDEDCC9D35(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0E9E95FDEDCC9D35, p0, p1, p2); } // 0x0E9E95FDEDCC9D35 b1207
	static Any _0x8AF8E647D6B2A649(Any p0, Any p1) { return invoker::Invoke<Any>(0x8AF8E647D6B2A649, p0, p1); } // 0x8AF8E647D6B2A649 b1207
	static void _0x87C2724A56F66020(Any p0) { invoker::Invoke<Void>(0x87C2724A56F66020, p0); } // 0x87C2724A56F66020 b1207
	static void _0xD5BD1B5318A81994(Any p0, Any p1) { invoker::Invoke<Void>(0xD5BD1B5318A81994, p0, p1); } // 0xD5BD1B5318A81994 b1207
	static void _0x9BBEAF8B0C007F1E(Any p0, Any p1) { invoker::Invoke<Void>(0x9BBEAF8B0C007F1E, p0, p1); } // 0x9BBEAF8B0C007F1E b1207
	static void _0xC99F104BDF8C7F5A(Any p0, Any p1) { invoker::Invoke<Void>(0xC99F104BDF8C7F5A, p0, p1); } // 0xC99F104BDF8C7F5A b1207
	static void _0x02E741E19E39628C(Any p0, Any p1) { invoker::Invoke<Void>(0x02E741E19E39628C, p0, p1); } // 0x02E741E19E39628C b1207
	static void _0x97C475212B327666(Any p0, Any p1) { invoker::Invoke<Void>(0x97C475212B327666, p0, p1); } // 0x97C475212B327666 b1207
	static void _0x154B7E841AC7412F(Any p0, Any p1) { invoker::Invoke<Void>(0x154B7E841AC7412F, p0, p1); } // 0x154B7E841AC7412F b1207
	static void _0x8AFCCC0F18D70018(Any p0, Any p1) { invoker::Invoke<Void>(0x8AFCCC0F18D70018, p0, p1); } // 0x8AFCCC0F18D70018 b1207
	static void _0xE1103300F3456DE7(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE1103300F3456DE7, p0, p1, p2); } // 0xE1103300F3456DE7 b1207
	static void _0xA8A95CECB1906EA2(Any p0, Any p1) { invoker::Invoke<Void>(0xA8A95CECB1906EA2, p0, p1); } // 0xA8A95CECB1906EA2 b1207
	static void _0xDDFAD4DEAA7FA362(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xDDFAD4DEAA7FA362, p0, p1, p2, p3, p4); } // 0xDDFAD4DEAA7FA362 b1207
	static void _0x966DE09688A1DE39(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x966DE09688A1DE39, p0, p1, p2, p3, p4); } // 0x966DE09688A1DE39 b1207
	static void _0x7E5185B979706210(Any p0, Any p1) { invoker::Invoke<Void>(0x7E5185B979706210, p0, p1); } // 0x7E5185B979706210 b1207
	static void _0x40C3524D4ED83554(Any p0, Any p1) { invoker::Invoke<Void>(0x40C3524D4ED83554, p0, p1); } // 0x40C3524D4ED83554 b1207
	static void _0x86FAFC18E3D4380C(Any p0, Any p1) { invoker::Invoke<Void>(0x86FAFC18E3D4380C, p0, p1); } // 0x86FAFC18E3D4380C b1207
	static Any _0x07EA5B053FA60AC7() { return invoker::Invoke<Any>(0x07EA5B053FA60AC7); } // 0x07EA5B053FA60AC7 b1207
	static void _0xF9CBD46433E36713(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0xF9CBD46433E36713, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xF9CBD46433E36713 b1207
	static Any GET_VEHICLE_PED_IS_USING(Any p0) { return invoker::Invoke<Any>(0x6094AD011A2EA87D, p0); } // 0x6094AD011A2EA87D b1207
	static Any GET_VEHICLE_PED_IS_ENTERING(Any p0) { return invoker::Invoke<Any>(0xF92691AED837A5FC, p0); } // 0xF92691AED837A5FC b1207
	static Any _0xE4770DA1B8FF4FD1(Any p0) { return invoker::Invoke<Any>(0xE4770DA1B8FF4FD1, p0); } // 0xE4770DA1B8FF4FD1 b1207
	static Any _0x5064DB5083C29921() { return invoker::Invoke<Any>(0x5064DB5083C29921); } // 0x5064DB5083C29921 b1207
	static Any _0x4E76CB57222A00E5(Any p0) { return invoker::Invoke<Any>(0x4E76CB57222A00E5, p0); } // 0x4E76CB57222A00E5 b1207
	static Any _0x849BD6C6314793D0(Any p0) { return invoker::Invoke<Any>(0x849BD6C6314793D0, p0); } // 0x849BD6C6314793D0 b1207
	static Any _0x1D46B417F926D34D(Any p0) { return invoker::Invoke<Any>(0x1D46B417F926D34D, p0); } // 0x1D46B417F926D34D b1207
	static void SET_PED_GRAVITY(Any p0, Any p1) { invoker::Invoke<Void>(0x9FF447B6B6AD960A, p0, p1); } // 0x9FF447B6B6AD960A b1207
	static void _0x96595B36D6A2279B(Any p0, Any p1) { invoker::Invoke<Void>(0x96595B36D6A2279B, p0, p1); } // 0x96595B36D6A2279B b1207
	static void _0x7FB0088E8769CDDB(Any p0, Any p1) { invoker::Invoke<Void>(0x7FB0088E8769CDDB, p0, p1); } // 0x7FB0088E8769CDDB b1207
	static void _0xA90684ED185CCB4B(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xA90684ED185CCB4B, p0, p1, p2, p3); } // 0xA90684ED185CCB4B b1207
	static void _0x8B3CB08158E98481(Any p0, Any p1) { invoker::Invoke<Void>(0x8B3CB08158E98481, p0, p1); } // 0x8B3CB08158E98481 b1207
	static void _0x1CE875505D45338A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1CE875505D45338A, p0, p1, p2); } // 0x1CE875505D45338A b1207
	static void APPLY_DAMAGE_TO_PED(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x697157CED63F18D4, p0, p1, p2, p3, p4); } // 0x697157CED63F18D4 b1207
	static void _0xBAD2A311667A50D7(Any p0, Any p1) { invoker::Invoke<Void>(0xBAD2A311667A50D7, p0, p1); } // 0xBAD2A311667A50D7 b1207
	static Any GET_PED_TYPE(Any p0) { return invoker::Invoke<Any>(0xFF059E1E4C01E63C, p0); } // 0xFF059E1E4C01E63C b1207
	static void SET_PED_AS_COP(Any p0, Any p1) { invoker::Invoke<Void>(0xBB03C38DD3FB7FFD, p0, p1); } // 0xBB03C38DD3FB7FFD b1207
	static Any _0x405180B14DA5A935() { return invoker::Invoke<Any>(0x405180B14DA5A935); } // 0x405180B14DA5A935 b1207
	static void _0x24C82EF607105FAA(Any p0, Any p1) { invoker::Invoke<Void>(0x24C82EF607105FAA, p0, p1); } // 0x24C82EF607105FAA b1207
	static Any _0xD7AD3C7EBAF88C92() { return invoker::Invoke<Any>(0xD7AD3C7EBAF88C92); } // 0xD7AD3C7EBAF88C92 b1207
	static void _0xB8B6430EAD2D2437(Any p0, Any p1) { invoker::Invoke<Void>(0xB8B6430EAD2D2437, p0, p1); } // 0xB8B6430EAD2D2437 b1207
	static void _0x329772C47DBB2FBC(Any p0) { invoker::Invoke<Void>(0x329772C47DBB2FBC, p0); } // 0x329772C47DBB2FBC b1207
	static Any _0x331550B212014B92(Any p0, Any p1) { return invoker::Invoke<Any>(0x331550B212014B92, p0, p1); } // 0x331550B212014B92 b1207
	static Any _0x94132D7C8D3575C4(Any p0) { return invoker::Invoke<Any>(0x94132D7C8D3575C4, p0); } // 0x94132D7C8D3575C4 b1207
	static void _0x8AF46E5159A5B620(Any p0, Any p1) { invoker::Invoke<Void>(0x8AF46E5159A5B620, p0, p1); } // 0x8AF46E5159A5B620 b1207
	static void _0x45FEA6D5539BD474(Any p0, Any p1) { invoker::Invoke<Void>(0x45FEA6D5539BD474, p0, p1); } // 0x45FEA6D5539BD474 b1207
	static void _0x20C5459379D75C1C(Any p0, Any p1) { invoker::Invoke<Void>(0x20C5459379D75C1C, p0, p1); } // 0x20C5459379D75C1C b1207
	static void _0xE37ACEE15AC50C7E(Any p0, Any p1) { invoker::Invoke<Void>(0xE37ACEE15AC50C7E, p0, p1); } // 0xE37ACEE15AC50C7E b1207
	static void _0xA3C53CDE922BC78B(Any p0, Any p1) { invoker::Invoke<Void>(0xA3C53CDE922BC78B, p0, p1); } // 0xA3C53CDE922BC78B b1207
	static void _0x41C23A8E6B344867(Any p0, Any p1) { invoker::Invoke<Void>(0x41C23A8E6B344867, p0, p1); } // 0x41C23A8E6B344867 b1207
	static Any _0x9337183FDA2E9035(Any p0, Any p1) { return invoker::Invoke<Any>(0x9337183FDA2E9035, p0, p1); } // 0x9337183FDA2E9035 b1207
	static Any _0xA454D234E45BB6E5(Any p0, Any p1) { return invoker::Invoke<Any>(0xA454D234E45BB6E5, p0, p1); } // 0xA454D234E45BB6E5 b1207
	static void _0xA7DC9266ED6A4E51(Any p0) { invoker::Invoke<Void>(0xA7DC9266ED6A4E51, p0); } // 0xA7DC9266ED6A4E51 b1207
	static Any _0x89816B58C3466262(Any p0) { return invoker::Invoke<Any>(0x89816B58C3466262, p0); } // 0x89816B58C3466262 b1207
	static Any _0x97B06669AC569003() { return invoker::Invoke<Any>(0x97B06669AC569003); } // 0x97B06669AC569003 b1207
	static void _0x85F500F4E24CA43E(Any p0, Any p1) { invoker::Invoke<Void>(0x85F500F4E24CA43E, p0, p1); } // 0x85F500F4E24CA43E b1207
	static void _0x9B9B9FA0EA283E3D(Any p0, Any p1) { invoker::Invoke<Void>(0x9B9B9FA0EA283E3D, p0, p1); } // 0x9B9B9FA0EA283E3D b1207
	static void _0xEC60D1D225BC50AA(Any p0, Any p1) { invoker::Invoke<Void>(0xEC60D1D225BC50AA, p0, p1); } // 0xEC60D1D225BC50AA b1207
	static void _0x12F2D161BF4031FC(Any p0, Any p1) { invoker::Invoke<Void>(0x12F2D161BF4031FC, p0, p1); } // 0x12F2D161BF4031FC b1207
	static void _0x0ADA3EC589E1736E() { invoker::Invoke<Void>(0x0ADA3EC589E1736E); } // 0x0ADA3EC589E1736E b1207
	static Any _0xE33F98BD76490ABC(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xE33F98BD76490ABC, p0, p1, p2); } // 0xE33F98BD76490ABC b1207
	static Any _0xD55DB4466D00A258(Any p0) { return invoker::Invoke<Any>(0xD55DB4466D00A258, p0); } // 0xD55DB4466D00A258 b1207
	static void SET_PED_MAX_HEALTH(Any p0, Any p1) { invoker::Invoke<Void>(0xF5F6378C4F3419D3, p0, p1); } // 0xF5F6378C4F3419D3 b1207
	static Any GET_PED_MAX_HEALTH(Any p0) { return invoker::Invoke<Any>(0x4700A416E8324EF3, p0); } // 0x4700A416E8324EF3 b1207
	static void _0xF6B82FCE03B43A37(Any p0, Any p1) { invoker::Invoke<Void>(0xF6B82FCE03B43A37, p0, p1); } // 0xF6B82FCE03B43A37 b1207
	static void _0x7DD7FB3480D8083E(Any p0) { invoker::Invoke<Void>(0x7DD7FB3480D8083E, p0); } // 0x7DD7FB3480D8083E b1207
	static void SET_PED_MAX_TIME_IN_WATER(Any p0, Any p1) { invoker::Invoke<Void>(0x43C851690662113D, p0, p1); } // 0x43C851690662113D b1207
	static void SET_PED_MAX_TIME_UNDERWATER(Any p0, Any p1) { invoker::Invoke<Void>(0x6BA428C528D9E522, p0, p1); } // 0x6BA428C528D9E522 b1207
	static void _0xAF041C10756C30FB(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xAF041C10756C30FB, p0, p1, p2, p3); } // 0xAF041C10756C30FB b1207
	static void _0x5AF24CA9C974E51A(Any p0, Any p1) { invoker::Invoke<Void>(0x5AF24CA9C974E51A, p0, p1); } // 0x5AF24CA9C974E51A b1207
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Any p0, Any p1) { invoker::Invoke<Void>(0x7A6535691B477C48, p0, p1); } // 0x7A6535691B477C48 b1207
	static Any CAN_KNOCK_PED_OFF_VEHICLE(Any p0) { return invoker::Invoke<Any>(0x51AC07A44D4F5B8A, p0); } // 0x51AC07A44D4F5B8A b1207
	static void KNOCK_PED_OFF_VEHICLE(Any p0) { invoker::Invoke<Void>(0x45BBCBA77C29A841, p0); } // 0x45BBCBA77C29A841 b1207
	static Any GET_PED_AS_GROUP_MEMBER(Any p0, Any p1) { return invoker::Invoke<Any>(0x51455483CF23ED97, p0, p1); } // 0x51455483CF23ED97 b1207
	static Any GET_PED_AS_GROUP_LEADER(Any p0) { return invoker::Invoke<Any>(0x5CCE68DBD5FE93EC, p0); } // 0x5CCE68DBD5FE93EC b1207
	static void SET_PED_KEEP_TASK(Any p0, Any p1) { invoker::Invoke<Void>(0x971D38760FBC02EF, p0, p1); } // 0x971D38760FBC02EF b1207
	static Any IS_PED_SWIMMING(Any p0) { return invoker::Invoke<Any>(0x9DE327631295B4C2, p0); } // 0x9DE327631295B4C2 b1207
	static Any IS_PED_SWIMMING_UNDER_WATER(Any p0) { return invoker::Invoke<Any>(0xC024869A53992F34, p0); } // 0xC024869A53992F34 b1207
	static Any _0xDC88D06719070C39(Any p0) { return invoker::Invoke<Any>(0xDC88D06719070C39, p0); } // 0xDC88D06719070C39 b1207
	static void SET_CREATE_RANDOM_COPS(Any p0) { invoker::Invoke<Void>(0x102E68B2024D536D, p0); } // 0x102E68B2024D536D b1207
	static Any IS_PED_IN_ANY_TRAIN(Any p0) { return invoker::Invoke<Any>(0x6F972C1AB75A1ED0, p0); } // 0x6F972C1AB75A1ED0 b1207
	static Any IS_PED_GETTING_INTO_A_VEHICLE(Any p0) { return invoker::Invoke<Any>(0xBB062B2B5722478E, p0); } // 0xBB062B2B5722478E b1207
	static Any _0x550CB89DD7F4FA3D(Any p0, Any p1) { return invoker::Invoke<Any>(0x550CB89DD7F4FA3D, p0, p1); } // 0x550CB89DD7F4FA3D b1207
	static void SET_ENABLE_HANDCUFFS(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDF1AF8B5D56542FA, p0, p1, p2); } // 0xDF1AF8B5D56542FA b1207
	static void SET_ENABLE_BOUND_ANKLES(Any p0, Any p1) { invoker::Invoke<Void>(0xC52E0F855C58FC2E, p0, p1); } // 0xC52E0F855C58FC2E b1207
	static Any _0x8822F139408B8D0A(Any p0) { return invoker::Invoke<Any>(0x8822F139408B8D0A, p0); } // 0x8822F139408B8D0A b1207
	static void _0x8822F124788B8D0A(Any p0, Any p1) { invoker::Invoke<Void>(0x8822F124788B8D0A, p0, p1); } // 0x8822F124788B8D0A b1207
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Any p0) { invoker::Invoke<Void>(0x97B0DB5B4AA74E77, p0); } // 0x97B0DB5B4AA74E77 b1207
	static void _0x3AE3552E7C207CC5(Any p0, Any p1) { invoker::Invoke<Void>(0x3AE3552E7C207CC5, p0, p1); } // 0x3AE3552E7C207CC5 b1207
	static void _0x88A95BB640FC186F(Any p0) { invoker::Invoke<Void>(0x88A95BB640FC186F, p0); } // 0x88A95BB640FC186F b1207
	static void RESET_PED_IN_VEHICLE_CONTEXT(Any p0) { invoker::Invoke<Void>(0x22EF8FF8778030EB, p0); } // 0x22EF8FF8778030EB b1207
	static void _0x878E8104FA27CDAE(Any p0, Any p1) { invoker::Invoke<Void>(0x878E8104FA27CDAE, p0, p1); } // 0x878E8104FA27CDAE b1207
	static void SET_PED_GESTURE_GROUP(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDDF803377F94AAA8, p0, p1, p2); } // 0xDDF803377F94AAA8 b1207
	static void _0x923583741DC87BCE(Any p0, Any p1) { invoker::Invoke<Void>(0x923583741DC87BCE, p0, p1); } // 0x923583741DC87BCE b1207
	static void _0x4FD80C3DD84B817B(Any p0) { invoker::Invoke<Void>(0x4FD80C3DD84B817B, p0); } // 0x4FD80C3DD84B817B b1207
	static void _0x89F5E7ADECCCB49C(Any p0, Any p1) { invoker::Invoke<Void>(0x89F5E7ADECCCB49C, p0, p1); } // 0x89F5E7ADECCCB49C b1207
	static void _0x58F7DB5BD8FA2288(Any p0) { invoker::Invoke<Void>(0x58F7DB5BD8FA2288, p0); } // 0x58F7DB5BD8FA2288 b1207
	static void _0x2371C39D4F91C288(Any p0) { invoker::Invoke<Void>(0x2371C39D4F91C288, p0); } // 0x2371C39D4F91C288 b1207
	static void _0xEAA8242C8479C27D(Any p0, Any p1) { invoker::Invoke<Void>(0xEAA8242C8479C27D, p0, p1); } // 0xEAA8242C8479C27D b1207
	static void _0xF6E1E9F47A7686F8(Any p0, Any p1) { invoker::Invoke<Void>(0xF6E1E9F47A7686F8, p0, p1); } // 0xF6E1E9F47A7686F8 b1207
	static void _0x1E4C940233FC0C6F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x1E4C940233FC0C6F, p0, p1, p2, p3, p4, p5); } // 0x1E4C940233FC0C6F b1207
	static void _0x16F798A05BB9E3B5(Any p0) { invoker::Invoke<Void>(0x16F798A05BB9E3B5, p0); } // 0x16F798A05BB9E3B5 b1207
	static void _0xAAB050DA48B57978(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xAAB050DA48B57978, p0, p1, p2, p3, p4); } // 0xAAB050DA48B57978 b1207
	static void _0x935CF6E42BAF7F4D(Any p0) { invoker::Invoke<Void>(0x935CF6E42BAF7F4D, p0); } // 0x935CF6E42BAF7F4D b1207
	static void _0x32CCAD8A981B53D3(Any p0) { invoker::Invoke<Void>(0x32CCAD8A981B53D3, p0); } // 0x32CCAD8A981B53D3 b1207
	static void _0x406CCF555B04FAD3(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x406CCF555B04FAD3, p0, p1, p2); } // 0x406CCF555B04FAD3 b1207
	static Any _0x50F124E6EF188B22(Any p0) { return invoker::Invoke<Any>(0x50F124E6EF188B22, p0); } // 0x50F124E6EF188B22 b1207
	static Any _0x6FB76442469ABD68(Any p0) { return invoker::Invoke<Any>(0x6FB76442469ABD68, p0); } // 0x6FB76442469ABD68 b1207
	static Any GET_ANIM_INITIAL_OFFSET_POSITION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0xBE22B26DD764C040, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xBE22B26DD764C040 b1207
	static Any GET_ANIM_INITIAL_OFFSET_ROTATION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x4B805E6046EE9E47, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x4B805E6046EE9E47 b1207
	static Any SET_PED_RANDOM_COMPONENT_VARIATION() { return invoker::Invoke<Any>(0xC8A9481A01E63C28); } // 0xC8A9481A01E63C28 b1207
	static void KNOCK_OFF_PED_PROP(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x6FD7816A36615F48, p0, p1, p2, p3, p4); } // 0x6FD7816A36615F48 b1207
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Any p0, Any p1) { invoker::Invoke<Void>(0x9F8AA94D6D97DBF4, p0, p1); } // 0x9F8AA94D6D97DBF4 b1207
	static Any _0x268B3AEBF032A88D(Any p0) { return invoker::Invoke<Any>(0x268B3AEBF032A88D, p0); } // 0x268B3AEBF032A88D b1207
	static void _0xC17A94CC8FC3C61A(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xC17A94CC8FC3C61A, p0, p1, p2, p3, p4); } // 0xC17A94CC8FC3C61A b1207
	static void _0x25ACFC650B65C538(Any p0, Any p1) { invoker::Invoke<Void>(0x25ACFC650B65C538, p0, p1); } // 0x25ACFC650B65C538 b1207
	static Any _0x134775B093AD5C38(Any p0) { return invoker::Invoke<Any>(0x134775B093AD5C38, p0); } // 0x134775B093AD5C38 b1207
	static Any _0x1D491CCF7211FB74(Any p0) { return invoker::Invoke<Any>(0x1D491CCF7211FB74, p0); } // 0x1D491CCF7211FB74 b1207
	static void REGISTER_TARGET(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2F25D9AEFA34FBA2, p0, p1, p2); } // 0x2F25D9AEFA34FBA2 b1207
	static void _0xD8736EFDA38EDC5C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xD8736EFDA38EDC5C, p0, p1, p2, p3, p4); } // 0xD8736EFDA38EDC5C b1207
	static void REGISTER_HATED_TARGETS_AROUND_PED(Any p0, Any p1) { invoker::Invoke<Void>(0x9222F300BF8354FE, p0, p1); } // 0x9222F300BF8354FE b1207
	static Any _0x6E5CBCB3941D7D08() { return invoker::Invoke<Any>(0x6E5CBCB3941D7D08); } // 0x6E5CBCB3941D7D08 b1207
	static void _0x4707E9C23D8CA3FE(Any p0, Any p1) { invoker::Invoke<Void>(0x4707E9C23D8CA3FE, p0, p1); } // 0x4707E9C23D8CA3FE b1207
	static Any GET_CLOSEST_PED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0xC33AB876A77F8164, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xC33AB876A77F8164 b1207
	static Any CAN_PED_RAGDOLL(Any p0) { return invoker::Invoke<Any>(0x128F79EDCECE4FD5, p0); } // 0x128F79EDCECE4FD5 b1207
	static Any SET_PED_TO_RAGDOLL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xAE99FB955581844A, p0, p1, p2, p3, p4, p5, p6); } // 0xAE99FB955581844A b1207
	static Any SET_PED_TO_RAGDOLL_WITH_FALL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return invoker::Invoke<Any>(0xD76632D99E4966C8, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xD76632D99E4966C8 b1207
	static void SET_PED_RAGDOLL_ON_COLLISION(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF0A4F1BBF4FA7497, p0, p1, p2); } // 0xF0A4F1BBF4FA7497 b1207
	static void _0x221F4D9912B7FE86(Any p0, Any p1) { invoker::Invoke<Void>(0x221F4D9912B7FE86, p0, p1); } // 0x221F4D9912B7FE86 b1207
	static Any IS_PED_RAGDOLL(Any p0) { return invoker::Invoke<Any>(0x47E4E977581C5B55, p0); } // 0x47E4E977581C5B55 b1207
	static Any IS_PED_RUNNING_RAGDOLL_TASK(Any p0) { return invoker::Invoke<Any>(0xE3B6097CC25AA69E, p0); } // 0xE3B6097CC25AA69E b1207
	static void SET_PED_RAGDOLL_FORCE_FALL(Any p0) { invoker::Invoke<Void>(0x01F6594B923B9251, p0); } // 0x01F6594B923B9251 b1207
	static void _0x8CB2553C559102C1(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x8CB2553C559102C1, p0, p1, p2); } // 0x8CB2553C559102C1 b1207
	static void _0xFD3C31A2E45671E7(Any p0, Any p1) { invoker::Invoke<Void>(0xFD3C31A2E45671E7, p0, p1); } // 0xFD3C31A2E45671E7 b1207
	static void RESET_PED_RAGDOLL_TIMER(Any p0) { invoker::Invoke<Void>(0x9FA4664CF62E47E8, p0); } // 0x9FA4664CF62E47E8 b1207
	static void SET_PED_CAN_RAGDOLL(Any p0, Any p1) { invoker::Invoke<Void>(0xB128377056A54E2A, p0, p1); } // 0xB128377056A54E2A b1207
	static Any _0x3AEC4A410ECAF30D(Any p0) { return invoker::Invoke<Any>(0x3AEC4A410ECAF30D, p0); } // 0x3AEC4A410ECAF30D b1207
	static Any IS_PED_RUNNING_MOBILE_PHONE_TASK() { return invoker::Invoke<Any>(0x2AFE52F782F25775); } // 0x2AFE52F782F25775 b1207
	static void SET_RAGDOLL_BLOCKING_FLAGS(Any p0, Any p1) { invoker::Invoke<Void>(0x26695EC767728D84, p0, p1); } // 0x26695EC767728D84 b1207
	static void CLEAR_RAGDOLL_BLOCKING_FLAGS(Any p0, Any p1) { invoker::Invoke<Void>(0xD86D101FCFD00A4B, p0, p1); } // 0xD86D101FCFD00A4B b1207
	static void _0x9F933E0985E12C51(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x9F933E0985E12C51, p0, p1, p2, p3); } // 0x9F933E0985E12C51 b1207
	static void _0x88B2026A3B0BE33D(Any p0, Any p1) { invoker::Invoke<Void>(0x88B2026A3B0BE33D, p0, p1); } // 0x88B2026A3B0BE33D b1207
	static void _0xFC3DB99C8144CD81(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xFC3DB99C8144CD81, p0, p1, p2, p3); } // 0xFC3DB99C8144CD81 b1207
	static void SET_PED_SPHERE_DEFENSIVE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x9D3151A373974804, p0, p1, p2, p3, p4, p5, p6); } // 0x9D3151A373974804 b1207
	static void _0x1854217C640B39EC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x1854217C640B39EC, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1854217C640B39EC b1207
	static void SET_PED_DEFENSIVE_AREA_DIRECTION(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x413C6C763A4AFFAD, p0, p1, p2, p3, p4); } // 0x413C6C763A4AFFAD b1207
	static void REMOVE_PED_DEFENSIVE_AREA(Any p0, Any p1) { invoker::Invoke<Void>(0x74D4E028107450A9, p0, p1); } // 0x74D4E028107450A9 b1207
	static Any GET_PED_DEFENSIVE_AREA_POSITION(Any p0, Any p1) { return invoker::Invoke<Any>(0x3C06B8786DD94CD1, p0, p1); } // 0x3C06B8786DD94CD1 b1207
	static Any IS_PED_DEFENSIVE_AREA_ACTIVE(Any p0, Any p1) { return invoker::Invoke<Any>(0xBA63D9FE45412247, p0, p1); } // 0xBA63D9FE45412247 b1207
	static Any _0xEF2E6F870783369B(Any p0, Any p1) { return invoker::Invoke<Any>(0xEF2E6F870783369B, p0, p1); } // 0xEF2E6F870783369B b1207
	static void _0x4EC4EA2F72B36358(Any p0, Any p1) { invoker::Invoke<Void>(0x4EC4EA2F72B36358, p0, p1); } // 0x4EC4EA2F72B36358 b1207
	static void _0xCF0B19806473D324(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xCF0B19806473D324, p0, p1, p2, p3); } // 0xCF0B19806473D324 b1207
	static void _0xB4B7C92FCE7347B7(Any p0) { invoker::Invoke<Void>(0xB4B7C92FCE7347B7, p0); } // 0xB4B7C92FCE7347B7 b1207
	static void REVIVE_INJURED_PED(Any p0) { invoker::Invoke<Void>(0x8D8ACD8388CD99CE, p0); } // 0x8D8ACD8388CD99CE b1207
	static void RESURRECT_PED(Any p0) { invoker::Invoke<Void>(0x71BC8E838B9C6035, p0); } // 0x71BC8E838B9C6035 b1207
	static void SET_PED_NAME_DEBUG(Any p0, Any p1) { invoker::Invoke<Void>(0x98EFA132A4117BE1, p0, p1); } // 0x98EFA132A4117BE1 b1207
	static void _0xF9ACF4A08098EA25(Any p0, Any p1) { invoker::Invoke<Void>(0xF9ACF4A08098EA25, p0, p1); } // 0xF9ACF4A08098EA25 b1207
	static Any _0x7020839C7302D8AC(Any p0) { return invoker::Invoke<Any>(0x7020839C7302D8AC, p0); } // 0x7020839C7302D8AC b1207
	static void _0xE1AADD0055D76603(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0xE1AADD0055D76603, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xE1AADD0055D76603 b1207
	static void _0x5A1A929C8B729B4A(Any p0) { invoker::Invoke<Void>(0x5A1A929C8B729B4A, p0); } // 0x5A1A929C8B729B4A b1207
	static void _0x97A38B65EBDA3D50(Any p0, Any p1) { invoker::Invoke<Void>(0x97A38B65EBDA3D50, p0, p1); } // 0x97A38B65EBDA3D50 b1207
	static Any _0x06A10B4D7F50B0C3(Any p0) { return invoker::Invoke<Any>(0x06A10B4D7F50B0C3, p0); } // 0x06A10B4D7F50B0C3 b1207
	static Any _0x88A5564B19C15391(Any p0) { return invoker::Invoke<Any>(0x88A5564B19C15391, p0); } // 0x88A5564B19C15391 b1207
	static Any _0x354CA4DDDEEC397A(Any p0) { return invoker::Invoke<Any>(0x354CA4DDDEEC397A, p0); } // 0x354CA4DDDEEC397A b1207
	static void _0xFEA6126C34DF2532(Any p0, Any p1) { invoker::Invoke<Void>(0xFEA6126C34DF2532, p0, p1); } // 0xFEA6126C34DF2532 b1207
	static void _0xA967D6A8ED2D713B(Any p0, Any p1) { invoker::Invoke<Void>(0xA967D6A8ED2D713B, p0, p1); } // 0xA967D6A8ED2D713B b1207
	static void APPLY_PED_BLOOD_SPECIFIC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xEF0D582CBF2D9B0F, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xEF0D582CBF2D9B0F b1207
	static void _0x58D32261AE0F0843(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x58D32261AE0F0843, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x58D32261AE0F0843 b1207
	static void _0x735662994E60A710(Any p0, Any p1) { invoker::Invoke<Void>(0x735662994E60A710, p0, p1); } // 0x735662994E60A710 b1207
	static void _0x91BAB9E064F036CD(Any p0, Any p1) { invoker::Invoke<Void>(0x91BAB9E064F036CD, p0, p1); } // 0x91BAB9E064F036CD b1207
	static void _0x897934E868EDDD6C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x897934E868EDDD6C, p0, p1, p2, p3, p4); } // 0x897934E868EDDD6C b1207
	static void _0xFFD54D9FE71B966A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0xFFD54D9FE71B966A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xFFD54D9FE71B966A b1207
	static void _0x66B1CB778D911F49(Any p0, Any p1) { invoker::Invoke<Void>(0x66B1CB778D911F49, p0, p1); } // 0x66B1CB778D911F49 b1207
	static void APPLY_PED_DAMAGE_PACK(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x46DF918788CB093F, p0, p1, p2, p3); } // 0x46DF918788CB093F b1207
	static void CLEAR_PED_BLOOD_DAMAGE(Any p0) { invoker::Invoke<Void>(0x8FE22675A5A45817, p0); } // 0x8FE22675A5A45817 b1207
	static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Any p0, Any p1) { invoker::Invoke<Void>(0x56E3B78C5408D9F4, p0, p1); } // 0x56E3B78C5408D9F4 b1207
	static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x523C79AEEFCC4A2A, p0, p1, p2); } // 0x523C79AEEFCC4A2A b1207
	static void _0x7F5D88333EE8A86F(Any p0, Any p1) { invoker::Invoke<Void>(0x7F5D88333EE8A86F, p0, p1); } // 0x7F5D88333EE8A86F b1207
	static void _0x34C11114887150FD(Any p0, Any p1) { invoker::Invoke<Void>(0x34C11114887150FD, p0, p1); } // 0x34C11114887150FD b1207
	static void _0xEB8886E1065654CD(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xEB8886E1065654CD, p0, p1, p2, p3); } // 0xEB8886E1065654CD b1207
	static Any _0x7043D0681285BA2D() { return invoker::Invoke<Any>(0x7043D0681285BA2D); } // 0x7043D0681285BA2D b1207
	static Any _0x8D9BFCE3352DE47F() { return invoker::Invoke<Any>(0x8D9BFCE3352DE47F); } // 0x8D9BFCE3352DE47F b1207
	static void CLEAR_PED_WETNESS(Any p0) { invoker::Invoke<Void>(0x9C720776DAA43E7E, p0); } // 0x9C720776DAA43E7E b1207
	static void SET_PED_WETNESS_HEIGHT(Any p0, Any p1) { invoker::Invoke<Void>(0x44CB6447D2571AA0, p0, p1); } // 0x44CB6447D2571AA0 b1207
	static void _0xF9CFF5BB70E8A2CB(Any p0, Any p1) { invoker::Invoke<Void>(0xF9CFF5BB70E8A2CB, p0, p1); } // 0xF9CFF5BB70E8A2CB b1207
	static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Any p0) { invoker::Invoke<Void>(0xB5485E4907B53019, p0); } // 0xB5485E4907B53019 b1207
	static void _0xA7A806677F8DE138(Any p0) { invoker::Invoke<Void>(0xA7A806677F8DE138, p0); } // 0xA7A806677F8DE138 b1207
	static void _0xA064BBABB064446F(Any p0) { invoker::Invoke<Void>(0xA064BBABB064446F, p0); } // 0xA064BBABB064446F b1207
	static void CLEAR_PED_ENV_DIRT(Any p0) { invoker::Invoke<Void>(0x6585D955A68452A5, p0); } // 0x6585D955A68452A5 b1207
	static void SET_PED_SWEAT(Any p0, Any p1) { invoker::Invoke<Void>(0x27B0405F59637D1F, p0, p1); } // 0x27B0405F59637D1F b1207
	static void CLEAR_PED_DECORATIONS(Any p0) { invoker::Invoke<Void>(0x0E5173C163976E38, p0); } // 0x0E5173C163976E38 b1207
	static Any WAS_PED_SKELETON_UPDATED(Any p0) { return invoker::Invoke<Any>(0x11B499C1E0FF8559, p0); } // 0x11B499C1E0FF8559 b1207
	static Any GET_PED_BONE_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x17C07FC640E86B4E, p0, p1, p2, p3, p4); } // 0x17C07FC640E86B4E b1207
	static Any ADD_SCENARIO_BLOCKING_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x1B5C85C612E5256E, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1B5C85C612E5256E b1207
	static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoker::Invoke<Void>(0xD37401D78A929A49); } // 0xD37401D78A929A49 b1207
	static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, Any p1) { invoker::Invoke<Void>(0x31D16B74C6E29D66, p0, p1); } // 0x31D16B74C6E29D66 b1207
	static Any _0x4C39C95AE5DB1329(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x4C39C95AE5DB1329, p0, p1, p2); } // 0x4C39C95AE5DB1329 b1207
	static Any _0x6F46F8ACB44C4FC1(Any p0) { return invoker::Invoke<Any>(0x6F46F8ACB44C4FC1, p0); } // 0x6F46F8ACB44C4FC1 b1207
	static Any _0x91A5F9CBEBB9D936(Any p0) { return invoker::Invoke<Any>(0x91A5F9CBEBB9D936, p0); } // 0x91A5F9CBEBB9D936 b1207
	static Any _0x34D6AC1157C8226C(Any p0, Any p1) { return invoker::Invoke<Any>(0x34D6AC1157C8226C, p0, p1); } // 0x34D6AC1157C8226C b1207
	static Any IS_PED_USING_ANY_SCENARIO(Any p0) { return invoker::Invoke<Any>(0x57AB4A3080F85143, p0); } // 0x57AB4A3080F85143 b1207
	static Any _0x9C54041BB66BCF9E(Any p0, Any p1) { return invoker::Invoke<Any>(0x9C54041BB66BCF9E, p0, p1); } // 0x9C54041BB66BCF9E b1207
	static Any _0xAB643407D0B26F07(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xAB643407D0B26F07, p0, p1, p2, p3, p4); } // 0xAB643407D0B26F07 b1207
	static Any _0x1148F706CF4EBDDA() { return invoker::Invoke<Any>(0x1148F706CF4EBDDA); } // 0x1148F706CF4EBDDA b1207
	static Any _0xFE07FF6495D52E2A(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xFE07FF6495D52E2A, p0, p1, p2, p3); } // 0xFE07FF6495D52E2A b1207
	static void _0x9A77DFD295E29B09(Any p0, Any p1) { invoker::Invoke<Void>(0x9A77DFD295E29B09, p0, p1); } // 0x9A77DFD295E29B09 b1207
	static void _0xD8CEEED54C672B5D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xD8CEEED54C672B5D, p0, p1, p2, p3, p4, p5, p6); } // 0xD8CEEED54C672B5D b1207
	static Any _0xEC6935EBE0847B90(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xEC6935EBE0847B90, p0, p1, p2, p3); } // 0xEC6935EBE0847B90 b1207
	static void _0xA3A9299C4F2ADB98(Any p0) { invoker::Invoke<Void>(0xA3A9299C4F2ADB98, p0); } // 0xA3A9299C4F2ADB98 b1207
	static void _0xF1C03A5352243A30(Any p0) { invoker::Invoke<Void>(0xF1C03A5352243A30, p0); } // 0xF1C03A5352243A30 b1207
	static Any _0xEEED8FAFEC331A70(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xEEED8FAFEC331A70, p0, p1, p2, p3, p4); } // 0xEEED8FAFEC331A70 b1207
	static Any _0x802092B07E3B1EEA(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x802092B07E3B1EEA, p0, p1, p2, p3, p4); } // 0x802092B07E3B1EEA b1207
	static Any _0x62FDAD5E01D2DD47(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x62FDAD5E01D2DD47, p0, p1, p2, p3, p4, p5); } // 0x62FDAD5E01D2DD47 b1207
	static Any _0x463803429297117C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x463803429297117C, p0, p1, p2, p3, p4, p5); } // 0x463803429297117C b1207
	static Any _0xF9331B3A314EB49D(Any p0) { return invoker::Invoke<Any>(0xF9331B3A314EB49D, p0); } // 0xF9331B3A314EB49D b1207
	static void _0xE735A7DA22E88359(Any p0) { invoker::Invoke<Void>(0xE735A7DA22E88359, p0); } // 0xE735A7DA22E88359 b1207
	static Any _0x82CB0F3F0C7785E5(Any p0) { return invoker::Invoke<Any>(0x82CB0F3F0C7785E5, p0); } // 0x82CB0F3F0C7785E5 b1207
	static void _0xCA95C156C14B2054(Any p0, Any p1) { invoker::Invoke<Void>(0xCA95C156C14B2054, p0, p1); } // 0xCA95C156C14B2054 b1207
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xFFC24B988B938B38, p0, p1, p2); } // 0xFFC24B988B938B38 b1207
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Any p0) { invoker::Invoke<Void>(0x726256CC1EEB182F, p0); } // 0x726256CC1EEB182F b1207
	static void _0x8B3B71C80A29A4BB(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x8B3B71C80A29A4BB, p0, p1, p2); } // 0x8B3B71C80A29A4BB b1207
	static void _0xD2F0FE8805D91647(Any p0, Any p1) { invoker::Invoke<Void>(0xD2F0FE8805D91647, p0, p1); } // 0xD2F0FE8805D91647 b1207
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBAF20C5432058024, p0, p1, p2); } // 0xBAF20C5432058024 b1207
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Any p0, Any p1) { invoker::Invoke<Void>(0x6373D1349925A70E, p0, p1); } // 0x6373D1349925A70E b1207
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Any p0, Any p1) { invoker::Invoke<Void>(0x0EB0585D15254740, p0, p1); } // 0x0EB0585D15254740 b1207
	static void SET_PED_CAN_ARM_IK(Any p0, Any p1) { invoker::Invoke<Void>(0x6C3B4D6D13B4C841, p0, p1); } // 0x6C3B4D6D13B4C841 b1207
	static void _0xEE9DF765990E8D1D(Any p0, Any p1) { invoker::Invoke<Void>(0xEE9DF765990E8D1D, p0, p1); } // 0xEE9DF765990E8D1D b1207
	static void SET_PED_CAN_HEAD_IK(Any p0, Any p1) { invoker::Invoke<Void>(0xC11C18092C5530DC, p0, p1); } // 0xC11C18092C5530DC b1207
	static void SET_PED_CAN_LEG_IK(Any p0, Any p1) { invoker::Invoke<Void>(0x73518ECE2485412B, p0, p1); } // 0x73518ECE2485412B b1207
	static void SET_PED_CAN_TORSO_IK(Any p0, Any p1) { invoker::Invoke<Void>(0xF2B7106D37947CE0, p0, p1); } // 0xF2B7106D37947CE0 b1207
	static void _0xF5846EDB26A98A24(Any p0, Any p1) { invoker::Invoke<Void>(0xF5846EDB26A98A24, p0, p1); } // 0xF5846EDB26A98A24 b1207
	static void _0x6647C5F6F5792496(Any p0, Any p1) { invoker::Invoke<Void>(0x6647C5F6F5792496, p0, p1); } // 0x6647C5F6F5792496 b1207
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Any p0, Any p1) { invoker::Invoke<Void>(0xEC4686EC06434678, p0, p1); } // 0xEC4686EC06434678 b1207
	static Any IS_PED_HEADTRACKING_PED(Any p0, Any p1) { return invoker::Invoke<Any>(0x5CD3CB88A7F8850D, p0, p1); } // 0x5CD3CB88A7F8850D b1207
	static Any IS_PED_HEADTRACKING_ENTITY(Any p0, Any p1) { return invoker::Invoke<Any>(0x813A0A7C9D2E831F, p0, p1); } // 0x813A0A7C9D2E831F b1207
	static void _0x80038740C96AD17F(Any p0, Any p1) { invoker::Invoke<Void>(0x80038740C96AD17F, p0, p1); } // 0x80038740C96AD17F b1207
	static Any _0xCD9E5F94A2F38683() { return invoker::Invoke<Any>(0xCD9E5F94A2F38683); } // 0xCD9E5F94A2F38683 b1207
	static void _0x78C4E9961DB3EB5B(Any p0, Any p1) { invoker::Invoke<Void>(0x78C4E9961DB3EB5B, p0, p1); } // 0x78C4E9961DB3EB5B b1207
	static void _0x1D4636C90BBEFACB(Any p0, Any p1) { invoker::Invoke<Void>(0x1D4636C90BBEFACB, p0, p1); } // 0x1D4636C90BBEFACB b1207
	static void _0xEF371232BC6053E1(Any p0) { invoker::Invoke<Void>(0xEF371232BC6053E1, p0); } // 0xEF371232BC6053E1 b1207
	static void _0x86F0B6730C32AC14(Any p0, Any p1) { invoker::Invoke<Void>(0x86F0B6730C32AC14, p0, p1); } // 0x86F0B6730C32AC14 b1207
	static void _0x8101BA1C0B462412(Any p0, Any p1) { invoker::Invoke<Void>(0x8101BA1C0B462412, p0, p1); } // 0x8101BA1C0B462412 b1207
	static void SET_PED_CONFIG_FLAG(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1913FE4CBF41C463, p0, p1, p2); } // 0x1913FE4CBF41C463 b1207
	static void SET_PED_RESET_FLAG(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xC1E8A365BF3B29F2, p0, p1, p2); } // 0xC1E8A365BF3B29F2 b1207
	static Any GET_PED_CONFIG_FLAG(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x7EE53118C892B513, p0, p1, p2); } // 0x7EE53118C892B513 b1207
	static Any GET_PED_RESET_FLAG(Any p0, Any p1) { return invoker::Invoke<Any>(0xAF9E59B1B1FBF2A0, p0, p1); } // 0xAF9E59B1B1FBF2A0 b1207
	static void _0xC6981AFF6D2A71C2(Any p0) { invoker::Invoke<Void>(0xC6981AFF6D2A71C2, p0); } // 0xC6981AFF6D2A71C2 b1207
	static void _0xE0FE107AB174D64A(Any p0, Any p1) { invoker::Invoke<Void>(0xE0FE107AB174D64A, p0, p1); } // 0xE0FE107AB174D64A b1207
	static Any SET_PED_GROUP_MEMBER_PASSENGER_INDEX() { return invoker::Invoke<Any>(0x0BDDB8D9EC6BCF3C); } // 0x0BDDB8D9EC6BCF3C b1207
	static Any IS_PED_EVASIVE_DIVING() { return invoker::Invoke<Any>(0x414641C26E105898); } // 0x414641C26E105898 b1207
	static Any _0x4C57F27D1554E6B0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x4C57F27D1554E6B0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x4C57F27D1554E6B0 b1207
	static Any _0x772A1969F649E902(Any p0) { return invoker::Invoke<Any>(0x772A1969F649E902, p0); } // 0x772A1969F649E902 b1207
	static void SET_PED_MODEL_IS_SUPPRESSED(Any p0, Any p1) { invoker::Invoke<Void>(0xE163A4BCE4DE6F11, p0, p1); } // 0xE163A4BCE4DE6F11 b1207
	static Any _0xAA9F048DCF69B6DC(Any p0) { return invoker::Invoke<Any>(0xAA9F048DCF69B6DC, p0); } // 0xAA9F048DCF69B6DC b1207
	static void _0x7ABBD9E449E0DB00(Any p0, Any p1) { invoker::Invoke<Void>(0x7ABBD9E449E0DB00, p0, p1); } // 0x7ABBD9E449E0DB00 b1207
	static Any _0xADD31A5C7A5FAA73() { return invoker::Invoke<Any>(0xADD31A5C7A5FAA73); } // 0xADD31A5C7A5FAA73 b1207
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Any p0, Any p1) { invoker::Invoke<Void>(0xDF993EE5E90ABA25, p0, p1); } // 0xDF993EE5E90ABA25 b1207
	static void _0xE6CB36F43A95D75F(Any p0) { invoker::Invoke<Void>(0xE6CB36F43A95D75F, p0); } // 0xE6CB36F43A95D75F b1207
	static void SET_PED_LEG_IK_MODE(Any p0, Any p1) { invoker::Invoke<Void>(0xC396F5B86FF9FEBD, p0, p1); } // 0xC396F5B86FF9FEBD b1207
	static Any _0x078076AB50FB117F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x078076AB50FB117F, p0, p1, p2, p3, p4, p5); } // 0x078076AB50FB117F b1207
	static void _0xFD6943B6DF77E449(Any p0, Any p1) { invoker::Invoke<Void>(0xFD6943B6DF77E449, p0, p1); } // 0xFD6943B6DF77E449 b1207
	static void SET_PED_COMBAT_MOVEMENT(Any p0, Any p1) { invoker::Invoke<Void>(0x4D9CA1009AFBD057, p0, p1); } // 0x4D9CA1009AFBD057 b1207
	static Any GET_PED_COMBAT_MOVEMENT(Any p0) { return invoker::Invoke<Any>(0xDEA92412FCAEB3F5, p0); } // 0xDEA92412FCAEB3F5 b1207
	static void _0x815C0074A1BC0D93(Any p0, Any p1) { invoker::Invoke<Void>(0x815C0074A1BC0D93, p0, p1); } // 0x815C0074A1BC0D93 b1207
	static Any _0xFFDE295662405B25() { return invoker::Invoke<Any>(0xFFDE295662405B25); } // 0xFFDE295662405B25 b1207
	static void SET_PED_COMBAT_ABILITY(Any p0, Any p1) { invoker::Invoke<Void>(0xC7622C0D36B2FDA8, p0, p1); } // 0xC7622C0D36B2FDA8 b1207
	static void SET_PED_COMBAT_RANGE(Any p0, Any p1) { invoker::Invoke<Void>(0x3C606747B23E497B, p0, p1); } // 0x3C606747B23E497B b1207
	static void SET_PED_COMBAT_ATTRIBUTES(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x9F7794730795E019, p0, p1, p2); } // 0x9F7794730795E019 b1207
	static Any _0xCC2B20596E29E4E3(Any p0, Any p1) { return invoker::Invoke<Any>(0xCC2B20596E29E4E3, p0, p1); } // 0xCC2B20596E29E4E3 b1207
	static void _0xBD75500141E4725C(Any p0, Any p1) { invoker::Invoke<Void>(0xBD75500141E4725C, p0, p1); } // 0xBD75500141E4725C b1207
	static void SET_PED_TARGET_LOSS_RESPONSE(Any p0, Any p1) { invoker::Invoke<Void>(0x0703B9079823DA4A, p0, p1); } // 0x0703B9079823DA4A b1207
	static void _0x0A4618FFD517E24D(Any p0, Any p1) { invoker::Invoke<Void>(0x0A4618FFD517E24D, p0, p1); } // 0x0A4618FFD517E24D b1207
	static void _0x712B2C2B2471B493(Any p0, Any p1) { invoker::Invoke<Void>(0x712B2C2B2471B493, p0, p1); } // 0x712B2C2B2471B493 b1207
	static void _0x00B380FF2DF6AB7A(Any p0, Any p1) { invoker::Invoke<Void>(0x00B380FF2DF6AB7A, p0, p1); } // 0x00B380FF2DF6AB7A b1207
	static void _0x8ACC0506743A8A5C(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x8ACC0506743A8A5C, p0, p1, p2, p3); } // 0x8ACC0506743A8A5C b1207
	static void _0x78815FC52832B690(Any p0, Any p1) { invoker::Invoke<Void>(0x78815FC52832B690, p0, p1); } // 0x78815FC52832B690 b1207
	static void _0x8B1E8E35A6E814EA(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x8B1E8E35A6E814EA, p0, p1, p2); } // 0x8B1E8E35A6E814EA b1207
	static void _0x1FA132CBCD7CB239(Any p0, Any p1) { invoker::Invoke<Void>(0x1FA132CBCD7CB239, p0, p1); } // 0x1FA132CBCD7CB239 b1207
	static Any _0x5BF0B9D9A8E227A0(Any p0) { return invoker::Invoke<Any>(0x5BF0B9D9A8E227A0, p0); } // 0x5BF0B9D9A8E227A0 b1207
	static void _0x642720D8D69328B6(Any p0, Any p1) { invoker::Invoke<Void>(0x642720D8D69328B6, p0, p1); } // 0x642720D8D69328B6 b1207
	static Any IS_PED_PERFORMING_MELEE_ACTION(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xDCCA191DF9980FD7, p0, p1, p2); } // 0xDCCA191DF9980FD7 b1207
	static Any _0x6127F25ED21C533C(Any p0) { return invoker::Invoke<Any>(0x6127F25ED21C533C, p0); } // 0x6127F25ED21C533C b1207
	static Any IS_PED_BEING_STEALTH_KILLED(Any p0) { return invoker::Invoke<Any>(0x863B23EFDE9C5DF2, p0); } // 0x863B23EFDE9C5DF2 b1207
	static Any GET_MELEE_TARGET_FOR_PED(Any p0) { return invoker::Invoke<Any>(0x18A3E9EE1297FD39, p0); } // 0x18A3E9EE1297FD39 b1207
	static void _0xDEDBED3020DA49DC(Any p0) { invoker::Invoke<Void>(0xDEDBED3020DA49DC, p0); } // 0xDEDBED3020DA49DC b1207
	static void _0xA405BF9F01960C16(Any p0) { invoker::Invoke<Void>(0xA405BF9F01960C16, p0); } // 0xA405BF9F01960C16 b1207
	static Any _0xEC6B59BE445FEC51(Any p0) { return invoker::Invoke<Any>(0xEC6B59BE445FEC51, p0); } // 0xEC6B59BE445FEC51 b1207
	static void _0x8BA83CC4288CD56D(Any p0, Any p1) { invoker::Invoke<Void>(0x8BA83CC4288CD56D, p0, p1); } // 0x8BA83CC4288CD56D b1207
	static void _0x9D8DFE2DE9CB4DFC(Any p0) { invoker::Invoke<Void>(0x9D8DFE2DE9CB4DFC, p0); } // 0x9D8DFE2DE9CB4DFC b1207
	static Any _0xC48AF420371C7407(Any p0, Any p1) { return invoker::Invoke<Any>(0xC48AF420371C7407, p0, p1); } // 0xC48AF420371C7407 b1207
	static Any _0x5EFA8A3D8A60D662() { return invoker::Invoke<Any>(0x5EFA8A3D8A60D662); } // 0x5EFA8A3D8A60D662 b1207
	static Any _0x242EDF85D4E87B65(Any p0) { return invoker::Invoke<Any>(0x242EDF85D4E87B65, p0); } // 0x242EDF85D4E87B65 b1207
	static void _0x9238A3D970BBB0A9(Any p0, Any p1) { invoker::Invoke<Void>(0x9238A3D970BBB0A9, p0, p1); } // 0x9238A3D970BBB0A9 b1207
	static void _0x9A4AC116CC1EEE14(Any p0) { invoker::Invoke<Void>(0x9A4AC116CC1EEE14, p0); } // 0x9A4AC116CC1EEE14 b1207
	static void _0xE20027B414BFE6C7(Any p0, Any p1) { invoker::Invoke<Void>(0xE20027B414BFE6C7, p0, p1); } // 0xE20027B414BFE6C7 b1207
	static void _0x6DBF2D78709AD70B(Any p0, Any p1) { invoker::Invoke<Void>(0x6DBF2D78709AD70B, p0, p1); } // 0x6DBF2D78709AD70B b1207
	static void _0xB8DE69D9473B7593(Any p0, Any p1) { invoker::Invoke<Void>(0xB8DE69D9473B7593, p0, p1); } // 0xB8DE69D9473B7593 b1207
	static void _0x949B2F9ED2917F5D(Any p0, Any p1) { invoker::Invoke<Void>(0x949B2F9ED2917F5D, p0, p1); } // 0x949B2F9ED2917F5D b1207
	static Any _0xB346C85D49CC998E(Any p0, Any p1) { return invoker::Invoke<Any>(0xB346C85D49CC998E, p0, p1); } // 0xB346C85D49CC998E b1207
	static void _0xC163DAC52AC975D3(Any p0, Any p1) { invoker::Invoke<Void>(0xC163DAC52AC975D3, p0, p1); } // 0xC163DAC52AC975D3 b1207
	static void _0xBBF6D1D07C02D00A(Any p0, Any p1) { invoker::Invoke<Void>(0xBBF6D1D07C02D00A, p0, p1); } // 0xBBF6D1D07C02D00A b1207
	static Any _0x02AA2096FE00F3E1(Any p0, Any p1) { return invoker::Invoke<Any>(0x02AA2096FE00F3E1, p0, p1); } // 0x02AA2096FE00F3E1 b1207
	static void _0x57F35552E771BE9D(Any p0, Any p1) { invoker::Invoke<Void>(0x57F35552E771BE9D, p0, p1); } // 0x57F35552E771BE9D b1207
	static void _0x7C10221CE718AA72(Any p0, Any p1) { invoker::Invoke<Void>(0x7C10221CE718AA72, p0, p1); } // 0x7C10221CE718AA72 b1207
	static Any _0x0D3B1568917EBDA0(Any p0, Any p1) { return invoker::Invoke<Any>(0x0D3B1568917EBDA0, p0, p1); } // 0x0D3B1568917EBDA0 b1207
	static void _0x29F3539189D3E277(Any p0, Any p1) { invoker::Invoke<Void>(0x29F3539189D3E277, p0, p1); } // 0x29F3539189D3E277 b1207
	static void _0xE9E06EA514A69061(Any p0, Any p1) { invoker::Invoke<Void>(0xE9E06EA514A69061, p0, p1); } // 0xE9E06EA514A69061 b1207
	static void _0x4DB9D03AC4E1FA84(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4DB9D03AC4E1FA84, p0, p1, p2, p3); } // 0x4DB9D03AC4E1FA84 b1207
	static Any _0xEBE89623EB861271(Any p0, Any p1) { return invoker::Invoke<Any>(0xEBE89623EB861271, p0, p1); } // 0xEBE89623EB861271 b1207
	static void _0x925A160133003AC6(Any p0, Any p1) { invoker::Invoke<Void>(0x925A160133003AC6, p0, p1); } // 0x925A160133003AC6 b1207
	static Any _0x12EB4E31F092C9B3(Any p0) { return invoker::Invoke<Any>(0x12EB4E31F092C9B3, p0); } // 0x12EB4E31F092C9B3 b1207
	static Any _0x0E99E3BF11BB6367(Any p0) { return invoker::Invoke<Any>(0x0E99E3BF11BB6367, p0); } // 0x0E99E3BF11BB6367 b1207
	static Any _0x3BDFCF25B58B0415(Any p0) { return invoker::Invoke<Any>(0x3BDFCF25B58B0415, p0); } // 0x3BDFCF25B58B0415 b1207
	static Any _0xD0B7AEB56229D317(Any p0) { return invoker::Invoke<Any>(0xD0B7AEB56229D317, p0); } // 0xD0B7AEB56229D317 b1207
	static Any _0x2311F15D971AA680(Any p0) { return invoker::Invoke<Any>(0x2311F15D971AA680, p0); } // 0x2311F15D971AA680 b1207
	static Any _0x753B15AD0FD6F3E3(Any p0) { return invoker::Invoke<Any>(0x753B15AD0FD6F3E3, p0); } // 0x753B15AD0FD6F3E3 b1207
	static Any _0x630E7B01F091A197(Any p0, Any p1) { return invoker::Invoke<Any>(0x630E7B01F091A197, p0, p1); } // 0x630E7B01F091A197 b1207
	static void _0x604190F0CF0DF158(Any p0, Any p1) { invoker::Invoke<Void>(0x604190F0CF0DF158, p0, p1); } // 0x604190F0CF0DF158 b1207
	static void _0x789DABD18E9024DB(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x789DABD18E9024DB, p0, p1, p2); } // 0x789DABD18E9024DB b1207
	static void _0xEAE3B5B019C8D23F(Any p0, Any p1) { invoker::Invoke<Void>(0xEAE3B5B019C8D23F, p0, p1); } // 0xEAE3B5B019C8D23F b1207
	static Any _0xF3C873ED0C595109(Any p0) { return invoker::Invoke<Any>(0xF3C873ED0C595109, p0); } // 0xF3C873ED0C595109 b1207
	static void _0x8301D87B1B89E219(Any p0, Any p1) { invoker::Invoke<Void>(0x8301D87B1B89E219, p0, p1); } // 0x8301D87B1B89E219 b1207
	static Any _0x99A6E246C315BF60(Any p0, Any p1) { return invoker::Invoke<Any>(0x99A6E246C315BF60, p0, p1); } // 0x99A6E246C315BF60 b1207
	static void _0x56E9C26CD29D1ED6(Any p0, Any p1) { invoker::Invoke<Void>(0x56E9C26CD29D1ED6, p0, p1); } // 0x56E9C26CD29D1ED6 b1207
	static void SET_PED_FLEE_ATTRIBUTES(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x70A2D1137C8ED7C9, p0, p1, p2); } // 0x70A2D1137C8ED7C9 b1207
	static Any _0xB086C8C0F5701D14(Any p0) { return invoker::Invoke<Any>(0xB086C8C0F5701D14, p0); } // 0xB086C8C0F5701D14 b1207
	static Any IS_ANY_PED_NEAR_POINT(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x083961498679DC9F, p0, p1, p2, p3); } // 0x083961498679DC9F b1207
	static void _0x2208438012482A1A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2208438012482A1A, p0, p1, p2); } // 0x2208438012482A1A b1207
	static Any _0xC488B8C0E52560D8(Any p0) { return invoker::Invoke<Any>(0xC488B8C0E52560D8, p0); } // 0xC488B8C0E52560D8 b1207
	static Any _0x2DC0E8DCBD3546E9(Any p0) { return invoker::Invoke<Any>(0x2DC0E8DCBD3546E9, p0); } // 0x2DC0E8DCBD3546E9 b1207
	static void _0x6D07B371E9439019(Any p0) { invoker::Invoke<Void>(0x6D07B371E9439019, p0); } // 0x6D07B371E9439019 b1207
	static void _0xD65FDC686A031C83(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD65FDC686A031C83, p0, p1, p2); } // 0xD65FDC686A031C83 b1207
	static Any _0x68821369A2CEADD5(Any p0, Any p1) { return invoker::Invoke<Any>(0x68821369A2CEADD5, p0, p1); } // 0x68821369A2CEADD5 b1207
	static Any IS_PED_HEADING_TOWARDS_POSITION(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xFCF37A457CB96DC0, p0, p1, p2, p3, p4); } // 0xFCF37A457CB96DC0 b1207
	static void _0x600BBDD29820370C(Any p0) { invoker::Invoke<Void>(0x600BBDD29820370C, p0); } // 0x600BBDD29820370C b1207
	static void REQUEST_PED_VISIBILITY_TRACKING(Any p0) { invoker::Invoke<Void>(0x7D7A2E43E74E2EB8, p0); } // 0x7D7A2E43E74E2EB8 b1207
	static void _0x3088634CF8C819CF(Any p0) { invoker::Invoke<Void>(0x3088634CF8C819CF, p0); } // 0x3088634CF8C819CF b1207
	static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Any p0, Any p1) { invoker::Invoke<Void>(0x2BC338A7B21F4608, p0, p1); } // 0x2BC338A7B21F4608 b1207
	static void _0x75BA1CB3B7D40CAF(Any p0, Any p1) { invoker::Invoke<Void>(0x75BA1CB3B7D40CAF, p0, p1); } // 0x75BA1CB3B7D40CAF b1207
	static Any _0x511F1A683387C7E2(Any p0) { return invoker::Invoke<Any>(0x511F1A683387C7E2, p0); } // 0x511F1A683387C7E2 b1207
	static Any IS_TRACKED_PED_VISIBLE(Any p0) { return invoker::Invoke<Any>(0x91C8E617F64188AC, p0); } // 0x91C8E617F64188AC b1207
	static Any _0x164CECC59E70DF86(Any p0, Any p1) { return invoker::Invoke<Any>(0x164CECC59E70DF86, p0, p1); } // 0x164CECC59E70DF86 b1207
	static Any _0x5102307CE88798EB(Any p0) { return invoker::Invoke<Any>(0x5102307CE88798EB, p0); } // 0x5102307CE88798EB b1207
	static Any _0x2D64376CF437363E(Any p0) { return invoker::Invoke<Any>(0x2D64376CF437363E, p0); } // 0x2D64376CF437363E b1207
	static Any _0x118D476A6F1A13F1(Any p0) { return invoker::Invoke<Any>(0x118D476A6F1A13F1, p0); } // 0x118D476A6F1A13F1 b1207
	static Any _0xC8D523BF5BBD3808(Any p0, Any p1) { return invoker::Invoke<Any>(0xC8D523BF5BBD3808, p0, p1); } // 0xC8D523BF5BBD3808 b1207
	static Any _0x7F9B9791D4CB71F6(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x7F9B9791D4CB71F6, p0, p1, p2); } // 0x7F9B9791D4CB71F6 b1207
	static Any _0x9D9473CB82D83A30(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x9D9473CB82D83A30, p0, p1, p2); } // 0x9D9473CB82D83A30 b1207
	static Any _0x0EA9EACBA3B01601(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x0EA9EACBA3B01601, p0, p1, p2); } // 0x0EA9EACBA3B01601 b1207
	static Any GET_PED_BONE_INDEX(Any p0, Any p1) { return invoker::Invoke<Any>(0x3F428D08BE5AAE31, p0, p1); } // 0x3F428D08BE5AAE31 b1207
	static Any _0xC5303F460A40D21D(Any p0, Any p1) { return invoker::Invoke<Any>(0xC5303F460A40D21D, p0, p1); } // 0xC5303F460A40D21D b1207
	static Any _0xE29D8CD66553DBAA() { return invoker::Invoke<Any>(0xE29D8CD66553DBAA); } // 0xE29D8CD66553DBAA b1207
	static void _0xB06F5F1DEF417216(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xB06F5F1DEF417216, p0, p1, p2, p3); } // 0xB06F5F1DEF417216 b1207
	static void _0xFC23348F0F4E245F(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xFC23348F0F4E245F, p0, p1, p2, p3); } // 0xFC23348F0F4E245F b1207
	static void _0x9184788BFF1EDAD7(Any p0, Any p1) { invoker::Invoke<Void>(0x9184788BFF1EDAD7, p0, p1); } // 0x9184788BFF1EDAD7 b1207
	static void _0xE3144B932DFDFF65(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xE3144B932DFDFF65, p0, p1, p2, p3, p4); } // 0xE3144B932DFDFF65 b1207
	static Any _0x0105FEE8F9091255(Any p0, Any p1) { return invoker::Invoke<Any>(0x0105FEE8F9091255, p0, p1); } // 0x0105FEE8F9091255 b1207
	static void _0xD049920CD29F6CC8(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xD049920CD29F6CC8, p0, p1, p2, p3, p4); } // 0xD049920CD29F6CC8 b1207
	static Any _0xBB3E5370EBB6BE28(Any p0, Any p1) { return invoker::Invoke<Any>(0xBB3E5370EBB6BE28, p0, p1); } // 0xBB3E5370EBB6BE28 b1207
	static void _0x2FA568BFA725F8D6(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x2FA568BFA725F8D6, p0, p1, p2, p3); } // 0x2FA568BFA725F8D6 b1207
	static Any _0x56E4BAD93D33453C(Any p0, Any p1) { return invoker::Invoke<Any>(0x56E4BAD93D33453C, p0, p1); } // 0x56E4BAD93D33453C b1207
	static void _0x75A082563B4452E5(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x75A082563B4452E5, p0, p1, p2, p3); } // 0x75A082563B4452E5 b1207
	static void _0x16802C32B2FCA06B(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x16802C32B2FCA06B, p0, p1, p2, p3); } // 0x16802C32B2FCA06B b1207
	static void _0x8BA0C65AC15A7D33(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x8BA0C65AC15A7D33, p0, p1, p2, p3); } // 0x8BA0C65AC15A7D33 b1207
	static void _0x0FFDF937E5C11382(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x0FFDF937E5C11382, p0, p1, p2, p3, p4, p5); } // 0x0FFDF937E5C11382 b1207
	static void _0x5FCF25D584065BFD(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x5FCF25D584065BFD, p0, p1, p2, p3); } // 0x5FCF25D584065BFD b1207
	static void _0xA2116C1E4ED85C24(Any p0, Any p1) { invoker::Invoke<Void>(0xA2116C1E4ED85C24, p0, p1); } // 0xA2116C1E4ED85C24 b1207
	static Any FORCE_PED_MOTION_STATE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xF28965D04F570DCA, p0, p1, p2, p3, p4); } // 0xF28965D04F570DCA b1207
	static void _0x75D3333409CD33CE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x75D3333409CD33CE, p0, p1, p2); } // 0x75D3333409CD33CE b1207
	static Any _0xF60165E1D2C5370B(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xF60165E1D2C5370B, p0, p1, p2); } // 0xF60165E1D2C5370B b1207
	static void SET_PED_MAX_MOVE_BLEND_RATIO(Any p0, Any p1) { invoker::Invoke<Void>(0x433083750C5E064A, p0, p1); } // 0x433083750C5E064A b1207
	static void SET_PED_MIN_MOVE_BLEND_RATIO(Any p0, Any p1) { invoker::Invoke<Void>(0x01A898D26E2333DD, p0, p1); } // 0x01A898D26E2333DD b1207
	static void _0xBC1DC48270468444(Any p0) { invoker::Invoke<Void>(0xBC1DC48270468444, p0); } // 0xBC1DC48270468444 b1207
	static Any _0x46BF2A810679D6E6(Any p0, Any p1) { return invoker::Invoke<Any>(0x46BF2A810679D6E6, p0, p1); } // 0x46BF2A810679D6E6 b1207
	static Any _0xCA95924C893A0C91(Any p0, Any p1) { return invoker::Invoke<Any>(0xCA95924C893A0C91, p0, p1); } // 0xCA95924C893A0C91 b1207
	static void _0xBAE08F00021BFFB2(Any p0, Any p1) { invoker::Invoke<Void>(0xBAE08F00021BFFB2, p0, p1); } // 0xBAE08F00021BFFB2 b1207
	static void _0x413697EC260AABBF(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x413697EC260AABBF, p0, p1, p2); } // 0x413697EC260AABBF b1207
	static void _0xCAC43D060099EA72(Any p0) { invoker::Invoke<Void>(0xCAC43D060099EA72, p0); } // 0xCAC43D060099EA72 b1207
	static void _0xC9151483CC06A414(Any p0) { invoker::Invoke<Void>(0xC9151483CC06A414, p0); } // 0xC9151483CC06A414 b1207
	static void _0xAD3330E3C3E98007(Any p0, Any p1) { invoker::Invoke<Void>(0xAD3330E3C3E98007, p0, p1); } // 0xAD3330E3C3E98007 b1207
	static Any _0xB8E2D655E1D5BD39(Any p0) { return invoker::Invoke<Any>(0xB8E2D655E1D5BD39, p0); } // 0xB8E2D655E1D5BD39 b1207
	static Any _0x7BB810E8B343AC7B(Any p0) { return invoker::Invoke<Any>(0x7BB810E8B343AC7B, p0); } // 0x7BB810E8B343AC7B b1207
	static void SET_PED_MOVE_RATE_OVERRIDE(Any p0, Any p1) { invoker::Invoke<Void>(0x085BF80FA50A39D1, p0, p1); } // 0x085BF80FA50A39D1 b1207
	static Any GET_PED_NEARBY_VEHICLES() { return invoker::Invoke<Any>(0xCFF869CBFA210D82); } // 0xCFF869CBFA210D82 b1207
	static Any GET_PED_NEARBY_PEDS(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x23F8F5FC7E8C4A6B, p0, p1, p2, p3); } // 0x23F8F5FC7E8C4A6B b1207
	static Any _0xA0BC8FAED8CFEB3C(Any p0) { return invoker::Invoke<Any>(0xA0BC8FAED8CFEB3C, p0); } // 0xA0BC8FAED8CFEB3C b1207
	static Any _0x6A489892E813951A() { return invoker::Invoke<Any>(0x6A489892E813951A); } // 0x6A489892E813951A b1207
	static Any IS_PED_USING_ACTION_MODE(Any p0) { return invoker::Invoke<Any>(0x00E73468D085F745, p0); } // 0x00E73468D085F745 b1207
	static Any _0xEBB208D6AE712C03(Any p0) { return invoker::Invoke<Any>(0xEBB208D6AE712C03, p0); } // 0xEBB208D6AE712C03 b1207
	static void SET_PED_USING_ACTION_MODE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xD75ACCF5E0FB5367, p0, p1, p2, p3); } // 0xD75ACCF5E0FB5367 b1207
	static void SET_PED_CAPSULE(Any p0, Any p1) { invoker::Invoke<Void>(0x364DF566EC833DE2, p0, p1); } // 0x364DF566EC833DE2 b1207
	static Any _0xB676EFDA03DADA52(Any p0, Any p1) { return invoker::Invoke<Any>(0xB676EFDA03DADA52, p0, p1); } // 0xB676EFDA03DADA52 b1207
	static void _0x2DF9038C90AD5264(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x2DF9038C90AD5264, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x2DF9038C90AD5264 b1207
	static Any _0xB2AFF10216DEFA2F() { return invoker::Invoke<Any>(0xB2AFF10216DEFA2F); } // 0xB2AFF10216DEFA2F b1207
	static Any _0x8B74032DDD2156FE() { return invoker::Invoke<Any>(0x8B74032DDD2156FE); } // 0x8B74032DDD2156FE b1207
	static void _0xFEE4A5459472A9F8() { invoker::Invoke<Void>(0xFEE4A5459472A9F8); } // 0xFEE4A5459472A9F8 b1207
	static Any _0x3C67506996001F5E() { return invoker::Invoke<Any>(0x3C67506996001F5E); } // 0x3C67506996001F5E b1207
	static Any _0xA586FBEB32A53DBB() { return invoker::Invoke<Any>(0xA586FBEB32A53DBB); } // 0xA586FBEB32A53DBB b1207
	static Any _0xF445DE8DA80A1792() { return invoker::Invoke<Any>(0xF445DE8DA80A1792); } // 0xF445DE8DA80A1792 b1207
	static Any _0xA635C11B8C44AFC2() { return invoker::Invoke<Any>(0xA635C11B8C44AFC2); } // 0xA635C11B8C44AFC2 b1207
	static void _0x280C7E3AC7F56E90(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x280C7E3AC7F56E90, p0, p1, p2, p3); } // 0x280C7E3AC7F56E90 b1207
	static Any _0xB782F8238512BAD5() { return invoker::Invoke<Any>(0xB782F8238512BAD5); } // 0xB782F8238512BAD5 b1207
	static void SET_IK_TARGET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0xC32779C16FCEECD9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xC32779C16FCEECD9 b1207
	static void _0x5C3C55EAAD19915F(Any p0, Any p1) { invoker::Invoke<Void>(0x5C3C55EAAD19915F, p0, p1); } // 0x5C3C55EAAD19915F b1207
	static Any _0xDE3904B22695D9F9(Any p0, Any p1) { return invoker::Invoke<Any>(0xDE3904B22695D9F9, p0, p1); } // 0xDE3904B22695D9F9 b1207
	static void _0xFC3BAB1801A8255A(Any p0, Any p1) { invoker::Invoke<Void>(0xFC3BAB1801A8255A, p0, p1); } // 0xFC3BAB1801A8255A b1207
	static void _0xF7EA250B9A919E03(Any p0, Any p1) { invoker::Invoke<Void>(0xF7EA250B9A919E03, p0, p1); } // 0xF7EA250B9A919E03 b1207
	static Any _0x854BC9B1A1CCD034(Any p0, Any p1) { return invoker::Invoke<Any>(0x854BC9B1A1CCD034, p0, p1); } // 0x854BC9B1A1CCD034 b1207
	static void _0xDE7B2B4144906CDF(Any p0, Any p1) { invoker::Invoke<Void>(0xDE7B2B4144906CDF, p0, p1); } // 0xDE7B2B4144906CDF b1207
	static Any _0x290B2E6CCDE532E1() { return invoker::Invoke<Any>(0x290B2E6CCDE532E1); } // 0x290B2E6CCDE532E1 b1207
	static Any _0x0EEF7A81C17679DB() { return invoker::Invoke<Any>(0x0EEF7A81C17679DB); } // 0x0EEF7A81C17679DB b1207
	static void SET_PED_LOD_MULTIPLIER(Any p0, Any p1) { invoker::Invoke<Void>(0xDC2C5C242AAC342B, p0, p1); } // 0xDC2C5C242AAC342B b1207
	static Any _0xA218D2BBCAA7388C(Any p0, Any p1) { return invoker::Invoke<Any>(0xA218D2BBCAA7388C, p0, p1); } // 0xA218D2BBCAA7388C b1207
	static void _0xCBDE59C48F2B06F5(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCBDE59C48F2B06F5, p0, p1, p2); } // 0xCBDE59C48F2B06F5 b1207
	static void _0x6A190B94C2541A99(Any p0) { invoker::Invoke<Void>(0x6A190B94C2541A99, p0); } // 0x6A190B94C2541A99 b1207
	static Any _0x06087579E7AA85A9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x06087579E7AA85A9, p0, p1, p2, p3, p4, p5); } // 0x06087579E7AA85A9 b1207
	static Any _0xD8C3BE3EE94CAF2D() { return invoker::Invoke<Any>(0xD8C3BE3EE94CAF2D); } // 0xD8C3BE3EE94CAF2D b1207
	static Any _0x3AA24CCC0D451379(Any p0) { return invoker::Invoke<Any>(0x3AA24CCC0D451379, p0); } // 0x3AA24CCC0D451379 b1207
	static Any _0xD453BB601D4A606E() { return invoker::Invoke<Any>(0xD453BB601D4A606E); } // 0xD453BB601D4A606E b1207
	static Any _0x3D9F958834AB9C30(Any p0) { return invoker::Invoke<Any>(0x3D9F958834AB9C30, p0); } // 0x3D9F958834AB9C30 b1207
	static Any _0x913D04A5176F84C9(Any p0) { return invoker::Invoke<Any>(0x913D04A5176F84C9, p0); } // 0x913D04A5176F84C9 b1207
	static Any _0x42429C674B61238B(Any p0) { return invoker::Invoke<Any>(0x42429C674B61238B, p0); } // 0x42429C674B61238B b1207
	static Any _0x2C76FA0E01681F8D(Any p0, Any p1) { return invoker::Invoke<Any>(0x2C76FA0E01681F8D, p0, p1); } // 0x2C76FA0E01681F8D b1207
	static void _0xAE6004120C18DF97(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xAE6004120C18DF97, p0, p1, p2); } // 0xAE6004120C18DF97 b1207
	static Any _0x4642182A298187D0(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x4642182A298187D0, p0, p1, p2, p3, p4); } // 0x4642182A298187D0 b1207
	static void _0x6B67320E0D57856A(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x6B67320E0D57856A, p0, p1, p2, p3); } // 0x6B67320E0D57856A b1207
	static Any _0xD806CD2A4F2C2996(Any p0) { return invoker::Invoke<Any>(0xD806CD2A4F2C2996, p0); } // 0xD806CD2A4F2C2996 b1207
	static Any _0xAA6C49AE90A32299() { return invoker::Invoke<Any>(0xAA6C49AE90A32299); } // 0xAA6C49AE90A32299 b1207
	static Any _0x09B83E68DE004CD4(Any p0) { return invoker::Invoke<Any>(0x09B83E68DE004CD4, p0); } // 0x09B83E68DE004CD4 b1207
	static Any _0xA033D7E4BBF9844D(Any p0) { return invoker::Invoke<Any>(0xA033D7E4BBF9844D, p0); } // 0xA033D7E4BBF9844D b1207
	static Any _0x79443D56C8DF45EE(Any p0) { return invoker::Invoke<Any>(0x79443D56C8DF45EE, p0); } // 0x79443D56C8DF45EE b1207
	static Any _0x608BC6A6AACD5036(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x608BC6A6AACD5036, p0, p1, p2, p3); } // 0x608BC6A6AACD5036 b1207
	static void _0xED00D72F81CF7278(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xED00D72F81CF7278, p0, p1, p2); } // 0xED00D72F81CF7278 b1207
	static void _0xB5ACE8B23A438EC0(Any p0, Any p1) { invoker::Invoke<Void>(0xB5ACE8B23A438EC0, p0, p1); } // 0xB5ACE8B23A438EC0 b1207
	static Any _0xA911EE21EDF69DAF(Any p0) { return invoker::Invoke<Any>(0xA911EE21EDF69DAF, p0); } // 0xA911EE21EDF69DAF b1207
	static Any _0xB65927F861E7AE39(Any p0, Any p1) { return invoker::Invoke<Any>(0xB65927F861E7AE39, p0, p1); } // 0xB65927F861E7AE39 b1207
	static Any _0xA1FBAC56D38563E2(Any p0) { return invoker::Invoke<Any>(0xA1FBAC56D38563E2, p0); } // 0xA1FBAC56D38563E2 b1207
	static Any _0x6F43C351A5D51E2F(Any p0, Any p1) { return invoker::Invoke<Any>(0x6F43C351A5D51E2F, p0, p1); } // 0x6F43C351A5D51E2F b1207
	static Any _0x9682F850056C9ADE(Any p0) { return invoker::Invoke<Any>(0x9682F850056C9ADE, p0); } // 0x9682F850056C9ADE b1207
	static Any _0x833F0053340EF413() { return invoker::Invoke<Any>(0x833F0053340EF413); } // 0x833F0053340EF413 b1207
	static Any _0xB65A4DAB460A19BD(Any p0) { return invoker::Invoke<Any>(0xB65A4DAB460A19BD, p0); } // 0xB65A4DAB460A19BD b1207
	static Any _0x0C31C51168E80365() { return invoker::Invoke<Any>(0x0C31C51168E80365); } // 0x0C31C51168E80365 b1207
	static void _0x6569F31A01B4C097(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x6569F31A01B4C097, p0, p1, p2); } // 0x6569F31A01B4C097 b1207
	static Any _0xE4C11F104620DDCE(Any p0, Any p1) { return invoker::Invoke<Any>(0xE4C11F104620DDCE, p0, p1); } // 0xE4C11F104620DDCE b1207
	static Any _0x5463C962BC7777C3(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x5463C962BC7777C3, p0, p1, p2, p3, p4); } // 0x5463C962BC7777C3 b1207
	static Any _0x4B19F171450E0D4F(Any p0) { return invoker::Invoke<Any>(0x4B19F171450E0D4F, p0); } // 0x4B19F171450E0D4F b1207
	static Any _0x758F081DB204DDDE(Any p0) { return invoker::Invoke<Any>(0x758F081DB204DDDE, p0); } // 0x758F081DB204DDDE b1207
	static Any _0x14169FA823679E41(Any p0) { return invoker::Invoke<Any>(0x14169FA823679E41, p0); } // 0x14169FA823679E41 b1207
	static Any _0x7B5C293238EE4F20() { return invoker::Invoke<Any>(0x7B5C293238EE4F20); } // 0x7B5C293238EE4F20 b1207
	static Any _0xAE6B68A83ABBE7C0() { return invoker::Invoke<Any>(0xAE6B68A83ABBE7C0); } // 0xAE6B68A83ABBE7C0 b1207
	static Any _0xB655DB7582AEC805(Any p0) { return invoker::Invoke<Any>(0xB655DB7582AEC805, p0); } // 0xB655DB7582AEC805 b1207
	static Any _0x39ED303390DDEAC7() { return invoker::Invoke<Any>(0x39ED303390DDEAC7); } // 0x39ED303390DDEAC7 b1207
	static Any _0x7A4E00364B5D727B() { return invoker::Invoke<Any>(0x7A4E00364B5D727B); } // 0x7A4E00364B5D727B b1207
	static void _0x5240864E847C691C(Any p0, Any p1) { invoker::Invoke<Void>(0x5240864E847C691C, p0, p1); } // 0x5240864E847C691C b1207
	static Any _0x89BFDF6D53145545() { return invoker::Invoke<Any>(0x89BFDF6D53145545); } // 0x89BFDF6D53145545 b1207
	static Any _0x2890418B39BC8FFF() { return invoker::Invoke<Any>(0x2890418B39BC8FFF); } // 0x2890418B39BC8FFF b1207
	static Any _0x4B9668DB91DC39B8() { return invoker::Invoke<Any>(0x4B9668DB91DC39B8); } // 0x4B9668DB91DC39B8 b1207
	static void _0xD67B6F3BCF81BA47(Any p0, Any p1) { invoker::Invoke<Void>(0xD67B6F3BCF81BA47, p0, p1); } // 0xD67B6F3BCF81BA47 b1207
	static void _0x92A1B55A59720395(Any p0, Any p1) { invoker::Invoke<Void>(0x92A1B55A59720395, p0, p1); } // 0x92A1B55A59720395 b1207
	static void _0xF6262491C7704A63(Any p0, Any p1) { invoker::Invoke<Void>(0xF6262491C7704A63, p0, p1); } // 0xF6262491C7704A63 b1207
	static Any _0x88D9D76D78065487() { return invoker::Invoke<Any>(0x88D9D76D78065487); } // 0x88D9D76D78065487 b1207
	static void _0x5BCF0B79D4F5DBA3(Any p0, Any p1) { invoker::Invoke<Void>(0x5BCF0B79D4F5DBA3, p0, p1); } // 0x5BCF0B79D4F5DBA3 b1207
	static void _0x2E5B5D1F1453E08E(Any p0, Any p1) { invoker::Invoke<Void>(0x2E5B5D1F1453E08E, p0, p1); } // 0x2E5B5D1F1453E08E b1207
	static void _0x29924EB8EE9DB926(Any p0, Any p1) { invoker::Invoke<Void>(0x29924EB8EE9DB926, p0, p1); } // 0x29924EB8EE9DB926 b1207
	static void _0xB285AD0EC870B2DF(Any p0, Any p1) { invoker::Invoke<Void>(0xB285AD0EC870B2DF, p0, p1); } // 0xB285AD0EC870B2DF b1207
	static Any _0xCB86D3E3E3708901(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xCB86D3E3E3708901, p0, p1, p2, p3, p4); } // 0xCB86D3E3E3708901 b1207
	static void _0x633F83B301C87994(Any p0, Any p1) { invoker::Invoke<Void>(0x633F83B301C87994, p0, p1); } // 0x633F83B301C87994 b1207
	static Any _0x5203038FF8BAE577(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x5203038FF8BAE577, p0, p1, p2); } // 0x5203038FF8BAE577 b1207
	static Any _0x7F090958AE95B61B(Any p0, Any p1) { return invoker::Invoke<Any>(0x7F090958AE95B61B, p0, p1); } // 0x7F090958AE95B61B b1207
	static void _0xC494C76A34266E82(Any p0, Any p1) { invoker::Invoke<Void>(0xC494C76A34266E82, p0, p1); } // 0xC494C76A34266E82 b1207
	static Any _0xC3995D396F1D97B6() { return invoker::Invoke<Any>(0xC3995D396F1D97B6); } // 0xC3995D396F1D97B6 b1207
	static void _0x15F4732C357B1D6D(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x15F4732C357B1D6D, p0, p1, p2); } // 0x15F4732C357B1D6D b1207
	static Any _0x947E43F544B6AB34(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x947E43F544B6AB34, p0, p1, p2, p3); } // 0x947E43F544B6AB34 b1207
	static Any _0x32417CB860A3BDC4(Any p0, Any p1) { return invoker::Invoke<Any>(0x32417CB860A3BDC4, p0, p1); } // 0x32417CB860A3BDC4 b1207
	static void _0xE737D5F14304A2EC(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE737D5F14304A2EC, p0, p1, p2); } // 0xE737D5F14304A2EC b1207
	static void _0xEBD49472BCCF7642(Any p0, Any p1) { invoker::Invoke<Void>(0xEBD49472BCCF7642, p0, p1); } // 0xEBD49472BCCF7642 b1207
	static void _0x19173C3F15367B54(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x19173C3F15367B54, p0, p1, p2); } // 0x19173C3F15367B54 b1207
	static void _0x5708EDD71B50C008(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5708EDD71B50C008, p0, p1, p2); } // 0x5708EDD71B50C008 b1207
	static void _0xB9BDFAE609DFB7C5(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xB9BDFAE609DFB7C5, p0, p1, p2); } // 0xB9BDFAE609DFB7C5 b1207
	static Any _0xF7327ACC7A89AEF1(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xF7327ACC7A89AEF1, p0, p1, p2); } // 0xF7327ACC7A89AEF1 b1207
	static Any _0x7CC2186C32D3540A(Any p0, Any p1) { return invoker::Invoke<Any>(0x7CC2186C32D3540A, p0, p1); } // 0x7CC2186C32D3540A b1207
	static Any _0x1E017404784AA6A3(Any p0, Any p1) { return invoker::Invoke<Any>(0x1E017404784AA6A3, p0, p1); } // 0x1E017404784AA6A3 b1207
	static void _0x2B4CE170DE09F346(Any p0, Any p1) { invoker::Invoke<Void>(0x2B4CE170DE09F346, p0, p1); } // 0x2B4CE170DE09F346 b1207
	static Any _0x7C8AA850617651D9(Any p0, Any p1) { return invoker::Invoke<Any>(0x7C8AA850617651D9, p0, p1); } // 0x7C8AA850617651D9 b1207
	static Any _0x42688E94E96FD9B4(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x42688E94E96FD9B4, p0, p1, p2); } // 0x42688E94E96FD9B4 b1207
	static void _0x06D26A96CA1BCA75(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x06D26A96CA1BCA75, p0, p1, p2, p3); } // 0x06D26A96CA1BCA75 b1207
	static void _0x23BDE06596A22CEC(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x23BDE06596A22CEC, p0, p1, p2, p3); } // 0x23BDE06596A22CEC b1207
	static void _0xCDFB8C04D4C95D9B(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xCDFB8C04D4C95D9B, p0, p1, p2, p3); } // 0xCDFB8C04D4C95D9B b1207
	static Any _0x33FA048675821DA7(Any p0, Any p1) { return invoker::Invoke<Any>(0x33FA048675821DA7, p0, p1); } // 0x33FA048675821DA7 b1207
	static void _0x2EB75FB86C41F026(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2EB75FB86C41F026, p0, p1, p2); } // 0x2EB75FB86C41F026 b1207
	static void _0xA1EB5D029E0191D3(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA1EB5D029E0191D3, p0, p1, p2); } // 0xA1EB5D029E0191D3 b1207
	static void _0xFD8E853F0BC2E942(Any p0, Any p1) { invoker::Invoke<Void>(0xFD8E853F0BC2E942, p0, p1); } // 0xFD8E853F0BC2E942 b1207
	static void _0x01B21B81865E2A1F(Any p0, Any p1) { invoker::Invoke<Void>(0x01B21B81865E2A1F, p0, p1); } // 0x01B21B81865E2A1F b1207
	static Any _0x05CE6AF4DF071D23() { return invoker::Invoke<Any>(0x05CE6AF4DF071D23); } // 0x05CE6AF4DF071D23 b1207
	static Any _0x801917E7D7BCE418() { return invoker::Invoke<Any>(0x801917E7D7BCE418); } // 0x801917E7D7BCE418 b1207
	static void _0xC6C4E15CF7D52FEA(Any p0, Any p1) { invoker::Invoke<Void>(0xC6C4E15CF7D52FEA, p0, p1); } // 0xC6C4E15CF7D52FEA b1207
	static void _0xD05AD61F242C626B(Any p0, Any p1) { invoker::Invoke<Void>(0xD05AD61F242C626B, p0, p1); } // 0xD05AD61F242C626B b1207
	static void _0x0F967019CC853BCC(Any p0, Any p1) { invoker::Invoke<Void>(0x0F967019CC853BCC, p0, p1); } // 0x0F967019CC853BCC b1207
	static Any _0x226CF9B159E38F42(Any p0) { return invoker::Invoke<Any>(0x226CF9B159E38F42, p0); } // 0x226CF9B159E38F42 b1207
	static Any _0xEF3A8772F085B4AA(Any p0) { return invoker::Invoke<Any>(0xEF3A8772F085B4AA, p0); } // 0xEF3A8772F085B4AA b1207
	static Any _0x070A3841406C43D5() { return invoker::Invoke<Any>(0x070A3841406C43D5); } // 0x070A3841406C43D5 b1207
	static Any _0xE9B168527B337BF0(Any p0, Any p1) { return invoker::Invoke<Any>(0xE9B168527B337BF0, p0, p1); } // 0xE9B168527B337BF0 b1207
	static Any _0x0CAB404CD2DB41F5(Any p0, Any p1) { return invoker::Invoke<Any>(0x0CAB404CD2DB41F5, p0, p1); } // 0x0CAB404CD2DB41F5 b1207
	static void _0x9E66708B2B41F14A(Any p0, Any p1) { invoker::Invoke<Void>(0x9E66708B2B41F14A, p0, p1); } // 0x9E66708B2B41F14A b1207
	static void _0xF634E2892220EF34(Any p0, Any p1) { invoker::Invoke<Void>(0xF634E2892220EF34, p0, p1); } // 0xF634E2892220EF34 b1207
	static void _0xAAC0EE3B4999ABB5(Any p0, Any p1) { invoker::Invoke<Void>(0xAAC0EE3B4999ABB5, p0, p1); } // 0xAAC0EE3B4999ABB5 b1207
	static Any _0x243E1B4607040057() { return invoker::Invoke<Any>(0x243E1B4607040057); } // 0x243E1B4607040057 b1207
	static void _0x5653AB26C82938CF(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5653AB26C82938CF, p0, p1, p2); } // 0x5653AB26C82938CF b1207
	static Any _0xFD1BA1EEF7985BB8(Any p0, Any p1) { return invoker::Invoke<Any>(0xFD1BA1EEF7985BB8, p0, p1); } // 0xFD1BA1EEF7985BB8 b1207
	static void _0x5BB04BC74A474B47(Any p0, Any p1) { invoker::Invoke<Void>(0x5BB04BC74A474B47, p0, p1); } // 0x5BB04BC74A474B47 b1207
	static void _0x9078FB0557364099(Any p0) { invoker::Invoke<Void>(0x9078FB0557364099, p0); } // 0x9078FB0557364099 b1207
	static Any _0x3E592D0486DEC0F6(Any p0) { return invoker::Invoke<Any>(0x3E592D0486DEC0F6, p0); } // 0x3E592D0486DEC0F6 b1207
	static Any _0x29FCE825613FEFCA(Any p0, Any p1) { return invoker::Invoke<Any>(0x29FCE825613FEFCA, p0, p1); } // 0x29FCE825613FEFCA b1207
	static void _0x0D497AA69059FE40(Any p0, Any p1) { invoker::Invoke<Void>(0x0D497AA69059FE40, p0, p1); } // 0x0D497AA69059FE40 b1207
	static void _0xD7D2F45C56A4F4DF(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD7D2F45C56A4F4DF, p0, p1, p2); } // 0xD7D2F45C56A4F4DF b1207
	static Any _0x8AC1D721B2097B6E() { return invoker::Invoke<Any>(0x8AC1D721B2097B6E); } // 0x8AC1D721B2097B6E b1207
	static void _0x1D23D3F70606D788(Any p0, Any p1) { invoker::Invoke<Void>(0x1D23D3F70606D788, p0, p1); } // 0x1D23D3F70606D788 b1207
	static Any _0xEC9A1261BF0CE510(Any p0) { return invoker::Invoke<Any>(0xEC9A1261BF0CE510, p0); } // 0xEC9A1261BF0CE510 b1207
	static Any _0xFB4891BD7578CDC1(Any p0, Any p1) { return invoker::Invoke<Any>(0xFB4891BD7578CDC1, p0, p1); } // 0xFB4891BD7578CDC1 b1207
	static Any _0xBD0E4F52F6D95242(Any p0) { return invoker::Invoke<Any>(0xBD0E4F52F6D95242, p0); } // 0xBD0E4F52F6D95242 b1207
	static Any _0x137772000DAF42C5() { return invoker::Invoke<Any>(0x137772000DAF42C5); } // 0x137772000DAF42C5 b1207
	static void _0xFFA1594703ED27CA(Any p0, Any p1) { invoker::Invoke<Void>(0xFFA1594703ED27CA, p0, p1); } // 0xFFA1594703ED27CA b1207
	static void _0xBC6DF00D7A4A6819(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xBC6DF00D7A4A6819, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xBC6DF00D7A4A6819 b1207
	static void _0xD710A5007C2AC539(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD710A5007C2AC539, p0, p1, p2); } // 0xD710A5007C2AC539 b1207
	static void _0xA2B8E47442C76CEC(Any p0, Any p1) { invoker::Invoke<Void>(0xA2B8E47442C76CEC, p0, p1); } // 0xA2B8E47442C76CEC b1207
	static Any _0xA622E66EEE92A08D(Any p0) { return invoker::Invoke<Any>(0xA622E66EEE92A08D, p0); } // 0xA622E66EEE92A08D b1207
	static Any _0xCCB97B51893C662F(Any p0, Any p1) { return invoker::Invoke<Any>(0xCCB97B51893C662F, p0, p1); } // 0xCCB97B51893C662F b1207
	static Any _0x90403E8107B60E81(Any p0) { return invoker::Invoke<Any>(0x90403E8107B60E81, p0); } // 0x90403E8107B60E81 b1207
	static Any _0x9B90842304C938A7() { return invoker::Invoke<Any>(0x9B90842304C938A7); } // 0x9B90842304C938A7 b1207
	static void _0xCC8CA3E88256E58F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xCC8CA3E88256E58F, p0, p1, p2, p3, p4, p5); } // 0xCC8CA3E88256E58F b1207
	static void _0xCB1A3864C524F784(Any p0, Any p1) { invoker::Invoke<Void>(0xCB1A3864C524F784, p0, p1); } // 0xCB1A3864C524F784 b1207
	static void _0xFA0D206B489A6846(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xFA0D206B489A6846, p0, p1, p2, p3, p4); } // 0xFA0D206B489A6846 b1207
	static Any _0xA4AC05B1A364EBC5(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xA4AC05B1A364EBC5, p0, p1, p2); } // 0xA4AC05B1A364EBC5 b1207
	static void _0x1298B3D8E4C2409F(Any p0) { invoker::Invoke<Void>(0x1298B3D8E4C2409F, p0); } // 0x1298B3D8E4C2409F b1207
	static Any _0xA274F51EF7E34B95(Any p0, Any p1) { return invoker::Invoke<Any>(0xA274F51EF7E34B95, p0, p1); } // 0xA274F51EF7E34B95 b1207
	static Any _0xC2EF407645BEECDC() { return invoker::Invoke<Any>(0xC2EF407645BEECDC); } // 0xC2EF407645BEECDC b1207
	static void _0x1902C4CFCC5BE57C(Any p0, Any p1) { invoker::Invoke<Void>(0x1902C4CFCC5BE57C, p0, p1); } // 0x1902C4CFCC5BE57C b1207
	static void _0xFA742B82D093D848(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xFA742B82D093D848, p0, p1, p2); } // 0xFA742B82D093D848 b1207
	static Any _0x30569F348D126A5A(Any p0) { return invoker::Invoke<Any>(0x30569F348D126A5A, p0); } // 0x30569F348D126A5A b1207
	static void _0xA2F8B3B5FEDFC100(Any p0, Any p1) { invoker::Invoke<Void>(0xA2F8B3B5FEDFC100, p0, p1); } // 0xA2F8B3B5FEDFC100 b1207
	static void _0x66FF395445A88A6E(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x66FF395445A88A6E, p0, p1, p2); } // 0x66FF395445A88A6E b1207
	static Any _0xC0E880B7A441164D(Any p0, Any p1) { return invoker::Invoke<Any>(0xC0E880B7A441164D, p0, p1); } // 0xC0E880B7A441164D b1207
	static Any _0x4FF3C2B4E6A196C1(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x4FF3C2B4E6A196C1, p0, p1, p2); } // 0x4FF3C2B4E6A196C1 b1207
	static Any _0x62FDF4E678E40CC6() { return invoker::Invoke<Any>(0x62FDF4E678E40CC6); } // 0x62FDF4E678E40CC6 b1207
	static void _0x0BFA1BD465CDFEFD(Any p0) { invoker::Invoke<Void>(0x0BFA1BD465CDFEFD, p0); } // 0x0BFA1BD465CDFEFD b1207
	static Any _0x370A973252741AC4() { return invoker::Invoke<Any>(0x370A973252741AC4); } // 0x370A973252741AC4 b1207
	static void _0x283978A15512B2FE(Any p0, Any p1) { invoker::Invoke<Void>(0x283978A15512B2FE, p0, p1); } // 0x283978A15512B2FE b1207
	static Any _0x10C70A515BC03707() { return invoker::Invoke<Any>(0x10C70A515BC03707); } // 0x10C70A515BC03707 b1207
	static void _0x77FF8D35EEC6BBC4(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x77FF8D35EEC6BBC4, p0, p1, p2); } // 0x77FF8D35EEC6BBC4 b1207
	static Any _0xA5BAE410B03E7371() { return invoker::Invoke<Any>(0xA5BAE410B03E7371); } // 0xA5BAE410B03E7371 b1207
	static Any _0x98082246107A6ACF(Any p0, Any p1) { return invoker::Invoke<Any>(0x98082246107A6ACF, p0, p1); } // 0x98082246107A6ACF b1207
	static void _0x851966E1E35AF491(Any p0, Any p1) { invoker::Invoke<Void>(0x851966E1E35AF491, p0, p1); } // 0x851966E1E35AF491 b1207
	static void _0x4EFC1F8FF1AD94DE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x4EFC1F8FF1AD94DE, p0, p1, p2, p3, p4, p5); } // 0x4EFC1F8FF1AD94DE b1207
	static Any _0xF97C34C33487D569(Any p0, Any p1) { return invoker::Invoke<Any>(0xF97C34C33487D569, p0, p1); } // 0xF97C34C33487D569 b1207
	static Any _0xC0940AC858C1E126(Any p0) { return invoker::Invoke<Any>(0xC0940AC858C1E126, p0); } // 0xC0940AC858C1E126 b1207
	static Any _0x43E4DA469541A9C9(Any p0) { return invoker::Invoke<Any>(0x43E4DA469541A9C9, p0); } // 0x43E4DA469541A9C9 b1207
	static Any _0x0BCD4091C8EABA42(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x0BCD4091C8EABA42, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x0BCD4091C8EABA42 b1207
	static void _0x3972F78A78B5D9DF(Any p0) { invoker::Invoke<Void>(0x3972F78A78B5D9DF, p0); } // 0x3972F78A78B5D9DF b1207
	static Any _0x13154A76CE0CF9AB(Any p0, Any p1) { return invoker::Invoke<Any>(0x13154A76CE0CF9AB, p0, p1); } // 0x13154A76CE0CF9AB b1207
	static Any _0x27E8A84C12B0B7D1(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x27E8A84C12B0B7D1, p0, p1, p2); } // 0x27E8A84C12B0B7D1 b1207
	static Any _0x273915CE30780986(Any p0, Any p1) { return invoker::Invoke<Any>(0x273915CE30780986, p0, p1); } // 0x273915CE30780986 b1207
	static void _0x4592B8B9B0EF5F48(Any p0) { invoker::Invoke<Void>(0x4592B8B9B0EF5F48, p0); } // 0x4592B8B9B0EF5F48 b1207
	static Any _0x3FCBB5FCFD968698(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x3FCBB5FCFD968698, p0, p1, p2, p3, p4); } // 0x3FCBB5FCFD968698 b1207
	static Any _0x91FE941F9FCFB702(Any p0, Any p1) { return invoker::Invoke<Any>(0x91FE941F9FCFB702, p0, p1); } // 0x91FE941F9FCFB702 b1207
	static Any _0xF6D9E1F3560CBF8E(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xF6D9E1F3560CBF8E, p0, p1, p2, p3, p4); } // 0xF6D9E1F3560CBF8E b1207
	static void _0x13E7320C762F0477(Any p0) { invoker::Invoke<Void>(0x13E7320C762F0477, p0); } // 0x13E7320C762F0477 b1207
	static Any _0xB0B2C6D170B0E8E5(Any p0) { return invoker::Invoke<Any>(0xB0B2C6D170B0E8E5, p0); } // 0xB0B2C6D170B0E8E5 b1207
	static Any _0x93FFD92F05EC32FD(Any p0) { return invoker::Invoke<Any>(0x93FFD92F05EC32FD, p0); } // 0x93FFD92F05EC32FD b1207
	static Any _0x9641A9A20310F6B8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x9641A9A20310F6B8, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x9641A9A20310F6B8 b1207
	static Any _0x610438375E5D1801(Any p0) { return invoker::Invoke<Any>(0x610438375E5D1801, p0); } // 0x610438375E5D1801 b1207
	static Any _0xB25E57FC8E37114D(Any p0) { return invoker::Invoke<Any>(0xB25E57FC8E37114D, p0); } // 0xB25E57FC8E37114D b1207
	static Any _0xEAF682A14F8E5F53(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0xEAF682A14F8E5F53, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xEAF682A14F8E5F53 b1207
	static Any _0x74F512E29CB717E2(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x74F512E29CB717E2, p0, p1, p2, p3); } // 0x74F512E29CB717E2 b1207
	static void _0x314C5465195F3B30(Any p0, Any p1) { invoker::Invoke<Void>(0x314C5465195F3B30, p0, p1); } // 0x314C5465195F3B30 b1207
	static void _0x0FB1BA7FF73B41E1(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0FB1BA7FF73B41E1, p0, p1, p2); } // 0x0FB1BA7FF73B41E1 b1207
	static Any _0xB292203008EBBAAC(Any p0) { return invoker::Invoke<Any>(0xB292203008EBBAAC, p0); } // 0xB292203008EBBAAC b1207
	static Any _0xD4D403EA031F351C() { return invoker::Invoke<Any>(0xD4D403EA031F351C); } // 0xD4D403EA031F351C b1207
	static Any _0x0CEEB6F4780B1F2F(Any p0, Any p1) { return invoker::Invoke<Any>(0x0CEEB6F4780B1F2F, p0, p1); } // 0x0CEEB6F4780B1F2F b1207
	static Any _0xA73F50E8796150D5() { return invoker::Invoke<Any>(0xA73F50E8796150D5); } // 0xA73F50E8796150D5 b1207
	static void _0xC412AA1C73111FE0(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xC412AA1C73111FE0, p0, p1, p2, p3); } // 0xC412AA1C73111FE0 b1207
	static void _0x627F7F3A0C4C51FF(Any p0, Any p1) { invoker::Invoke<Void>(0x627F7F3A0C4C51FF, p0, p1); } // 0x627F7F3A0C4C51FF b1207
	static void _0x13A210949FCBD92B(Any p0, Any p1) { invoker::Invoke<Void>(0x13A210949FCBD92B, p0, p1); } // 0x13A210949FCBD92B b1207
	static Any _0xD049FDAF089FDDB0() { return invoker::Invoke<Any>(0xD049FDAF089FDDB0); } // 0xD049FDAF089FDDB0 b1207
	static Any _0xDD9540E7B1C9714F() { return invoker::Invoke<Any>(0xDD9540E7B1C9714F); } // 0xDD9540E7B1C9714F b1207
	static void _0x55546004A244302A(Any p0, Any p1) { invoker::Invoke<Void>(0x55546004A244302A, p0, p1); } // 0x55546004A244302A b1207
	static void _0xDE1B1907A83A1550(Any p0, Any p1) { invoker::Invoke<Void>(0xDE1B1907A83A1550, p0, p1); } // 0xDE1B1907A83A1550 b1207
	static Any _0x95B8E397B8F4360F(Any p0) { return invoker::Invoke<Any>(0x95B8E397B8F4360F, p0); } // 0x95B8E397B8F4360F b1207
	static void _0xEF5A3D2285D8924B(Any p0, Any p1) { invoker::Invoke<Void>(0xEF5A3D2285D8924B, p0, p1); } // 0xEF5A3D2285D8924B b1207
	static Any _0x825F6DD559A0895B(Any p0) { return invoker::Invoke<Any>(0x825F6DD559A0895B, p0); } // 0x825F6DD559A0895B b1207
	static void _0x345C9F993A8AB4A4(Any p0, Any p1) { invoker::Invoke<Void>(0x345C9F993A8AB4A4, p0, p1); } // 0x345C9F993A8AB4A4 b1207
	static Any _0xE7687EB2F634ABF0(Any p0) { return invoker::Invoke<Any>(0xE7687EB2F634ABF0, p0); } // 0xE7687EB2F634ABF0 b1207
	static Any _0xC3D4B754C0E86B9E(Any p0, Any p1) { return invoker::Invoke<Any>(0xC3D4B754C0E86B9E, p0, p1); } // 0xC3D4B754C0E86B9E b1207
	static Any _0x775A1CA7893AA8B5(Any p0) { return invoker::Invoke<Any>(0x775A1CA7893AA8B5, p0); } // 0x775A1CA7893AA8B5 b1207
	static Any _0x22F2A386D43048A9(Any p0) { return invoker::Invoke<Any>(0x22F2A386D43048A9, p0); } // 0x22F2A386D43048A9 b1207
	static Any _0xCB42AFE2B613EE55(Any p0) { return invoker::Invoke<Any>(0xCB42AFE2B613EE55, p0); } // 0xCB42AFE2B613EE55 b1207
	static void _0x36513AFFC703C60D(Any p0) { invoker::Invoke<Void>(0x36513AFFC703C60D, p0); } // 0x36513AFFC703C60D b1207
	static void _0x675680D089BFA21F(Any p0, Any p1) { invoker::Invoke<Void>(0x675680D089BFA21F, p0, p1); } // 0x675680D089BFA21F b1207
	static Any _0xFC3B580C4380B5B7(Any p0) { return invoker::Invoke<Any>(0xFC3B580C4380B5B7, p0); } // 0xFC3B580C4380B5B7 b1207
	static void _0xEA8763E505AFD49A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xEA8763E505AFD49A, p0, p1, p2); } // 0xEA8763E505AFD49A b1207
	static void _0xE4EF4382E22C780C(Any p0) { invoker::Invoke<Void>(0xE4EF4382E22C780C, p0); } // 0xE4EF4382E22C780C b1207
	static void _0xD61FCF9FCFD515B7(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD61FCF9FCFD515B7, p0, p1, p2); } // 0xD61FCF9FCFD515B7 b1207
	static void _0x8D9DB115FBA8E23D(Any p0) { invoker::Invoke<Void>(0x8D9DB115FBA8E23D, p0); } // 0x8D9DB115FBA8E23D b1207
	static Any _0x16F2C8C084AB2092(Any p0) { return invoker::Invoke<Any>(0x16F2C8C084AB2092, p0); } // 0x16F2C8C084AB2092 b1207
	static Any _0xFEAB3DB4EDB236EB() { return invoker::Invoke<Any>(0xFEAB3DB4EDB236EB); } // 0xFEAB3DB4EDB236EB b1207
	static Any _0xF6A8C4B4A11AE89C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xF6A8C4B4A11AE89C, p0, p1, p2, p3, p4, p5); } // 0xF6A8C4B4A11AE89C b1207
	static void _0xE4C95E0AE31C6512(Any p0, Any p1) { invoker::Invoke<Void>(0xE4C95E0AE31C6512, p0, p1); } // 0xE4C95E0AE31C6512 b1207
	static Any _0x1F714E7A9DADFC42(Any p0) { return invoker::Invoke<Any>(0x1F714E7A9DADFC42, p0); } // 0x1F714E7A9DADFC42 b1207
	static void _0x5D4CD22A8C82A81A(Any p0, Any p1) { invoker::Invoke<Void>(0x5D4CD22A8C82A81A, p0, p1); } // 0x5D4CD22A8C82A81A b1207
	static void _0xBF567DF2BEF211A6(Any p0, Any p1) { invoker::Invoke<Void>(0xBF567DF2BEF211A6, p0, p1); } // 0xBF567DF2BEF211A6 b1207
	static Any _0x4F5EBE70081E5A20(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x4F5EBE70081E5A20, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x4F5EBE70081E5A20 b1207
	static void _0x87247BC60B60BED8(Any p0) { invoker::Invoke<Void>(0x87247BC60B60BED8, p0); } // 0x87247BC60B60BED8 b1207
	static Any _0x57779B55B83E2BEA(Any p0) { return invoker::Invoke<Any>(0x57779B55B83E2BEA, p0); } // 0x57779B55B83E2BEA b1207
	static Any _0x7EE3A8660F38797E(Any p0) { return invoker::Invoke<Any>(0x7EE3A8660F38797E, p0); } // 0x7EE3A8660F38797E b1207
	static Any _0xA180FBD502A03125(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xA180FBD502A03125, p0, p1, p2); } // 0xA180FBD502A03125 b1207
	static Any _0xC5E7204F322E49EB(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xC5E7204F322E49EB, p0, p1, p2); } // 0xC5E7204F322E49EB b1207
	static void _0x0B46E25761519058(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0B46E25761519058, p0, p1, p2); } // 0x0B46E25761519058 b1207
	static Any _0x6BEFAA907B076859() { return invoker::Invoke<Any>(0x6BEFAA907B076859); } // 0x6BEFAA907B076859 b1207
	static void _0x92DAABA2C1C10B0E(Any p0) { invoker::Invoke<Void>(0x92DAABA2C1C10B0E, p0); } // 0x92DAABA2C1C10B0E b1207
	static void _0x8472A1789478F82F(Any p0) { invoker::Invoke<Void>(0x8472A1789478F82F, p0); } // 0x8472A1789478F82F b1207
	static Any _0x31DC8D3F216D8509(Any p0) { return invoker::Invoke<Any>(0x31DC8D3F216D8509, p0); } // 0x31DC8D3F216D8509 b1207
	static Any _0x86BB5FF45F193A02(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x86BB5FF45F193A02, p0, p1, p2, p3, p4, p5, p6); } // 0x86BB5FF45F193A02 b1207
	static void _0x96C349DE04C49011(Any p0, Any p1) { invoker::Invoke<Void>(0x96C349DE04C49011, p0, p1); } // 0x96C349DE04C49011 b1207
	static void _0x3329AAE2882FC8E4(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3329AAE2882FC8E4, p0, p1, p2); } // 0x3329AAE2882FC8E4 b1207
	static void _0x6C76BC24F8BB709A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x6C76BC24F8BB709A, p0, p1, p2); } // 0x6C76BC24F8BB709A b1207
	static void _0x057C4F092E2298BE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x057C4F092E2298BE, p0, p1, p2); } // 0x057C4F092E2298BE b1207
	static void _0x1ED8588524AC9BE1(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1ED8588524AC9BE1, p0, p1, p2); } // 0x1ED8588524AC9BE1 b1207
	static void _0x2DF59FFE6FFD6044(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x2DF59FFE6FFD6044, p0, p1, p2, p3, p4); } // 0x2DF59FFE6FFD6044 b1207
	static void _0xF2EA041F1146D75B(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xF2EA041F1146D75B, p0, p1, p2, p3, p4); } // 0xF2EA041F1146D75B b1207
	static void _0x253A63B5BADBC398(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x253A63B5BADBC398, p0, p1, p2, p3, p4); } // 0x253A63B5BADBC398 b1207
	static Any _0xB63B9178D0F58D82() { return invoker::Invoke<Any>(0xB63B9178D0F58D82); } // 0xB63B9178D0F58D82 b1207
	static void _0xC991EF46FE323867(Any p0, Any p1) { invoker::Invoke<Void>(0xC991EF46FE323867, p0, p1); } // 0xC991EF46FE323867 b1207
	static void _0x1F8215D0E446F593(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1F8215D0E446F593, p0, p1, p2); } // 0x1F8215D0E446F593 b1207
	static Any _0xFB1E7998B8595825() { return invoker::Invoke<Any>(0xFB1E7998B8595825); } // 0xFB1E7998B8595825 b1207
	static void _0x53BA7D96B9A421D9(Any p0, Any p1) { invoker::Invoke<Void>(0x53BA7D96B9A421D9, p0, p1); } // 0x53BA7D96B9A421D9 b1207
	static void _0x96C7B659854DE629(Any p0, Any p1) { invoker::Invoke<Void>(0x96C7B659854DE629, p0, p1); } // 0x96C7B659854DE629 b1207
	static Any _0xDDCF6FEA5D7ACC17() { return invoker::Invoke<Any>(0xDDCF6FEA5D7ACC17); } // 0xDDCF6FEA5D7ACC17 b1207
	static Any _0x2A5AFD2B8381A6E1() { return invoker::Invoke<Any>(0x2A5AFD2B8381A6E1); } // 0x2A5AFD2B8381A6E1 b1207
	static void _0x5B73975B4F12F7F3(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x5B73975B4F12F7F3, p0, p1, p2, p3, p4); } // 0x5B73975B4F12F7F3 b1207
	static Any _0xA9C28516A6DC9D56(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xA9C28516A6DC9D56, p0, p1, p2, p3, p4, p5); } // 0xA9C28516A6DC9D56 b1207
	static Any _0xE7998FEC53A33BBE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xE7998FEC53A33BBE, p0, p1, p2, p3, p4, p5); } // 0xE7998FEC53A33BBE b1207
	static void _0x5F53010C4C3F6BAF(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x5F53010C4C3F6BAF, p0, p1, p2, p3); } // 0x5F53010C4C3F6BAF b1207
	static void _0xCB9401F918CB0F75(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xCB9401F918CB0F75, p0, p1, p2, p3); } // 0xCB9401F918CB0F75 b1207
	static void _0x437C08DB4FEBE2BD(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x437C08DB4FEBE2BD, p0, p1, p2, p3); } // 0x437C08DB4FEBE2BD b1207
	static void _0xA762C9D6CF165E0D(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xA762C9D6CF165E0D, p0, p1, p2, p3); } // 0xA762C9D6CF165E0D b1207
	static void _0x81B75428A7813E67(Any p0, Any p1) { invoker::Invoke<Void>(0x81B75428A7813E67, p0, p1); } // 0x81B75428A7813E67 b1207
	static void _0xA6F67BEC53379A32(Any p0, Any p1) { invoker::Invoke<Void>(0xA6F67BEC53379A32, p0, p1); } // 0xA6F67BEC53379A32 b1207
	static void _0x411189E51B8020BA(Any p0, Any p1) { invoker::Invoke<Void>(0x411189E51B8020BA, p0, p1); } // 0x411189E51B8020BA b1207
	static void _0x0E17378642156790(Any p0, Any p1) { invoker::Invoke<Void>(0x0E17378642156790, p0, p1); } // 0x0E17378642156790 b1207
	static Any _0x498F2E77982D6945(Any p0, Any p1) { return invoker::Invoke<Any>(0x498F2E77982D6945, p0, p1); } // 0x498F2E77982D6945 b1207
	static Any _0x56E58D4D118FB45E(Any p0, Any p1) { return invoker::Invoke<Any>(0x56E58D4D118FB45E, p0, p1); } // 0x56E58D4D118FB45E b1207
	static Any _0xBF5E791BBBF90A3C(Any p0, Any p1) { return invoker::Invoke<Any>(0xBF5E791BBBF90A3C, p0, p1); } // 0xBF5E791BBBF90A3C b1207
	static Any _0xB71B91B398F8F067(Any p0, Any p1) { return invoker::Invoke<Any>(0xB71B91B398F8F067, p0, p1); } // 0xB71B91B398F8F067 b1207
	static Any _0x4912DFE492DB98CD(Any p0, Any p1) { return invoker::Invoke<Any>(0x4912DFE492DB98CD, p0, p1); } // 0x4912DFE492DB98CD b1207
	static Any _0xA29FD00D45311EB7(Any p0, Any p1) { return invoker::Invoke<Any>(0xA29FD00D45311EB7, p0, p1); } // 0xA29FD00D45311EB7 b1207
	static Any _0x7FF72DE061DF55E2() { return invoker::Invoke<Any>(0x7FF72DE061DF55E2); } // 0x7FF72DE061DF55E2 b1207
	static Any _0xA31D350D66FA1855() { return invoker::Invoke<Any>(0xA31D350D66FA1855); } // 0xA31D350D66FA1855 b1207
	static Any _0xAF61B3CD8C3B82C3() { return invoker::Invoke<Any>(0xAF61B3CD8C3B82C3); } // 0xAF61B3CD8C3B82C3 b1207
	static void _0xEEDC9B29314B2733(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0xEEDC9B29314B2733, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xEEDC9B29314B2733 b1207
	static void _0x5C90E20C25E6D83C(Any p0) { invoker::Invoke<Void>(0x5C90E20C25E6D83C, p0); } // 0x5C90E20C25E6D83C b1207
	static void _0x10F96086123B939F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x10F96086123B939F, p0, p1, p2); } // 0x10F96086123B939F b1207
	static void _0x3FDBB99EFD8CE4AF(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3FDBB99EFD8CE4AF, p0, p1, p2); } // 0x3FDBB99EFD8CE4AF b1207
	static void _0x7E8F9949B7AABBF0(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x7E8F9949B7AABBF0, p0, p1, p2); } // 0x7E8F9949B7AABBF0 b1207
	static Any _0x5DA36CCCB63C0895(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x5DA36CCCB63C0895, p0, p1, p2); } // 0x5DA36CCCB63C0895 b1207
	static void _0xD3A7B003ED343FD9(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xD3A7B003ED343FD9, p0, p1, p2, p3, p4); } // 0xD3A7B003ED343FD9 b1207
	static void _0xDF631E4BCE1B1FC4(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xDF631E4BCE1B1FC4, p0, p1, p2, p3); } // 0xDF631E4BCE1B1FC4 b1207
	static void _0x66B957AAC2EAAEAB(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x66B957AAC2EAAEAB, p0, p1, p2, p3, p4); } // 0x66B957AAC2EAAEAB b1207
	static Any _0x77BA37622E22023B() { return invoker::Invoke<Any>(0x77BA37622E22023B); } // 0x77BA37622E22023B b1207
	static Any _0xFFCC2DB2D9953401(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xFFCC2DB2D9953401, p0, p1, p2); } // 0xFFCC2DB2D9953401 b1207
	static Any _0x6243635AF2F1B826(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x6243635AF2F1B826, p0, p1, p2, p3); } // 0x6243635AF2F1B826 b1207
	static Any _0x5FF9A878C3D115B8(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x5FF9A878C3D115B8, p0, p1, p2); } // 0x5FF9A878C3D115B8 b1207
	static Any _0x31B2E7F2E3C58B89(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x31B2E7F2E3C58B89, p0, p1, p2, p3); } // 0x31B2E7F2E3C58B89 b1207
	static Any _0x63342C50EC115CE8() { return invoker::Invoke<Any>(0x63342C50EC115CE8); } // 0x63342C50EC115CE8 b1207
	static Any _0xAAB86462966168CE(Any p0, Any p1) { return invoker::Invoke<Any>(0xAAB86462966168CE, p0, p1); } // 0xAAB86462966168CE b1207
	static Any _0x7E02E4218D916B94(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x7E02E4218D916B94, p0, p1, p2); } // 0x7E02E4218D916B94 b1207
	static Any _0x59BD177A1A48600A() { return invoker::Invoke<Any>(0x59BD177A1A48600A); } // 0x59BD177A1A48600A b1207
	static void _0xD103F6DBB5442BE8(Any p0, Any p1) { invoker::Invoke<Void>(0xD103F6DBB5442BE8, p0, p1); } // 0xD103F6DBB5442BE8 b1207
	static void _0xFCA8FB9E15FA80D3(Any p0, Any p1) { invoker::Invoke<Void>(0xFCA8FB9E15FA80D3, p0, p1); } // 0xFCA8FB9E15FA80D3 b1207
	static void _0x4A48B6E03BABB4AC(Any p0, Any p1) { invoker::Invoke<Void>(0x4A48B6E03BABB4AC, p0, p1); } // 0x4A48B6E03BABB4AC b1207
	static Any _0xC2745D9261664901() { return invoker::Invoke<Any>(0xC2745D9261664901); } // 0xC2745D9261664901 b1207
	static Any _0x19B14E04B009E28B() { return invoker::Invoke<Any>(0x19B14E04B009E28B); } // 0x19B14E04B009E28B b1207
	static Any _0xF917F92BF22ECBAB() { return invoker::Invoke<Any>(0xF917F92BF22ECBAB); } // 0xF917F92BF22ECBAB b1207
	static void _0x49DADFC4CD808B0A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x49DADFC4CD808B0A, p0, p1, p2); } // 0x49DADFC4CD808B0A b1207
	static Any _0xBA208A8D6399A3AC(Any p0, Any p1) { return invoker::Invoke<Any>(0xBA208A8D6399A3AC, p0, p1); } // 0xBA208A8D6399A3AC b1207
	static void _0x704C908E9C405136(Any p0) { invoker::Invoke<Void>(0x704C908E9C405136, p0); } // 0x704C908E9C405136 b1207
	static Any _0x7406C71F4AC2FFCC() { return invoker::Invoke<Any>(0x7406C71F4AC2FFCC); } // 0x7406C71F4AC2FFCC b1207
	static Any _0x52250B92EA70BE3D(Any p0) { return invoker::Invoke<Any>(0x52250B92EA70BE3D, p0); } // 0x52250B92EA70BE3D b1207
	static void _0xCE6B874286D640BB(Any p0, Any p1) { invoker::Invoke<Void>(0xCE6B874286D640BB, p0, p1); } // 0xCE6B874286D640BB b1207
	static Any _0x7BCC6087D130312A(Any p0) { return invoker::Invoke<Any>(0x7BCC6087D130312A, p0); } // 0x7BCC6087D130312A b1207
	static void _0xCE7A6C1D5CDE1F9D(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xCE7A6C1D5CDE1F9D, p0, p1, p2, p3); } // 0xCE7A6C1D5CDE1F9D b1207
	static void _0x604E1010E3162E86(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x604E1010E3162E86, p0, p1, p2); } // 0x604E1010E3162E86 b1207
	static void _0xE8ABE3B73FC7FE17(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xE8ABE3B73FC7FE17, p0, p1, p2, p3); } // 0xE8ABE3B73FC7FE17 b1207
	static void _0x3A50753042B6891B(Any p0, Any p1) { invoker::Invoke<Void>(0x3A50753042B6891B, p0, p1); } // 0x3A50753042B6891B b1207
	static Any _0x932786CE3C76477C() { return invoker::Invoke<Any>(0x932786CE3C76477C); } // 0x932786CE3C76477C b1207
	static Any _0x095C2277FED731DB(Any p0) { return invoker::Invoke<Any>(0x095C2277FED731DB, p0); } // 0x095C2277FED731DB b1207
	static void _0x09171A6F8FDE5DC1(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x09171A6F8FDE5DC1, p0, p1, p2, p3, p4); } // 0x09171A6F8FDE5DC1 b1207
	static void _0x09E378C52B1433B5(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x09E378C52B1433B5, p0, p1, p2, p3, p4); } // 0x09E378C52B1433B5 b1207
	static Any _0x6507AC3BD7C99009() { return invoker::Invoke<Any>(0x6507AC3BD7C99009); } // 0x6507AC3BD7C99009 b1207
	static Any _0x2942457417A5FD24() { return invoker::Invoke<Any>(0x2942457417A5FD24); } // 0x2942457417A5FD24 b1207
	static Any _0xA5950E16B8F31052() { return invoker::Invoke<Any>(0xA5950E16B8F31052); } // 0xA5950E16B8F31052 b1207
	static Any _0xEBAAC9A750E7563B() { return invoker::Invoke<Any>(0xEBAAC9A750E7563B); } // 0xEBAAC9A750E7563B b1207
}

namespace _NAMESPACE48
{
	static void _0x63AA2B8EB087886A(Any p0, Any p1) { invoker::Invoke<Void>(0x63AA2B8EB087886A, p0, p1); } // 0x63AA2B8EB087886A b1207
	static Any _0xA00DF706C60173D1(Any p0) { return invoker::Invoke<Any>(0xA00DF706C60173D1, p0); } // 0xA00DF706C60173D1 b1207
	static void _0x8BC555034A5A5E8C(Any p0, Any p1) { invoker::Invoke<Void>(0x8BC555034A5A5E8C, p0, p1); } // 0x8BC555034A5A5E8C b1207
	static Any _0x70605812ABC9FF0F() { return invoker::Invoke<Any>(0x70605812ABC9FF0F); } // 0x70605812ABC9FF0F b1207
	static Any _0xDC9655D47DEC0353(Any p0) { return invoker::Invoke<Any>(0xDC9655D47DEC0353, p0); } // 0xDC9655D47DEC0353 b1207
	static void _0x2DF89CD2ED1D0BDE(Any p0, Any p1) { invoker::Invoke<Void>(0x2DF89CD2ED1D0BDE, p0, p1); } // 0x2DF89CD2ED1D0BDE b1207
	static void _0x535A66AAD2BF68F9(Any p0, Any p1) { invoker::Invoke<Void>(0x535A66AAD2BF68F9, p0, p1); } // 0x535A66AAD2BF68F9 b1207
	static Any _0xCEB40B678E403759(Any p0) { return invoker::Invoke<Any>(0xCEB40B678E403759, p0); } // 0xCEB40B678E403759 b1207
	static void _0x187D65F3AEC5D679(Any p0, Any p1) { invoker::Invoke<Void>(0x187D65F3AEC5D679, p0, p1); } // 0x187D65F3AEC5D679 b1207
	static void _0x8B44273A92CD406C(Any p0) { invoker::Invoke<Void>(0x8B44273A92CD406C, p0); } // 0x8B44273A92CD406C b1207
	static void _0xE0E65E0D261F7507(Any p0) { invoker::Invoke<Void>(0xE0E65E0D261F7507, p0); } // 0xE0E65E0D261F7507 b1207
	static Any _0x112DDF56300BC6E5(Any p0) { return invoker::Invoke<Any>(0x112DDF56300BC6E5, p0); } // 0x112DDF56300BC6E5 b1207
	static Any _0x4F76E3676583D951(Any p0) { return invoker::Invoke<Any>(0x4F76E3676583D951, p0); } // 0x4F76E3676583D951 b1207
	static Any _0x800DF3FC913355F3(Any p0) { return invoker::Invoke<Any>(0x800DF3FC913355F3, p0); } // 0x800DF3FC913355F3 b1207
	static void _0xFC77C5B44D5FF7C0(Any p0) { invoker::Invoke<Void>(0xFC77C5B44D5FF7C0, p0); } // 0xFC77C5B44D5FF7C0 b1207
	static Any _0x5EE6FCCC9C832CA2(Any p0) { return invoker::Invoke<Any>(0x5EE6FCCC9C832CA2, p0); } // 0x5EE6FCCC9C832CA2 b1207
	static void _0x59C7AD6FEA2AC449(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x59C7AD6FEA2AC449, p0, p1, p2, p3); } // 0x59C7AD6FEA2AC449 b1207
	static void _0xBB68908CD11AEBDC(Any p0) { invoker::Invoke<Void>(0xBB68908CD11AEBDC, p0); } // 0xBB68908CD11AEBDC b1207
	static Any _0x94995829ED15A598(Any p0) { return invoker::Invoke<Any>(0x94995829ED15A598, p0); } // 0x94995829ED15A598 b1207
	static Any _0x31C70A716CAE1FEE(Any p0) { return invoker::Invoke<Any>(0x31C70A716CAE1FEE, p0); } // 0x31C70A716CAE1FEE b1207
	static Any _0x32A1E3B83D501096(Any p0) { return invoker::Invoke<Any>(0x32A1E3B83D501096, p0); } // 0x32A1E3B83D501096 b1207
	static Any _0xF8DE7154F7D1458F(Any p0) { return invoker::Invoke<Any>(0xF8DE7154F7D1458F, p0); } // 0xF8DE7154F7D1458F b1207
	static void _0x669C25840C6F7AE2(Any p0, Any p1) { invoker::Invoke<Void>(0x669C25840C6F7AE2, p0, p1); } // 0x669C25840C6F7AE2 b1207
	static void _0x631CD2D77FDC0316(Any p0) { invoker::Invoke<Void>(0x631CD2D77FDC0316, p0); } // 0x631CD2D77FDC0316 b1207
	static void _0x0B3A99AB6713AA52(Any p0) { invoker::Invoke<Void>(0x0B3A99AB6713AA52, p0); } // 0x0B3A99AB6713AA52 b1207
	static Any _0xEB98B38CA60742D7(Any p0) { return invoker::Invoke<Any>(0xEB98B38CA60742D7, p0); } // 0xEB98B38CA60742D7 b1207
	static Any _0x49A8C2CD97815215(Any p0) { return invoker::Invoke<Any>(0x49A8C2CD97815215, p0); } // 0x49A8C2CD97815215 b1207
	static void _0xD4B614179BCD0654(Any p0) { invoker::Invoke<Void>(0xD4B614179BCD0654, p0); } // 0xD4B614179BCD0654 b1207
	static void _0x406808610220405B(Any p0) { invoker::Invoke<Void>(0x406808610220405B, p0); } // 0x406808610220405B b1207
	static void _0xA2B18FF8D39F6D87(Any p0) { invoker::Invoke<Void>(0xA2B18FF8D39F6D87, p0); } // 0xA2B18FF8D39F6D87 b1207
	static Any _0xE4C51A8A3BD1664C(Any p0) { return invoker::Invoke<Any>(0xE4C51A8A3BD1664C, p0); } // 0xE4C51A8A3BD1664C b1207
	static void _0x8AE4EFA464DAE42D(Any p0, Any p1) { invoker::Invoke<Void>(0x8AE4EFA464DAE42D, p0, p1); } // 0x8AE4EFA464DAE42D b1207
	static void _0xA4DCB3F0DD7488BD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xA4DCB3F0DD7488BD, p0, p1, p2, p3, p4); } // 0xA4DCB3F0DD7488BD b1207
	static void _0xD95D777F828B2BBB(Any p0) { invoker::Invoke<Void>(0xD95D777F828B2BBB, p0); } // 0xD95D777F828B2BBB b1207
	static void _0x92690B0822493CE0() { invoker::Invoke<Void>(0x92690B0822493CE0); } // 0x92690B0822493CE0 b1207
	static void _0xEFC5C6670E0B99BA() { invoker::Invoke<Void>(0xEFC5C6670E0B99BA); } // 0xEFC5C6670E0B99BA b1207
	static void _0x2E957AA81F2C61C9() { invoker::Invoke<Void>(0x2E957AA81F2C61C9); } // 0x2E957AA81F2C61C9 b1207
	static void _0xB173599D61FAEB31() { invoker::Invoke<Void>(0xB173599D61FAEB31); } // 0xB173599D61FAEB31 b1207
	static Any _0x08FC896D2CB31FCC(Any p0, Any p1) { return invoker::Invoke<Any>(0x08FC896D2CB31FCC, p0, p1); } // 0x08FC896D2CB31FCC b1207
	static Any _0x0CADC3A977997472(Any p0, Any p1) { return invoker::Invoke<Any>(0x0CADC3A977997472, p0, p1); } // 0x0CADC3A977997472 b1207
	static void _0x7B204F88F6C3D287(Any p0) { invoker::Invoke<Void>(0x7B204F88F6C3D287, p0); } // 0x7B204F88F6C3D287 b1207
	static void _0xFCC6DB8DBE709BC8(Any p0) { invoker::Invoke<Void>(0xFCC6DB8DBE709BC8, p0); } // 0xFCC6DB8DBE709BC8 b1207
	static void _0xA8C406C2A56EDC16(Any p0) { invoker::Invoke<Void>(0xA8C406C2A56EDC16, p0); } // 0xA8C406C2A56EDC16 b1207
	static void _0x4F81EAD1DE8FA19B(Any p0) { invoker::Invoke<Void>(0x4F81EAD1DE8FA19B, p0); } // 0x4F81EAD1DE8FA19B b1207
	static void _0x6759BEE6762E140B(Any p0) { invoker::Invoke<Void>(0x6759BEE6762E140B, p0); } // 0x6759BEE6762E140B b1207
	static void _0xB65E7F733956CF25(Any p0) { invoker::Invoke<Void>(0xB65E7F733956CF25, p0); } // 0xB65E7F733956CF25 b1207
	static Any _0x4AFC7288C77238B3(Any p0) { return invoker::Invoke<Any>(0x4AFC7288C77238B3, p0); } // 0x4AFC7288C77238B3 b1207
	static Any _0xA8120EBEAF290C7A(Any p0) { return invoker::Invoke<Any>(0xA8120EBEAF290C7A, p0); } // 0xA8120EBEAF290C7A b1207
	static Any _0x69786495C92A3044(Any p0) { return invoker::Invoke<Any>(0x69786495C92A3044, p0); } // 0x69786495C92A3044 b1207
	static Any _0xEC254C2C9B0F08F1(Any p0, Any p1) { return invoker::Invoke<Any>(0xEC254C2C9B0F08F1, p0, p1); } // 0xEC254C2C9B0F08F1 b1207
	static Any _0x9C7F95946E304778(Any p0, Any p1) { return invoker::Invoke<Any>(0x9C7F95946E304778, p0, p1); } // 0x9C7F95946E304778 b1207
}

namespace _NAMESPACE49
{
	static void _0x7A1BD123E5CDB6E5() { invoker::Invoke<Void>(0x7A1BD123E5CDB6E5); } // 0x7A1BD123E5CDB6E5 b1207
	static void _0x9D16896F0DBE78A2(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x9D16896F0DBE78A2, p0, p1, p2, p3); } // 0x9D16896F0DBE78A2 b1207
	static void _0x065887B694359799(Any p0) { invoker::Invoke<Void>(0x065887B694359799, p0); } // 0x065887B694359799 b1207
	static Any _0xFC9806DA9A460093() { return invoker::Invoke<Any>(0xFC9806DA9A460093); } // 0xFC9806DA9A460093 b1207
	static void _0xB03140014ACA6C40(Any p0, Any p1) { invoker::Invoke<Void>(0xB03140014ACA6C40, p0, p1); } // 0xB03140014ACA6C40 b1207
	static void _0xE225CEF1901F6108(Any p0, Any p1) { invoker::Invoke<Void>(0xE225CEF1901F6108, p0, p1); } // 0xE225CEF1901F6108 b1207
	static Any _0x8DE104BEC243A73B() { return invoker::Invoke<Any>(0x8DE104BEC243A73B); } // 0x8DE104BEC243A73B b1207
	static void _0xEFB5F34CC0953B27(Any p0) { invoker::Invoke<Void>(0xEFB5F34CC0953B27, p0); } // 0xEFB5F34CC0953B27 b1207
	static Any _0xBA2C49EA6A8D24FF() { return invoker::Invoke<Any>(0xBA2C49EA6A8D24FF); } // 0xBA2C49EA6A8D24FF b1207
	static Any _0x2E545965DF98D476(Any p0) { return invoker::Invoke<Any>(0x2E545965DF98D476, p0); } // 0x2E545965DF98D476 b1207
	static void _0xF5622FA6ACFCA7DB(Any p0, Any p1) { invoker::Invoke<Void>(0xF5622FA6ACFCA7DB, p0, p1); } // 0xF5622FA6ACFCA7DB b1207
	static Any _0x3CA5E58C9731A16B() { return invoker::Invoke<Any>(0x3CA5E58C9731A16B); } // 0x3CA5E58C9731A16B b1207
	static void _0xDC0A1F0ECEC9F0C0(Any p0, Any p1) { invoker::Invoke<Void>(0xDC0A1F0ECEC9F0C0, p0, p1); } // 0xDC0A1F0ECEC9F0C0 b1207
	static Any _0x5A79220F6D38D7C3(Any p0) { return invoker::Invoke<Any>(0x5A79220F6D38D7C3, p0); } // 0x5A79220F6D38D7C3 b1207
	static Any _0xCFDA2518F322D836(Any p0) { return invoker::Invoke<Any>(0xCFDA2518F322D836, p0); } // 0xCFDA2518F322D836 b1207
	static Any _0x1F56FB3FDB4EAF65(Any p0) { return invoker::Invoke<Any>(0x1F56FB3FDB4EAF65, p0); } // 0x1F56FB3FDB4EAF65 b1207
	static void _0x291CC21D1FB6790E(Any p0) { invoker::Invoke<Void>(0x291CC21D1FB6790E, p0); } // 0x291CC21D1FB6790E b1207
	static Any _0x8245C1F3262F4AC2() { return invoker::Invoke<Any>(0x8245C1F3262F4AC2); } // 0x8245C1F3262F4AC2 b1207
	static Any _0xFB7CF1DE938A3E22() { return invoker::Invoke<Any>(0xFB7CF1DE938A3E22); } // 0xFB7CF1DE938A3E22 b1207
	static Any _0xB6E1A185C2B9319A() { return invoker::Invoke<Any>(0xB6E1A185C2B9319A); } // 0xB6E1A185C2B9319A b1207
	static Any _0x188313616D184213() { return invoker::Invoke<Any>(0x188313616D184213); } // 0x188313616D184213 b1207
}

namespace PHYSICS
{
	static Any ADD_ROPE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17) { return invoker::Invoke<Any>(0xE832D760399EB220, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); } // 0xE832D760399EB220 b1207
	static Any _0xE9C59F6809373A99(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0xE9C59F6809373A99, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xE9C59F6809373A99 b1207
	static void DELETE_ROPE(Any p0) { invoker::Invoke<Void>(0x52B4829281364649, p0); } // 0x52B4829281364649 b1207
	static void _0x6076213101A47B3B(Any p0) { invoker::Invoke<Void>(0x6076213101A47B3B, p0); } // 0x6076213101A47B3B b1207
	static void DELETE_CHILD_ROPE(Any p0) { invoker::Invoke<Void>(0xAA5D6B1888E4DB20, p0); } // 0xAA5D6B1888E4DB20 b1207
	static void _0x4CFA2B7FAE115ECB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x4CFA2B7FAE115ECB, p0, p1, p2, p3, p4, p5, p6); } // 0x4CFA2B7FAE115ECB b1207
	static Any DOES_ROPE_EXIST(Any p0) { return invoker::Invoke<Any>(0xFD5448BE3111ED96, p0); } // 0xFD5448BE3111ED96 b1207
	static Any _0x79C2BEC82CFD7F7F(Any p0) { return invoker::Invoke<Any>(0x79C2BEC82CFD7F7F, p0); } // 0x79C2BEC82CFD7F7F b1207
	static void _0x7A54D82227A139DB(Any p0, Any p1) { invoker::Invoke<Void>(0x7A54D82227A139DB, p0, p1); } // 0x7A54D82227A139DB b1207
	static void ROPE_DRAW_SHADOW_ENABLED(Any p0, Any p1) { invoker::Invoke<Void>(0xF159A63806BB5BA8, p0, p1); } // 0xF159A63806BB5BA8 b1207
	static Any GET_ROPE_VERTEX_COUNT(Any p0) { return invoker::Invoke<Any>(0x3655F544CD30F0B5, p0); } // 0x3655F544CD30F0B5 b1207
	static void _0xE54BF2CE6C7D23A9(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xE54BF2CE6C7D23A9, p0, p1, p2, p3, p4); } // 0xE54BF2CE6C7D23A9 b1207
	static void _0x9C24846D0A4A2776(Any p0) { invoker::Invoke<Void>(0x9C24846D0A4A2776, p0); } // 0x9C24846D0A4A2776 b1207
	static void _0x0CB16D05E03FB525(Any p0) { invoker::Invoke<Void>(0x0CB16D05E03FB525, p0); } // 0x0CB16D05E03FB525 b1207
	static void _0xF27F1A8DE4F50A1B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xF27F1A8DE4F50A1B, p0, p1, p2, p3, p4, p5, p6); } // 0xF27F1A8DE4F50A1B b1207
	static void _0x21D0890D88DFB0B0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x21D0890D88DFB0B0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x21D0890D88DFB0B0 b1207
	static void ATTACH_ENTITIES_TO_ROPE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19, Any p20) { invoker::Invoke<Void>(0x3D95EC8B6D940AC3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20); } // 0x3D95EC8B6D940AC3 b1207
	static void _0x462FF2A432733A44(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x462FF2A432733A44, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x462FF2A432733A44 b1207
	static void _0xE9CD9A67834985A7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0xE9CD9A67834985A7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xE9CD9A67834985A7 b1207
	static void _0x69C810B72291D831(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x69C810B72291D831, p0, p1, p2, p3, p4, p5, p6); } // 0x69C810B72291D831 b1207
	static void _0xB7469CB9AC3C0FD4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xB7469CB9AC3C0FD4, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB7469CB9AC3C0FD4 b1207
	static void _0xC64E7A62632AD2FE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xC64E7A62632AD2FE, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xC64E7A62632AD2FE b1207
	static Any _0x9B4F7E3E4F9C77B3(Any p0, Any p1) { return invoker::Invoke<Any>(0x9B4F7E3E4F9C77B3, p0, p1); } // 0x9B4F7E3E4F9C77B3 b1207
	static void DETACH_ROPE_FROM_ENTITY(Any p0, Any p1) { invoker::Invoke<Void>(0xBCF3026912A8647D, p0, p1); } // 0xBCF3026912A8647D b1207
	static void _0x06AADE17334F7A40(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x06AADE17334F7A40, p0, p1, p2, p3); } // 0x06AADE17334F7A40 b1207
	static void _0x0348469DAA17576C(Any p0) { invoker::Invoke<Void>(0x0348469DAA17576C, p0); } // 0x0348469DAA17576C b1207
	static void _0x6EA0E93CFFA472CC(Any p0) { invoker::Invoke<Void>(0x6EA0E93CFFA472CC, p0); } // 0x6EA0E93CFFA472CC b1207
	static void _0xBDDA142759307528(Any p0) { invoker::Invoke<Void>(0xBDDA142759307528, p0); } // 0xBDDA142759307528 b1207
	static void _0x32F4DBFDFCCCC735(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x32F4DBFDFCCCC735, p0, p1, p2); } // 0x32F4DBFDFCCCC735 b1207
	static void _0xF8CA39D5C0D1D9A1(Any p0, Any p1) { invoker::Invoke<Void>(0xF8CA39D5C0D1D9A1, p0, p1); } // 0xF8CA39D5C0D1D9A1 b1207
	static void _0xEAF529446488EB18(Any p0) { invoker::Invoke<Void>(0xEAF529446488EB18, p0); } // 0xEAF529446488EB18 b1207
	static void _0x31160EC47E7C9549(Any p0, Any p1) { invoker::Invoke<Void>(0x31160EC47E7C9549, p0, p1); } // 0x31160EC47E7C9549 b1207
	static void _0x5E981C764DF33117(Any p0, Any p1) { invoker::Invoke<Void>(0x5E981C764DF33117, p0, p1); } // 0x5E981C764DF33117 b1207
	static void _0xDC57A637A20006ED(Any p0, Any p1) { invoker::Invoke<Void>(0xDC57A637A20006ED, p0, p1); } // 0xDC57A637A20006ED b1207
	static void _0xFB9153A54AC713E8(Any p0, Any p1) { invoker::Invoke<Void>(0xFB9153A54AC713E8, p0, p1); } // 0xFB9153A54AC713E8 b1207
	static void _0xD699E688B49C0FD2(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xD699E688B49C0FD2, p0, p1, p2, p3, p4); } // 0xD699E688B49C0FD2 b1207
	static void _0xBB3E9B073E66C3C9(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xBB3E9B073E66C3C9, p0, p1, p2, p3, p4); } // 0xBB3E9B073E66C3C9 b1207
	static void _0x522FA3F490E2F7AC(Any p0, Any p1) { invoker::Invoke<Void>(0x522FA3F490E2F7AC, p0, p1); } // 0x522FA3F490E2F7AC b1207
	static void _0x3900491C0D61ED4B(Any p0, Any p1) { invoker::Invoke<Void>(0x3900491C0D61ED4B, p0, p1); } // 0x3900491C0D61ED4B b1207
	static void _0xC89E7410A93AC19A(Any p0, Any p1) { invoker::Invoke<Void>(0xC89E7410A93AC19A, p0, p1); } // 0xC89E7410A93AC19A b1207
	static void _0x1D97DA8ACB5D2582(Any p0, Any p1) { invoker::Invoke<Void>(0x1D97DA8ACB5D2582, p0, p1); } // 0x1D97DA8ACB5D2582 b1207
	static void _0x3C6490D940FF5D0B(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x3C6490D940FF5D0B, p0, p1, p2, p3, p4); } // 0x3C6490D940FF5D0B b1207
	static Any GET_ROPE_LAST_VERTEX_COORD(Any p0) { return invoker::Invoke<Any>(0x21BB0FBD3E217C2D, p0); } // 0x21BB0FBD3E217C2D b1207
	static Any GET_ROPE_VERTEX_COORD(Any p0, Any p1) { return invoker::Invoke<Any>(0xEA61CA8E80F09E4D, p0, p1); } // 0xEA61CA8E80F09E4D b1207
	static void START_ROPE_WINDING(Any p0) { invoker::Invoke<Void>(0x1461C72C889E343E, p0); } // 0x1461C72C889E343E b1207
	static void STOP_ROPE_WINDING(Any p0) { invoker::Invoke<Void>(0xCB2D4AB84A19AA7C, p0); } // 0xCB2D4AB84A19AA7C b1207
	static void START_ROPE_UNWINDING_FRONT(Any p0) { invoker::Invoke<Void>(0x538D1179EC1AA9A9, p0); } // 0x538D1179EC1AA9A9 b1207
	static void STOP_ROPE_UNWINDING_FRONT(Any p0) { invoker::Invoke<Void>(0xFFF3A50779EFBBB3, p0); } // 0xFFF3A50779EFBBB3 b1207
	static void _0x00F611A794A3C36E(Any p0) { invoker::Invoke<Void>(0x00F611A794A3C36E, p0); } // 0x00F611A794A3C36E b1207
	static void _0x10DAA76CB8A201A1(Any p0) { invoker::Invoke<Void>(0x10DAA76CB8A201A1, p0); } // 0x10DAA76CB8A201A1 b1207
	static void _0x461FCBDEB4D06717(Any p0, Any p1) { invoker::Invoke<Void>(0x461FCBDEB4D06717, p0, p1); } // 0x461FCBDEB4D06717 b1207
	static void _0x423C6B1F3786D28B(Any p0, Any p1) { invoker::Invoke<Void>(0x423C6B1F3786D28B, p0, p1); } // 0x423C6B1F3786D28B b1207
	static void _0x76BAD9D538BCA1AA(Any p0, Any p1) { invoker::Invoke<Void>(0x76BAD9D538BCA1AA, p0, p1); } // 0x76BAD9D538BCA1AA b1207
	static void _0xB40EA9E0D2E2F7F3(Any p0, Any p1) { invoker::Invoke<Void>(0xB40EA9E0D2E2F7F3, p0, p1); } // 0xB40EA9E0D2E2F7F3 b1207
	static Any _0x3D69537039F8D824(Any p0) { return invoker::Invoke<Any>(0x3D69537039F8D824, p0); } // 0x3D69537039F8D824 b1207
	static void _0x751DF00EEFF122E3(Any p0) { invoker::Invoke<Void>(0x751DF00EEFF122E3, p0); } // 0x751DF00EEFF122E3 b1207
	static void ROPE_FORCE_LENGTH(Any p0, Any p1) { invoker::Invoke<Void>(0xD009F759A723DB1B, p0, p1); } // 0xD009F759A723DB1B b1207
	static void _0x8D59079C37C21D78(Any p0, Any p1) { invoker::Invoke<Void>(0x8D59079C37C21D78, p0, p1); } // 0x8D59079C37C21D78 b1207
	static void _0x814D453FCFDF119F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x814D453FCFDF119F, p0, p1, p2); } // 0x814D453FCFDF119F b1207
	static void _0x1FC92BDBA1106BD2(Any p0, Any p1) { invoker::Invoke<Void>(0x1FC92BDBA1106BD2, p0, p1); } // 0x1FC92BDBA1106BD2 b1207
	static void _0xDEDE679ED29DD4E7(Any p0, Any p1) { invoker::Invoke<Void>(0xDEDE679ED29DD4E7, p0, p1); } // 0xDEDE679ED29DD4E7 b1207
	static void _0xF1EA2A881EB7F2CD(Any p0, Any p1) { invoker::Invoke<Void>(0xF1EA2A881EB7F2CD, p0, p1); } // 0xF1EA2A881EB7F2CD b1207
	static void _0x5A989B7EE3672A56(Any p0, Any p1) { invoker::Invoke<Void>(0x5A989B7EE3672A56, p0, p1); } // 0x5A989B7EE3672A56 b1207
	static void _0x483D4E917B0D35A9(Any p0, Any p1) { invoker::Invoke<Void>(0x483D4E917B0D35A9, p0, p1); } // 0x483D4E917B0D35A9 b1207
	static void SET_DAMPING(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xEEA3B200A6FEB65B, p0, p1, p2); } // 0xEEA3B200A6FEB65B b1207
	static void ACTIVATE_PHYSICS(Any p0) { invoker::Invoke<Void>(0x710311ADF0E20730, p0); } // 0x710311ADF0E20730 b1207
	static void BREAK_ENTITY_GLASS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x2E648D16F6E308F3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x2E648D16F6E308F3 b1207
	static void _0x8EEDFD8921389928(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x8EEDFD8921389928, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x8EEDFD8921389928 b1207
	static void SET_DISABLE_BREAKING(Any p0, Any p1) { invoker::Invoke<Void>(0x5CEC1A84620E7D5B, p0, p1); } // 0x5CEC1A84620E7D5B b1207
	static void SET_DISABLE_FRAG_DAMAGE(Any p0, Any p1) { invoker::Invoke<Void>(0x01BA3AED21C16CFB, p0, p1); } // 0x01BA3AED21C16CFB b1207
	static void _0x5BD7457221CC5FF4(Any p0, Any p1) { invoker::Invoke<Void>(0x5BD7457221CC5FF4, p0, p1); } // 0x5BD7457221CC5FF4 b1207
}

namespace PLAYER
{
	static Any GET_PLAYER_PED(Any p0) { return invoker::Invoke<Any>(0x275F255ED201B937, p0); } // 0x275F255ED201B937 b1207
	static Any _0x5EBE38A20BC51C27() { return invoker::Invoke<Any>(0x5EBE38A20BC51C27); } // 0x5EBE38A20BC51C27 b1207
	static Any _0x325434C68358D282() { return invoker::Invoke<Any>(0x325434C68358D282); } // 0x325434C68358D282 b1207
	static Any _0x5C880F9056D784C8() { return invoker::Invoke<Any>(0x5C880F9056D784C8); } // 0x5C880F9056D784C8 b1207
	static void SET_PLAYER_MODEL(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xED40380076A31506, p0, p1, p2); } // 0xED40380076A31506 b1207
	static Any _0x0760D6F70EBCC05C() { return invoker::Invoke<Any>(0x0760D6F70EBCC05C); } // 0x0760D6F70EBCC05C b1207
	static Any GET_PLAYER_TEAM(Any p0) { return invoker::Invoke<Any>(0xB464EB6A40C7975B, p0); } // 0xB464EB6A40C7975B b1207
	static Any _0xE8DD8536F01DE600() { return invoker::Invoke<Any>(0xE8DD8536F01DE600); } // 0xE8DD8536F01DE600 b1207
	static Any GET_PLAYER_NAME(Any p0) { return invoker::Invoke<Any>(0x7124FD9AC0E01BA0, p0); } // 0x7124FD9AC0E01BA0 b1207
	static Any _0x5B6193813E03E4E9() { return invoker::Invoke<Any>(0x5B6193813E03E4E9); } // 0x5B6193813E03E4E9 b1207
	static Any GET_WANTED_LEVEL_RADIUS(Any p0) { return invoker::Invoke<Any>(0x80B00EB26D9521C7, p0); } // 0x80B00EB26D9521C7 b1207
	static Any GET_WANTED_LEVEL_THRESHOLD(Any p0) { return invoker::Invoke<Any>(0x1B1A3B358F7D8F07, p0); } // 0x1B1A3B358F7D8F07 b1207
	static void SET_PLAYER_WANTED_LEVEL(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x384D4765395E006C, p0, p1, p2); } // 0x384D4765395E006C b1207
	static Any IS_PLAYER_WANTED_LEVEL_GREATER(Any p0, Any p1) { return invoker::Invoke<Any>(0xE1C0AD4C24324C36, p0, p1); } // 0xE1C0AD4C24324C36 b1207
	static void CLEAR_PLAYER_WANTED_LEVEL(Any p0) { invoker::Invoke<Void>(0x4E4B996C928C7AA6, p0); } // 0x4E4B996C928C7AA6 b1207
	static Any IS_PLAYER_DEAD(Any p0) { return invoker::Invoke<Any>(0x2E9C3FCB6798F397, p0); } // 0x2E9C3FCB6798F397 b1207
	static void SET_PLAYER_CONTROL(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4D51E59243281D80, p0, p1, p2, p3); } // 0x4D51E59243281D80 b1207
	static Any GET_PLAYER_WANTED_LEVEL(Any p0) { return invoker::Invoke<Any>(0xABC532F9098BFD9D, p0); } // 0xABC532F9098BFD9D b1207
	static Any _0x28A4BD2CEE236E19() { return invoker::Invoke<Any>(0x28A4BD2CEE236E19); } // 0x28A4BD2CEE236E19 b1207
	static void _0xEA6DE0CD15AECBE2(Any p0) { invoker::Invoke<Void>(0xEA6DE0CD15AECBE2, p0); } // 0xEA6DE0CD15AECBE2 b1207
	static void SET_POLICE_RADAR_BLIPS(Any p0) { invoker::Invoke<Void>(0x6FD7DD6B63F2820E, p0); } // 0x6FD7DD6B63F2820E b1207
	static Any IS_PLAYER_PLAYING(Any p0) { return invoker::Invoke<Any>(0xBFFB35986CAAE58C, p0); } // 0xBFFB35986CAAE58C b1207
	static void SET_EVERYONE_IGNORE_PLAYER(Any p0, Any p1) { invoker::Invoke<Void>(0x34630A768925B852, p0, p1); } // 0x34630A768925B852 b1207
	static Any _0x51BEA356B1C60225(Any p0, Any p1) { return invoker::Invoke<Any>(0x51BEA356B1C60225, p0, p1); } // 0x51BEA356B1C60225 b1207
	static void _0x0751D461F06E41CE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x0751D461F06E41CE, p0, p1, p2, p3); } // 0x0751D461F06E41CE b1207
	static Any _0x6614F9039BD31931(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x6614F9039BD31931, p0, p1, p2); } // 0x6614F9039BD31931 b1207
	static void _0xA3DB37EDF9A74635(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xA3DB37EDF9A74635, p0, p1, p2, p3, p4); } // 0xA3DB37EDF9A74635 b1207
	static Any _0xEA8F168A76A0B9BC(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xEA8F168A76A0B9BC, p0, p1, p2, p3); } // 0xEA8F168A76A0B9BC b1207
	static void _0x93624B36E8851B42(Any p0) { invoker::Invoke<Void>(0x93624B36E8851B42, p0); } // 0x93624B36E8851B42 b1207
	static void _0x9073EC5456651A90(Any p0, Any p1) { invoker::Invoke<Void>(0x9073EC5456651A90, p0, p1); } // 0x9073EC5456651A90 b1207
	static void _0x2E67707BEC52CA4B(Any p0) { invoker::Invoke<Void>(0x2E67707BEC52CA4B, p0); } // 0x2E67707BEC52CA4B b1207
	static void SET_ALL_RANDOM_PEDS_FLEE(Any p0, Any p1) { invoker::Invoke<Void>(0xE705309B8C6445A4, p0, p1); } // 0xE705309B8C6445A4 b1207
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Any p0) { invoker::Invoke<Void>(0xD5C198A62F1DEB0A, p0); } // 0xD5C198A62F1DEB0A b1207
	static void _0xC3376F42B1FACCC6(Any p0) { invoker::Invoke<Void>(0x16752DAA7E6D3F72, p0); } // 0x16752DAA7E6D3F72 b1207
	static void _0x1D256EED194F5B58(Any p0) { invoker::Invoke<Void>(0x1D256EED194F5B58, p0); } // 0x1D256EED194F5B58 b1207
	static Any _0x5B7B97E99F84138B(Any p0) { return invoker::Invoke<Any>(0x5B7B97E99F84138B, p0); } // 0x5B7B97E99F84138B b1207
	static void _0x8674D138391FFB1B(Any p0, Any p1) { invoker::Invoke<Void>(0x8674D138391FFB1B, p0, p1); } // 0x8674D138391FFB1B b1207
	static Any _0xA82964B9D8D6A983() { return invoker::Invoke<Any>(0xA82964B9D8D6A983); } // 0xA82964B9D8D6A983 b1207
	static void SET_WANTED_LEVEL_MULTIPLIER(Any p0) { invoker::Invoke<Void>(0xD7FA719CB54866C2, p0); } // 0xD7FA719CB54866C2 b1207
	static Any _0x062D14F18E8B0CAE() { return invoker::Invoke<Any>(0x062D14F18E8B0CAE); } // 0x062D14F18E8B0CAE b1207
	static void _0xBC9490CA15AEA8FB(Any p0) { invoker::Invoke<Void>(0xD0B0B044112BF424, p0); } // 0xD0B0B044112BF424 b1207
	static void _0x36F1B38855F2A8DF(Any p0) { invoker::Invoke<Void>(0x96722257E5381E00, p0); } // 0x96722257E5381E00 b1207
	static void _0xDC64D2C53493ED12(Any p0) { invoker::Invoke<Void>(0xCBCCF73FFA69CC6B, p0); } // 0xCBCCF73FFA69CC6B b1207
	static void _0xB45EFF719D8427A6(Any p0) { invoker::Invoke<Void>(0xD2DFC9CCA5596A11, p0); } // 0xD2DFC9CCA5596A11 b1207
	static void _0x0032A6DBA562C518() { invoker::Invoke<Void>(0x5CE5CACC01D0F985); } // 0x5CE5CACC01D0F985 b1207
	static Any CAN_PLAYER_START_MISSION(Any p0) { return invoker::Invoke<Any>(0x2DF170B1185AF777, p0); } // 0x2DF170B1185AF777 b1207
	static Any IS_PLAYER_READY_FOR_CUTSCENE(Any p0) { return invoker::Invoke<Any>(0xAA67BCB0097F2FA3, p0); } // 0xAA67BCB0097F2FA3 b1207
	static Any IS_PLAYER_TARGETTING_ENTITY(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x27F89FDC16688A7A, p0, p1, p2); } // 0x27F89FDC16688A7A b1207
	static Any GET_PLAYER_TARGET_ENTITY(Any p0, Any p1) { return invoker::Invoke<Any>(0xAE663DDD99C8A670, p0, p1); } // 0xAE663DDD99C8A670 b1207
	static Any _0x927861B2C08DBEA5() { return invoker::Invoke<Any>(0x927861B2C08DBEA5); } // 0x927861B2C08DBEA5 b1207
	static Any _0x1A51BFE60708E482(Any p0) { return invoker::Invoke<Any>(0x1A51BFE60708E482, p0); } // 0x1A51BFE60708E482 b1207
	static Any _0x3EE1F7A8C32F24E1(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x3EE1F7A8C32F24E1, p0, p1, p2, p3); } // 0x3EE1F7A8C32F24E1 b1207
	static Any _0xBEA3A6E5F5F79A6F(Any p0, Any p1) { return invoker::Invoke<Any>(0xBEA3A6E5F5F79A6F, p0, p1); } // 0xBEA3A6E5F5F79A6F b1207
	static Any _0x04D7F33640662FA2() { return invoker::Invoke<Any>(0x04D7F33640662FA2); } // 0x04D7F33640662FA2 b1207
	static Any IS_PLAYER_FREE_AIMING(Any p0) { return invoker::Invoke<Any>(0x936F967D4BE1CE9D, p0); } // 0x936F967D4BE1CE9D b1207
	static Any IS_PLAYER_FREE_AIMING_AT_ENTITY(Any p0, Any p1) { return invoker::Invoke<Any>(0x8C67C11C68713D25, p0, p1); } // 0x8C67C11C68713D25 b1207
	static Any GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Any p0, Any p1) { return invoker::Invoke<Any>(0xA6817C110B830EAD, p0, p1); } // 0xA6817C110B830EAD b1207
	static void _0x3DAABE78A23694BC(Any p0, Any p1) { invoker::Invoke<Void>(0x3DAABE78A23694BC, p0, p1); } // 0x3DAABE78A23694BC b1207
	static Any _0x7AE93C45EC14A166(Any p0, Any p1) { return invoker::Invoke<Any>(0x7AE93C45EC14A166, p0, p1); } // 0x7AE93C45EC14A166 b1207
	static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Any p0, Any p1) { invoker::Invoke<Void>(0x3A3CD06597388322, p0, p1); } // 0x3A3CD06597388322 b1207
	static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Any p0, Any p1) { invoker::Invoke<Void>(0xC7FE774412046825, p0, p1); } // 0xC7FE774412046825 b1207
	static void SET_PLAYER_CAN_USE_COVER(Any p0, Any p1) { invoker::Invoke<Void>(0x5EDA520F7A3BAF4E, p0, p1); } // 0x5EDA520F7A3BAF4E b1207
	static void _0xD1A70C1E8D1031FE(Any p0, Any p1) { invoker::Invoke<Void>(0xD1A70C1E8D1031FE, p0, p1); } // 0xD1A70C1E8D1031FE b1207
	static void _0xACA45DDCEF6071C4(Any p0, Any p1) { invoker::Invoke<Void>(0xACA45DDCEF6071C4, p0, p1); } // 0xACA45DDCEF6071C4 b1207
	static void _0xA0C683284DF027C7(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA0C683284DF027C7, p0, p1, p2); } // 0xA0C683284DF027C7 b1207
	static Any _0x4EC8BE63B8A5D4EF() { return invoker::Invoke<Any>(0x4EC8BE63B8A5D4EF); } // 0x4EC8BE63B8A5D4EF b1207
	static Any GET_MAX_WANTED_LEVEL() { return invoker::Invoke<Any>(0xD04CFAD1E2B7984A); } // 0xD04CFAD1E2B7984A b1207
	static Any IS_PLAYER_TARGETTING_ANYTHING(Any p0) { return invoker::Invoke<Any>(0x4605C66E0F935F83, p0); } // 0x4605C66E0F935F83 b1207
	static void RESTORE_PLAYER_STAMINA(Any p0, Any p1) { invoker::Invoke<Void>(0xC41F4B6E23FE6A4A, p0, p1); } // 0xC41F4B6E23FE6A4A b1207
	static void _0x8591EE69CC3ED257(Any p0, Any p1) { invoker::Invoke<Void>(0x8591EE69CC3ED257, p0, p1); } // 0x8591EE69CC3ED257 b1207
	static Any GET_PLAYER_GROUP(Any p0) { return invoker::Invoke<Any>(0x9BAB31815159ABCF, p0); } // 0x9BAB31815159ABCF b1207
	static void _0x3D9DA5C9EFD20D88(Any p0, Any p1) { invoker::Invoke<Void>(0x3D9DA5C9EFD20D88, p0, p1); } // 0x3D9DA5C9EFD20D88 b1207
	static void _0x2BEED53B912537D0(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2BEED53B912537D0, p0, p1, p2); } // 0x2BEED53B912537D0 b1207
	static void _0x908D4B72854C8F62(Any p0) { invoker::Invoke<Void>(0x908D4B72854C8F62, p0); } // 0x908D4B72854C8F62 b1207
	static Any _0xD1F6B912785BFD35(Any p0) { return invoker::Invoke<Any>(0xD1F6B912785BFD35, p0); } // 0xD1F6B912785BFD35 b1207
	static void _0xC4873B053054C04B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xC4873B053054C04B, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xC4873B053054C04B b1207
	static void _0xCA59808E51FD67C4(Any p0, Any p1) { invoker::Invoke<Void>(0xCA59808E51FD67C4, p0, p1); } // 0xCA59808E51FD67C4 b1207
	static void _0xBA5CA1FEB5DE0DF6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xBA5CA1FEB5DE0DF6, p0, p1, p2, p3, p4, p5); } // 0xBA5CA1FEB5DE0DF6 b1207
	static void _0x0869D499A7848309(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x0869D499A7848309, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x0869D499A7848309 b1207
	static Any _0xB331D8A73F9D2BDF(Any p0, Any p1) { return invoker::Invoke<Any>(0xB331D8A73F9D2BDF, p0, p1); } // 0xB331D8A73F9D2BDF b1207
	static void _0xAC22AA6DF4D1C1DE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xAC22AA6DF4D1C1DE, p0, p1, p2, p3, p4, p5, p6); } // 0xAC22AA6DF4D1C1DE b1207
	static void _0x0C6B89876262A99D(Any p0, Any p1) { invoker::Invoke<Void>(0x0C6B89876262A99D, p0, p1); } // 0x0C6B89876262A99D b1207
	static void _0x12E09E278C6C29B7(Any p0) { invoker::Invoke<Void>(0x12E09E278C6C29B7, p0); } // 0x12E09E278C6C29B7 b1207
	static void _0xDD33A82352C4652F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDD33A82352C4652F, p0, p1, p2); } // 0xDD33A82352C4652F b1207
	static void _0x1FDA57E8908F2609(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1FDA57E8908F2609, p0, p1, p2); } // 0x1FDA57E8908F2609 b1207
	static Any _0x84481018E668E1B8() { return invoker::Invoke<Any>(0x84481018E668E1B8); } // 0x84481018E668E1B8 b1207
	static Any _0x2009F8AB7A5E9D6D(Any p0) { return invoker::Invoke<Any>(0x2009F8AB7A5E9D6D, p0); } // 0x2009F8AB7A5E9D6D b1207
	static Any _0xE24C64D9ADED2EF5(Any p0, Any p1) { return invoker::Invoke<Any>(0xE24C64D9ADED2EF5, p0, p1); } // 0xE24C64D9ADED2EF5 b1207
	static Any _0xE7F8707269544B29(Any p0, Any p1) { return invoker::Invoke<Any>(0xE7F8707269544B29, p0, p1); } // 0xE7F8707269544B29 b1207
	static Any _0xE631EAF35828FA67(Any p0) { return invoker::Invoke<Any>(0xE631EAF35828FA67, p0); } // 0xE631EAF35828FA67 b1207
	static void _0x086549F3B0381CB1(Any p0, Any p1) { invoker::Invoke<Void>(0x086549F3B0381CB1, p0, p1); } // 0x086549F3B0381CB1 b1207
	static Any IS_PLAYER_CONTROL_ON(Any p0) { return invoker::Invoke<Any>(0x7964097FCE4C244B, p0); } // 0x7964097FCE4C244B b1207
	static Any IS_PLAYER_SCRIPT_CONTROL_ON(Any p0) { return invoker::Invoke<Any>(0xB78350754157C00F, p0); } // 0xB78350754157C00F b1207
	static Any IS_PLAYER_CLIMBING(Any p0) { return invoker::Invoke<Any>(0xB8A70C22FD48197A, p0); } // 0xB8A70C22FD48197A b1207
	static void _0xEBB6E27AC2FF32DA(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xEBB6E27AC2FF32DA, p0, p1, p2, p3, p4); } // 0xEBB6E27AC2FF32DA b1207
	static Any _0xB15CD2F9932C9AB5(Any p0) { return invoker::Invoke<Any>(0xB15CD2F9932C9AB5, p0); } // 0xB15CD2F9932C9AB5 b1207
	static Any _0x621D1B289CAF5978(Any p0) { return invoker::Invoke<Any>(0x621D1B289CAF5978, p0); } // 0x621D1B289CAF5978 b1207
	static Any IS_PLAYER_BEING_ARRESTED(Any p0, Any p1) { return invoker::Invoke<Any>(0xC8183AE963C58374, p0, p1); } // 0xC8183AE963C58374 b1207
	static void RESET_PLAYER_ARREST_STATE(Any p0) { invoker::Invoke<Void>(0x12917931C31F1750, p0); } // 0x12917931C31F1750 b1207
	static void _0xCBB54CC7FFFFAB86(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCBB54CC7FFFFAB86, p0, p1, p2); } // 0xCBB54CC7FFFFAB86 b1207
	static void _0xBED386157F65942C(Any p0, Any p1) { invoker::Invoke<Void>(0xBED386157F65942C, p0, p1); } // 0xBED386157F65942C b1207
	static Any _0xDAB6A2FC56B7DE65(Any p0) { return invoker::Invoke<Any>(0xDAB6A2FC56B7DE65, p0); } // 0xDAB6A2FC56B7DE65 b1207
	static Any _0x0F4EAF69DA41AF43(Any p0) { return invoker::Invoke<Any>(0x0F4EAF69DA41AF43, p0); } // 0x0F4EAF69DA41AF43 b1207
	static Any _0x6ADF821FBF21920E() { return invoker::Invoke<Any>(0x6ADF821FBF21920E); } // 0x6ADF821FBF21920E b1207
	static Any _0x8F2A81C09DA9124A() { return invoker::Invoke<Any>(0x8F2A81C09DA9124A); } // 0x8F2A81C09DA9124A b1207
	static Any GET_PLAYERS_LAST_VEHICLE() { return invoker::Invoke<Any>(0x2F96E7720B0B19EA); } // 0x2F96E7720B0B19EA b1207
	static Any GET_PLAYER_INDEX() { return invoker::Invoke<Any>(0x47E385B0D957C8D4); } // 0x47E385B0D957C8D4 b1207
	static Any INT_TO_PLAYERINDEX(Any p0) { return invoker::Invoke<Any>(0x748B3A65C2604C33, p0); } // 0x748B3A65C2604C33 b1207
	static Any _0x58FF971FC8F2702C() { return invoker::Invoke<Any>(0x58FF971FC8F2702C); } // 0x58FF971FC8F2702C b1207
	static Any PLAYER_ID() { return invoker::Invoke<Any>(0x217E9DC48139933D); } // 0x217E9DC48139933D b1207
	static Any PLAYER_PED_ID() { return invoker::Invoke<Any>(0x096275889B8E0EE0); } // 0x096275889B8E0EE0 b1207
	static Any NETWORK_PLAYER_ID_TO_INT() { return invoker::Invoke<Any>(0x8A9386F0749A17FA); } // 0x8A9386F0749A17FA b1207
	static Any HAS_FORCE_CLEANUP_OCCURRED(Any p0) { return invoker::Invoke<Any>(0xC11469DCA6FC3BB5, p0); } // 0xC11469DCA6FC3BB5 b1207
	static void FORCE_CLEANUP(Any p0) { invoker::Invoke<Void>(0x768C017FB878E4F4, p0); } // 0x768C017FB878E4F4 b1207
	static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(Any p0, Any p1) { invoker::Invoke<Void>(0xDAACAF8B687F2353, p0, p1); } // 0xDAACAF8B687F2353 b1207
	static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Any p0, Any p1) { invoker::Invoke<Void>(0xF4C9512A2F0A3031, p0, p1); } // 0xF4C9512A2F0A3031 b1207
	static Any GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoker::Invoke<Any>(0x84E8E29EBD4A46D2); } // 0x84E8E29EBD4A46D2 b1207
	static void _0x39BED552DB46FFA9(Any p0, Any p1) { invoker::Invoke<Void>(0x39BED552DB46FFA9, p0, p1); } // 0x39BED552DB46FFA9 b1207
	static Any _0x054473164C012699(Any p0) { return invoker::Invoke<Any>(0x054473164C012699, p0); } // 0x054473164C012699 b1207
	static Any _0xDA35A134038557EC() { return invoker::Invoke<Any>(0xDA35A134038557EC); } // 0xDA35A134038557EC b1207
	static void _0xC71D07C96946E263(Any p0, Any p1) { invoker::Invoke<Void>(0xC71D07C96946E263, p0, p1); } // 0xC71D07C96946E263 b1207
	static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Any p0) { invoker::Invoke<Void>(0xBEC463B3A11C909E, p0); } // 0xBEC463B3A11C909E b1207
	static Any _0x908258B6209E71F7() { return invoker::Invoke<Any>(0x908258B6209E71F7); } // 0x908258B6209E71F7 b1207
	static void _0x3946FC742AC305CD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x3946FC742AC305CD, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x3946FC742AC305CD b1207
	static void _0xC67A4910425F11F1(Any p0, Any p1) { invoker::Invoke<Void>(0xC67A4910425F11F1, p0, p1); } // 0xC67A4910425F11F1 b1207
	static void SET_PLAYER_INVINCIBLE(Any p0, Any p1) { invoker::Invoke<Void>(0xFEBEEBC9CBDF4B12, p0, p1); } // 0xFEBEEBC9CBDF4B12 b1207
	static Any GET_PLAYER_INVINCIBLE(Any p0) { return invoker::Invoke<Any>(0x0CBBCB2CCFA7DC4E, p0); } // 0x0CBBCB2CCFA7DC4E b1207
	static void SET_PLAYER_LOCKON(Any p0, Any p1) { invoker::Invoke<Void>(0x462AA1973CBBA75E, p0, p1); } // 0x462AA1973CBBA75E b1207
	static Any _0x4A056257802DD3E5() { return invoker::Invoke<Any>(0x4A056257802DD3E5); } // 0x4A056257802DD3E5 b1207
	static Any _0xD66A941F401E7302() { return invoker::Invoke<Any>(0xD66A941F401E7302); } // 0xD66A941F401E7302 b1207
	static Any _0x19B4F71703902238() { return invoker::Invoke<Any>(0x19B4F71703902238); } // 0x19B4F71703902238 b1207
	static Any _0x747257807B8721CE() { return invoker::Invoke<Any>(0x747257807B8721CE); } // 0x747257807B8721CE b1207
	static Any _0x8702D9150D9FBB3D() { return invoker::Invoke<Any>(0x8702D9150D9FBB3D); } // 0x8702D9150D9FBB3D b1207
	static void _0xCB0B9506BC91E441(Any p0, Any p1) { invoker::Invoke<Void>(0xCB0B9506BC91E441, p0, p1); } // 0xCB0B9506BC91E441 b1207
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Any p0) { invoker::Invoke<Void>(0x270B63A641BE32F2, p0); } // 0x270B63A641BE32F2 b1207
	static Any HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Any p0) { return invoker::Invoke<Any>(0xDA4A4B9B96E20092, p0); } // 0xDA4A4B9B96E20092 b1207
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Any p0) { invoker::Invoke<Void>(0x0361096D6CE4372C, p0); } // 0x0361096D6CE4372C b1207
	static Any HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Any p0) { return invoker::Invoke<Any>(0x16C8D205DD5A2E90, p0); } // 0x16C8D205DD5A2E90 b1207
	static void _0xEACEBAAE0A33FB3F(Any p0) { invoker::Invoke<Void>(0xEACEBAAE0A33FB3F, p0); } // 0xEACEBAAE0A33FB3F b1207
	static Any _0x72AD59F7B7FB6E24(Any p0, Any p1) { return invoker::Invoke<Any>(0x72AD59F7B7FB6E24, p0, p1); } // 0x72AD59F7B7FB6E24 b1207
	static Any _0x1A6E84F13C952094(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x1A6E84F13C952094, p0, p1, p2); } // 0x1A6E84F13C952094 b1207
	static Any _0x78B3D19AF6391A55() { return invoker::Invoke<Any>(0x78B3D19AF6391A55); } // 0x78B3D19AF6391A55 b1207
	static Any _0x1F488807BC8E0630() { return invoker::Invoke<Any>(0x1F488807BC8E0630); } // 0x1F488807BC8E0630 b1207
	static Any _0x5DA6500FE849DA16() { return invoker::Invoke<Any>(0x5DA6500FE849DA16); } // 0x5DA6500FE849DA16 b1207
	static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Any p0, Any p1) { invoker::Invoke<Void>(0xBFCEABDE34DA5085, p0, p1); } // 0xBFCEABDE34DA5085 b1207
	static Any _0x73EB2EF2E92D23BF() { return invoker::Invoke<Any>(0x73EB2EF2E92D23BF); } // 0x73EB2EF2E92D23BF b1207
	static void SET_PLAYER_FORCED_AIM(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xD5FCC166AEB2FD0F, p0, p1, p2, p3); } // 0xD5FCC166AEB2FD0F b1207
	static void _0x310CE349E0C0EC4B(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x310CE349E0C0EC4B, p0, p1, p2); } // 0x310CE349E0C0EC4B b1207
	static Any _0x2970929FD5F9FC89() { return invoker::Invoke<Any>(0x2970929FD5F9FC89); } // 0x2970929FD5F9FC89 b1207
	static void _0xEBFF94328FF7A18A(Any p0, Any p1) { invoker::Invoke<Void>(0xEBFF94328FF7A18A, p0, p1); } // 0xEBFF94328FF7A18A b1207
	static void _0xF993373285053D77(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF993373285053D77, p0, p1, p2); } // 0xF993373285053D77 b1207
	static Any _0xE956C2340A76272E(Any p0) { return invoker::Invoke<Any>(0xE956C2340A76272E, p0); } // 0xE956C2340A76272E b1207
	static void _0x95EE1DEE1DCD9070(Any p0, Any p1) { invoker::Invoke<Void>(0x95EE1DEE1DCD9070, p0, p1); } // 0x95EE1DEE1DCD9070 b1207
	static Any _0xDE6C85975F9D4894(Any p0) { return invoker::Invoke<Any>(0xDE6C85975F9D4894, p0); } // 0xDE6C85975F9D4894 b1207
	static void _0xBBA140062B15A8AC(Any p0) { invoker::Invoke<Void>(0xBBA140062B15A8AC, p0); } // 0xBBA140062B15A8AC b1207
	static void _0xAE637BB8EF017875(Any p0, Any p1) { invoker::Invoke<Void>(0xAE637BB8EF017875, p0, p1); } // 0xAE637BB8EF017875 b1207
	static Any _0xB16223CB7DA965F0(Any p0) { return invoker::Invoke<Any>(0xB16223CB7DA965F0, p0); } // 0xB16223CB7DA965F0 b1207
	static void _0x28A13BF6B05C3D83(Any p0, Any p1) { invoker::Invoke<Void>(0x28A13BF6B05C3D83, p0, p1); } // 0x28A13BF6B05C3D83 b1207
	static Any _0xC0B21F235C02139C() { return invoker::Invoke<Any>(0xC0B21F235C02139C); } // 0xC0B21F235C02139C b1207
	static void _0x51345AE20F22C261(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x51345AE20F22C261, p0, p1, p2, p3, p4); } // 0x51345AE20F22C261 b1207
	static void _0xFA437FA0738C370C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xFA437FA0738C370C, p0, p1, p2, p3, p4); } // 0xFA437FA0738C370C b1207
	static void _0x2498035289B5688F(Any p0, Any p1) { invoker::Invoke<Void>(0x2498035289B5688F, p0, p1); } // 0x2498035289B5688F b1207
	static Any _0x811A748B1BE231BA(Any p0) { return invoker::Invoke<Any>(0x811A748B1BE231BA, p0); } // 0x811A748B1BE231BA b1207
	static Any _0x029884FB65821B07() { return invoker::Invoke<Any>(0x029884FB65821B07); } // 0x029884FB65821B07 b1207
	static void _0x200114E99552462B(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x200114E99552462B, p0, p1, p2); } // 0x200114E99552462B b1207
	static void _0x1D77B47AFA584E90(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1D77B47AFA584E90, p0, p1, p2); } // 0x1D77B47AFA584E90 b1207
	static void _0x5A498FCA232F71E1(Any p0, Any p1) { invoker::Invoke<Void>(0x5A498FCA232F71E1, p0, p1); } // 0x5A498FCA232F71E1 b1207
	static Any _0xAB3773E7AA1E9DCC(Any p0) { return invoker::Invoke<Any>(0xAB3773E7AA1E9DCC, p0); } // 0xAB3773E7AA1E9DCC b1207
	static Any _0x00BA333DA05ADC23() { return invoker::Invoke<Any>(0x00BA333DA05ADC23); } // 0x00BA333DA05ADC23 b1207
	static void _0x22B3CABEDDB538B2(Any p0, Any p1) { invoker::Invoke<Void>(0x22B3CABEDDB538B2, p0, p1); } // 0x22B3CABEDDB538B2 b1207
	static void _0xB783F75940B23014(Any p0, Any p1) { invoker::Invoke<Void>(0xB783F75940B23014, p0, p1); } // 0xB783F75940B23014 b1207
	static Any _0xC0B1C05B313693D1() { return invoker::Invoke<Any>(0xC0B1C05B313693D1); } // 0xC0B1C05B313693D1 b1207
	static Any _0x57D9991DC1334151(Any p0) { return invoker::Invoke<Any>(0x57D9991DC1334151, p0); } // 0x57D9991DC1334151 b1207
	static Any _0x21091B4BEB6376EE(Any p0) { return invoker::Invoke<Any>(0x21091B4BEB6376EE, p0); } // 0x21091B4BEB6376EE b1207
	static Any _0xAE4BCC79C587EBBF() { return invoker::Invoke<Any>(0xAE4BCC79C587EBBF); } // 0xAE4BCC79C587EBBF b1207
	static Any _0x4D1699543B1C023C() { return invoker::Invoke<Any>(0x4D1699543B1C023C); } // 0x4D1699543B1C023C b1207
	static Any _0x3A6AE4EEE30370FE(Any p0, Any p1) { return invoker::Invoke<Any>(0x3A6AE4EEE30370FE, p0, p1); } // 0x3A6AE4EEE30370FE b1207
	static Any _0xA81D24AE0AF99A5E(Any p0) { return invoker::Invoke<Any>(0xA81D24AE0AF99A5E, p0); } // 0xA81D24AE0AF99A5E b1207
	static Any _0xDF66A37936D5F3D9(Any p0) { return invoker::Invoke<Any>(0xDF66A37936D5F3D9, p0); } // 0xDF66A37936D5F3D9 b1207
	static Any _0x592F58BC4D2A2CF3(Any p0, Any p1) { return invoker::Invoke<Any>(0x592F58BC4D2A2CF3, p0, p1); } // 0x592F58BC4D2A2CF3 b1207
	static Any _0x0317C947D062854E(Any p0) { return invoker::Invoke<Any>(0x0317C947D062854E, p0); } // 0x0317C947D062854E b1207
	static Any _0x0FF421E467373FCF(Any p0) { return invoker::Invoke<Any>(0x0FF421E467373FCF, p0); } // 0x0FF421E467373FCF b1207
	static Any _0x768E81AE285A4B67() { return invoker::Invoke<Any>(0x768E81AE285A4B67); } // 0x768E81AE285A4B67 b1207
	static void _0x0E1DB1F8F5B561DC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x0E1DB1F8F5B561DC, p0, p1, p2, p3, p4, p5); } // 0x0E1DB1F8F5B561DC b1207
	static void _0x08E22898A6AF4905(Any p0, Any p1) { invoker::Invoke<Void>(0x08E22898A6AF4905, p0, p1); } // 0x08E22898A6AF4905 b1207
	static Any _0xBEFED69CE8317F91(Any p0) { return invoker::Invoke<Any>(0xBEFED69CE8317F91, p0); } // 0xBEFED69CE8317F91 b1207
	static void _0xA63FCAD3A6FEC6D2(Any p0, Any p1) { invoker::Invoke<Void>(0xA63FCAD3A6FEC6D2, p0, p1); } // 0xA63FCAD3A6FEC6D2 b1207
	static Any _0xE022CC1B545F1D9F(Any p0) { return invoker::Invoke<Any>(0xE022CC1B545F1D9F, p0); } // 0xE022CC1B545F1D9F b1207
	static Any _0x1710BC33CFB83634() { return invoker::Invoke<Any>(0x1710BC33CFB83634); } // 0x1710BC33CFB83634 b1207
	static void _0x64FF4BF9AF59E139(Any p0, Any p1) { invoker::Invoke<Void>(0x64FF4BF9AF59E139, p0, p1); } // 0x64FF4BF9AF59E139 b1207
	static Any _0x45AB66D02B601FA7(Any p0) { return invoker::Invoke<Any>(0x45AB66D02B601FA7, p0); } // 0x45AB66D02B601FA7 b1207
	static void _0x107F2A66E1C4C83A(Any p0) { invoker::Invoke<Void>(0x107F2A66E1C4C83A, p0); } // 0x107F2A66E1C4C83A b1207
	static void START_PLAYER_TELEPORT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xDF8822C55EDDA65B, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xDF8822C55EDDA65B b1207
	static void _0x2C2D287748E8E9B7(Any p0) { invoker::Invoke<Void>(0x2C2D287748E8E9B7, p0); } // 0x2C2D287748E8E9B7 b1207
	static Any _HAS_PLAYER_TELEPORT_FINISHED(Any p0) { return invoker::Invoke<Any>(0xC39DCE4672CBFBC1, p0); } // 0xC39DCE4672CBFBC1 b1207
	static void STOP_PLAYER_TELEPORT() { invoker::Invoke<Void>(0x0858B86146601BE8); } // 0x0858B86146601BE8 b1207
	static Any IS_PLAYER_TELEPORT_ACTIVE() { return invoker::Invoke<Any>(0x085EEAEB8783FEB5); } // 0x085EEAEB8783FEB5 b1207
	static Any GET_PLAYER_CURRENT_STEALTH_NOISE(Any p0) { return invoker::Invoke<Any>(0xD7ECC25E176ECBA5, p0); } // 0xD7ECC25E176ECBA5 b1207
	static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Any p0, Any p1) { invoker::Invoke<Void>(0x8899C244EBCF70DE, p0, p1); } // 0x8899C244EBCF70DE b1207
	static Any _0x22CD23BB0C45E0CD(Any p0) { return invoker::Invoke<Any>(0x22CD23BB0C45E0CD, p0); } // 0x22CD23BB0C45E0CD b1207
	static Any _0x535ED4605F89AB6E() { return invoker::Invoke<Any>(0x535ED4605F89AB6E); } // 0x535ED4605F89AB6E b1207
	static void _0xFECA17CF3343694B(Any p0, Any p1) { invoker::Invoke<Void>(0xFECA17CF3343694B, p0, p1); } // 0xFECA17CF3343694B b1207
	static Any _0x617D3494AD58200F(Any p0) { return invoker::Invoke<Any>(0x617D3494AD58200F, p0); } // 0x617D3494AD58200F b1207
	static void _0xBBADFB5E5E5766FB(Any p0, Any p1) { invoker::Invoke<Void>(0xBBADFB5E5E5766FB, p0, p1); } // 0xBBADFB5E5E5766FB b1207
	static Any _0x68A0389E0718AC8F(Any p0) { return invoker::Invoke<Any>(0x68A0389E0718AC8F, p0); } // 0x68A0389E0718AC8F b1207
	static void _0x8FBF9EDB378CCB8C(Any p0, Any p1) { invoker::Invoke<Void>(0x8FBF9EDB378CCB8C, p0, p1); } // 0x8FBF9EDB378CCB8C b1207
	static Any _0x46FA0AE18F4C7FA9(Any p0) { return invoker::Invoke<Any>(0x46FA0AE18F4C7FA9, p0); } // 0x46FA0AE18F4C7FA9 b1207
	static void _0xD2CB0FB0FDCB473D(Any p0, Any p1) { invoker::Invoke<Void>(0xD2CB0FB0FDCB473D, p0, p1); } // 0xD2CB0FB0FDCB473D b1207
	static Any _0xB48050D326E9A2F3(Any p0) { return invoker::Invoke<Any>(0xB48050D326E9A2F3, p0); } // 0xB48050D326E9A2F3 b1207
	static Any _0x227B06324234FB09(Any p0, Any p1) { return invoker::Invoke<Any>(0x227B06324234FB09, p0, p1); } // 0x227B06324234FB09 b1207
	static Any _0xD3F7445CEA2E5035(Any p0) { return invoker::Invoke<Any>(0xD3F7445CEA2E5035, p0); } // 0xD3F7445CEA2E5035 b1207
	static void _0x77B0B6D17A3AC9AA(Any p0, Any p1) { invoker::Invoke<Void>(0x77B0B6D17A3AC9AA, p0, p1); } // 0x77B0B6D17A3AC9AA b1207
	static void _0xDF93973251FB2CA5(Any p0, Any p1) { invoker::Invoke<Void>(0xDF93973251FB2CA5, p0, p1); } // 0xDF93973251FB2CA5 b1207
	static Any _0x694FFA4308060CD1() { return invoker::Invoke<Any>(0x694FFA4308060CD1); } // 0x694FFA4308060CD1 b1207
	static void _0x09C28F828EE674FA(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x09C28F828EE674FA, p0, p1, p2); } // 0x09C28F828EE674FA b1207
	static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Any p0, Any p1) { invoker::Invoke<Void>(0x94D529F7B73D7A85, p0, p1); } // 0x94D529F7B73D7A85 b1207
	static Any _0xD15CC2D493160BE3() { return invoker::Invoke<Any>(0xD15CC2D493160BE3); } // 0xD15CC2D493160BE3 b1207
	static Any _0x818241B3EDA84191() { return invoker::Invoke<Any>(0x818241B3EDA84191); } // 0x818241B3EDA84191 b1207
	static Any _0xE4CB5A3F18170381() { return invoker::Invoke<Any>(0xE4CB5A3F18170381); } // 0xE4CB5A3F18170381 b1207
	static Any _0x2D3ACE3DE0A2B622() { return invoker::Invoke<Any>(0x2D3ACE3DE0A2B622); } // 0x2D3ACE3DE0A2B622 b1207
	static void _0x83C989D5B5B5B466(Any p0, Any p1) { invoker::Invoke<Void>(0x83C989D5B5B5B466, p0, p1); } // 0x83C989D5B5B5B466 b1207
	static Any _0x03B4B759A8990505(Any p0) { return invoker::Invoke<Any>(0x03B4B759A8990505, p0); } // 0x03B4B759A8990505 b1207
	static void _0x67659A8F248E0141(Any p0, Any p1) { invoker::Invoke<Void>(0x67659A8F248E0141, p0, p1); } // 0x67659A8F248E0141 b1207
	static void _0xB427911EA6DFFEF3(Any p0, Any p1) { invoker::Invoke<Void>(0xB427911EA6DFFEF3, p0, p1); } // 0xB427911EA6DFFEF3 b1207
	static void _0x914071FF93AF2692(Any p0, Any p1) { invoker::Invoke<Void>(0x914071FF93AF2692, p0, p1); } // 0x914071FF93AF2692 b1207
	static Any _0x2E78D822208E740A(Any p0) { return invoker::Invoke<Any>(0x2E78D822208E740A, p0); } // 0x2E78D822208E740A b1207
	static Any _0x19B2C7A6C34FAD54(Any p0, Any p1) { return invoker::Invoke<Any>(0x19B2C7A6C34FAD54, p0, p1); } // 0x19B2C7A6C34FAD54 b1207
	static Any _0x9422743A5BA50E10(Any p0) { return invoker::Invoke<Any>(0x9422743A5BA50E10, p0); } // 0x9422743A5BA50E10 b1207
	static void _0x497A6539BB0E8787(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x497A6539BB0E8787, p0, p1, p2); } // 0x497A6539BB0E8787 b1207
	static void _0x93F499CAE53FCD05(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x93F499CAE53FCD05, p0, p1, p2); } // 0x93F499CAE53FCD05 b1207
	static Any _0xD04AD186CE8BB129() { return invoker::Invoke<Any>(0xD04AD186CE8BB129); } // 0xD04AD186CE8BB129 b1207
	static Any _0xFE0304050261442C() { return invoker::Invoke<Any>(0xFE0304050261442C); } // 0xFE0304050261442C b1207
	static Any _0x5C2E5E3CAEEB1F58() { return invoker::Invoke<Any>(0x5C2E5E3CAEEB1F58); } // 0x5C2E5E3CAEEB1F58 b1207
	static Any _0xFC79DCC94D0A5897() { return invoker::Invoke<Any>(0xFC79DCC94D0A5897); } // 0xFC79DCC94D0A5897 b1207
	static Any _0x59F0AFF3E0A1B019() { return invoker::Invoke<Any>(0x59F0AFF3E0A1B019); } // 0x59F0AFF3E0A1B019 b1207
	static Any _0xAF341032E97FB061() { return invoker::Invoke<Any>(0xAF341032E97FB061); } // 0xAF341032E97FB061 b1207
	static Any _0x43F50A7CD2482156() { return invoker::Invoke<Any>(0x43F50A7CD2482156); } // 0x43F50A7CD2482156 b1207
	static Any _0x967FF5BC0CFE6D26() { return invoker::Invoke<Any>(0x967FF5BC0CFE6D26); } // 0x967FF5BC0CFE6D26 b1207
	static Any _0x4EA69188FBCE6A7D() { return invoker::Invoke<Any>(0x4EA69188FBCE6A7D); } // 0x4EA69188FBCE6A7D b1207
	static Any _0xDEE80FEDFDD43C9B() { return invoker::Invoke<Any>(0xDEE80FEDFDD43C9B); } // 0xDEE80FEDFDD43C9B b1207
	static void _0x3AD212429E095EFB(Any p0, Any p1) { invoker::Invoke<Void>(0x3AD212429E095EFB, p0, p1); } // 0x3AD212429E095EFB b1207
	static void SET_PLAYER_NOISE_MULTIPLIER(Any p0, Any p1) { invoker::Invoke<Void>(0xB5EC6BDAEBCA454C, p0, p1); } // 0xB5EC6BDAEBCA454C b1207
	static void _0x113EF458AB6CDA67(Any p0, Any p1) { invoker::Invoke<Void>(0x113EF458AB6CDA67, p0, p1); } // 0x113EF458AB6CDA67 b1207
	static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Any p0, Any p1) { invoker::Invoke<Void>(0x4DE44FA389DCA565, p0, p1); } // 0x4DE44FA389DCA565 b1207
	static void SIMULATE_PLAYER_INPUT_GAIT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xFA0C063C422C4355, p0, p1, p2, p3, p4, p5); } // 0xFA0C063C422C4355 b1207
	static void RESET_PLAYER_INPUT_GAIT(Any p0) { invoker::Invoke<Void>(0x61A2EECAB274829B, p0); } // 0x61A2EECAB274829B b1207
	static void SET_PLAYER_SIMULATE_AIMING(Any p0, Any p1) { invoker::Invoke<Void>(0xE0447DEF81CCDFD2, p0, p1); } // 0xE0447DEF81CCDFD2 b1207
	static void SET_PLAYER_CLOTH_PIN_FRAMES(Any p0, Any p1) { invoker::Invoke<Void>(0xD0D9317DFEEF9A66, p0, p1); } // 0xD0D9317DFEEF9A66 b1207
	static Any _0xC932F57F31EA9152() { return invoker::Invoke<Any>(0xC932F57F31EA9152); } // 0xC932F57F31EA9152 b1207
	static Any _0xFB6EB8785F808551() { return invoker::Invoke<Any>(0xFB6EB8785F808551); } // 0xFB6EB8785F808551 b1207
	static void _0x5B9813ECF7633FE8(Any p0) { invoker::Invoke<Void>(0x5B9813ECF7633FE8, p0); } // 0x5B9813ECF7633FE8 b1207
	static Any IS_PLAYER_RIDING_TRAIN(Any p0) { return invoker::Invoke<Any>(0x2FB0ACADA6A238DD, p0); } // 0x2FB0ACADA6A238DD b1207
	static void _0x9AFCF9FE1884BF62(Any p0, Any p1) { invoker::Invoke<Void>(0x9AFCF9FE1884BF62, p0, p1); } // 0x9AFCF9FE1884BF62 b1207
	static Any _0x1E8099F449ABB0BA(Any p0) { return invoker::Invoke<Any>(0x1E8099F449ABB0BA, p0); } // 0x1E8099F449ABB0BA b1207
	static Any _0xCCE7C695C164C35F(Any p0) { return invoker::Invoke<Any>(0xCCE7C695C164C35F, p0); } // 0xCCE7C695C164C35F b1207
	static void _0xF0FE8E790BFEB5BB(Any p0, Any p1) { invoker::Invoke<Void>(0xF0FE8E790BFEB5BB, p0, p1); } // 0xF0FE8E790BFEB5BB b1207
	static Any _0x8A0643B0B4CA276B(Any p0, Any p1) { return invoker::Invoke<Any>(0x8A0643B0B4CA276B, p0, p1); } // 0x8A0643B0B4CA276B b1207
	static void _0x2797B8D66DD0EBB8(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2797B8D66DD0EBB8, p0, p1, p2); } // 0x2797B8D66DD0EBB8 b1207
	static void _0x6B5DDFB967E5073D(Any p0, Any p1) { invoker::Invoke<Void>(0x6B5DDFB967E5073D, p0, p1); } // 0x6B5DDFB967E5073D b1207
	static Any _0x32348719DCED2969(Any p0) { return invoker::Invoke<Any>(0x32348719DCED2969, p0); } // 0x32348719DCED2969 b1207
	static void _0x3C4AE8506638C7E2(Any p0, Any p1) { invoker::Invoke<Void>(0x3C4AE8506638C7E2, p0, p1); } // 0x3C4AE8506638C7E2 b1207
	static Any _0x51139D8C17B16FBC(Any p0) { return invoker::Invoke<Any>(0x51139D8C17B16FBC, p0); } // 0x51139D8C17B16FBC b1207
	static void _0x8F44EBB3BA8F6D44(Any p0, Any p1) { invoker::Invoke<Void>(0x8F44EBB3BA8F6D44, p0, p1); } // 0x8F44EBB3BA8F6D44 b1207
	static Any _0x83FCD6921FC8FD05() { return invoker::Invoke<Any>(0x83FCD6921FC8FD05); } // 0x83FCD6921FC8FD05 b1207
	static Any _0xE92261BD28C0878F(Any p0) { return invoker::Invoke<Any>(0xE92261BD28C0878F, p0); } // 0xE92261BD28C0878F b1207
	static void _0x870634493CB4372C(Any p0, Any p1) { invoker::Invoke<Void>(0x870634493CB4372C, p0, p1); } // 0x870634493CB4372C b1207
	static Any _0xA54000D4BFD90BDE(Any p0) { return invoker::Invoke<Any>(0xA54000D4BFD90BDE, p0); } // 0xA54000D4BFD90BDE b1207
	static Any _0x6EDB5D08CB03E763() { return invoker::Invoke<Any>(0x6EDB5D08CB03E763); } // 0x6EDB5D08CB03E763 b1207
	static Any _0x27AD7162D3FED01E(Any p0, Any p1) { return invoker::Invoke<Any>(0x27AD7162D3FED01E, p0, p1); } // 0x27AD7162D3FED01E b1207
	static Any _0xCCD9B77F70D31C9D(Any p0) { return invoker::Invoke<Any>(0xCCD9B77F70D31C9D, p0); } // 0xCCD9B77F70D31C9D b1207
	static Any _0xC93A9A45430D484E(Any p0) { return invoker::Invoke<Any>(0xC93A9A45430D484E, p0); } // 0xC93A9A45430D484E b1207
	static Any _0x570A13A4CA2799BB() { return invoker::Invoke<Any>(0x570A13A4CA2799BB); } // 0x570A13A4CA2799BB b1207
	static Any _0x3ACAC8832E77BC93() { return invoker::Invoke<Any>(0x3ACAC8832E77BC93); } // 0x3ACAC8832E77BC93 b1207
	static Any _0x2B12B6FC8B8772AB() { return invoker::Invoke<Any>(0x2B12B6FC8B8772AB); } // 0x2B12B6FC8B8772AB b1207
	static Any _0xE910932F4B30BE23() { return invoker::Invoke<Any>(0xE910932F4B30BE23); } // 0xE910932F4B30BE23 b1207
	static Any _0x131E294EF60160DF() { return invoker::Invoke<Any>(0x131E294EF60160DF); } // 0x131E294EF60160DF b1207
	static Any _0x0E9057A9DA78D0F8() { return invoker::Invoke<Any>(0x0E9057A9DA78D0F8); } // 0x0E9057A9DA78D0F8 b1207
	static Any _0x263D69767F76059C() { return invoker::Invoke<Any>(0x263D69767F76059C); } // 0x263D69767F76059C b1207
	static void _0x543DFE14BE720027(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x543DFE14BE720027, p0, p1, p2); } // 0x543DFE14BE720027 b1207
	static Any _0xAC67098A1E54ABB0() { return invoker::Invoke<Any>(0xAC67098A1E54ABB0); } // 0xAC67098A1E54ABB0 b1207
	static void _0x9DAE1380CC5C6451(Any p0, Any p1) { invoker::Invoke<Void>(0x9DAE1380CC5C6451, p0, p1); } // 0x9DAE1380CC5C6451 b1207
	static Any _0x9A957912CE2EABD1() { return invoker::Invoke<Any>(0x9A957912CE2EABD1); } // 0x9A957912CE2EABD1 b1207
	static void _0xE5D3EB37ABC1EB03(Any p0) { invoker::Invoke<Void>(0xE5D3EB37ABC1EB03, p0); } // 0xE5D3EB37ABC1EB03 b1207
	static Any _0x0E6846476906C9DD(Any p0, Any p1) { return invoker::Invoke<Any>(0x0E6846476906C9DD, p0, p1); } // 0x0E6846476906C9DD b1207
	static Any _0x6852288340B43239(Any p0, Any p1) { return invoker::Invoke<Any>(0x6852288340B43239, p0, p1); } // 0x6852288340B43239 b1207
	static Any _0xE50A67C33514A390(Any p0, Any p1) { return invoker::Invoke<Any>(0xE50A67C33514A390, p0, p1); } // 0xE50A67C33514A390 b1207
	static Any _0x40AB73092C95B5F5() { return invoker::Invoke<Any>(0x40AB73092C95B5F5); } // 0x40AB73092C95B5F5 b1207
	static void _0x6ECFC621A168424C(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x6ECFC621A168424C, p0, p1, p2); } // 0x6ECFC621A168424C b1207
	static void _0xDC5E09D012D759C4(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDC5E09D012D759C4, p0, p1, p2); } // 0xDC5E09D012D759C4 b1207
	static void _0x00B156AFEBCC5AE0(Any p0) { invoker::Invoke<Void>(0x00B156AFEBCC5AE0, p0); } // 0x00B156AFEBCC5AE0 b1207
	static void _0xC58CE6824E604DEC(Any p0) { invoker::Invoke<Void>(0xC58CE6824E604DEC, p0); } // 0xC58CE6824E604DEC b1207
	static void _0x330CA55A3647FA1C(Any p0, Any p1) { invoker::Invoke<Void>(0x330CA55A3647FA1C, p0, p1); } // 0x330CA55A3647FA1C b1207
	static Any _0xA62BBAAE67A05BB0(Any p0) { return invoker::Invoke<Any>(0xA62BBAAE67A05BB0, p0); } // 0xA62BBAAE67A05BB0 b1207
	static Any _0x2C41D93F550D5E37() { return invoker::Invoke<Any>(0x2C41D93F550D5E37); } // 0x2C41D93F550D5E37 b1207
	static void _0x22C8B10802301381(Any p0, Any p1) { invoker::Invoke<Void>(0x22C8B10802301381, p0, p1); } // 0x22C8B10802301381 b1207
	static void _0xE0D6C2A146A5C993(Any p0, Any p1) { invoker::Invoke<Void>(0xE0D6C2A146A5C993, p0, p1); } // 0xE0D6C2A146A5C993 b1207
	static Any _0x06E1FB78B1E59CA5() { return invoker::Invoke<Any>(0x06E1FB78B1E59CA5); } // 0x06E1FB78B1E59CA5 b1207
	static Any _0xCE285A4413B00B7F() { return invoker::Invoke<Any>(0xCE285A4413B00B7F); } // 0xCE285A4413B00B7F b1207
	static Any _0x3813E11A378958A5(Any p0) { return invoker::Invoke<Any>(0x3813E11A378958A5, p0); } // 0x3813E11A378958A5 b1207
	static void _0x2AF423D6ECB2C485(Any p0, Any p1) { invoker::Invoke<Void>(0x2AF423D6ECB2C485, p0, p1); } // 0x2AF423D6ECB2C485 b1207
	static void _0x0F9CF06986300875(Any p0) { invoker::Invoke<Void>(0x0F9CF06986300875, p0); } // 0x0F9CF06986300875 b1207
	static void _0xDFC85C5199045026(Any p0, Any p1) { invoker::Invoke<Void>(0xDFC85C5199045026, p0, p1); } // 0xDFC85C5199045026 b1207
	static Any _0x1DA5C5B0923E1B85(Any p0) { return invoker::Invoke<Any>(0x1DA5C5B0923E1B85, p0); } // 0x1DA5C5B0923E1B85 b1207
	static Any _0xAAED694CE814817F(Any p0) { return invoker::Invoke<Any>(0xAAED694CE814817F, p0); } // 0xAAED694CE814817F b1207
	static Any _0x62ED71E133B6C9F1() { return invoker::Invoke<Any>(0x62ED71E133B6C9F1); } // 0x62ED71E133B6C9F1 b1207
	static Any _0xBC02B3D151D3859F() { return invoker::Invoke<Any>(0xBC02B3D151D3859F); } // 0xBC02B3D151D3859F b1207
	static Any _0x907B16B3834C69E2() { return invoker::Invoke<Any>(0x907B16B3834C69E2); } // 0x907B16B3834C69E2 b1207
	static Any _0xF21C7A3F3FFBA629() { return invoker::Invoke<Any>(0xF21C7A3F3FFBA629); } // 0xF21C7A3F3FFBA629 b1207
	static void _0x292F0B6EDC82E3A4(Any p0, Any p1) { invoker::Invoke<Void>(0x292F0B6EDC82E3A4, p0, p1); } // 0x292F0B6EDC82E3A4 b1207
	static void _0x7146CF430965927C(Any p0, Any p1) { invoker::Invoke<Void>(0x7146CF430965927C, p0, p1); } // 0x7146CF430965927C b1207
	static Any _0xE133C1EC5300F740() { return invoker::Invoke<Any>(0xE133C1EC5300F740); } // 0xE133C1EC5300F740 b1207
	static void _0xC900A465364A85D6(Any p0) { invoker::Invoke<Void>(0xC900A465364A85D6, p0); } // 0xC900A465364A85D6 b1207
	static void _0xCFB2EED4FCB7BD77(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCFB2EED4FCB7BD77, p0, p1, p2); } // 0xCFB2EED4FCB7BD77 b1207
	static void _0x2BB8D58E88777499(Any p0) { invoker::Invoke<Void>(0x2BB8D58E88777499, p0); } // 0x2BB8D58E88777499 b1207
	static void _0x00EB5A760638DB55(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x00EB5A760638DB55, p0, p1, p2); } // 0x00EB5A760638DB55 b1207
	static void _0x65887EAC535A0B0C(Any p0) { invoker::Invoke<Void>(0x65887EAC535A0B0C, p0); } // 0x65887EAC535A0B0C b1207
	static void _0x11A7FF918EF6BC66(Any p0, Any p1) { invoker::Invoke<Void>(0x11A7FF918EF6BC66, p0, p1); } // 0x11A7FF918EF6BC66 b1207
	static Any _0xBE0C524970892D41() { return invoker::Invoke<Any>(0xBE0C524970892D41); } // 0xBE0C524970892D41 b1207
	static void _0xFE7C9CF376D23342(Any p0, Any p1) { invoker::Invoke<Void>(0xFE7C9CF376D23342, p0, p1); } // 0xFE7C9CF376D23342 b1207
	static Any _0x7761A30432C91297() { return invoker::Invoke<Any>(0x7761A30432C91297); } // 0x7761A30432C91297 b1207
	static Any _0x5006C36652D6EC56() { return invoker::Invoke<Any>(0x5006C36652D6EC56); } // 0x5006C36652D6EC56 b1207
	static Any _0xED591CB17C8BA216() { return invoker::Invoke<Any>(0xED591CB17C8BA216); } // 0xED591CB17C8BA216 b1207
	static Any _0x1F0E3A4434565F8F() { return invoker::Invoke<Any>(0x1F0E3A4434565F8F); } // 0x1F0E3A4434565F8F b1207
	static Any _0x6C54E69516CC56BD(Any p0) { return invoker::Invoke<Any>(0x6C54E69516CC56BD, p0); } // 0x6C54E69516CC56BD b1207
	static void _0x3A8611BD7BDE84F7(Any p0, Any p1) { invoker::Invoke<Void>(0x3A8611BD7BDE84F7, p0, p1); } // 0x3A8611BD7BDE84F7 b1207
	static void _0xC177C827CEFC0AA4(Any p0, Any p1) { invoker::Invoke<Void>(0xC177C827CEFC0AA4, p0, p1); } // 0xC177C827CEFC0AA4 b1207
	static void _0xBD96185264DDAAEA(Any p0, Any p1) { invoker::Invoke<Void>(0xBD96185264DDAAEA, p0, p1); } // 0xBD96185264DDAAEA b1207
	static void _0x628E742FE1F79C4A(Any p0, Any p1) { invoker::Invoke<Void>(0x628E742FE1F79C4A, p0, p1); } // 0x628E742FE1F79C4A b1207
	static void _0xC6366A585659D15C(Any p0, Any p1) { invoker::Invoke<Void>(0xC6366A585659D15C, p0, p1); } // 0xC6366A585659D15C b1207
	static void _0x98CD760DE43B612E(Any p0, Any p1) { invoker::Invoke<Void>(0x98CD760DE43B612E, p0, p1); } // 0x98CD760DE43B612E b1207
	static void _0x216BC0D3D2E413D2(Any p0, Any p1) { invoker::Invoke<Void>(0x216BC0D3D2E413D2, p0, p1); } // 0x216BC0D3D2E413D2 b1207
	static void _0x45EF176B532CA851(Any p0, Any p1) { invoker::Invoke<Void>(0x45EF176B532CA851, p0, p1); } // 0x45EF176B532CA851 b1207
	static void _0xA342495F93B7B838(Any p0, Any p1) { invoker::Invoke<Void>(0xA342495F93B7B838, p0, p1); } // 0xA342495F93B7B838 b1207
	static void _0x3BB84F812E052C90(Any p0) { invoker::Invoke<Void>(0x3BB84F812E052C90, p0); } // 0x3BB84F812E052C90 b1207
	static void _0x9FC5A003FB76EDBD(Any p0, Any p1) { invoker::Invoke<Void>(0x9FC5A003FB76EDBD, p0, p1); } // 0x9FC5A003FB76EDBD b1207
	static Any _0x0FAF95D71ED67ADE() { return invoker::Invoke<Any>(0x0FAF95D71ED67ADE); } // 0x0FAF95D71ED67ADE b1207
	static Any _0xBB6EA5D59E926095() { return invoker::Invoke<Any>(0xBB6EA5D59E926095); } // 0xBB6EA5D59E926095 b1207
	static void _0xFA7DAAE3959E6C7B(Any p0, Any p1) { invoker::Invoke<Void>(0xFA7DAAE3959E6C7B, p0, p1); } // 0xFA7DAAE3959E6C7B b1207
	static void _0x9461A8FAB0378E5B(Any p0, Any p1) { invoker::Invoke<Void>(0x9461A8FAB0378E5B, p0, p1); } // 0x9461A8FAB0378E5B b1207
	static void _0xCB61A63AA53D7D22(Any p0, Any p1) { invoker::Invoke<Void>(0xCB61A63AA53D7D22, p0, p1); } // 0xCB61A63AA53D7D22 b1207
	static void _0xCFFC3ECCD7A5CCEB(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCFFC3ECCD7A5CCEB, p0, p1, p2); } // 0xCFFC3ECCD7A5CCEB b1207
	static void _0x76F7E1BCD623A429(Any p0) { invoker::Invoke<Void>(0x76F7E1BCD623A429, p0); } // 0x76F7E1BCD623A429 b1207
	static void _0x585CE159DB46FADB(Any p0, Any p1) { invoker::Invoke<Void>(0x585CE159DB46FADB, p0, p1); } // 0x585CE159DB46FADB b1207
	static void _0x9F9A829C6751F3C7(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x9F9A829C6751F3C7, p0, p1, p2); } // 0x9F9A829C6751F3C7 b1207
	static Any _0xFE691E89C08937B6() { return invoker::Invoke<Any>(0xFE691E89C08937B6); } // 0xFE691E89C08937B6 b1207
	static Any _0xF49F14462F0AE27C(Any p0) { return invoker::Invoke<Any>(0xF49F14462F0AE27C, p0); } // 0xF49F14462F0AE27C b1207
	static Any _0xAD03B03737CE6810(Any p0) { return invoker::Invoke<Any>(0xAD03B03737CE6810, p0); } // 0xAD03B03737CE6810 b1207
	static Any _0xE6D4E435B56D5BD0() { return invoker::Invoke<Any>(0xE6D4E435B56D5BD0); } // 0xE6D4E435B56D5BD0 b1207
	static Any _0xB9050A97594C8832() { return invoker::Invoke<Any>(0xB9050A97594C8832); } // 0xB9050A97594C8832 b1207
	static Any _0x7C803BDC8343228D() { return invoker::Invoke<Any>(0x7C803BDC8343228D); } // 0x7C803BDC8343228D b1207
	static Any _0xD0E02AA618020D17() { return invoker::Invoke<Any>(0xD0E02AA618020D17); } // 0xD0E02AA618020D17 b1207
	static Any _0x5CA6BBD4A7D8145E() { return invoker::Invoke<Any>(0x5CA6BBD4A7D8145E); } // 0x5CA6BBD4A7D8145E b1207
	static Any _0x6A4404BDFA62CE2C() { return invoker::Invoke<Any>(0x6A4404BDFA62CE2C); } // 0x6A4404BDFA62CE2C b1207
	static void _0x9044835BE9D9DBFE(Any p0, Any p1) { invoker::Invoke<Void>(0x9044835BE9D9DBFE, p0, p1); } // 0x9044835BE9D9DBFE b1207
	static Any _0x0139637A3BFF8B6D(Any p0, Any p1) { return invoker::Invoke<Any>(0x0139637A3BFF8B6D, p0, p1); } // 0x0139637A3BFF8B6D b1207
	static Any _0x8E84119A23C16623() { return invoker::Invoke<Any>(0x8E84119A23C16623); } // 0x8E84119A23C16623 b1207
	static Any _0x0335106F3ACABBED() { return invoker::Invoke<Any>(0x0335106F3ACABBED); } // 0x0335106F3ACABBED b1207
	static Any _0x755E08680F21EF30() { return invoker::Invoke<Any>(0x755E08680F21EF30); } // 0x755E08680F21EF30 b1207
	static Any _0x36E3D8B5A6552FE8() { return invoker::Invoke<Any>(0x36E3D8B5A6552FE8); } // 0x36E3D8B5A6552FE8 b1207
	static Any _0xDA9D7BE231FE865F() { return invoker::Invoke<Any>(0xDA9D7BE231FE865F); } // 0xDA9D7BE231FE865F b1207
	static void _0x946D46CD6DFB9742(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x946D46CD6DFB9742, p0, p1, p2); } // 0x946D46CD6DFB9742 b1207
	static Any _0x0772F87D7B07719A(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x0772F87D7B07719A, p0, p1, p2); } // 0x0772F87D7B07719A b1207
	static void _0xCDDD4B74660E2335(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCDDD4B74660E2335, p0, p1, p2); } // 0xCDDD4B74660E2335 b1207
	static void _0x77E83C315A3B31CA(Any p0) { invoker::Invoke<Void>(0x77E83C315A3B31CA, p0); } // 0x77E83C315A3B31CA b1207
	static Any _0x7C32191D9FB2BDEA() { return invoker::Invoke<Any>(0x7C32191D9FB2BDEA); } // 0x7C32191D9FB2BDEA b1207
	static Any _0x354F689C4FFAAB37() { return invoker::Invoke<Any>(0x354F689C4FFAAB37); } // 0x354F689C4FFAAB37 b1207
	static Any _0xFB0E622B401884D3() { return invoker::Invoke<Any>(0xFB0E622B401884D3); } // 0xFB0E622B401884D3 b1207
	static void _0xDC68829BB3F37023(Any p0, Any p1) { invoker::Invoke<Void>(0xDC68829BB3F37023, p0, p1); } // 0xDC68829BB3F37023 b1207
	static void _0x4DBC4873707E8FD6(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4DBC4873707E8FD6, p0, p1, p2, p3); } // 0x4DBC4873707E8FD6 b1207
	static void _0xCEDC16930526F728(Any p0) { invoker::Invoke<Void>(0xCEDC16930526F728, p0); } // 0xCEDC16930526F728 b1207
	static void _0x14E57F88BA0A07FC(Any p0) { invoker::Invoke<Void>(0x14E57F88BA0A07FC, p0); } // 0x14E57F88BA0A07FC b1207
	static Any _0x2E1ABE627C95ED9B() { return invoker::Invoke<Any>(0x2E1ABE627C95ED9B); } // 0x2E1ABE627C95ED9B b1207
	static Any _0x497A18F8F88AA9D8() { return invoker::Invoke<Any>(0x497A18F8F88AA9D8); } // 0x497A18F8F88AA9D8 b1207
	static Any _0x4F0D2256AAE94EDA() { return invoker::Invoke<Any>(0x4F0D2256AAE94EDA); } // 0x4F0D2256AAE94EDA b1207
	static Any _0x5F8E0303C229C84B() { return invoker::Invoke<Any>(0x5F8E0303C229C84B); } // 0x5F8E0303C229C84B b1207
	static Any _0x0B7803F6F7BB43E0() { return invoker::Invoke<Any>(0x0B7803F6F7BB43E0); } // 0x0B7803F6F7BB43E0 b1207
	static Any _0x3B296934DB026873() { return invoker::Invoke<Any>(0x3B296934DB026873); } // 0x3B296934DB026873 b1207
	static Any _0x506CE71FB6E8CF5E() { return invoker::Invoke<Any>(0x506CE71FB6E8CF5E); } // 0x506CE71FB6E8CF5E b1207
	static Any _0xF4CB347D7B5EB0FD() { return invoker::Invoke<Any>(0xF4CB347D7B5EB0FD); } // 0xF4CB347D7B5EB0FD b1207
}

namespace _NAMESPACE52
{
	static Any _0xA1E3171ED0E47564(Any p0) { return invoker::Invoke<Any>(0xA1E3171ED0E47564, p0); } // 0xA1E3171ED0E47564 b1207
	static Any _0x3EAFA1C533B7139E(Any p0, Any p1) { return invoker::Invoke<Any>(0x3EAFA1C533B7139E, p0, p1); } // 0x3EAFA1C533B7139E b1207
	static Any _0x6B12ED8C77E8567B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x6B12ED8C77E8567B, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x6B12ED8C77E8567B b1207
	static Any _0x9AC1C64FE46B6D09(Any p0) { return invoker::Invoke<Any>(0x9AC1C64FE46B6D09, p0); } // 0x9AC1C64FE46B6D09 b1207
	static void _0xA6E6A66FC4CA4224(Any p0) { invoker::Invoke<Void>(0xA6E6A66FC4CA4224, p0); } // 0xA6E6A66FC4CA4224 b1207
	static Any _0xA5BD585005EFCAD4(Any p0) { return invoker::Invoke<Any>(0xA5BD585005EFCAD4, p0); } // 0xA5BD585005EFCAD4 b1207
	static void _0x3E6A49D9B519E85C(Any p0, Any p1) { invoker::Invoke<Void>(0x3E6A49D9B519E85C, p0, p1); } // 0x3E6A49D9B519E85C b1207
	static void _0x7E6BC0B94F5928F0(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x7E6BC0B94F5928F0, p0, p1, p2); } // 0x7E6BC0B94F5928F0 b1207
	static void _0x578E2FA64E847C60(Any p0, Any p1) { invoker::Invoke<Void>(0x578E2FA64E847C60, p0, p1); } // 0x578E2FA64E847C60 b1207
	static void _0x08892122769770D5(Any p0, Any p1) { invoker::Invoke<Void>(0x08892122769770D5, p0, p1); } // 0x08892122769770D5 b1207
	static void _0x0F1861101C9A9944(Any p0, Any p1) { invoker::Invoke<Void>(0x0F1861101C9A9944, p0, p1); } // 0x0F1861101C9A9944 b1207
	static void _0x60CDE717A6D47769(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x60CDE717A6D47769, p0, p1, p2); } // 0x60CDE717A6D47769 b1207
	static void _0x217A54DE2D200305(Any p0, Any p1) { invoker::Invoke<Void>(0x217A54DE2D200305, p0, p1); } // 0x217A54DE2D200305 b1207
	static void _0x638FCFC6042A9473(Any p0, Any p1) { invoker::Invoke<Void>(0x638FCFC6042A9473, p0, p1); } // 0x638FCFC6042A9473 b1207
	static void _0xB56D41A694E42E86(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xB56D41A694E42E86, p0, p1, p2, p3, p4, p5, p6); } // 0xB56D41A694E42E86 b1207
	static void _0x74C2B3DC0B294102(Any p0) { invoker::Invoke<Void>(0x74C2B3DC0B294102, p0); } // 0x74C2B3DC0B294102 b1207
	static void _0x18262CAFEBB5FBE1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x18262CAFEBB5FBE1, p0, p1, p2, p3, p4, p5, p6); } // 0x18262CAFEBB5FBE1 b1207
	static void _0xA1CFB35069D23C23(Any p0) { invoker::Invoke<Void>(0xA1CFB35069D23C23, p0); } // 0xA1CFB35069D23C23 b1207
	static void _0x2161278C6322F740(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x2161278C6322F740, p0, p1, p2, p3, p4, p5); } // 0x2161278C6322F740 b1207
	static void _0xF45E46DEECF7DF6E(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xF45E46DEECF7DF6E, p0, p1, p2, p3, p4); } // 0xF45E46DEECF7DF6E b1207
	static void _0x8EC7CD701F872F87(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x8EC7CD701F872F87, p0, p1, p2, p3, p4, p5); } // 0x8EC7CD701F872F87 b1207
	static void _0xC4533E3E87125C9E(Any p0) { invoker::Invoke<Void>(0xC4533E3E87125C9E, p0); } // 0xC4533E3E87125C9E b1207
	static void _0xF74E134F40192884(Any p0, Any p1) { invoker::Invoke<Void>(0xF74E134F40192884, p0, p1); } // 0xF74E134F40192884 b1207
	static void _0xDBBF12EA7C1029B2(Any p0, Any p1) { invoker::Invoke<Void>(0xDBBF12EA7C1029B2, p0, p1); } // 0xDBBF12EA7C1029B2 b1207
	static void _0x247F86595D396344(Any p0) { invoker::Invoke<Void>(0x247F86595D396344, p0); } // 0x247F86595D396344 b1207
	static void _0x324AB2A68AD8AEE5() { invoker::Invoke<Void>(0x324AB2A68AD8AEE5); } // 0x324AB2A68AD8AEE5 b1207
	static void _0xC6DCC2A3A8825C85(Any p0) { invoker::Invoke<Void>(0xC6DCC2A3A8825C85, p0); } // 0xC6DCC2A3A8825C85 b1207
	static void _0xBC90BDF4E5228EA1() { invoker::Invoke<Void>(0xBC90BDF4E5228EA1); } // 0xBC90BDF4E5228EA1 b1207
	static Any _0x595478B3BBC3076D() { return invoker::Invoke<Any>(0x595478B3BBC3076D); } // 0x595478B3BBC3076D b1207
	static Any _0xEC116EDB683AD479() { return invoker::Invoke<Any>(0xEC116EDB683AD479); } // 0xEC116EDB683AD479 b1207
}

namespace _NAMESPACE53
{
	static Any _0xC086FF658B2E51DB() { return invoker::Invoke<Any>(0xC086FF658B2E51DB); } // 0xC086FF658B2E51DB b1207
	static Any _0xC086FF658B2E51DA() { return invoker::Invoke<Any>(0xC086FF658B2E51DA); } // 0xC086FF658B2E51DA b1207
	static Any _0xC087FF658B2E51DA() { return invoker::Invoke<Any>(0xC087FF658B2E51DA); } // 0xC087FF658B2E51DA b1207
	static Any _0xC088FF658B2E51DA() { return invoker::Invoke<Any>(0xC088FF658B2E51DA); } // 0xC088FF658B2E51DA b1207
	static Any _0xC089FF658B2E51DA() { return invoker::Invoke<Any>(0xC089FF658B2E51DA); } // 0xC089FF658B2E51DA b1207
	static void _0xC08AFF658B2E51DA(Any p0) { invoker::Invoke<Void>(0xC08AFF658B2E51DA, p0); } // 0xC08AFF658B2E51DA b1207
	static Any _0xC08BFF658B2E51DA(Any p0) { return invoker::Invoke<Any>(0xC08BFF658B2E51DA, p0); } // 0xC08BFF658B2E51DA b1207
	static Any _0xC08AFF658B2E51DB() { return invoker::Invoke<Any>(0xC08AFF658B2E51DB); } // 0xC08AFF658B2E51DB b1207
	static Any _0xC08CFF658B2E51DA() { return invoker::Invoke<Any>(0xC08CFF658B2E51DA); } // 0xC08CFF658B2E51DA b1207
	static Any _0xC09CFF658B2E51DA() { return invoker::Invoke<Any>(0xC09CFF658B2E51DA); } // 0xC09CFF658B2E51DA b1207
	static Any _0xC08DEF658B2E51DA() { return invoker::Invoke<Any>(0xC08DEF658B2E51DA); } // 0xC08DEF658B2E51DA b1207
	static Any _0xC08DFF658B2E51DA() { return invoker::Invoke<Any>(0xC08DFF658B2E51DA); } // 0xC08DFF658B2E51DA b1207
	static Any _0xC08DFF658B2E51DB() { return invoker::Invoke<Any>(0xC08DFF658B2E51DB); } // 0xC08DFF658B2E51DB b1207
	static Any _0xC08EFF658B2E51DB() { return invoker::Invoke<Any>(0xC08EFF658B2E51DB); } // 0xC08EFF658B2E51DB b1207
	static Any _0xC08FFF658B2E51DA() { return invoker::Invoke<Any>(0xC08FFF658B2E51DA); } // 0xC08FFF658B2E51DA b1207
	static Any _0xC08FFF658B2E51DB() { return invoker::Invoke<Any>(0xC08FFF658B2E51DB); } // 0xC08FFF658B2E51DB b1207
	static Any _0xC084FF658B2E61DA() { return invoker::Invoke<Any>(0xC084FF658B2E61DA); } // 0xC084FF658B2E61DA b1207
	static Any _0xC084FF658B2E71DA() { return invoker::Invoke<Any>(0xC084FF658B2E71DA); } // 0xC084FF658B2E71DA b1207
	static Any _0xC084FF658B2E81DA() { return invoker::Invoke<Any>(0xC084FF658B2E81DA); } // 0xC084FF658B2E81DA b1207
	static Any _0xC084FF658B2E52DA() { return invoker::Invoke<Any>(0xC084FF658B2E52DA); } // 0xC084FF658B2E52DA b1207
	static Any _0xC084FF658B2E53DA() { return invoker::Invoke<Any>(0xC084FF658B2E53DA); } // 0xC084FF658B2E53DA b1207
	static Any _0xC084FF658B2E54DA() { return invoker::Invoke<Any>(0xC084FF658B2E54DA); } // 0xC084FF658B2E54DA b1207
	static Any _0xC084FF658B2E55DA() { return invoker::Invoke<Any>(0xC084FF658B2E55DA); } // 0xC084FF658B2E55DA b1207
	static Any _0xC484FF658B2E55DA() { return invoker::Invoke<Any>(0xC484FF658B2E55DA); } // 0xC484FF658B2E55DA b1207
	static Any _0xC584FF658B2E55DA() { return invoker::Invoke<Any>(0xC584FF658B2E55DA); } // 0xC584FF658B2E55DA b1207
	static Any _0xC684FF658B2E55DA() { return invoker::Invoke<Any>(0xC684FF658B2E55DA); } // 0xC684FF658B2E55DA b1207
	static Any _0xC184FF658B2E55DA() { return invoker::Invoke<Any>(0xC184FF658B2E55DA); } // 0xC184FF658B2E55DA b1207
	static Any _0xC284FF658B2E55DA() { return invoker::Invoke<Any>(0xC284FF658B2E55DA); } // 0xC284FF658B2E55DA b1207
	static Any _0xC394FF658B2E55DA() { return invoker::Invoke<Any>(0xC394FF658B2E55DA); } // 0xC394FF658B2E55DA b1207
	static Any _0xC07CFF658B2E51DA() { return invoker::Invoke<Any>(0xC07CFF658B2E51DA); } // 0xC07CFF658B2E51DA b1207
	static Any _0xC06CFF658B2E51DA() { return invoker::Invoke<Any>(0xC06CFF658B2E51DA); } // 0xC06CFF658B2E51DA b1207
}

namespace _NAMESPACE54
{
	static Any _0xF3DE57A46D5585E9(Any p0) { return invoker::Invoke<Any>(0xF3DE57A46D5585E9, p0); } // 0xF3DE57A46D5585E9 b1207
	static Any _0xE72F591958F3ACAB(Any p0) { return invoker::Invoke<Any>(0xE72F591958F3ACAB, p0); } // 0xE72F591958F3ACAB b1207
	static Any _0x48A88FC684C55FDC(Any p0) { return invoker::Invoke<Any>(0x48A88FC684C55FDC, p0); } // 0x48A88FC684C55FDC b1207
	static Any _0xD090ABEF4D6A7D96(Any p0) { return invoker::Invoke<Any>(0xD090ABEF4D6A7D96, p0); } // 0xD090ABEF4D6A7D96 b1207
	static void _0x909E3C7FAE539FB1(Any p0) { invoker::Invoke<Void>(0x909E3C7FAE539FB1, p0); } // 0x909E3C7FAE539FB1 b1207
	static void _0x58AC173A55D9D7B4(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x58AC173A55D9D7B4, p0, p1, p2); } // 0x58AC173A55D9D7B4 b1207
	static Any _0xB1964A83B345B4AB() { return invoker::Invoke<Any>(0xB1964A83B345B4AB); } // 0xB1964A83B345B4AB b1207
	static Any _0xE65C5CBA95F0E510(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0xE65C5CBA95F0E510, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xE65C5CBA95F0E510 b1207
	static Any _0x899C97A1CCE7D483(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x899C97A1CCE7D483, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x899C97A1CCE7D483 b1207
	static Any _0x9609DBDDE18FAD8C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x9609DBDDE18FAD8C, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x9609DBDDE18FAD8C b1207
	static Any _0xACA7FB30269096D4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0xACA7FB30269096D4, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xACA7FB30269096D4 b1207
	static Any _0x7DDDCF815E650FF5(Any p0) { return invoker::Invoke<Any>(0x7DDDCF815E650FF5, p0); } // 0x7DDDCF815E650FF5 b1207
	static Any _0x72068021F498E6E3(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x72068021F498E6E3, p0, p1, p2, p3); } // 0x72068021F498E6E3 b1207
	static Any _0xF42DB680A8B2A4D9(Any p0) { return invoker::Invoke<Any>(0xF42DB680A8B2A4D9, p0); } // 0xF42DB680A8B2A4D9 b1207
	static void _0x9D096A5BD02F953E(Any p0, Any p1) { invoker::Invoke<Void>(0x9D096A5BD02F953E, p0, p1); } // 0x9D096A5BD02F953E b1207
	static Any _0x0CE8AAFE9E433A23(Any p0) { return invoker::Invoke<Any>(0x0CE8AAFE9E433A23, p0); } // 0x0CE8AAFE9E433A23 b1207
	static Any _0xA6A9712955F53D9C() { return invoker::Invoke<Any>(0xA6A9712955F53D9C); } // 0xA6A9712955F53D9C b1207
	static Any _0x36F69E7A22655653() { return invoker::Invoke<Any>(0x36F69E7A22655653); } // 0x36F69E7A22655653 b1207
	static Any _0x738271B660FE0695(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x738271B660FE0695, p0, p1, p2, p3, p4); } // 0x738271B660FE0695 b1207
	static void _0xC4B67EF3FD65622D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xC4B67EF3FD65622D, p0, p1, p2, p3, p4, p5); } // 0xC4B67EF3FD65622D b1207
	static void _0x58E0B01D45CA7357(Any p0) { invoker::Invoke<Void>(0x58E0B01D45CA7357, p0); } // 0x58E0B01D45CA7357 b1207
	static void _0xC1AB7EEFD3E6EE49(Any p0, Any p1) { invoker::Invoke<Void>(0xC1AB7EEFD3E6EE49, p0, p1); } // 0xC1AB7EEFD3E6EE49 b1207
	static Any _0xCE2ACD6F602803E5(Any p0) { return invoker::Invoke<Any>(0xCE2ACD6F602803E5, p0); } // 0xCE2ACD6F602803E5 b1207
	static Any _0x53784CEA0159439B(Any p0) { return invoker::Invoke<Any>(0x53784CEA0159439B, p0); } // 0x53784CEA0159439B b1207
	static void _0xD80FAF919A2E56EA(Any p0, Any p1) { invoker::Invoke<Void>(0xD80FAF919A2E56EA, p0, p1); } // 0xD80FAF919A2E56EA b1207
	static void _0x3BCF32FF37EA9F1D(Any p0) { invoker::Invoke<Void>(0x3BCF32FF37EA9F1D, p0); } // 0x3BCF32FF37EA9F1D b1207
	static Any _0x155B2FBE72D7D1D0(Any p0) { return invoker::Invoke<Any>(0x155B2FBE72D7D1D0, p0); } // 0x155B2FBE72D7D1D0 b1207
	static Any _0x75F90E4051CC084C() { return invoker::Invoke<Any>(0x75F90E4051CC084C); } // 0x75F90E4051CC084C b1207
	static Any _0x7264F9CA87A9830B() { return invoker::Invoke<Any>(0x7264F9CA87A9830B); } // 0x7264F9CA87A9830B b1207
	static Any _0xA079300AF757FB1A(Any p0) { return invoker::Invoke<Any>(0xA079300AF757FB1A, p0); } // 0xA079300AF757FB1A b1207
	static Any _0xC9B4B3A36F81FD75(Any p0) { return invoker::Invoke<Any>(0xC9B4B3A36F81FD75, p0); } // 0xC9B4B3A36F81FD75 b1207
	static void _0xC0F0417A90402742(Any p0, Any p1) { invoker::Invoke<Void>(0xC0F0417A90402742, p0, p1); } // 0xC0F0417A90402742 b1207
	static void _0xE31C0CB1C3186D40(Any p0) { invoker::Invoke<Void>(0xE31C0CB1C3186D40, p0); } // 0xE31C0CB1C3186D40 b1207
	static Any _0x0790473EEE1977D3(Any p0) { return invoker::Invoke<Any>(0x0790473EEE1977D3, p0); } // 0x0790473EEE1977D3 b1207
	static Any _0xCFC0BD09BB1B73FF(Any p0) { return invoker::Invoke<Any>(0xCFC0BD09BB1B73FF, p0); } // 0xCFC0BD09BB1B73FF b1207
	static Any _0x8F3333F0A6900B3C(Any p0, Any p1) { return invoker::Invoke<Any>(0x8F3333F0A6900B3C, p0, p1); } // 0x8F3333F0A6900B3C b1207
	static Any _0xC061E50F8D299F95(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xC061E50F8D299F95, p0, p1, p2, p3); } // 0xC061E50F8D299F95 b1207
}

namespace QUEUE
{
	static Any _EVENT_QUEUE_IS_EMPTY(Any p0) { return invoker::Invoke<Any>(0x402B5D7D269FF796, p0); } // 0x402B5D7D269FF796 b1207
	static void _EVENT_QUEUE_POP(Any p0) { invoker::Invoke<Void>(0xD87DF294B049211D, p0); } // 0xD87DF294B049211D b1207
}

namespace _NAMESPACE56
{
	static Any _0xA8C44C13419634F2() { return invoker::Invoke<Any>(0xA8C44C13419634F2); } // 0xA8C44C13419634F2 b1207
}

namespace REPLAY
{
	static Any _IS_INTERIOR_RENDERING_DISABLED() { return invoker::Invoke<Any>(0x0F838D47DE58EDB2); } // 0x0F838D47DE58EDB2 b1207
	static void _0x5AD3932DAEB1E5D3() { invoker::Invoke<Void>(0x57C6525034E76EB0); } // 0x57C6525034E76EB0 b1207
	static Any _0xB3F2829907403C13() { return invoker::Invoke<Any>(0xB3F2829907403C13); } // 0xB3F2829907403C13 b1207
	static Any _0xCEEC64BD27A59312(Any p0) { return invoker::Invoke<Any>(0xCEEC64BD27A59312, p0); } // 0xCEEC64BD27A59312 b1207
	static Any _0x9EEB007317FA3B9C() { return invoker::Invoke<Any>(0x9EEB007317FA3B9C); } // 0x9EEB007317FA3B9C b1207
}

namespace SCRIPTS
{
	static void _0x31010318BA9897AC(Any p0, Any p1) { invoker::Invoke<Void>(0x31010318BA9897AC, p0, p1); } // 0x31010318BA9897AC b1207
	static Any _0xD426E2E3288469D6() { return invoker::Invoke<Any>(0xD426E2E3288469D6); } // 0xD426E2E3288469D6 b1207
	static Any _0xE4ABE20DCE7C7CFE() { return invoker::Invoke<Any>(0xE4ABE20DCE7C7CFE); } // 0xE4ABE20DCE7C7CFE b1207
	static Any _0xFFDDF802279BE128() { return invoker::Invoke<Any>(0xFFDDF802279BE128); } // 0xFFDDF802279BE128 b1207
	static Any _0x64F765D9A1F8F02C() { return invoker::Invoke<Any>(0x64F765D9A1F8F02C); } // 0x64F765D9A1F8F02C b1207
	static Any _0x20F4CB76689ACDBC() { return invoker::Invoke<Any>(0x20F4CB76689ACDBC); } // 0x20F4CB76689ACDBC b1207
	static void _0xDE544B7EC0C187CC(Any p0) { invoker::Invoke<Void>(0xDE544B7EC0C187CC, p0); } // 0xDE544B7EC0C187CC b1207
	static Any _0x72B2E00C9BAC6789(Any p0, Any p1) { return invoker::Invoke<Any>(0x72B2E00C9BAC6789, p0, p1); } // 0x72B2E00C9BAC6789 b1207
	static Any _0x179A6F0EE2E79026(Any p0) { return invoker::Invoke<Any>(0x179A6F0EE2E79026, p0); } // 0x179A6F0EE2E79026 b1207
	static Any _0xFA3B530A5CC693D5() { return invoker::Invoke<Any>(0xFA3B530A5CC693D5); } // 0xFA3B530A5CC693D5 b1207
	static Any _0xC6DFB8C04C86D5A5() { return invoker::Invoke<Any>(0xC6DFB8C04C86D5A5); } // 0xC6DFB8C04C86D5A5 b1207
	static Any _0x462C687BEA254BD9(Any p0) { return invoker::Invoke<Any>(0x462C687BEA254BD9, p0); } // 0x462C687BEA254BD9 b1207
	static Any _0x1BDB5A07307F6929() { return invoker::Invoke<Any>(0x1BDB5A07307F6929); } // 0x1BDB5A07307F6929 b1207
	static Any _0x1C5EB3C27F7508CB() { return invoker::Invoke<Any>(0x1C5EB3C27F7508CB); } // 0x1C5EB3C27F7508CB b1207
	static Any _0x42A429CDFED6D99D() { return invoker::Invoke<Any>(0x42A429CDFED6D99D); } // 0x42A429CDFED6D99D b1207
	static Any _0x5827BE85A87B073D() { return invoker::Invoke<Any>(0x5827BE85A87B073D); } // 0x5827BE85A87B073D b1207
	static Any _0x0A79C81C418F5D38() { return invoker::Invoke<Any>(0x0A79C81C418F5D38); } // 0x0A79C81C418F5D38 b1207
	static Any _0xA88E1D7FA1E20080() { return invoker::Invoke<Any>(0xA88E1D7FA1E20080); } // 0xA88E1D7FA1E20080 b1207
	static Any _0x2F050A3FF8738245() { return invoker::Invoke<Any>(0x2F050A3FF8738245); } // 0x2F050A3FF8738245 b1207
	static void REQUEST_SCRIPT(Any p0) { invoker::Invoke<Void>(0x46ED607DDD40D7FE, p0); } // 0x46ED607DDD40D7FE b1207
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(Any p0) { invoker::Invoke<Void>(0x0086D3067E1CFD1C, p0); } // 0x0086D3067E1CFD1C b1207
	static Any HAS_SCRIPT_LOADED(Any p0) { return invoker::Invoke<Any>(0xE97BD36574F8B0A6, p0); } // 0xE97BD36574F8B0A6 b1207
	static Any DOES_SCRIPT_EXIST(Any p0) { return invoker::Invoke<Any>(0x552B171E3F69E5AE, p0); } // 0x552B171E3F69E5AE b1207
	static void REQUEST_SCRIPT_WITH_NAME_HASH(Any p0) { invoker::Invoke<Void>(0xF6B9CE3F8D5B9B74, p0); } // 0xF6B9CE3F8D5B9B74 b1207
	static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Any p0) { invoker::Invoke<Void>(0x50723A1567C8361E, p0); } // 0x50723A1567C8361E b1207
	static Any HAS_SCRIPT_WITH_NAME_HASH_LOADED(Any p0) { return invoker::Invoke<Any>(0xA5D8E0C2F3C7EEBC, p0); } // 0xA5D8E0C2F3C7EEBC b1207
	static Any DOES_SCRIPT_WITH_NAME_HASH_EXIST(Any p0) { return invoker::Invoke<Any>(0xA34E89749F628284, p0); } // 0xA34E89749F628284 b1207
	static void TERMINATE_THREAD(Any p0) { invoker::Invoke<Void>(0x87ED52AE40EA1A52, p0); } // 0x87ED52AE40EA1A52 b1207
	static Any IS_THREAD_ACTIVE(Any p0, Any p1) { return invoker::Invoke<Any>(0x46E9AE36D8FA6417, p0, p1); } // 0x46E9AE36D8FA6417 b1207
	static Any _0xFF975BC4435A0FA3(Any p0) { return invoker::Invoke<Any>(0xFF975BC4435A0FA3, p0); } // 0xFF975BC4435A0FA3 b1207
	static Any _0xD92FA81B64920E85() { return invoker::Invoke<Any>(0xD92FA81B64920E85); } // 0xD92FA81B64920E85 b1207
	static Any _0x724CB89D35B283D0(Any p0) { return invoker::Invoke<Any>(0x724CB89D35B283D0, p0); } // 0x724CB89D35B283D0 b1207
	static void SCRIPT_THREAD_ITERATOR_RESET() { invoker::Invoke<Void>(0x39382EB8DCD8684D); } // 0x39382EB8DCD8684D b1207
	static Any SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return invoker::Invoke<Any>(0x3CE3FB167E837D7C); } // 0x3CE3FB167E837D7C b1207
	static Any _0x20B7F69B40C6B755(Any p0) { return invoker::Invoke<Any>(0x20B7F69B40C6B755, p0); } // 0x20B7F69B40C6B755 b1207
	static Any GET_ID_OF_THIS_THREAD() { return invoker::Invoke<Any>(0x55525C346BEF6960); } // 0x55525C346BEF6960 b1207
	static void TERMINATE_THIS_THREAD() { invoker::Invoke<Void>(0x5E8B6D17FF91CD59); } // 0x5E8B6D17FF91CD59 b1207
	static Any _GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Any p0) { return invoker::Invoke<Any>(0x8E34C953364A76DD, p0); } // 0x8E34C953364A76DD b1207
	static void _0x7DE4643157AD646C(Any p0) { invoker::Invoke<Void>(0x7DE4643157AD646C, p0); } // 0x7DE4643157AD646C b1207
	static void _0x7423F7835770F619(Any p0) { invoker::Invoke<Void>(0x7423F7835770F619, p0); } // 0x7423F7835770F619 b1207
	static Any _0x9E4EF615E307FBBE() { return invoker::Invoke<Any>(0x9E4EF615E307FBBE); } // 0x9E4EF615E307FBBE b1207
	static Any _0x30BED53646C86D11(Any p0) { return invoker::Invoke<Any>(0x30BED53646C86D11, p0); } // 0x30BED53646C86D11 b1207
	static Any _0x54AE4FDEEFEAB77E() { return invoker::Invoke<Any>(0x54AE4FDEEFEAB77E); } // 0x54AE4FDEEFEAB77E b1207
	static Any GET_HASH_OF_THIS_SCRIPT_NAME() { return invoker::Invoke<Any>(0xBC2C927F5C264960); } // 0xBC2C927F5C264960 b1207
	static Any GET_NUMBER_OF_EVENTS(Any p0) { return invoker::Invoke<Any>(0x5CE8DE5909565748, p0); } // 0x5CE8DE5909565748 b1207
	static Any GET_EVENT_EXISTS(Any p0, Any p1) { return invoker::Invoke<Any>(0xC9F59C0A710ECD34, p0, p1); } // 0xC9F59C0A710ECD34 b1207
	static Any GET_EVENT_AT_INDEX(Any p0, Any p1) { return invoker::Invoke<Any>(0xA85E614430EFF816, p0, p1); } // 0xA85E614430EFF816 b1207
	static Any GET_EVENT_DATA(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x57EC5FA4D4D6AFCA, p0, p1, p2, p3); } // 0x57EC5FA4D4D6AFCA b1207
	static void _0x4768D5252EAEB76F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4768D5252EAEB76F, p0, p1, p2); } // 0x4768D5252EAEB76F b1207
	static void TRIGGER_SCRIPT_EVENT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x5AE99C571D5BBE5D, p0, p1, p2, p3, p4); } // 0x5AE99C571D5BBE5D b1207
	static Any _0x8B61C950A148FFA2() { return invoker::Invoke<Any>(0x8B61C950A148FFA2); } // 0x8B61C950A148FFA2 b1207
	static Any _0xE7282390542F570D(Any p0) { return invoker::Invoke<Any>(0xE7282390542F570D, p0); } // 0xE7282390542F570D b1207
	static void _0x11B0A0B282FA9B10(Any p0) { invoker::Invoke<Void>(0x11B0A0B282FA9B10, p0); } // 0x11B0A0B282FA9B10 b1207
	static Any _0x6F700A4BF7C3331B() { return invoker::Invoke<Any>(0x6F700A4BF7C3331B); } // 0x6F700A4BF7C3331B b1207
	static void _0xF9E951A1E5517C06() { invoker::Invoke<Void>(0xF9E951A1E5517C06); } // 0xF9E951A1E5517C06 b1207
	static Any _0x76CBCD9EADC00955() { return invoker::Invoke<Any>(0x76CBCD9EADC00955); } // 0x76CBCD9EADC00955 b1207
	static void SHUTDOWN_LOADING_SCREEN() { invoker::Invoke<Void>(0xFC179D7E8886DADF); } // 0xFC179D7E8886DADF b1207
	static void SET_NO_LOADING_SCREEN(Any p0) { invoker::Invoke<Void>(0x5CB83156AA038F95, p0); } // 0x5CB83156AA038F95 b1207
	static Any _0x323DAF00687E0F28() { return invoker::Invoke<Any>(0x323DAF00687E0F28); } // 0x323DAF00687E0F28 b1207
	static Any _0x1E5B70E53DB661E5() { return invoker::Invoke<Any>(0x1E5B70E53DB661E5); } // 0x1E5B70E53DB661E5 b1207
	static Any _0x29FB4CE89472C3CB() { return invoker::Invoke<Any>(0x29FB4CE89472C3CB); } // 0x29FB4CE89472C3CB b1207
	static Any _0x778D4733E0F2F265() { return invoker::Invoke<Any>(0x778D4733E0F2F265); } // 0x778D4733E0F2F265 b1207
	static Any _0xB54ADBE65D528FCB() { return invoker::Invoke<Any>(0xB54ADBE65D528FCB); } // 0xB54ADBE65D528FCB b1207
	static void _0xBC2C927F5C264243(Any p0) { invoker::Invoke<Void>(0xBC2C927F5C264243, p0); } // 0xBC2C927F5C264243 b1207
	static void _0xE98204D3C25AE14C(Any p0) { invoker::Invoke<Void>(0xE98204D3C25AE14C, p0); } // 0xE98204D3C25AE14C b1207
	static Any _0x2238EC3EC631AB1F() { return invoker::Invoke<Any>(0x2238EC3EC631AB1F); } // 0x2238EC3EC631AB1F b1207
	static Any _0x4858148E3B8A75D0() { return invoker::Invoke<Any>(0x4858148E3B8A75D0); } // 0x4858148E3B8A75D0 b1207
	static Any _0x2EB67D564DCC09D5() { return invoker::Invoke<Any>(0x2EB67D564DCC09D5); } // 0x2EB67D564DCC09D5 b1207
	static Any _0x6D1431744182CDE8() { return invoker::Invoke<Any>(0x6D1431744182CDE8); } // 0x6D1431744182CDE8 b1207
	static Any _0x49BA5678BA040CA7() { return invoker::Invoke<Any>(0x49BA5678BA040CA7); } // 0x49BA5678BA040CA7 b1207
	static Any _0x3ABF7BA1C3E2C8CF() { return invoker::Invoke<Any>(0x3ABF7BA1C3E2C8CF); } // 0x3ABF7BA1C3E2C8CF b1207
	static Any _0x4AE1DFF337A86FDE() { return invoker::Invoke<Any>(0x4AE1DFF337A86FDE); } // 0x4AE1DFF337A86FDE b1207
	static Any _0x55C40B7592BAD213() { return invoker::Invoke<Any>(0x55C40B7592BAD213); } // 0x55C40B7592BAD213 b1207
	static Any _0x829CD22E043A2577() { return invoker::Invoke<Any>(0x829CD22E043A2577); } // 0x829CD22E043A2577 b1207
	static Any _0xBE7D814CFA181B56() { return invoker::Invoke<Any>(0xBE7D814CFA181B56); } // 0xBE7D814CFA181B56 b1207
	static void _0x7D654266025E921B(Any p0) { invoker::Invoke<Void>(0x7D654266025E921B, p0); } // 0x7D654266025E921B b1207
	static void _0x50B72A754EE64A71(Any p0) { invoker::Invoke<Void>(0x50B72A754EE64A71, p0); } // 0x50B72A754EE64A71 b1207
	static Any _0x7409669C5ED50144(Any p0) { return invoker::Invoke<Any>(0x7409669C5ED50144, p0); } // 0x7409669C5ED50144 b1207
	static Any _0xAC8FAB22A914AE34() { return invoker::Invoke<Any>(0xAC8FAB22A914AE34); } // 0xAC8FAB22A914AE34 b1207
	static Any _0xB9467E41DAB1CF2C() { return invoker::Invoke<Any>(0xB9467E41DAB1CF2C); } // 0xB9467E41DAB1CF2C b1207
	static Any _0x4293B44A855F82CC() { return invoker::Invoke<Any>(0x4293B44A855F82CC); } // 0x4293B44A855F82CC b1207
	static Any _0xB952A3AC41D58F2F(Any p0) { return invoker::Invoke<Any>(0xB952A3AC41D58F2F, p0); } // 0xB952A3AC41D58F2F b1207
	static Any _0xDC3914A99B4A5FDF(Any p0) { return invoker::Invoke<Any>(0xDC3914A99B4A5FDF, p0); } // 0xDC3914A99B4A5FDF b1207
	static Any _0x66EE5B93C308F734(Any p0) { return invoker::Invoke<Any>(0x66EE5B93C308F734, p0); } // 0x66EE5B93C308F734 b1207
	static void _0xE66F392BFCE734AF(Any p0, Any p1) { invoker::Invoke<Void>(0xE66F392BFCE734AF, p0, p1); } // 0xE66F392BFCE734AF b1207
	static Any _0x42A7EB5C814C2DE0(Any p0) { return invoker::Invoke<Any>(0x42A7EB5C814C2DE0, p0); } // 0x42A7EB5C814C2DE0 b1207
	static void _0x11986B05885564D2(Any p0) { invoker::Invoke<Void>(0x11986B05885564D2, p0); } // 0x11986B05885564D2 b1207
	static Any _0x380FFA15B72408FB(Any p0) { return invoker::Invoke<Any>(0x380FFA15B72408FB, p0); } // 0x380FFA15B72408FB b1207
}

namespace _NAMESPACE59
{
	static Any _0x4FB5869E2B37FC00() { return invoker::Invoke<Any>(0x4FB5869E2B37FC00); } // 0x4FB5869E2B37FC00 b1207
	static Any _0x62C9EB51656D68CE(Any p0) { return invoker::Invoke<Any>(0x62C9EB51656D68CE, p0); } // 0x62C9EB51656D68CE b1207
	static Any _0x1840F3B30ED0105F() { return invoker::Invoke<Any>(0x1840F3B30ED0105F); } // 0x1840F3B30ED0105F b1207
	static Any _0x3CF46F55C6585590() { return invoker::Invoke<Any>(0x3CF46F55C6585590); } // 0x3CF46F55C6585590 b1207
	static Any _0x1431540BCA1A1BD2() { return invoker::Invoke<Any>(0x1431540BCA1A1BD2); } // 0x1431540BCA1A1BD2 b1207
	static void _0xED4B0C1057892B2E(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xED4B0C1057892B2E, p0, p1, p2, p3); } // 0xED4B0C1057892B2E b1207
	static void _0x9BB83C4DD7BE0802(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x9BB83C4DD7BE0802, p0, p1, p2, p3, p4); } // 0x9BB83C4DD7BE0802 b1207
	static void _0xE8346E62FD7FB962() { invoker::Invoke<Void>(0xE8346E62FD7FB962); } // 0xE8346E62FD7FB962 b1207
	static void _0xC0ABF784590798A9(Any p0) { invoker::Invoke<Void>(0xC0ABF784590798A9, p0); } // 0xC0ABF784590798A9 b1207
	static Any _0xB00CE33465B5406D(Any p0, Any p1) { return invoker::Invoke<Any>(0xB00CE33465B5406D, p0, p1); } // 0xB00CE33465B5406D b1207
	static void _0x529B9CCD0972AF4D(Any p0, Any p1) { invoker::Invoke<Void>(0x529B9CCD0972AF4D, p0, p1); } // 0x529B9CCD0972AF4D b1207
	static Any _0x529B9CCD0972AF4E() { return invoker::Invoke<Any>(0x529B9CCD0972AF4E); } // 0x529B9CCD0972AF4E b1207
	static void _0xB25B5A375BE5BE26(Any p0, Any p1) { invoker::Invoke<Void>(0xB25B5A375BE5BE26, p0, p1); } // 0xB25B5A375BE5BE26 b1207
	static void _0x35DEFECAE36D4FAE(Any p0, Any p1) { invoker::Invoke<Void>(0x35DEFECAE36D4FAE, p0, p1); } // 0x35DEFECAE36D4FAE b1207
	static void _0xBB7F4273C186BC4B(Any p0, Any p1) { invoker::Invoke<Void>(0xBB7F4273C186BC4B, p0, p1); } // 0xBB7F4273C186BC4B b1207
	static void _0x5A10D6506B2F2C63(Any p0, Any p1) { invoker::Invoke<Void>(0x5A10D6506B2F2C63, p0, p1); } // 0x5A10D6506B2F2C63 b1207
	static void _0x4845E7E7643A908C(Any p0, Any p1) { invoker::Invoke<Void>(0x4845E7E7643A908C, p0, p1); } // 0x4845E7E7643A908C b1207
	static void _0x186608A2AC6F9E88(Any p0, Any p1) { invoker::Invoke<Void>(0x186608A2AC6F9E88, p0, p1); } // 0x186608A2AC6F9E88 b1207
	static void _0x443174C20B8B9E7F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x443174C20B8B9E7F, p0, p1, p2); } // 0x443174C20B8B9E7F b1207
	static void _0x8E8FFB9E4AD051D2(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x8E8FFB9E4AD051D2, p0, p1, p2, p3); } // 0x8E8FFB9E4AD051D2 b1207
	static void _0xE0B45E983BFC0768() { invoker::Invoke<Void>(0xE0B45E983BFC0768); } // 0xE0B45E983BFC0768 b1207
	static void _0x81F4E92BE3958364(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x81F4E92BE3958364, p0, p1, p2); } // 0x81F4E92BE3958364 b1207
	static void _0xA844FEB5C22C2C74() { invoker::Invoke<Void>(0xA844FEB5C22C2C74); } // 0xA844FEB5C22C2C74 b1207
}

namespace SHAPETEST
{
	static Any START_SHAPE_TEST_LOS_PROBE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x7EE9F5D83DD4F90E, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x7EE9F5D83DD4F90E b1207
	static Any _0x04AA59CA40571C2E(Any p0, Any p1) { return invoker::Invoke<Any>(0x04AA59CA40571C2E, p0, p1); } // 0x04AA59CA40571C2E b1207
	static Any _START_SHAPE_TEST_RAY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x377906D8A31E5586, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x377906D8A31E5586 b1207
	static Any START_SHAPE_TEST_BOX(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoker::Invoke<Any>(0xFE466162C4401D18, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xFE466162C4401D18 b1207
	static Any START_SHAPE_TEST_CAPSULE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x28579D1B8F8AAC80, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x28579D1B8F8AAC80 b1207
	static Any START_SHAPE_TEST_SWEPT_SPHERE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0xAA5B7C8309F73230, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xAA5B7C8309F73230 b1207
	static Any _0x9839013D8B6014F1() { return invoker::Invoke<Any>(0x9839013D8B6014F1); } // 0x9839013D8B6014F1 b1207
	static Any GET_SHAPE_TEST_RESULT(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xEDE8AC7C5108FB1D, p0, p1, p2, p3, p4); } // 0xEDE8AC7C5108FB1D b1207
}

namespace SOCIALCLUB
{
	static Any _0x8EF0F633280C0663() { return invoker::Invoke<Any>(0x8EF0F633280C0663); } // 0x8EF0F633280C0663 b1207
	static Any _0xFF92537C4DDC1241() { return invoker::Invoke<Any>(0xFF92537C4DDC1241); } // 0xFF92537C4DDC1241 b1207
	static Any _0x74CF39E030A382C4() { return invoker::Invoke<Any>(0x74CF39E030A382C4); } // 0x74CF39E030A382C4 b1207
	static Any _0x63CAC501FFF66DC4() { return invoker::Invoke<Any>(0x63CAC501FFF66DC4); } // 0x63CAC501FFF66DC4 b1207
	static Any _0x95BB39C4DA99F348() { return invoker::Invoke<Any>(0x95BB39C4DA99F348); } // 0x95BB39C4DA99F348 b1207
	static Any _0x66F77FD58506FF6B() { return invoker::Invoke<Any>(0x66F77FD58506FF6B); } // 0x66F77FD58506FF6B b1207
	static Any _0x176D077685CD83E4() { return invoker::Invoke<Any>(0x176D077685CD83E4); } // 0x176D077685CD83E4 b1207
	static Any _0xA31DAFCDC33775E9() { return invoker::Invoke<Any>(0xA31DAFCDC33775E9); } // 0xA31DAFCDC33775E9 b1207
	static Any _0x0000000085488C49() { return invoker::Invoke<Any>(0x0000000085488C49); } // 0x0000000085488C49 b1207
	static Any _0x00000000467F4CAA() { return invoker::Invoke<Any>(0x00000000467F4CAA); } // 0x00000000467F4CAA b1207
	static Any _0x00000000EB2D93B3() { return invoker::Invoke<Any>(0x00000000EB2D93B3); } // 0x00000000EB2D93B3 b1207
	static Any SC_PROFANITY_CHECK_STRING(Any p0, Any p1) { return invoker::Invoke<Any>(0x9C74AC9D87B3FFF4, p0, p1); } // 0x9C74AC9D87B3FFF4 b1207
	static Any SC_PROFANITY_GET_CHECK_IS_VALID(Any p0) { return invoker::Invoke<Any>(0x08C8052AF40C4247, p0); } // 0x08C8052AF40C4247 b1207
	static Any SC_PROFANITY_GET_CHECK_IS_PENDING(Any p0) { return invoker::Invoke<Any>(0x3A10BCD0C8AA0B82, p0); } // 0x3A10BCD0C8AA0B82 b1207
	static Any SC_PROFANITY_GET_STRING_PASSED(Any p0) { return invoker::Invoke<Any>(0xF302973BB8BE70E6, p0); } // 0xF302973BB8BE70E6 b1207
	static Any SC_PROFANITY_GET_STRING_STATUS(Any p0) { return invoker::Invoke<Any>(0x0CF3BFB99EBBE5B1, p0); } // 0x0CF3BFB99EBBE5B1 b1207
	static Any _0xCBF743C984695CF3() { return invoker::Invoke<Any>(0xCBF743C984695CF3); } // 0xCBF743C984695CF3 b1207
	static Any _0xD635DF6BAA5A6017() { return invoker::Invoke<Any>(0xD635DF6BAA5A6017); } // 0xD635DF6BAA5A6017 b1207
	static Any _0xB4411D4D6B81438E() { return invoker::Invoke<Any>(0xB4411D4D6B81438E); } // 0xB4411D4D6B81438E b1207
	static Any _0x060BBAD634C2B44B() { return invoker::Invoke<Any>(0x060BBAD634C2B44B); } // 0x060BBAD634C2B44B b1207
	static Any _0x9F6DCD0C939C71E9() { return invoker::Invoke<Any>(0x9F6DCD0C939C71E9); } // 0x9F6DCD0C939C71E9 b1207
	static Any _0x89D9BDE7334B110F() { return invoker::Invoke<Any>(0x89D9BDE7334B110F); } // 0x89D9BDE7334B110F b1207
	static Any _0x09937EB0CEBC2F9F() { return invoker::Invoke<Any>(0x09937EB0CEBC2F9F); } // 0x09937EB0CEBC2F9F b1207
	static Any _0x03C03ABBABBEF752() { return invoker::Invoke<Any>(0x03C03ABBABBEF752); } // 0x03C03ABBABBEF752 b1207
	static Any _0x3519CC3525319A96() { return invoker::Invoke<Any>(0x3519CC3525319A96); } // 0x3519CC3525319A96 b1207
	static Any _0x1BDB56DB258F052D() { return invoker::Invoke<Any>(0x1BDB56DB258F052D); } // 0x1BDB56DB258F052D b1207
	static Any _0xC8FC3B2432E8229D() { return invoker::Invoke<Any>(0xC8FC3B2432E8229D); } // 0xC8FC3B2432E8229D b1207
	static Any _0x85EA0BEC7B1F7622() { return invoker::Invoke<Any>(0x85EA0BEC7B1F7622); } // 0x85EA0BEC7B1F7622 b1207
	static Any _0x62B384FEFDE06817() { return invoker::Invoke<Any>(0x62B384FEFDE06817); } // 0x62B384FEFDE06817 b1207
	static Any _0x7C981DE05A7403A0() { return invoker::Invoke<Any>(0x7C981DE05A7403A0); } // 0x7C981DE05A7403A0 b1207
	static Any _0x91C9E2A0F9DD6DD4() { return invoker::Invoke<Any>(0x91C9E2A0F9DD6DD4); } // 0x91C9E2A0F9DD6DD4 b1207
	static Any _0x049D2196D9D11184() { return invoker::Invoke<Any>(0x049D2196D9D11184); } // 0x049D2196D9D11184 b1207
	static Any _0x11EA52CAD1B55910() { return invoker::Invoke<Any>(0x11EA52CAD1B55910); } // 0x11EA52CAD1B55910 b1207
}

namespace SOCIALCLUBFEED
{
	static Any _SC_FEED_SUBMIT_PRESET_MESSAGE(Any p0, Any p1) { return invoker::Invoke<Any>(0xEFB64240F6B17817, p0, p1); } // 0xEFB64240F6B17817 b1207
}

namespace SPACTIONPROXY
{
	static Any _START_MANAGER() { return invoker::Invoke<Any>(0x1F471B79ACC91BEE); } // 0x1F471B79ACC91BEE b1207
	static Any _MANAGER_IS_READY() { return invoker::Invoke<Any>(0x1F471B79ACC91BED); } // 0x1F471B79ACC91BED b1207
	static Any _MANAGER_IS_FAILED() { return invoker::Invoke<Any>(0x1F471B79ACC91BEC); } // 0x1F471B79ACC91BEC b1207
	static Any _0x1F471B79ACC97BEF(Any p0) { return invoker::Invoke<Any>(0x1F471B79ACC97BEF, p0); } // 0x1F471B79ACC97BEF b1207
	static Any _0x1F471B79ACC98BEF(Any p0) { return invoker::Invoke<Any>(0x1F471B79ACC98BEF, p0); } // 0x1F471B79ACC98BEF b1207
	static Any _0x1F471B79ACC94BEF(Any p0, Any p1) { return invoker::Invoke<Any>(0x1F471B79ACC94BEF, p0, p1); } // 0x1F471B79ACC94BEF b1207
}

namespace _NAMESPACE64
{
	static Any _0xC48FE1971C9743FF(Any p0) { return invoker::Invoke<Any>(0xC48FE1971C9743FF, p0); } // 0xC48FE1971C9743FF b1207
	static Any _0xA4DDF5DF95E65EEE(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xA4DDF5DF95E65EEE, p0, p1, p2); } // 0xA4DDF5DF95E65EEE b1207
	static Any _0x481BDF6A10C5EF68() { return invoker::Invoke<Any>(0x481BDF6A10C5EF68); } // 0x481BDF6A10C5EF68 b1207
	static Any _0x3B5107353267D7A1(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x3B5107353267D7A1, p0, p1, p2); } // 0x3B5107353267D7A1 b1207
	static Any _0x05060A54834F2382(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x05060A54834F2382, p0, p1, p2); } // 0x05060A54834F2382 b1207
	static Any _0x1FAE9B2FAA2DFE06() { return invoker::Invoke<Any>(0x1FAE9B2FAA2DFE06); } // 0x1FAE9B2FAA2DFE06 b1207
	static Any _0x767FBC2AC802EF3E(Any p0, Any p1) { return invoker::Invoke<Any>(0x767FBC2AC802EF3E, p0, p1); } // 0x767FBC2AC802EF3E b1207
	static Any _0xD7AE6C9C9C6AC54D(Any p0, Any p1) { return invoker::Invoke<Any>(0xD7AE6C9C9C6AC54D, p0, p1); } // 0xD7AE6C9C9C6AC54D b1207
	static Any _0x11B5E6D2AE73F48F(Any p0, Any p1) { return invoker::Invoke<Any>(0x11B5E6D2AE73F48F, p0, p1); } // 0x11B5E6D2AE73F48F b1207
	static Any _0x8B0FACEFC36C824C() { return invoker::Invoke<Any>(0x8B0FACEFC36C824C); } // 0x8B0FACEFC36C824C b1207
	static void _0x0FEE2561120F3333(Any p0) { invoker::Invoke<Void>(0x0FEE2561120F3333, p0); } // 0x0FEE2561120F3333 b1207
	static void _0x6A0184E904CDF25E(Any p0, Any p1) { invoker::Invoke<Void>(0x6A0184E904CDF25E, p0, p1); } // 0x6A0184E904CDF25E b1207
	static void _0x4A47E38EA3D60939(Any p0, Any p1) { invoker::Invoke<Void>(0x4A47E38EA3D60939, p0, p1); } // 0x4A47E38EA3D60939 b1207
	static void _0xBD861AE8A5181ED7(Any p0, Any p1) { invoker::Invoke<Void>(0xBD861AE8A5181ED7, p0, p1); } // 0xBD861AE8A5181ED7 b1207
	static void _0x91A4F58E01ED5E4C(Any p0, Any p1) { invoker::Invoke<Void>(0x91A4F58E01ED5E4C, p0, p1); } // 0x91A4F58E01ED5E4C b1207
	static void _0xE141F6B40B1E3683(Any p0, Any p1) { invoker::Invoke<Void>(0xE141F6B40B1E3683, p0, p1); } // 0xE141F6B40B1E3683 b1207
	static Any _0x34B22DE38477EDB4() { return invoker::Invoke<Any>(0x34B22DE38477EDB4); } // 0x34B22DE38477EDB4 b1207
	static Any _0xCAAE29CB5591B2A5() { return invoker::Invoke<Any>(0xCAAE29CB5591B2A5); } // 0xCAAE29CB5591B2A5 b1207
	static Any _0xDCEC875A02991AD0() { return invoker::Invoke<Any>(0xDCEC875A02991AD0); } // 0xDCEC875A02991AD0 b1207
	static Any _0x1E7384AB5D4F4581(Any p0) { return invoker::Invoke<Any>(0x1E7384AB5D4F4581, p0); } // 0x1E7384AB5D4F4581 b1207
	static void _0xDA26263C87CCE9C1(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xDA26263C87CCE9C1, p0, p1, p2, p3); } // 0xDA26263C87CCE9C1 b1207
	static void _0x831BF01C56149A8A(Any p0) { invoker::Invoke<Void>(0x831BF01C56149A8A, p0); } // 0x831BF01C56149A8A b1207
	static Any _0x7C2ABF6E556B21FC() { return invoker::Invoke<Any>(0x7C2ABF6E556B21FC); } // 0x7C2ABF6E556B21FC b1207
	static void _0x8312F09C56149A8A(Any p0) { invoker::Invoke<Void>(0x8312F09C56149A8A, p0); } // 0x8312F09C56149A8A b1207
	static void _0x378D3B1B11D9385B(Any p0) { invoker::Invoke<Void>(0x378D3B1B11D9385B, p0); } // 0x378D3B1B11D9385B b1207
	static void _0xDA26263C07CCE9C2(Any p0) { invoker::Invoke<Void>(0xDA26263C07CCE9C2, p0); } // 0xDA26263C07CCE9C2 b1207
	static void _0xD64DBC8B0424135F(Any p0, Any p1) { invoker::Invoke<Void>(0xD64DBC8B0424135F, p0, p1); } // 0xD64DBC8B0424135F b1207
	static void _0xA59590050F80FF2E(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xA59590050F80FF2E, p0, p1, p2, p3); } // 0xA59590050F80FF2E b1207
	static void _0xF8181B5EF156862C(Any p0) { invoker::Invoke<Void>(0xF8181B5EF156862C, p0); } // 0xF8181B5EF156862C b1207
	static Any _0x6B1044FDC2B09101() { return invoker::Invoke<Any>(0x6B1044FDC2B09101); } // 0x6B1044FDC2B09101 b1207
	static Any _0x8C889E4CBB4B2356() { return invoker::Invoke<Any>(0x8C889E4CBB4B2356); } // 0x8C889E4CBB4B2356 b1207
	static Any _0x262EF7CF49CF1EB9() { return invoker::Invoke<Any>(0x262EF7CF49CF1EB9); } // 0x262EF7CF49CF1EB9 b1207
	static Any _0xB22F05732F72F70C() { return invoker::Invoke<Any>(0xB22F05732F72F70C); } // 0xB22F05732F72F70C b1207
	static Any _0xF21A5D66874FCEDD() { return invoker::Invoke<Any>(0xF21A5D66874FCEDD); } // 0xF21A5D66874FCEDD b1207
	static Any _0x3EB2791A1FBC8A42() { return invoker::Invoke<Any>(0x3EB2791A1FBC8A42); } // 0x3EB2791A1FBC8A42 b1207
	static Any _0xDF95DF488A645CE7() { return invoker::Invoke<Any>(0xDF95DF488A645CE7); } // 0xDF95DF488A645CE7 b1207
	static Any _0x302E71C1D9EE75B9() { return invoker::Invoke<Any>(0x302E71C1D9EE75B9); } // 0x302E71C1D9EE75B9 b1207
	static Any _0x01F4D242765C6B24(Any p0) { return invoker::Invoke<Any>(0x01F4D242765C6B24, p0); } // 0x01F4D242765C6B24 b1207
	static void _0x6123E2832C34243D(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x6123E2832C34243D, p0, p1, p2, p3, p4); } // 0x6123E2832C34243D b1207
	static void _0xCA41E86545413B5B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xCA41E86545413B5B, p0, p1, p2, p3, p4, p5, p6); } // 0xCA41E86545413B5B b1207
	static void _0xB2A38826E5886E83(Any p0) { invoker::Invoke<Void>(0xB2A38826E5886E83, p0); } // 0xB2A38826E5886E83 b1207
	static void _0xD5910ECF81A2278C(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xD5910ECF81A2278C, p0, p1, p2, p3); } // 0xD5910ECF81A2278C b1207
	static Any _0x99230691875FC218() { return invoker::Invoke<Any>(0x99230691875FC218); } // 0x99230691875FC218 b1207
	static void _0x025E98E317652CDD(Any p0) { invoker::Invoke<Void>(0x025E98E317652CDD, p0); } // 0x025E98E317652CDD b1207
	static Any _0xE5A680A5D8B1F687() { return invoker::Invoke<Any>(0xE5A680A5D8B1F687); } // 0xE5A680A5D8B1F687 b1207
	static Any _0x4DAC398297981B87(Any p0) { return invoker::Invoke<Any>(0x4DAC398297981B87, p0); } // 0x4DAC398297981B87 b1207
	static Any _0x04DAC3929796EB87(Any p0, Any p1) { return invoker::Invoke<Any>(0x04DAC3929796EB87, p0, p1); } // 0x04DAC3929796EB87 b1207
	static Any _0x58CB53DB63F84DE9(Any p0) { return invoker::Invoke<Any>(0x58CB53DB63F84DE9, p0); } // 0x58CB53DB63F84DE9 b1207
	static Any _0x58CB53DB63F84DEA(Any p0) { return invoker::Invoke<Any>(0x58CB53DB63F84DEA, p0); } // 0x58CB53DB63F84DEA b1207
	static void _0xDDBD560745B1EE9A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDDBD560745B1EE9A, p0, p1, p2); } // 0xDDBD560745B1EE9A b1207
	static Any _0x86922D8C02FB7703() { return invoker::Invoke<Any>(0x86922D8C02FB7703); } // 0x86922D8C02FB7703 b1207
	static Any _0xDDBD560745B1EE9B() { return invoker::Invoke<Any>(0xDDBD560745B1EE9B); } // 0xDDBD560745B1EE9B b1207
	static void _0xDDBD560745B1EE9C(Any p0, Any p1) { invoker::Invoke<Void>(0xDDBD560745B1EE9C, p0, p1); } // 0xDDBD560745B1EE9C b1207
	static Any _0x4ABF7E4DB6279E8F() { return invoker::Invoke<Any>(0x4ABF7E4DB6279E8F); } // 0x4ABF7E4DB6279E8F b1207
	static Any _0x43B0163154A50C86() { return invoker::Invoke<Any>(0x43B0163154A50C86); } // 0x43B0163154A50C86 b1207
	static Any _0xC3FCB47344DCB638() { return invoker::Invoke<Any>(0xC3FCB47344DCB638); } // 0xC3FCB47344DCB638 b1207
	static Any _0x00CE6A93324A590B() { return invoker::Invoke<Any>(0x00CE6A93324A590B); } // 0x00CE6A93324A590B b1207
	static Any _0xDDBD560745B1EE98() { return invoker::Invoke<Any>(0xDDBD560745B1EE98); } // 0xDDBD560745B1EE98 b1207
	static Any _0xB112B9262EC29C20() { return invoker::Invoke<Any>(0xB112B9262EC29C20); } // 0xB112B9262EC29C20 b1207
	static Any _0x4FCBCC0584CD08E9() { return invoker::Invoke<Any>(0x4FCBCC0584CD08E9); } // 0x4FCBCC0584CD08E9 b1207
	static Any _0xCA1F0B5103936891() { return invoker::Invoke<Any>(0xCA1F0B5103936891); } // 0xCA1F0B5103936891 b1207
	static Any _0x8BA3D7B1E83EF803() { return invoker::Invoke<Any>(0x8BA3D7B1E83EF803); } // 0x8BA3D7B1E83EF803 b1207
	static Any _0x0B0576DD3A75E58D(Any p0) { return invoker::Invoke<Any>(0x0B0576DD3A75E58D, p0); } // 0x0B0576DD3A75E58D b1207
	static Any _0xA785A52B59B7E7B2(Any p0) { return invoker::Invoke<Any>(0xA785A52B59B7E7B2, p0); } // 0xA785A52B59B7E7B2 b1207
	static Any _0xC0BB774787BBF301(Any p0, Any p1) { return invoker::Invoke<Any>(0xC0BB774787BBF301, p0, p1); } // 0xC0BB774787BBF301 b1207
	static void _0x97E18E7C098626DE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x97E18E7C098626DE, p0, p1, p2); } // 0x97E18E7C098626DE b1207
	static Any _0x9D0F5D2E1951CD84() { return invoker::Invoke<Any>(0x9D0F5D2E1951CD84); } // 0x9D0F5D2E1951CD84 b1207
	static Any _0x218F7710A139D012() { return invoker::Invoke<Any>(0x218F7710A139D012); } // 0x218F7710A139D012 b1207
	static Any _0x3AEABAE3F3C7600C() { return invoker::Invoke<Any>(0x3AEABAE3F3C7600C); } // 0x3AEABAE3F3C7600C b1207
	static Any _0x997060BC223ADFF9() { return invoker::Invoke<Any>(0x997060BC223ADFF9); } // 0x997060BC223ADFF9 b1207
	static Any _0x332630B862277879() { return invoker::Invoke<Any>(0x332630B862277879); } // 0x332630B862277879 b1207
	static Any _0x70379B5C3FF1D209() { return invoker::Invoke<Any>(0x70379B5C3FF1D209); } // 0x70379B5C3FF1D209 b1207
	static Any _0x3F6FD87D2030ADC6() { return invoker::Invoke<Any>(0x3F6FD87D2030ADC6); } // 0x3F6FD87D2030ADC6 b1207
	static Any _0xA2E2BEA4E83F6270() { return invoker::Invoke<Any>(0xA2E2BEA4E83F6270); } // 0xA2E2BEA4E83F6270 b1207
	static Any _0xB5E2EDA2135E0FA1() { return invoker::Invoke<Any>(0xB5E2EDA2135E0FA1); } // 0xB5E2EDA2135E0FA1 b1207
	static Any _0x8F5317729F791D10() { return invoker::Invoke<Any>(0x8F5317729F791D10); } // 0x8F5317729F791D10 b1207
	static Any _0x610783F646894D25() { return invoker::Invoke<Any>(0x610783F646894D25); } // 0x610783F646894D25 b1207
	static Any _0xBFFA88522FF0F730() { return invoker::Invoke<Any>(0xBFFA88522FF0F730); } // 0xBFFA88522FF0F730 b1207
	static Any _0x7D675C9DDDB365BE() { return invoker::Invoke<Any>(0x7D675C9DDDB365BE); } // 0x7D675C9DDDB365BE b1207
	static Any _0xBA61BA6205A3F5A8() { return invoker::Invoke<Any>(0xBA61BA6205A3F5A8); } // 0xBA61BA6205A3F5A8 b1207
	static Any _0x4F2D5FA23DB992DE() { return invoker::Invoke<Any>(0x4F2D5FA23DB992DE); } // 0x4F2D5FA23DB992DE b1207
	static Any _0x4E463A3CDEFFFE96() { return invoker::Invoke<Any>(0x4E463A3CDEFFFE96); } // 0x4E463A3CDEFFFE96 b1207
}

namespace STREAMING
{
	static void REQUEST_MODEL(Any p0, Any p1) { invoker::Invoke<Void>(0xFA28FE3A6246FC30, p0, p1); } // 0xFA28FE3A6246FC30 b1207
	static Any HAS_MODEL_LOADED(Any p0) { return invoker::Invoke<Any>(0x1283B8B89DD5D1B6, p0); } // 0x1283B8B89DD5D1B6 b1207
	static void SET_MODEL_AS_NO_LONGER_NEEDED(Any p0) { invoker::Invoke<Void>(0x4AD96EF928BD4F9A, p0); } // 0x4AD96EF928BD4F9A b1207
	static Any _0xD6F3B6D7716CFF8E() { return invoker::Invoke<Any>(0xD6F3B6D7716CFF8E); } // 0xD6F3B6D7716CFF8E b1207
	static Any IS_MODEL_VALID(Any p0) { return invoker::Invoke<Any>(0x392C8D8E07B70EFC, p0); } // 0x392C8D8E07B70EFC b1207
	static Any _0xC3F09DE9D6D17DDA(Any p0) { return invoker::Invoke<Any>(0xC3F09DE9D6D17DDA, p0); } // 0xC3F09DE9D6D17DDA b1207
	static Any IS_MODEL_A_VEHICLE(Any p0) { return invoker::Invoke<Any>(0x354F62672DE7DB0A, p0); } // 0x354F62672DE7DB0A b1207
	static Any _0x274EE1B90CFA669E(Any p0) { return invoker::Invoke<Any>(0x274EE1B90CFA669E, p0); } // 0x274EE1B90CFA669E b1207
	static Any _0xDA8B2EAF29E872E2(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xDA8B2EAF29E872E2, p0, p1, p2); } // 0xDA8B2EAF29E872E2 b1207
	static void _0x80B3E0597366ADF1() { invoker::Invoke<Void>(0x80B3E0597366ADF1); } // 0x80B3E0597366ADF1 b1207
	static void REQUEST_COLLISION_AT_COORD(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0A3720F162A033C9, p0, p1, p2); } // 0x0A3720F162A033C9 b1207
	static void _0xA8432A14D4DC2101(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA8432A14D4DC2101, p0, p1, p2); } // 0xA8432A14D4DC2101 b1207
	static void REQUEST_COLLISION_FOR_MODEL(Any p0) { invoker::Invoke<Void>(0xF1767BE37F661551, p0); } // 0xF1767BE37F661551 b1207
	static Any HAS_COLLISION_FOR_MODEL_LOADED(Any p0) { return invoker::Invoke<Any>(0x210A79C9EC89778F, p0); } // 0x210A79C9EC89778F b1207
	static Any DOES_ANIM_DICT_EXIST(Any p0) { return invoker::Invoke<Any>(0x537F44CB0D7F150D, p0); } // 0x537F44CB0D7F150D b1207
	static void REQUEST_ANIM_DICT(Any p0) { invoker::Invoke<Void>(0xA862A2AD321F94B4, p0); } // 0xA862A2AD321F94B4 b1207
	static Any HAS_ANIM_DICT_LOADED(Any p0) { return invoker::Invoke<Any>(0x27FF6FE8009B40CA, p0); } // 0x27FF6FE8009B40CA b1207
	static void REMOVE_ANIM_DICT(Any p0) { invoker::Invoke<Void>(0x4763145053A33D46, p0); } // 0x4763145053A33D46 b1207
	static void _0x2B6529C54D29037A(Any p0) { invoker::Invoke<Void>(0x2B6529C54D29037A, p0); } // 0x2B6529C54D29037A b1207
	static Any _0x2C04D89A0FB4E244(Any p0) { return invoker::Invoke<Any>(0x2C04D89A0FB4E244, p0); } // 0x2C04D89A0FB4E244 b1207
	static void _0x57A197AD83F66BBF(Any p0) { invoker::Invoke<Void>(0x57A197AD83F66BBF, p0); } // 0x57A197AD83F66BBF b1207
	static void REQUEST_CLIP_SET(Any p0) { invoker::Invoke<Void>(0xEF7611B57A820126, p0); } // 0xEF7611B57A820126 b1207
	static Any HAS_CLIP_SET_LOADED(Any p0) { return invoker::Invoke<Any>(0x1F23D6B6DA1CC3B2, p0); } // 0x1F23D6B6DA1CC3B2 b1207
	static void REMOVE_CLIP_SET(Any p0) { invoker::Invoke<Void>(0x817FA1B1EE7CD6F0, p0); } // 0x817FA1B1EE7CD6F0 b1207
	static Any _0xAC37644A538F7524() { return invoker::Invoke<Any>(0xAC37644A538F7524); } // 0xAC37644A538F7524 b1207
	static void _0x03DDBF2D73799F9E(Any p0) { invoker::Invoke<Void>(0x03DDBF2D73799F9E, p0); } // 0x03DDBF2D73799F9E b1207
	static Any _0x85B8F04555AB49B8(Any p0) { return invoker::Invoke<Any>(0x85B8F04555AB49B8, p0); } // 0x85B8F04555AB49B8 b1207
	static void _0x9F348DE670423460(Any p0) { invoker::Invoke<Void>(0x9F348DE670423460, p0); } // 0x9F348DE670423460 b1207
	static Any _0x5288B7F0690F7C1F(Any p0) { return invoker::Invoke<Any>(0x5288B7F0690F7C1F, p0); } // 0x5288B7F0690F7C1F b1207
	static Any _0x19A6BE7D9C6884D3(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x19A6BE7D9C6884D3, p0, p1, p2, p3); } // 0x19A6BE7D9C6884D3 b1207
	static Any _0x9427C94D2E4094A4(Any p0, Any p1) { return invoker::Invoke<Any>(0x9427C94D2E4094A4, p0, p1); } // 0x9427C94D2E4094A4 b1207
	static Any _0x4EDDD9E9CA5AF985(Any p0) { return invoker::Invoke<Any>(0x4EDDD9E9CA5AF985, p0); } // 0x4EDDD9E9CA5AF985 b1207
	static Any _0xB223249B7798EEED(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xB223249B7798EEED, p0, p1, p2, p3); } // 0xB223249B7798EEED b1207
	static Any _0xA0AE7653E8181725(Any p0) { return invoker::Invoke<Any>(0xA0AE7653E8181725, p0); } // 0xA0AE7653E8181725 b1207
	static Any _0x66BC28E50E85270E(Any p0) { return invoker::Invoke<Any>(0x66BC28E50E85270E, p0); } // 0x66BC28E50E85270E b1207
	static Any _0x9C77964B0E07B633(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x9C77964B0E07B633, p0, p1, p2); } // 0x9C77964B0E07B633 b1207
	static void _0x59767C5A7A9AE6DA(Any p0) { invoker::Invoke<Void>(0x59767C5A7A9AE6DA, p0); } // 0x59767C5A7A9AE6DA b1207
	static Any _0x9E211A378F95C97C() { return invoker::Invoke<Any>(0x9E211A378F95C97C); } // 0x9E211A378F95C97C b1207
	static void _0x5A3E5CF7B4014B96(Any p0) { invoker::Invoke<Void>(0x5A3E5CF7B4014B96, p0); } // 0x5A3E5CF7B4014B96 b1207
	static void _0x431E3AB760629B34(Any p0) { invoker::Invoke<Void>(0x431E3AB760629B34, p0); } // 0x431E3AB760629B34 b1207
	static Any _0xD779B9B910BD3B7C(Any p0) { return invoker::Invoke<Any>(0xD779B9B910BD3B7C, p0); } // 0xD779B9B910BD3B7C b1207
	static Any _0x93AC1B91CB6D9913(Any p0) { return invoker::Invoke<Any>(0x93AC1B91CB6D9913, p0); } // 0x93AC1B91CB6D9913 b1207
	static Any _0x73B40D97D7BAAD77(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x73B40D97D7BAAD77, p0, p1, p2, p3); } // 0x73B40D97D7BAAD77 b1207
	static void SET_GAME_PAUSES_FOR_STREAMING(Any p0) { invoker::Invoke<Void>(0xB3BC8250F4FE8B63, p0); } // 0xB3BC8250F4FE8B63 b1207
	static Any GET_NUMBER_OF_STREAMING_REQUESTS() { return invoker::Invoke<Any>(0x30CCCC4D88E654CA); } // 0x30CCCC4D88E654CA b1207
	static void REQUEST_PTFX_ASSET() { invoker::Invoke<Void>(0x001FF43843028E0C); } // 0x001FF43843028E0C b1207
	static Any HAS_PTFX_ASSET_LOADED() { return invoker::Invoke<Any>(0x13A3F30A9ED0BC31); } // 0x13A3F30A9ED0BC31 b1207
	static void REMOVE_PTFX_ASSET() { invoker::Invoke<Void>(0x042F9049EA419E86); } // 0x042F9049EA419E86 b1207
	static void REQUEST_NAMED_PTFX_ASSET(Any p0) { invoker::Invoke<Void>(0xF2B2353BBC0D4E8F, p0); } // 0xF2B2353BBC0D4E8F b1207
	static Any HAS_NAMED_PTFX_ASSET_LOADED(Any p0) { return invoker::Invoke<Any>(0x65BB72F29138F5D6, p0); } // 0x65BB72F29138F5D6 b1207
	static void REMOVE_NAMED_PTFX_ASSET(Any p0) { invoker::Invoke<Void>(0xF20866829E1C81A2, p0); } // 0xF20866829E1C81A2 b1207
	static void _0x2F9AC754FE179D58(Any p0) { invoker::Invoke<Void>(0x2F9AC754FE179D58, p0); } // 0x2F9AC754FE179D58 b1207
	static Any _0x8A3945405B31048F() { return invoker::Invoke<Any>(0x8A3945405B31048F); } // 0x8A3945405B31048F b1207
	static Any _0x071769BCB24379E5() { return invoker::Invoke<Any>(0x071769BCB24379E5); } // 0x071769BCB24379E5 b1207
	static void CLEAR_FOCUS() { invoker::Invoke<Void>(0x86CCAF7CE493EFBE); } // 0x86CCAF7CE493EFBE b1207
	static void _SET_FOCUS_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x25F6EF88664540E2, p0, p1, p2, p3, p4, p5); } // 0x25F6EF88664540E2 b1207
	static Any _0x955AEDD58F4BD309() { return invoker::Invoke<Any>(0x955AEDD58F4BD309); } // 0x955AEDD58F4BD309 b1207
	static Any _0xF87DE697E9A06EC6() { return invoker::Invoke<Any>(0xF87DE697E9A06EC6); } // 0xF87DE697E9A06EC6 b1207
	static void SET_MAPDATACULLBOX_ENABLED(Any p0, Any p1) { invoker::Invoke<Void>(0x3CACC83F6FED837C, p0, p1); } // 0x3CACC83F6FED837C b1207
	static Any _0x19ABCC581D28E6F9() { return invoker::Invoke<Any>(0x19ABCC581D28E6F9); } // 0x19ABCC581D28E6F9 b1207
	static void _0xF01D21DF39554115(Any p0) { invoker::Invoke<Void>(0xF01D21DF39554115, p0); } // 0xF01D21DF39554115 b1207
	static Any _0x387AD749E3B69B70(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x387AD749E3B69B70, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x387AD749E3B69B70 b1207
	static Any _0x513F8AA5BF2F17CF(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x513F8AA5BF2F17CF, p0, p1, p2, p3, p4); } // 0x513F8AA5BF2F17CF b1207
	static void _0x5A8B01199C3E79C3() { invoker::Invoke<Void>(0x5A8B01199C3E79C3); } // 0x5A8B01199C3E79C3 b1207
	static Any _0xCF45DF50C7775F2A() { return invoker::Invoke<Any>(0xCF45DF50C7775F2A); } // 0xCF45DF50C7775F2A b1207
	static Any _0x0909F71B5C070797() { return invoker::Invoke<Any>(0x0909F71B5C070797); } // 0x0909F71B5C070797 b1207
	static Any _0x45BF3A6239A576B7() { return invoker::Invoke<Any>(0x45BF3A6239A576B7); } // 0x45BF3A6239A576B7 b1207
	static Any IS_PLAYER_SWITCH_IN_PROGRESS() { return invoker::Invoke<Any>(0xED20CB1F5297791D); } // 0xED20CB1F5297791D b1207
	static void _0x1E9057A74FD73E23() { invoker::Invoke<Void>(0xA03A6812529AD9C8); } // 0xA03A6812529AD9C8 b1207
	static void _0x95A7DABDDBB78AE7(Any p0, Any p1) { invoker::Invoke<Void>(0x20D504994FDC4412, p0, p1); } // 0x20D504994FDC4412 b1207
	static void _0x63EB2B972A218CAC() { invoker::Invoke<Void>(0x31108BB5715D035F); } // 0x31108BB5715D035F b1207
	static Any _0xFB199266061F820A() { return invoker::Invoke<Any>(0xC2C05DEFE85A0B64); } // 0xC2C05DEFE85A0B64 b1207
	static void _0xF4A0DADB70F57FA6() { invoker::Invoke<Void>(0x040EE319EFD1D3B5); } // 0x040EE319EFD1D3B5 b1207
	static Any _0x5068F488DDB54DD8() { return invoker::Invoke<Any>(0xFC464598F6EE97B0); } // 0xFC464598F6EE97B0 b1207
	static void PREFETCH_SRL(Any p0) { invoker::Invoke<Void>(0x354837E5A5BAA5AF, p0); } // 0x354837E5A5BAA5AF b1207
	static void _0xAE00387E53B1E9FC() { invoker::Invoke<Void>(0xAE00387E53B1E9FC); } // 0xAE00387E53B1E9FC b1207
	static void _0xEF1A8A484118735E() { invoker::Invoke<Void>(0xEF1A8A484118735E); } // 0xEF1A8A484118735E b1207
	static void _0xD9F2FF4AF394D926() { invoker::Invoke<Void>(0xD9F2FF4AF394D926); } // 0xD9F2FF4AF394D926 b1207
	static Any IS_SRL_LOADED() { return invoker::Invoke<Any>(0x5C2C88512CF6DAFB); } // 0x5C2C88512CF6DAFB b1207
	static void BEGIN_SRL() { invoker::Invoke<Void>(0x0360710033BE60D9); } // 0x0360710033BE60D9 b1207
	static void END_SRL() { invoker::Invoke<Void>(0x1CE71FB33CA079FE); } // 0x1CE71FB33CA079FE b1207
	static void SET_SRL_TIME(Any p0) { invoker::Invoke<Void>(0x18231AEF458BCFF2, p0); } // 0x18231AEF458BCFF2 b1207
	static void _0xBEB2D9A1D9A8F55A(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xD346248C1DCE0D76, p0, p1, p2, p3); } // 0xD346248C1DCE0D76 b1207
	static void _0x20C6C7E4EB082A7F(Any p0) { invoker::Invoke<Void>(0x7C907E8A725E5FD2, p0); } // 0x7C907E8A725E5FD2 b1207
	static void SET_HD_AREA(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xB88B905AFA35CB4D, p0, p1, p2, p3); } // 0xB88B905AFA35CB4D b1207
	static void CLEAR_HD_AREA() { invoker::Invoke<Void>(0xD83B22434E52728D); } // 0xD83B22434E52728D b1207
	static void _0x09FBF15D73EFC900() { invoker::Invoke<Void>(0x09FBF15D73EFC900); } // 0x09FBF15D73EFC900 b1207
	static void _0xF11D7CB962FCD747(Any p0) { invoker::Invoke<Void>(0xF11D7CB962FCD747, p0); } // 0xF11D7CB962FCD747 b1207
	static void _0xB9B9E47EDB9D63DB() { invoker::Invoke<Void>(0xB9B9E47EDB9D63DB); } // 0xB9B9E47EDB9D63DB b1207
	static void _0xBE8DAA9D8D01DA6A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBE8DAA9D8D01DA6A, p0, p1, p2); } // 0xBE8DAA9D8D01DA6A b1207
	static Any _0x53764309C4618087(Any p0) { return invoker::Invoke<Any>(0x53764309C4618087, p0); } // 0x53764309C4618087 b1207
	static void _0x032A14D082A9B269(Any p0) { invoker::Invoke<Void>(0x032A14D082A9B269, p0); } // 0x032A14D082A9B269 b1207
	static void _0xAFA87A7D41EE346A(Any p0) { invoker::Invoke<Void>(0xAFA87A7D41EE346A, p0); } // 0xAFA87A7D41EE346A b1207
	static void _0x6A6E79FBE8678C98() { invoker::Invoke<Void>(0x6A6E79FBE8678C98); } // 0x6A6E79FBE8678C98 b1207
	static void _0xCC61D8D6C19D9F14(Any p0) { invoker::Invoke<Void>(0xCC61D8D6C19D9F14, p0); } // 0xCC61D8D6C19D9F14 b1207
	static Any _0xDA7FDEFF4DE86839() { return invoker::Invoke<Any>(0xDA7FDEFF4DE86839); } // 0xDA7FDEFF4DE86839 b1207
	static Any _0x5D5E2102B174B8D2() { return invoker::Invoke<Any>(0x5D5E2102B174B8D2); } // 0x5D5E2102B174B8D2 b1207
	static Any _0x7B8C2B846C05E5AD() { return invoker::Invoke<Any>(0x7B8C2B846C05E5AD); } // 0x7B8C2B846C05E5AD b1207
	static void _0x62D5F0588915B277() { invoker::Invoke<Void>(0x62D5F0588915B277); } // 0x62D5F0588915B277 b1207
	static Any _0x2F4D53023F826FF0() { return invoker::Invoke<Any>(0x2F4D53023F826FF0); } // 0x2F4D53023F826FF0 b1207
	static Any _0xDABFE48BA0D457AA() { return invoker::Invoke<Any>(0xDABFE48BA0D457AA); } // 0xDABFE48BA0D457AA b1207
	static Any _0xE5B76E5B56CD77DD() { return invoker::Invoke<Any>(0xE5B76E5B56CD77DD); } // 0xE5B76E5B56CD77DD b1207
	static Any _0x27AF48C62B281341() { return invoker::Invoke<Any>(0x27AF48C62B281341); } // 0x27AF48C62B281341 b1207
	static Any _0x99F92061EFE908BA() { return invoker::Invoke<Any>(0x99F92061EFE908BA); } // 0x99F92061EFE908BA b1207
	static Any _0x05DD384F39DE1C8C(Any p0, Any p1) { return invoker::Invoke<Any>(0x05DD384F39DE1C8C, p0, p1); } // 0x05DD384F39DE1C8C b1207
	static Any _0x198B85CC3C7A4593(Any p0, Any p1) { return invoker::Invoke<Any>(0x198B85CC3C7A4593, p0, p1); } // 0x198B85CC3C7A4593 b1207
	static Any _0x2A6D1DAAB9EBB262(Any p0) { return invoker::Invoke<Any>(0x2A6D1DAAB9EBB262, p0); } // 0x2A6D1DAAB9EBB262 b1207
	static void _0x07559B29950301FF(Any p0, Any p1) { invoker::Invoke<Void>(0x07559B29950301FF, p0, p1); } // 0x07559B29950301FF b1207
	static Any _0xD6E39DC5D46DF4AB(Any p0) { return invoker::Invoke<Any>(0xD6E39DC5D46DF4AB, p0); } // 0xD6E39DC5D46DF4AB b1207
	static Any _0x8D56BDA343D9519F(Any p0) { return invoker::Invoke<Any>(0x8D56BDA343D9519F, p0); } // 0x8D56BDA343D9519F b1207
	static void _0xD840C130D7AACFA5(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD840C130D7AACFA5, p0, p1, p2); } // 0xD840C130D7AACFA5 b1207
	static void _0x74E2261D2A66849A(Any p0) { invoker::Invoke<Void>(0x74E2261D2A66849A, p0); } // 0x74E2261D2A66849A b1207
}

namespace TASK
{
	static void TASK_PAUSE(Any p0, Any p1) { invoker::Invoke<Void>(0xE73A266DB0CA9042, p0, p1); } // 0xE73A266DB0CA9042 b1207
	static void TASK_STAND_STILL(Any p0, Any p1) { invoker::Invoke<Void>(0x919BE13EED931959, p0, p1); } // 0x919BE13EED931959 b1207
	static void TASK_JUMP(Any p0, Any p1) { invoker::Invoke<Void>(0x0AE4086104E067B1, p0, p1); } // 0x0AE4086104E067B1 b1207
	static void _0x91083103137D7254(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x91083103137D7254, p0, p1, p2, p3, p4); } // 0x91083103137D7254 b1207
	static void TASK_COWER(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x3EB1FE9E8E908E15, p0, p1, p2, p3); } // 0x3EB1FE9E8E908E15 b1207
	static void TASK_HANDS_UP(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xF2EAB31979A7F910, p0, p1, p2, p3, p4); } // 0xF2EAB31979A7F910 b1207
	static void _0xF90427F00A495A28(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF90427F00A495A28, p0, p1, p2); } // 0xF90427F00A495A28 b1207
	static void _0x42AC6401ABB8C7E5(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x42AC6401ABB8C7E5, p0, p1, p2); } // 0x42AC6401ABB8C7E5 b1207
	static void _0xFFB520A3E16F7B7B(Any p0, Any p1) { invoker::Invoke<Void>(0xFFB520A3E16F7B7B, p0, p1); } // 0xFFB520A3E16F7B7B b1207
	static Any _0x8B1FDF63C3193EDA() { return invoker::Invoke<Any>(0x8B1FDF63C3193EDA); } // 0x8B1FDF63C3193EDA b1207
	static void UPDATE_TASK_HANDS_UP_DURATION(Any p0, Any p1) { invoker::Invoke<Void>(0xA98FCAFD7893C834, p0, p1); } // 0xA98FCAFD7893C834 b1207
	static Any _0x28EF780BDEA8A639() { return invoker::Invoke<Any>(0x28EF780BDEA8A639); } // 0x28EF780BDEA8A639 b1207
	static void _0xA14B5FBF986BAC23(Any p0, Any p1) { invoker::Invoke<Void>(0xA14B5FBF986BAC23, p0, p1); } // 0xA14B5FBF986BAC23 b1207
	static void _0xE53D17AD837CBF7C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xE53D17AD837CBF7C, p0, p1, p2, p3, p4, p5); } // 0xE53D17AD837CBF7C b1207
	static void _0xA7C6854BB5A4192A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xA7C6854BB5A4192A, p0, p1, p2, p3, p4, p5); } // 0xA7C6854BB5A4192A b1207
	static Any _0xE41A09C8DDFF7AA4() { return invoker::Invoke<Any>(0xE41A09C8DDFF7AA4); } // 0xE41A09C8DDFF7AA4 b1207
	static void _0x0A11F3BDEC03ED5F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x0A11F3BDEC03ED5F, p0, p1, p2); } // 0x0A11F3BDEC03ED5F b1207
	static void TASK_ENTER_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xC20E50AA46D09CA8, p0, p1, p2, p3, p4, p5, p6); } // 0xC20E50AA46D09CA8 b1207
	static void TASK_LEAVE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xD3DBCE61A490BE02, p0, p1, p2, p3); } // 0xD3DBCE61A490BE02 b1207
	static void _0x92DB0739813C5186(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x92DB0739813C5186, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x92DB0739813C5186 b1207
	static void _0x48E92D3DDE23C23A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x48E92D3DDE23C23A, p0, p1, p2, p3, p4, p5); } // 0x48E92D3DDE23C23A b1207
	static void _0x9030AD4B6207BFE8(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x9030AD4B6207BFE8, p0, p1, p2); } // 0x9030AD4B6207BFE8 b1207
	static void _0xE05A5D39BE6E93AF(Any p0) { invoker::Invoke<Void>(0xE05A5D39BE6E93AF, p0); } // 0xE05A5D39BE6E93AF b1207
	static void TASK_VEHICLE_DRIVE_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0xE2A2AA2F659D77A7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xE2A2AA2F659D77A7 b1207
	static void _0xF0108F01FB105DA2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xF0108F01FB105DA2, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xF0108F01FB105DA2 b1207
	static void TASK_VEHICLE_DRIVE_WANDER(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x480142959D337D00, p0, p1, p2, p3); } // 0x480142959D337D00 b1207
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoker::Invoke<Void>(0x304AE42E357B8C7E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x304AE42E357B8C7E b1207
	static void _0x2E3676282C18A692(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoker::Invoke<Void>(0x2E3676282C18A692, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x2E3676282C18A692 b1207
	static void _0x3FFCD7BBA074CC80(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x3FFCD7BBA074CC80, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x3FFCD7BBA074CC80 b1207
	static void TASK_GO_STRAIGHT_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xD76B57B44F1E6F8B, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD76B57B44F1E6F8B b1207
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x61E360B7E040D12E, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x61E360B7E040D12E b1207
	static void _0x8AA1593AEC087A29(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x8AA1593AEC087A29, p0, p1, p2, p3); } // 0x8AA1593AEC087A29 b1207
	static void _0xDCA3A13F7A45338B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xDCA3A13F7A45338B, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xDCA3A13F7A45338B b1207
	static void _0x13DED0BC45600FE1(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x13DED0BC45600FE1, p0, p1, p2, p3, p4); } // 0x13DED0BC45600FE1 b1207
	static void _0xBAAB791AA72C2821(Any p0, Any p1) { invoker::Invoke<Void>(0xBAAB791AA72C2821, p0, p1); } // 0xBAAB791AA72C2821 b1207
	static void _0x79482C12482A860D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x79482C12482A860D, p0, p1, p2, p3, p4, p5); } // 0x79482C12482A860D b1207
	static void TASK_ACHIEVE_HEADING(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x93B93A37987F1F3D, p0, p1, p2); } // 0x93B93A37987F1F3D b1207
	static void TASK_FLUSH_ROUTE() { invoker::Invoke<Void>(0x841142A1376E9006); } // 0x841142A1376E9006 b1207
	static void TASK_EXTEND_ROUTE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x1E7889778264843A, p0, p1, p2); } // 0x1E7889778264843A b1207
	static void _0x0E14C5550DC3CD1D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x0E14C5550DC3CD1D, p0, p1, p2, p3, p4, p5); } // 0x0E14C5550DC3CD1D b1207
	static void _0xC2329B0206426644(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xC2329B0206426644, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC2329B0206426644 b1207
	static void _0x4AA5AA97C65E4A2F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x4AA5AA97C65E4A2F, p0, p1, p2, p3, p4, p5, p6); } // 0x4AA5AA97C65E4A2F b1207
	static void TASK_GO_TO_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x6A071245EB0D1882, p0, p1, p2, p3, p4, p5, p6); } // 0x6A071245EB0D1882 b1207
	static void _0x489FFCCCE7392B55(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x489FFCCCE7392B55, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x489FFCCCE7392B55 b1207
	static void _0xA052608A12559BBB(Any p0, Any p1) { invoker::Invoke<Void>(0xA052608A12559BBB, p0, p1); } // 0xA052608A12559BBB b1207
	static void _0x8AC76D1408731732(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x8AC76D1408731732, p0, p1, p2, p3); } // 0x8AC76D1408731732 b1207
	static void _0xAA19711D33C6708C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xAA19711D33C6708C, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xAA19711D33C6708C b1207
	static void _0xDE0C8B145EA466FF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xDE0C8B145EA466FF, p0, p1, p2, p3, p4, p5); } // 0xDE0C8B145EA466FF b1207
	static void _0x8D7F2A63688C20A4(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x8D7F2A63688C20A4, p0, p1, p2, p3, p4); } // 0x8D7F2A63688C20A4 b1207
	static void _0xBAD6545608CECA6E(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBAD6545608CECA6E, p0, p1, p2); } // 0xBAD6545608CECA6E b1207
	static Any _0xEB67D4E056C85A81(Any p0) { return invoker::Invoke<Any>(0xEB67D4E056C85A81, p0); } // 0xEB67D4E056C85A81 b1207
	static Any _0x78D8C1D4EB80C588(Any p0) { return invoker::Invoke<Any>(0x78D8C1D4EB80C588, p0); } // 0x78D8C1D4EB80C588 b1207
	static void _0x9A7A4A54596FE09D(Any p0, Any p1) { invoker::Invoke<Void>(0x9A7A4A54596FE09D, p0, p1); } // 0x9A7A4A54596FE09D b1207
	static void _0xED27560703F37258(Any p0) { invoker::Invoke<Void>(0xED27560703F37258, p0); } // 0xED27560703F37258 b1207
	static void _0x6879FF208ED87F2A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoker::Invoke<Void>(0x6879FF208ED87F2A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x6879FF208ED87F2A b1207
	static void _0x7B74D8EEDE9B5727(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x7B74D8EEDE9B5727, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7B74D8EEDE9B5727 b1207
	static void TASK_SMART_FLEE_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x94587F17E9C365D5, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x94587F17E9C365D5 b1207
	static void TASK_SMART_FLEE_PED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x22B0D0E37CCB840D, p0, p1, p2, p3, p4, p5, p6); } // 0x22B0D0E37CCB840D b1207
	static void _0x673A8779D229BA5A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x673A8779D229BA5A, p0, p1, p2, p3, p4, p5); } // 0x673A8779D229BA5A b1207
	static void _0x2E1D6D87346BB7D2(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x2E1D6D87346BB7D2, p0, p1, p2, p3); } // 0x2E1D6D87346BB7D2 b1207
	static void _0x58428248BF4B64E4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x58428248BF4B64E4, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x58428248BF4B64E4 b1207
	static void _0xFD45175A6DFD7CE9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xFD45175A6DFD7CE9, p0, p1, p2, p3, p4, p5, p6); } // 0xFD45175A6DFD7CE9 b1207
	static void _0x390E0B697D25EAF5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoker::Invoke<Void>(0x390E0B697D25EAF5, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x390E0B697D25EAF5 b1207
	static void _0x5802E0F910E4CF1D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x5802E0F910E4CF1D, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x5802E0F910E4CF1D b1207
	static void _0xE8F1A5B4CED3725A(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xE8F1A5B4CED3725A, p0, p1, p2, p3, p4); } // 0xE8F1A5B4CED3725A b1207
	static void _0x3923EC958249657D(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3923EC958249657D, p0, p1, p2); } // 0x3923EC958249657D b1207
	static void _0xA42DC7919159CCCF(Any p0) { invoker::Invoke<Void>(0xA42DC7919159CCCF, p0); } // 0xA42DC7919159CCCF b1207
	static void _0xE86A537B5A3C297C(Any p0, Any p1) { invoker::Invoke<Void>(0xE86A537B5A3C297C, p0, p1); } // 0xE86A537B5A3C297C b1207
	static void _0xD6CFC2D59DA72042(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xD6CFC2D59DA72042, p0, p1, p2, p3, p4, p5, p6); } // 0xD6CFC2D59DA72042 b1207
	static void _0x72997893BFB8ECCC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x72997893BFB8ECCC, p0, p1, p2, p3, p4, p5, p6); } // 0x72997893BFB8ECCC b1207
	static void _0x04ACFAC71E6858F9(Any p0, Any p1) { invoker::Invoke<Void>(0x04ACFAC71E6858F9, p0, p1); } // 0x04ACFAC71E6858F9 b1207
	static void TASK_SHOCKING_EVENT_REACT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x452419CBD838065B, p0, p1, p2); } // 0x452419CBD838065B b1207
	static void _0xC4C32C31920E1B70(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xC4C32C31920E1B70, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC4C32C31920E1B70 b1207
	static void TASK_WANDER_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xE054346CA3A0F315, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xE054346CA3A0F315 b1207
	static void _0x9FDA168777B28424(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x9FDA168777B28424, p0, p1, p2, p3, p4); } // 0x9FDA168777B28424 b1207
	static void TASK_WANDER_STANDARD(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBB9CE077274F6A1B, p0, p1, p2); } // 0xBB9CE077274F6A1B b1207
	static void _0x527EA3DB8BC7F03B(Any p0, Any p1) { invoker::Invoke<Void>(0x527EA3DB8BC7F03B, p0, p1); } // 0x527EA3DB8BC7F03B b1207
	static void TASK_PLANT_BOMB(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x965FEC691D55E9BF, p0, p1, p2, p3, p4); } // 0x965FEC691D55E9BF b1207
	static void _0xA09CFD29100F06C3(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xA09CFD29100F06C3, p0, p1, p2, p3); } // 0xA09CFD29100F06C3 b1207
	static void _0xCD181A959CFDD7F4(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xCD181A959CFDD7F4, p0, p1, p2, p3, p4); } // 0xCD181A959CFDD7F4 b1207
	static void _0xF960F3D57B660E96(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF960F3D57B660E96, p0, p1, p2); } // 0xF960F3D57B660E96 b1207
	static void _0xEE3AA414CF99F368(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xEE3AA414CF99F368, p0, p1, p2, p3); } // 0xEE3AA414CF99F368 b1207
	static Any _0x37C13863ABA1B4A3() { return invoker::Invoke<Any>(0x37C13863ABA1B4A3); } // 0x37C13863ABA1B4A3 b1207
	static void _0x4B39D8F9D0FE7749(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4B39D8F9D0FE7749, p0, p1, p2); } // 0x4B39D8F9D0FE7749 b1207
	static void _0x21FDF9A25CFE1CE5(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x21FDF9A25CFE1CE5, p0, p1, p2, p3, p4); } // 0x21FDF9A25CFE1CE5 b1207
	static void _0x979D93372FC8C565(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x979D93372FC8C565, p0, p1, p2); } // 0x979D93372FC8C565 b1207
	static void _0xA899B61C66F09134(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA899B61C66F09134, p0, p1, p2); } // 0xA899B61C66F09134 b1207
	static Any _0x244430C13BA5258E(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x244430C13BA5258E, p0, p1, p2, p3); } // 0x244430C13BA5258E b1207
	static void _0xBD7949BD07299672(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBD7949BD07299672, p0, p1, p2); } // 0xBD7949BD07299672 b1207
	static void _0x83BFC1F836B2F3F2(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x83BFC1F836B2F3F2, p0, p1, p2); } // 0x83BFC1F836B2F3F2 b1207
	static void _0x1B1475414E70DD8E(Any p0, Any p1) { invoker::Invoke<Void>(0x1B1475414E70DD8E, p0, p1); } // 0x1B1475414E70DD8E b1207
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x15D3A79D4E44B913, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x15D3A79D4E44B913 b1207
	static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoker::Invoke<Void>(0x17F58B88D085DBAC, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x17F58B88D085DBAC b1207
	static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Any p0, Any p1) { invoker::Invoke<Void>(0x8E06A6FE76C9EFF4, p0, p1); } // 0x8E06A6FE76C9EFF4 b1207
	static void SET_PED_PATH_CAN_USE_LADDERS(Any p0, Any p1) { invoker::Invoke<Void>(0x77A5B103C87F476E, p0, p1); } // 0x77A5B103C87F476E b1207
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Any p0, Any p1) { invoker::Invoke<Void>(0xE361C5C71C431A4F, p0, p1); } // 0xE361C5C71C431A4F b1207
	static Any _0xE6A151364C600B24(Any p0) { return invoker::Invoke<Any>(0xE6A151364C600B24, p0); } // 0xE6A151364C600B24 b1207
	static void _0x1632EB9386CDBE64(Any p0, Any p1) { invoker::Invoke<Void>(0x1632EB9386CDBE64, p0, p1); } // 0x1632EB9386CDBE64 b1207
	static void _0x88E32DB8C1A4AA4B(Any p0, Any p1) { invoker::Invoke<Void>(0x88E32DB8C1A4AA4B, p0, p1); } // 0x88E32DB8C1A4AA4B b1207
	static void _0xE8C296B75EACC357(Any p0, Any p1) { invoker::Invoke<Void>(0xE8C296B75EACC357, p0, p1); } // 0xE8C296B75EACC357 b1207
	static void _0x3AD8EFF9703BE657(Any p0, Any p1) { invoker::Invoke<Void>(0x3AD8EFF9703BE657, p0, p1); } // 0x3AD8EFF9703BE657 b1207
	static void _0x8798CF6815B8FE0F(Any p0, Any p1) { invoker::Invoke<Void>(0x8798CF6815B8FE0F, p0, p1); } // 0x8798CF6815B8FE0F b1207
	static void _0x5B68D0007D9C92EB(Any p0, Any p1) { invoker::Invoke<Void>(0x5B68D0007D9C92EB, p0, p1); } // 0x5B68D0007D9C92EB b1207
	static void _0x82ED59F095056550(Any p0, Any p1) { invoker::Invoke<Void>(0x82ED59F095056550, p0, p1); } // 0x82ED59F095056550 b1207
	static void _0xE01C8DC8EDD28D31(Any p0, Any p1) { invoker::Invoke<Void>(0xE01C8DC8EDD28D31, p0, p1); } // 0xE01C8DC8EDD28D31 b1207
	static void _0x098CAA6DBE7D8D82(Any p0, Any p1) { invoker::Invoke<Void>(0x098CAA6DBE7D8D82, p0, p1); } // 0x098CAA6DBE7D8D82 b1207
	static Any _0x1948BBE561A2375A(Any p0) { return invoker::Invoke<Any>(0x1948BBE561A2375A, p0); } // 0x1948BBE561A2375A b1207
	static void _0x013A7BA5015C1372(Any p0, Any p1) { invoker::Invoke<Void>(0x013A7BA5015C1372, p0, p1); } // 0x013A7BA5015C1372 b1207
	static void SET_PED_PATH_MAY_ENTER_WATER(Any p0, Any p1) { invoker::Invoke<Void>(0xF35425A4204367EC, p0, p1); } // 0xF35425A4204367EC b1207
	static void _0x9DE63896B176EA94(Any p0, Any p1) { invoker::Invoke<Void>(0x9DE63896B176EA94, p0, p1); } // 0x9DE63896B176EA94 b1207
	static void _0xC6170856E54557B2(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xC6170856E54557B2, p0, p1, p2); } // 0xC6170856E54557B2 b1207
	static void _0xF948F4356F010F11(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF948F4356F010F11, p0, p1, p2); } // 0xF948F4356F010F11 b1207
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x38FE1EC73743793C, p0, p1, p2); } // 0x38FE1EC73743793C b1207
	static void _0x8BB283A7888AD1AD(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x8BB283A7888AD1AD, p0, p1, p2); } // 0x8BB283A7888AD1AD b1207
	static void _0x12990818C1D35886(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x12990818C1D35886, p0, p1, p2); } // 0x12990818C1D35886 b1207
	static void _0x7C015D8BCEC72CF4(Any p0, Any p1) { invoker::Invoke<Void>(0x7C015D8BCEC72CF4, p0, p1); } // 0x7C015D8BCEC72CF4 b1207
	static void SET_PED_PATH_AVOID_FIRE(Any p0, Any p1) { invoker::Invoke<Void>(0x4455517B28441E60, p0, p1); } // 0x4455517B28441E60 b1207
	static void _0x42CFD8FD8CC8DC69(Any p0, Any p1) { invoker::Invoke<Void>(0x42CFD8FD8CC8DC69, p0, p1); } // 0x42CFD8FD8CC8DC69 b1207
	static void _0x216343750545A486(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x216343750545A486, p0, p1, p2); } // 0x216343750545A486 b1207
	static Any _0xFA30E2254461ADEB() { return invoker::Invoke<Any>(0xFA30E2254461ADEB); } // 0xFA30E2254461ADEB b1207
	static void TASK_GO_TO_COORD_ANY_MEANS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x5BC448CB78FA3E88, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x5BC448CB78FA3E88 b1207
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoker::Invoke<Void>(0x1DD45F9ECFDB1BC9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x1DD45F9ECFDB1BC9 b1207
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoker::Invoke<Void>(0xB8ECD61F531A7B02, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0xB8ECD61F531A7B02 b1207
	static void TASK_PLAY_ANIM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoker::Invoke<Void>(0xEA47FE3719165B94, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xEA47FE3719165B94 b1207
	static void TASK_PLAY_ANIM_ADVANCED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16) { invoker::Invoke<Void>(0x83CDB10EA29B370B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x83CDB10EA29B370B b1207
	static void _0xAD67214236AB1CFE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoker::Invoke<Void>(0xAD67214236AB1CFE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0xAD67214236AB1CFE b1207
	static void STOP_ANIM_TASK(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x97FF36A1D40EA00A, p0, p1, p2, p3); } // 0x97FF36A1D40EA00A b1207
	static void TASK_SCRIPTED_ANIMATION(Any p0, Any p1) { invoker::Invoke<Void>(0x126EF75F1E17ABE5, p0, p1); } // 0x126EF75F1E17ABE5 b1207
	static void PLAY_ENTITY_SCRIPTED_ANIM(Any p0, Any p1) { invoker::Invoke<Void>(0x77A1EEC547E7FCF1, p0, p1); } // 0x77A1EEC547E7FCF1 b1207
	static void STOP_ANIM_PLAYBACK(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xEE08C992D238C5D1, p0, p1, p2); } // 0xEE08C992D238C5D1 b1207
	static void _0x87B66D77D545DB66(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x87B66D77D545DB66, p0, p1, p2, p3); } // 0x87B66D77D545DB66 b1207
	static void SET_ANIM_RATE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x032D49C5E359C847, p0, p1, p2, p3); } // 0x032D49C5E359C847 b1207
	static Any _0x2D19BC4DF626CBE7(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x2D19BC4DF626CBE7, p0, p1, p2, p3); } // 0x2D19BC4DF626CBE7 b1207
	static void _0xAE72E7DF013AAA61(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xAE72E7DF013AAA61, p0, p1, p2, p3, p4, p5); } // 0xAE72E7DF013AAA61 b1207
	static void _0x72F52AA2D2B172CC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x72F52AA2D2B172CC, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x72F52AA2D2B172CC b1207
	static void _0xD61D5E1AD9876DEB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xD61D5E1AD9876DEB, p0, p1, p2, p3, p4, p5, p6); } // 0xD61D5E1AD9876DEB b1207
	static void _0xB35370D5353995CB(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xB35370D5353995CB, p0, p1, p2); } // 0xB35370D5353995CB b1207
	static Any _0x6AA3DCA2C6F5EB6D(Any p0) { return invoker::Invoke<Any>(0x6AA3DCA2C6F5EB6D, p0); } // 0x6AA3DCA2C6F5EB6D b1207
	static Any _0x804425C4BBD00883(Any p0) { return invoker::Invoke<Any>(0x804425C4BBD00883, p0); } // 0x804425C4BBD00883 b1207
	static Any _0x038B1F1674F0E242(Any p0) { return invoker::Invoke<Any>(0x038B1F1674F0E242, p0); } // 0x038B1F1674F0E242 b1207
	static Any _0xEC7E480FF8BD0BED(Any p0) { return invoker::Invoke<Any>(0xEC7E480FF8BD0BED, p0); } // 0xEC7E480FF8BD0BED b1207
	static Any _0x05A0100EA714DB68(Any p0, Any p1) { return invoker::Invoke<Any>(0x05A0100EA714DB68, p0, p1); } // 0x05A0100EA714DB68 b1207
	static Any _0xBC864A70AD55E0C1(Any p0, Any p1) { return invoker::Invoke<Any>(0xBC864A70AD55E0C1, p0, p1); } // 0xBC864A70AD55E0C1 b1207
	static Any _0x678D3226CF70B9C8(Any p0, Any p1) { return invoker::Invoke<Any>(0x678D3226CF70B9C8, p0, p1); } // 0x678D3226CF70B9C8 b1207
	static void _0x5F22926E1BCE9B08(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5F22926E1BCE9B08, p0, p1, p2); } // 0x5F22926E1BCE9B08 b1207
	static void TASK_LOOK_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x6FA46612594F7973, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x6FA46612594F7973 b1207
	static void TASK_LOOK_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x69F4BE8C8CC4796C, p0, p1, p2, p3, p4, p5); } // 0x69F4BE8C8CC4796C b1207
	static void TASK_CLEAR_LOOK_AT(Any p0) { invoker::Invoke<Void>(0x0F804F1DB19B9689, p0); } // 0x0F804F1DB19B9689 b1207
	static Any _0x508F5053E3F6F0C4(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x508F5053E3F6F0C4, p0, p1, p2, p3, p4); } // 0x508F5053E3F6F0C4 b1207
	static void OPEN_SEQUENCE_TASK(Any p0) { invoker::Invoke<Void>(0xE8854A4326B9E12B, p0); } // 0xE8854A4326B9E12B b1207
	static void CLOSE_SEQUENCE_TASK(Any p0) { invoker::Invoke<Void>(0x39E72BC99E6360CB, p0); } // 0x39E72BC99E6360CB b1207
	static void TASK_PERFORM_SEQUENCE(Any p0, Any p1) { invoker::Invoke<Void>(0x5ABA3986D90D8A3B, p0, p1); } // 0x5ABA3986D90D8A3B b1207
	static void _0x4FC0AF869D6E309D(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4FC0AF869D6E309D, p0, p1, p2, p3); } // 0x4FC0AF869D6E309D b1207
	static void CLEAR_SEQUENCE_TASK(Any p0) { invoker::Invoke<Void>(0x3841422E9C488D8C, p0); } // 0x3841422E9C488D8C b1207
	static void SET_SEQUENCE_TO_REPEAT(Any p0, Any p1) { invoker::Invoke<Void>(0x58C70CF3A41E4AE7, p0, p1); } // 0x58C70CF3A41E4AE7 b1207
	static Any GET_SEQUENCE_PROGRESS(Any p0) { return invoker::Invoke<Any>(0x00A9010CFE1E3533, p0); } // 0x00A9010CFE1E3533 b1207
	static Any GET_IS_TASK_ACTIVE(Any p0, Any p1) { return invoker::Invoke<Any>(0xB0760331C7AA4155, p0, p1); } // 0xB0760331C7AA4155 b1207
	static Any GET_SCRIPT_TASK_STATUS(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x77F1BEB8863288D5, p0, p1, p2); } // 0x77F1BEB8863288D5 b1207
	static Any _0x9FF5F9B24E870748(Any p0) { return invoker::Invoke<Any>(0x9FF5F9B24E870748, p0); } // 0x9FF5F9B24E870748 b1207
	static Any _0xA710DC5D25F8B942(Any p0, Any p1) { return invoker::Invoke<Any>(0xA710DC5D25F8B942, p0, p1); } // 0xA710DC5D25F8B942 b1207
	static void _0xE7FA07624574B79A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xE7FA07624574B79A, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xE7FA07624574B79A b1207
	static void _0x541E5B41DCA45828(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x541E5B41DCA45828, p0, p1, p2); } // 0x541E5B41DCA45828 b1207
	static Any _0x916B8E075ABC8B4E(Any p0, Any p1) { return invoker::Invoke<Any>(0x916B8E075ABC8B4E, p0, p1); } // 0x916B8E075ABC8B4E b1207
	static Any GET_ACTIVE_VEHICLE_MISSION_TYPE(Any p0) { return invoker::Invoke<Any>(0x534AEBA6E5ED4CAB, p0); } // 0x534AEBA6E5ED4CAB b1207
	static void TASK_LEAVE_ANY_VEHICLE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x504D54DF3F6F2247, p0, p1, p2); } // 0x504D54DF3F6F2247 b1207
	static Any _0xBD70108D01875299(Any p0) { return invoker::Invoke<Any>(0xBD70108D01875299, p0); } // 0xBD70108D01875299 b1207
	static void _0x14747F4A5971DE4E(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x14747F4A5971DE4E, p0, p1, p2, p3, p4); } // 0x14747F4A5971DE4E b1207
	static void TASK_AIM_GUN_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x9B53BB6E8943AF53, p0, p1, p2, p3, p4); } // 0x9B53BB6E8943AF53 b1207
	static void TASK_TURN_PED_TO_FACE_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x5AD23D40115353AC, p0, p1, p2, p3, p4, p5); } // 0x5AD23D40115353AC b1207
	static void TASK_AIM_GUN_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x6671F3EEC681BDA1, p0, p1, p2, p3, p4, p5, p6); } // 0x6671F3EEC681BDA1 b1207
	static void _0x4AF1D73861212F52(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x4AF1D73861212F52, p0, p1, p2, p3, p4, p5, p6); } // 0x4AF1D73861212F52 b1207
	static void _0xCF7569BD0FB480A0(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xCF7569BD0FB480A0, p0, p1, p2, p3, p4); } // 0xCF7569BD0FB480A0 b1207
	static void TASK_SHOOT_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x46A6CC01E0826106, p0, p1, p2, p3, p4, p5, p6); } // 0x46A6CC01E0826106 b1207
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Any p0, Any p1) { invoker::Invoke<Void>(0x7AA80209BDA643EB, p0, p1); } // 0x7AA80209BDA643EB b1207
	static void CLEAR_PED_TASKS(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE1EF3C1216AFF2CD, p0, p1, p2); } // 0xE1EF3C1216AFF2CD b1207
	static void _0x1A7D63CB1B0BB223(Any p0) { invoker::Invoke<Void>(0x1A7D63CB1B0BB223, p0); } // 0x1A7D63CB1B0BB223 b1207
	static void _0xDF94844D474F31E5(Any p0) { invoker::Invoke<Void>(0xDF94844D474F31E5, p0); } // 0xDF94844D474F31E5 b1207
	static void _0xEBA2081E0A5F4D17(Any p0) { invoker::Invoke<Void>(0xEBA2081E0A5F4D17, p0); } // 0xEBA2081E0A5F4D17 b1207
	static void _0x141BC64C8D7C5529(Any p0) { invoker::Invoke<Void>(0x141BC64C8D7C5529, p0); } // 0x141BC64C8D7C5529 b1207
	static void CLEAR_PED_SECONDARY_TASK(Any p0) { invoker::Invoke<Void>(0x176CECF6F920D707, p0); } // 0x176CECF6F920D707 b1207
	static Any TASK_EVERYONE_LEAVE_VEHICLE() { return invoker::Invoke<Any>(0x7F93691AB4B92272); } // 0x7F93691AB4B92272 b1207
	static Any _0x6F1C49F275BD25B3() { return invoker::Invoke<Any>(0x6F1C49F275BD25B3); } // 0x6F1C49F275BD25B3 b1207
	static void _0x5C8514540D27FBFB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x5C8514540D27FBFB, p0, p1, p2, p3, p4, p5); } // 0x5C8514540D27FBFB b1207
	static void TASK_GOTO_ENTITY_OFFSET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xE39B4FF4FDEBDE27, p0, p1, p2, p3, p4, p5, p6); } // 0xE39B4FF4FDEBDE27 b1207
	static void TASK_GOTO_ENTITY_OFFSET_XY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x338E7EF52B6095A9, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x338E7EF52B6095A9 b1207
	static void _0x901BD69984400F62(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x901BD69984400F62, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x901BD69984400F62 b1207
	static void _0x41B0832CA96B5351(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x41B0832CA96B5351, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x41B0832CA96B5351 b1207
	static void _0x2D532EAA142CF83F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x2D532EAA142CF83F, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x2D532EAA142CF83F b1207
	static void TASK_TURN_PED_TO_FACE_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x1DDA930A0AC38571, p0, p1, p2, p3, p4); } // 0x1DDA930A0AC38571 b1207
	static void TASK_VEHICLE_TEMP_ACTION(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xC429DCEEB339E129, p0, p1, p2, p3); } // 0xC429DCEEB339E129 b1207
	static void TASK_VEHICLE_MISSION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x659427E0EF36BCDE, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x659427E0EF36BCDE b1207
	static void _0x7F241A0D14354583(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x7F241A0D14354583, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x7F241A0D14354583 b1207
	static void _0x391073B9D3CCE2BA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x391073B9D3CCE2BA, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x391073B9D3CCE2BA b1207
	static Any _0x55CD5FDDD4335C1E() { return invoker::Invoke<Any>(0x55CD5FDDD4335C1E); } // 0x55CD5FDDD4335C1E b1207
	static void _0x089FF2FB965F0A29(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x089FF2FB965F0A29, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x089FF2FB965F0A29 b1207
	static void _0x6524A8981E8BE7C9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x6524A8981E8BE7C9, p0, p1, p2, p3, p4, p5, p6); } // 0x6524A8981E8BE7C9 b1207
	static void _0x1D125814EBC517EB(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x1D125814EBC517EB, p0, p1, p2, p3); } // 0x1D125814EBC517EB b1207
	static Any _0x583AE9AF9CEE0958() { return invoker::Invoke<Any>(0x583AE9AF9CEE0958); } // 0x583AE9AF9CEE0958 b1207
	static void TASK_VEHICLE_MISSION_PED_TARGET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x9454528DF15D657A, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x9454528DF15D657A b1207
	static void _0xA263ADBBC8056214(Any p0, Any p1) { invoker::Invoke<Void>(0xA263ADBBC8056214, p0, p1); } // 0xA263ADBBC8056214 b1207
	static void TASK_VEHICLE_ESCORT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x0FA6E4B75F302400, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x0FA6E4B75F302400 b1207
	static void TASK_BOAT_MISSION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoker::Invoke<Void>(0x15C86013127CE63F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x15C86013127CE63F b1207
	static void _0x7157B82D60E4BC46(Any p0) { invoker::Invoke<Void>(0x7157B82D60E4BC46, p0); } // 0x7157B82D60E4BC46 b1207
	static void TASK_DRIVE_BY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x2F8AF0E82773A171, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x2F8AF0E82773A171 b1207
	static Any SET_DRIVEBY_TASK_TARGET() { return invoker::Invoke<Any>(0xE5B302114D8162EE); } // 0xE5B302114D8162EE b1207
	static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Any p0) { invoker::Invoke<Void>(0xC35B5CDB2824CF69, p0); } // 0xC35B5CDB2824CF69 b1207
	static Any IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Any p0) { return invoker::Invoke<Any>(0x8785E6E40C7A8818, p0); } // 0x8785E6E40C7A8818 b1207
	static Any _0x8785E6E40C7A8819(Any p0) { return invoker::Invoke<Any>(0x8785E6E40C7A8819, p0); } // 0x8785E6E40C7A8819 b1207
	static Any _0x34C0010188D7C54A() { return invoker::Invoke<Any>(0x34C0010188D7C54A); } // 0x34C0010188D7C54A b1207
	static Any IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK() { return invoker::Invoke<Any>(0xA320EF046186FA3B); } // 0xA320EF046186FA3B b1207
	static void TASK_WARP_PED_INTO_VEHICLE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x9A7D091411C5F684, p0, p1, p2); } // 0x9A7D091411C5F684 b1207
	static void TASK_SHOOT_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x08DA95E8298AE772, p0, p1, p2, p3, p4); } // 0x08DA95E8298AE772 b1207
	static void _0x08AA95E8298AE772(Any p0, Any p1) { invoker::Invoke<Void>(0x08AA95E8298AE772, p0, p1); } // 0x08AA95E8298AE772 b1207
	static void _0x2416EC2F31F75266(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x2416EC2F31F75266, p0, p1, p2, p3, p4); } // 0x2416EC2F31F75266 b1207
	static void _0x41323F4E0C4AE94B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x41323F4E0C4AE94B, p0, p1, p2, p3, p4, p5, p6); } // 0x41323F4E0C4AE94B b1207
	static Any _0x5EA655F01D93667A(Any p0) { return invoker::Invoke<Any>(0x5EA655F01D93667A, p0); } // 0x5EA655F01D93667A b1207
	static void TASK_CLIMB(Any p0, Any p1) { invoker::Invoke<Void>(0x89D9FCC2435112F1, p0, p1); } // 0x89D9FCC2435112F1 b1207
	static void _0xDF1D85BCAF60D537(Any p0, Any p1) { invoker::Invoke<Void>(0xDF1D85BCAF60D537, p0, p1); } // 0xDF1D85BCAF60D537 b1207
	static void TASK_CLIMB_LADDER(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xB6C987F9285A3814, p0, p1, p2, p3); } // 0xB6C987F9285A3814 b1207
	static void CLEAR_PED_TASKS_IMMEDIATELY(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xAAA34F8A7CB32098, p0, p1, p2); } // 0xAAA34F8A7CB32098 b1207
	static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x89221B16730234F0, p0, p1, p2, p3); } // 0x89221B16730234F0 b1207
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Any p0, Any p1) { invoker::Invoke<Void>(0x1E982AC8716912C5, p0, p1); } // 0x1E982AC8716912C5 b1207
	static Any GET_PED_DESIRED_MOVE_BLEND_RATIO(Any p0) { return invoker::Invoke<Any>(0x8517D4A6CA8513ED, p0); } // 0x8517D4A6CA8513ED b1207
	static void TASK_GOTO_ENTITY_AIMING(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xA9DA48FAB8A76C12, p0, p1, p2, p3); } // 0xA9DA48FAB8A76C12 b1207
	static void TASK_SET_SPHERE_DEFENSIVE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x933C06518B52A9A4, p0, p1, p2, p3, p4); } // 0x933C06518B52A9A4 b1207
	static void TASK_CLEAR_DEFENSIVE_AREA(Any p0) { invoker::Invoke<Void>(0x95A6C46A31D1917D, p0); } // 0x95A6C46A31D1917D b1207
	static void TASK_PED_SLIDE_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xD04FE6765D990A06, p0, p1, p2, p3, p4, p5); } // 0xD04FE6765D990A06 b1207
	static Any _0x9420FB11B8D77948(Any p0) { return invoker::Invoke<Any>(0x9420FB11B8D77948, p0); } // 0x9420FB11B8D77948 b1207
	static Any _0x6BA606AB3A83BC4D(Any p0) { return invoker::Invoke<Any>(0x6BA606AB3A83BC4D, p0); } // 0x6BA606AB3A83BC4D b1207
	static Any ADD_COVER_POINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0xD5C12A75C7B9497F, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD5C12A75C7B9497F b1207
	static Any _0x59872EA4CBD11C56(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x59872EA4CBD11C56, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x59872EA4CBD11C56 b1207
	static void REMOVE_COVER_POINT(Any p0) { invoker::Invoke<Void>(0xAE287C923D891715, p0); } // 0xAE287C923D891715 b1207
	static Any DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xA98B8E3C088E5A31, p0, p1, p2, p3); } // 0xA98B8E3C088E5A31 b1207
	static Any GET_SCRIPTED_COVER_POINT_COORDS(Any p0) { return invoker::Invoke<Any>(0x594A1028FC2A3E85, p0); } // 0x594A1028FC2A3E85 b1207
	static Any _0xE116F6F2DA2D777E(Any p0) { return invoker::Invoke<Any>(0xE116F6F2DA2D777E, p0); } // 0xE116F6F2DA2D777E b1207
	static void _0x50AA09A0DA64E73C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x50AA09A0DA64E73C, p0, p1, p2, p3, p4, p5, p6); } // 0x50AA09A0DA64E73C b1207
	static void _0xE5831AA1E2FD147C(Any p0) { invoker::Invoke<Void>(0xE5831AA1E2FD147C, p0); } // 0xE5831AA1E2FD147C b1207
	static void TASK_COMBAT_PED(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xF166E48407BAC484, p0, p1, p2, p3); } // 0xF166E48407BAC484 b1207
	static void TASK_COMBAT_PED_TIMED(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x944F30DCB7096BDE, p0, p1, p2, p3); } // 0x944F30DCB7096BDE b1207
	static void _0xC624414FA748B9BA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xC624414FA748B9BA, p0, p1, p2, p3, p4, p5); } // 0xC624414FA748B9BA b1207
	static void TASK_SEEK_COVER_FROM_POS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x75AC2B60386D89F2, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x75AC2B60386D89F2 b1207
	static void TASK_SEEK_COVER_FROM_PED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x84D32B3BEC531324, p0, p1, p2, p3, p4, p5); } // 0x84D32B3BEC531324 b1207
	static void TASK_SEEK_COVER_TO_COVER_POINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xD43D95C7A869447F, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD43D95C7A869447F b1207
	static void TASK_SEEK_COVER_TO_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x39246A6958EF072C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x39246A6958EF072C b1207
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoker::Invoke<Void>(0x4172393E6BE1FECE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x4172393E6BE1FECE b1207
	static void _0xDF8A5855B9F9A97B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17) { invoker::Invoke<Void>(0xDF8A5855B9F9A97B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); } // 0xDF8A5855B9F9A97B b1207
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x1C6CD14A876FFE39, p0, p1, p2, p3, p4, p5, p6); } // 0x1C6CD14A876FFE39 b1207
	static void _0xA05F3F20889D7A5B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xA05F3F20889D7A5B, p0, p1, p2, p3, p4, p5, p6); } // 0xA05F3F20889D7A5B b1207
	static void _0xE017CF6E2527FE4F(Any p0, Any p1) { invoker::Invoke<Void>(0xE017CF6E2527FE4F, p0, p1); } // 0xE017CF6E2527FE4F b1207
	static void _0x098036CAB8373D36(Any p0) { invoker::Invoke<Void>(0x098036CAB8373D36, p0); } // 0x098036CAB8373D36 b1207
	static void _0x10C44F633E2D6D9E(Any p0) { invoker::Invoke<Void>(0x10C44F633E2D6D9E, p0); } // 0x10C44F633E2D6D9E b1207
	static void _0x7FB78B2199C10E92(Any p0) { invoker::Invoke<Void>(0x7FB78B2199C10E92, p0); } // 0x7FB78B2199C10E92 b1207
	static Any _0xB9FB242EACCAF30F() { return invoker::Invoke<Any>(0xB9FB242EACCAF30F); } // 0xB9FB242EACCAF30F b1207
	static void TASK_GUARD_CURRENT_POSITION(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4A58A47A72E3FCB4, p0, p1, p2, p3); } // 0x4A58A47A72E3FCB4 b1207
	static void _0x1FC9B33976BACD6C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x1FC9B33976BACD6C, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1FC9B33976BACD6C b1207
	static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xD2A207EEBDF9889B, p0, p1, p2, p3, p4, p5, p6); } // 0xD2A207EEBDF9889B b1207
	static void TASK_STAND_GUARD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xAE032F8BBA959E90, p0, p1, p2, p3, p4, p5); } // 0xAE032F8BBA959E90 b1207
	static void SET_DRIVE_TASK_CRUISE_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0x5C9B84BD7D31D908, p0, p1); } // 0x5C9B84BD7D31D908 b1207
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0x404A5AA9B9F0B746, p0, p1); } // 0x404A5AA9B9F0B746 b1207
	static void ADD_COVER_BLOCKING_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x45C597097DD7CB81, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x45C597097DD7CB81 b1207
	static void _0xEB2ED1DC3AEC0654(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xEB2ED1DC3AEC0654, p0, p1, p2, p3, p4); } // 0xEB2ED1DC3AEC0654 b1207
	static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoker::Invoke<Void>(0xDB6708C0B46F56D8); } // 0xDB6708C0B46F56D8 b1207
	static void _0x2A10538D0A005E81(Any p0, Any p1) { invoker::Invoke<Void>(0x2A10538D0A005E81, p0, p1); } // 0x2A10538D0A005E81 b1207
	static void _0x4F57397388E1DFF8() { invoker::Invoke<Void>(0x4F57397388E1DFF8); } // 0x4F57397388E1DFF8 b1207
	static void _0x7BB967F85D8CCBDB(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x7BB967F85D8CCBDB, p0, p1, p2, p3, p4); } // 0x7BB967F85D8CCBDB b1207
	static Any _0xBEDBE39B5FD98FD6(Any p0) { return invoker::Invoke<Any>(0xBEDBE39B5FD98FD6, p0); } // 0xBEDBE39B5FD98FD6 b1207
	static Any _0x94B745CE41DB58A1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x94B745CE41DB58A1, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x94B745CE41DB58A1 b1207
	static Any _0x794AB1379A74064D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x794AB1379A74064D, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x794AB1379A74064D b1207
	static Any _0xEA31F199A73801D3(Any p0) { return invoker::Invoke<Any>(0xEA31F199A73801D3, p0); } // 0xEA31F199A73801D3 b1207
	static Any _0x295514F198EFD0CA(Any p0, Any p1) { return invoker::Invoke<Any>(0x295514F198EFD0CA, p0, p1); } // 0x295514F198EFD0CA b1207
	static Any _0x8360C47380B6F351(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x8360C47380B6F351, p0, p1, p2, p3); } // 0x8360C47380B6F351 b1207
	static void _0x5AF19B6CC2115D34(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5AF19B6CC2115D34, p0, p1, p2); } // 0x5AF19B6CC2115D34 b1207
	static Any _0x8569C38D2FB80650(Any p0, Any p1) { return invoker::Invoke<Any>(0x8569C38D2FB80650, p0, p1); } // 0x8569C38D2FB80650 b1207
	static Any _0xADC45010BC17AF0E() { return invoker::Invoke<Any>(0xADC45010BC17AF0E); } // 0xADC45010BC17AF0E b1207
	static Any _0x974DA3408DEC4E79(Any p0) { return invoker::Invoke<Any>(0x974DA3408DEC4E79, p0); } // 0x974DA3408DEC4E79 b1207
	static Any _0x6EF4E31B4D5D2DA0(Any p0, Any p1) { return invoker::Invoke<Any>(0x6EF4E31B4D5D2DA0, p0, p1); } // 0x6EF4E31B4D5D2DA0 b1207
	static Any _0x841475AC96E794D1(Any p0) { return invoker::Invoke<Any>(0x841475AC96E794D1, p0); } // 0x841475AC96E794D1 b1207
	static Any _0x22CD2C33ED4467A1(Any p0) { return invoker::Invoke<Any>(0x22CD2C33ED4467A1, p0); } // 0x22CD2C33ED4467A1 b1207
	static Any _0x7467165EE97D3C68(Any p0) { return invoker::Invoke<Any>(0x7467165EE97D3C68, p0); } // 0x7467165EE97D3C68 b1207
	static Any _0x5BA659955369B0E2(Any p0) { return invoker::Invoke<Any>(0x5BA659955369B0E2, p0); } // 0x5BA659955369B0E2 b1207
	static Any _0xA8452DD321607029(Any p0, Any p1) { return invoker::Invoke<Any>(0xA8452DD321607029, p0, p1); } // 0xA8452DD321607029 b1207
	static Any _0x91CB5E431F579BA1(Any p0) { return invoker::Invoke<Any>(0x91CB5E431F579BA1, p0); } // 0x91CB5E431F579BA1 b1207
	static Any _0x370F57C47F68EBCA(Any p0) { return invoker::Invoke<Any>(0x370F57C47F68EBCA, p0); } // 0x370F57C47F68EBCA b1207
	static Any _0xB93EA7184BAA85C3(Any p0, Any p1) { return invoker::Invoke<Any>(0xB93EA7184BAA85C3, p0, p1); } // 0xB93EA7184BAA85C3 b1207
	static Any _0x6718F40313A2B5A6(Any p0) { return invoker::Invoke<Any>(0x6718F40313A2B5A6, p0); } // 0x6718F40313A2B5A6 b1207
	static void _0x2056AB38DF06825C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x2056AB38DF06825C, p0, p1, p2, p3, p4); } // 0x2056AB38DF06825C b1207
	static void _0xD3A0DA8F91612C6E(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD3A0DA8F91612C6E, p0, p1, p2); } // 0xD3A0DA8F91612C6E b1207
	static Any _0xC47D9080A9A8856A() { return invoker::Invoke<Any>(0xC47D9080A9A8856A); } // 0xC47D9080A9A8856A b1207
	static void _0xA7479FB665361EDB(Any p0, Any p1) { invoker::Invoke<Void>(0xA7479FB665361EDB, p0, p1); } // 0xA7479FB665361EDB b1207
	static void _0xE69FDA40AAC3EFC0(Any p0, Any p1) { invoker::Invoke<Void>(0xE69FDA40AAC3EFC0, p0, p1); } // 0xE69FDA40AAC3EFC0 b1207
	static Any _0x345EC3B7EBDE1CB5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x345EC3B7EBDE1CB5, p0, p1, p2, p3, p4, p5); } // 0x345EC3B7EBDE1CB5 b1207
	static Any _0xEFD875C2791EBEFD(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xEFD875C2791EBEFD, p0, p1, p2, p3); } // 0xEFD875C2791EBEFD b1207
	static Any _0x152664AA3188B193(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x152664AA3188B193, p0, p1, p2, p3, p4, p5); } // 0x152664AA3188B193 b1207
	static Any _0xE7BBC4E56B989449(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xE7BBC4E56B989449, p0, p1, p2); } // 0xE7BBC4E56B989449 b1207
	static Any _0xDF7993356F52359A(Any p0, Any p1) { return invoker::Invoke<Any>(0xDF7993356F52359A, p0, p1); } // 0xDF7993356F52359A b1207
	static Any _0xD04241BBF6D03A5E(Any p0) { return invoker::Invoke<Any>(0xD04241BBF6D03A5E, p0); } // 0xD04241BBF6D03A5E b1207
	static Any _0x188F8071F244B9B8() { return invoker::Invoke<Any>(0x188F8071F244B9B8); } // 0x188F8071F244B9B8 b1207
	static Any _0xA9E7672F8C6C6F74(Any p0) { return invoker::Invoke<Any>(0xA9E7672F8C6C6F74, p0); } // 0xA9E7672F8C6C6F74 b1207
	static Any _0x0A98A362C5A19A43(Any p0) { return invoker::Invoke<Any>(0x0A98A362C5A19A43, p0); } // 0x0A98A362C5A19A43 b1207
	static Any _0x849791EBBDBA0362(Any p0) { return invoker::Invoke<Any>(0x849791EBBDBA0362, p0); } // 0x849791EBBDBA0362 b1207
	static Any _0x640A602946A8C972(Any p0) { return invoker::Invoke<Any>(0x640A602946A8C972, p0); } // 0x640A602946A8C972 b1207
	static Any _0x01AF8A3729231A43(Any p0) { return invoker::Invoke<Any>(0x01AF8A3729231A43, p0); } // 0x01AF8A3729231A43 b1207
	static Any _0xB219612B5568E9EC(Any p0) { return invoker::Invoke<Any>(0xB219612B5568E9EC, p0); } // 0xB219612B5568E9EC b1207
	static void _0x2E20878FD208A68E(Any p0, Any p1) { invoker::Invoke<Void>(0x2E20878FD208A68E, p0, p1); } // 0x2E20878FD208A68E b1207
	static void _0x4161648394262FDF(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4161648394262FDF, p0, p1, p2, p3); } // 0x4161648394262FDF b1207
	static void _0x9C8F42A5D1859DC1(Any p0) { invoker::Invoke<Void>(0x9C8F42A5D1859DC1, p0); } // 0x9C8F42A5D1859DC1 b1207
	static void _0x81948DFE4F5A0283(Any p0) { invoker::Invoke<Void>(0x81948DFE4F5A0283, p0); } // 0x81948DFE4F5A0283 b1207
	static void _0xCCDAE6324B6A821C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0xCCDAE6324B6A821C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xCCDAE6324B6A821C b1207
	static void _0x0F6641449DD86FBE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x0F6641449DD86FBE, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x0F6641449DD86FBE b1207
	static void _0x524B54361229154F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x524B54361229154F, p0, p1, p2, p3, p4, p5, p6); } // 0x524B54361229154F b1207
	static void _0xA917E39F2CEFD215(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xA917E39F2CEFD215, p0, p1, p2, p3, p4, p5, p6); } // 0xA917E39F2CEFD215 b1207
	static void _0x4D1F61FC34AF3CD1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoker::Invoke<Void>(0x4D1F61FC34AF3CD1, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x4D1F61FC34AF3CD1 b1207
	static Any _0xF97F462779B31786(Any p0) { return invoker::Invoke<Any>(0xF97F462779B31786, p0); } // 0xF97F462779B31786 b1207
	static Any _0x6C269F673C47031E(Any p0) { return invoker::Invoke<Any>(0x6C269F673C47031E, p0); } // 0x6C269F673C47031E b1207
	static void _0x9667CCE29BFA0780(Any p0) { invoker::Invoke<Void>(0x9667CCE29BFA0780, p0); } // 0x9667CCE29BFA0780 b1207
	static Any _0x00FFE0F85253C572() { return invoker::Invoke<Any>(0x00FFE0F85253C572); } // 0x00FFE0F85253C572 b1207
	static void _0x322BFDEA666E2B0E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x322BFDEA666E2B0E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x322BFDEA666E2B0E b1207
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x58E2E0F23F6B76C3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x58E2E0F23F6B76C3 b1207
	static void _0x3774B03456DD6106(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x3774B03456DD6106, p0, p1, p2, p3, p4); } // 0x3774B03456DD6106 b1207
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x9FDA1B3D7E7028B3, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x9FDA1B3D7E7028B3 b1207
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x97A28E63F0BA5631, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x97A28E63F0BA5631 b1207
	static Any _0xFDECCA06E8B81346(Any p0) { return invoker::Invoke<Any>(0xFDECCA06E8B81346, p0); } // 0xFDECCA06E8B81346 b1207
	static Any _0x2D657B10F211C572(Any p0, Any p1) { return invoker::Invoke<Any>(0x2D657B10F211C572, p0, p1); } // 0x2D657B10F211C572 b1207
	static void _0x37FB1C870E2EC2C6(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x37FB1C870E2EC2C6, p0, p1, p2, p3); } // 0x37FB1C870E2EC2C6 b1207
	static Any _0x79197F7D2BB5E73A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x79197F7D2BB5E73A, p0, p1, p2, p3, p4, p5); } // 0x79197F7D2BB5E73A b1207
	static Any DOES_SCENARIO_EXIST_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x5A59271FFADD33C1, p0, p1, p2, p3, p4, p5, p6); } // 0x5A59271FFADD33C1 b1207
	static Any _0x6EEAD6AF637DA752(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x6EEAD6AF637DA752, p0, p1, p2, p3, p4, p5); } // 0x6EEAD6AF637DA752 b1207
	static Any _0xF533D68FF970D190(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xF533D68FF970D190, p0, p1, p2, p3, p4, p5, p6); } // 0xF533D68FF970D190 b1207
	static Any _0x0D322AEF8878B8FE() { return invoker::Invoke<Any>(0x0D322AEF8878B8FE); } // 0x0D322AEF8878B8FE b1207
	static Any _0xD508FA229F1C4900(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xD508FA229F1C4900, p0, p1, p2, p3, p4, p5); } // 0xD508FA229F1C4900 b1207
	static void _0xB8E213D02F37947D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xB8E213D02F37947D, p0, p1, p2, p3, p4, p5, p6); } // 0xB8E213D02F37947D b1207
	static Any IS_SCENARIO_OCCUPIED(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x788756D73AC2E07C, p0, p1, p2, p3, p4); } // 0x788756D73AC2E07C b1207
	static Any PED_HAS_USE_SCENARIO_TASK(Any p0) { return invoker::Invoke<Any>(0x295E3CCEC879CCD7, p0); } // 0x295E3CCEC879CCD7 b1207
	static Any _0x02EBBB3989B7E695(Any p0) { return invoker::Invoke<Any>(0x02EBBB3989B7E695, p0); } // 0x02EBBB3989B7E695 b1207
	static Any _0x90703A8F75EE4ABD(Any p0, Any p1) { return invoker::Invoke<Any>(0x90703A8F75EE4ABD, p0, p1); } // 0x90703A8F75EE4ABD b1207
	static void _0xD999E379265A4501(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD999E379265A4501, p0, p1, p2); } // 0xD999E379265A4501 b1207
	static void PLAY_ANIM_ON_RUNNING_SCENARIO(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x748040460F8DF5DC, p0, p1, p2); } // 0x748040460F8DF5DC b1207
	static Any _0x74F0209674864CBD() { return invoker::Invoke<Any>(0x74F0209674864CBD); } // 0x74F0209674864CBD b1207
	static Any _0xE1C105E6BBA48270() { return invoker::Invoke<Any>(0xE1C105E6BBA48270); } // 0xE1C105E6BBA48270 b1207
	static Any _0x1AC5A8AB50CFAA33(Any p0) { return invoker::Invoke<Any>(0x1AC5A8AB50CFAA33, p0); } // 0x1AC5A8AB50CFAA33 b1207
	static void _0xBEEFBB608D2AA68A(Any p0) { invoker::Invoke<Void>(0xBEEFBB608D2AA68A, p0); } // 0xBEEFBB608D2AA68A b1207
	static void _0x19BC99C678FBA139(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x19BC99C678FBA139, p0, p1, p2); } // 0x19BC99C678FBA139 b1207
	static void _0x5D9B0BAAF04CF65B(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x5D9B0BAAF04CF65B, p0, p1, p2, p3); } // 0x5D9B0BAAF04CF65B b1207
	static void _0x9B6A58FDB0024F12(Any p0, Any p1) { invoker::Invoke<Void>(0x9B6A58FDB0024F12, p0, p1); } // 0x9B6A58FDB0024F12 b1207
	static void _0xBC3F847AE2C3DC65(Any p0, Any p1) { invoker::Invoke<Void>(0xBC3F847AE2C3DC65, p0, p1); } // 0xBC3F847AE2C3DC65 b1207
	static void _0x450080DDEDB91258(Any p0, Any p1) { invoker::Invoke<Void>(0x450080DDEDB91258, p0, p1); } // 0x450080DDEDB91258 b1207
	static void _0x954451EA2D2120FB(Any p0, Any p1) { invoker::Invoke<Void>(0x954451EA2D2120FB, p0, p1); } // 0x954451EA2D2120FB b1207
	static void _0x0F4F6C4CE471259D(Any p0, Any p1) { invoker::Invoke<Void>(0x0F4F6C4CE471259D, p0, p1); } // 0x0F4F6C4CE471259D b1207
	static void _0xB8E3486D107F4194(Any p0, Any p1) { invoker::Invoke<Void>(0xB8E3486D107F4194, p0, p1); } // 0xB8E3486D107F4194 b1207
	static void _0x827A58CED9D4D5B4(Any p0, Any p1) { invoker::Invoke<Void>(0x827A58CED9D4D5B4, p0, p1); } // 0x827A58CED9D4D5B4 b1207
	static void _0x4A7D73989F52EB37(Any p0, Any p1) { invoker::Invoke<Void>(0x4A7D73989F52EB37, p0, p1); } // 0x4A7D73989F52EB37 b1207
	static void _0xB79817DB31FF72B9(Any p0, Any p1) { invoker::Invoke<Void>(0xB79817DB31FF72B9, p0, p1); } // 0xB79817DB31FF72B9 b1207
	static void _0x65D281985F2BDFC2(Any p0, Any p1) { invoker::Invoke<Void>(0x65D281985F2BDFC2, p0, p1); } // 0x65D281985F2BDFC2 b1207
	static void _0x885D19AC2B6FBFF4(Any p0, Any p1) { invoker::Invoke<Void>(0x885D19AC2B6FBFF4, p0, p1); } // 0x885D19AC2B6FBFF4 b1207
	static void _0x2064B33F6E6B92D4(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x2064B33F6E6B92D4, p0, p1, p2, p3); } // 0x2064B33F6E6B92D4 b1207
	static void _0xCE4E669400E5F8AA(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xCE4E669400E5F8AA, p0, p1, p2, p3); } // 0xCE4E669400E5F8AA b1207
	static void _0x2EB977293923C723(Any p0, Any p1) { invoker::Invoke<Void>(0x2EB977293923C723, p0, p1); } // 0x2EB977293923C723 b1207
	static void _0xE9225354FB7437A7(Any p0, Any p1) { invoker::Invoke<Void>(0xE9225354FB7437A7, p0, p1); } // 0xE9225354FB7437A7 b1207
	static void _0x764DB5A48390FBAD(Any p0, Any p1) { invoker::Invoke<Void>(0x764DB5A48390FBAD, p0, p1); } // 0x764DB5A48390FBAD b1207
	static void _0x8F8C84363810691A(Any p0, Any p1) { invoker::Invoke<Void>(0x8F8C84363810691A, p0, p1); } // 0x8F8C84363810691A b1207
	static void _0xFF8AFCA532B500D4(Any p0, Any p1) { invoker::Invoke<Void>(0xFF8AFCA532B500D4, p0, p1); } // 0xFF8AFCA532B500D4 b1207
	static Any _0xFE5D28B9B7837CC1(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xFE5D28B9B7837CC1, p0, p1, p2, p3); } // 0xFE5D28B9B7837CC1 b1207
	static void _0x2B8AF29A78024BD3(Any p0) { invoker::Invoke<Void>(0x2B8AF29A78024BD3, p0); } // 0x2B8AF29A78024BD3 b1207
	static Any _0x0365000D8BF86531(Any p0) { return invoker::Invoke<Any>(0x0365000D8BF86531, p0); } // 0x0365000D8BF86531 b1207
	static Any _0x865732725536EE39(Any p0) { return invoker::Invoke<Any>(0x865732725536EE39, p0); } // 0x865732725536EE39 b1207
	static void _0x0E184495B27BB57D() { invoker::Invoke<Void>(0x0E184495B27BB57D); } // 0x0E184495B27BB57D b1207
	static Any DOES_SCENARIO_GROUP_EXIST(Any p0) { return invoker::Invoke<Any>(0xF9034C136C9E00D3, p0); } // 0xF9034C136C9E00D3 b1207
	static Any _0x76E98B52369A289C(Any p0) { return invoker::Invoke<Any>(0x76E98B52369A289C, p0); } // 0x76E98B52369A289C b1207
	static Any IS_SCENARIO_GROUP_ENABLED(Any p0) { return invoker::Invoke<Any>(0x367A09DED4E05B99, p0); } // 0x367A09DED4E05B99 b1207
	static Any _0xDCC374913DE6AAA6(Any p0) { return invoker::Invoke<Any>(0xDCC374913DE6AAA6, p0); } // 0xDCC374913DE6AAA6 b1207
	static void SET_SCENARIO_GROUP_ENABLED(Any p0, Any p1) { invoker::Invoke<Void>(0x02C8E5B49848664E, p0, p1); } // 0x02C8E5B49848664E b1207
	static void _0x9925EDDB6EAB88CD(Any p0, Any p1) { invoker::Invoke<Void>(0x9925EDDB6EAB88CD, p0, p1); } // 0x9925EDDB6EAB88CD b1207
	static void RESET_SCENARIO_GROUPS_ENABLED() { invoker::Invoke<Void>(0xDD902D0349AFAD3A); } // 0xDD902D0349AFAD3A b1207
	static void _0x358A1A751B335A11(Any p0) { invoker::Invoke<Void>(0x358A1A751B335A11, p0); } // 0x358A1A751B335A11 b1207
	static void _0x444C910A5058E568(Any p0, Any p1) { invoker::Invoke<Void>(0x444C910A5058E568, p0, p1); } // 0x444C910A5058E568 b1207
	static Any _0xE55478C5EDF70AC2(Any p0) { return invoker::Invoke<Any>(0xE55478C5EDF70AC2, p0); } // 0xE55478C5EDF70AC2 b1207
	static Any _0x0CC36D4156006509(Any p0) { return invoker::Invoke<Any>(0x0CC36D4156006509, p0); } // 0x0CC36D4156006509 b1207
	static void _0xEEE4829304F93EEE(Any p0, Any p1) { invoker::Invoke<Void>(0xEEE4829304F93EEE, p0, p1); } // 0xEEE4829304F93EEE b1207
	static void _0x5A40040BB5AE3EA2(Any p0) { invoker::Invoke<Void>(0x5A40040BB5AE3EA2, p0); } // 0x5A40040BB5AE3EA2 b1207
	static Any IS_SCENARIO_TYPE_ENABLED(Any p0) { return invoker::Invoke<Any>(0x3A815DB3EA088722, p0); } // 0x3A815DB3EA088722 b1207
	static void SET_SCENARIO_TYPE_ENABLED(Any p0, Any p1) { invoker::Invoke<Void>(0xEB47EC4E34FB7EE1, p0, p1); } // 0xEB47EC4E34FB7EE1 b1207
	static void _0xD00E50E673802D71(Any p0, Any p1) { invoker::Invoke<Void>(0xD00E50E673802D71, p0, p1); } // 0xD00E50E673802D71 b1207
	static void RESET_SCENARIO_TYPES_ENABLED() { invoker::Invoke<Void>(0x0D40EE2A7F2B2D6D); } // 0x0D40EE2A7F2B2D6D b1207
	static Any _0x2D0571BB55879DA2(Any p0) { return invoker::Invoke<Any>(0x2D0571BB55879DA2, p0); } // 0x2D0571BB55879DA2 b1207
	static Any _0xA92450B5AE687AAF(Any p0) { return invoker::Invoke<Any>(0xA92450B5AE687AAF, p0); } // 0xA92450B5AE687AAF b1207
	static Any IS_PED_ACTIVE_IN_SCENARIO(Any p0, Any p1) { return invoker::Invoke<Any>(0xAA135F9482C82CC3, p0, p1); } // 0xAA135F9482C82CC3 b1207
	static Any _0x0C3CB2E600C8977D(Any p0, Any p1) { return invoker::Invoke<Any>(0x0C3CB2E600C8977D, p0, p1); } // 0x0C3CB2E600C8977D b1207
	static Any _0x2C497BDEF897C6DF(Any p0) { return invoker::Invoke<Any>(0x2C497BDEF897C6DF, p0); } // 0x2C497BDEF897C6DF b1207
	static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x4CF5F55DAC3280A0, p0, p1, p2, p3, p4, p5, p6); } // 0x4CF5F55DAC3280A0 b1207
	static Any _0xB5BC69D9C4060BC3() { return invoker::Invoke<Any>(0xB5BC69D9C4060BC3); } // 0xB5BC69D9C4060BC3 b1207
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x7BF835BB9E2698C8, p0, p1, p2, p3); } // 0x7BF835BB9E2698C8 b1207
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x2BBA30B854534A0C, p0, p1, p2, p3); } // 0x2BBA30B854534A0C b1207
	static void _0x8182B561A29BD597(Any p0, Any p1) { invoker::Invoke<Void>(0x8182B561A29BD597, p0, p1); } // 0x8182B561A29BD597 b1207
	static void _0x30B391915538EBE2(Any p0) { invoker::Invoke<Void>(0x30B391915538EBE2, p0); } // 0x30B391915538EBE2 b1207
	static void TASK_THROW_PROJECTILE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x7285951DBF6B5A51, p0, p1, p2, p3); } // 0x7285951DBF6B5A51 b1207
	static void _0x7282356DFF6B5A51(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x7282356DFF6B5A51, p0, p1, p2, p3); } // 0x7282356DFF6B5A51 b1207
	static void _0xD6401A1B2F63BED6(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD6401A1B2F63BED6, p0, p1, p2); } // 0xD6401A1B2F63BED6 b1207
	static void TASK_SWAP_WEAPON(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xA21C51255B205245, p0, p1, p2, p3, p4); } // 0xA21C51255B205245 b1207
	static void _0x0000A8ACDC2E1B6A(Any p0, Any p1) { invoker::Invoke<Void>(0x0000A8ACDC2E1B6A, p0, p1); } // 0x0000A8ACDC2E1B6A b1207
	static void TASK_RELOAD_WEAPON(Any p0, Any p1) { invoker::Invoke<Void>(0x62D2916F56B9CD2D, p0, p1); } // 0x62D2916F56B9CD2D b1207
	static void _0x55B0ECFD98596624(Any p0, Any p1) { invoker::Invoke<Void>(0x55B0ECFD98596624, p0, p1); } // 0x55B0ECFD98596624 b1207
	static Any IS_PED_GETTING_UP(Any p0) { return invoker::Invoke<Any>(0x2A74E1D5F2F00EEC, p0); } // 0x2A74E1D5F2F00EEC b1207
	static void _0x8C038A39C4A4B6D6(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x8C038A39C4A4B6D6, p0, p1, p2); } // 0x8C038A39C4A4B6D6 b1207
	static Any _0x30A768C30D385EC5() { return invoker::Invoke<Any>(0x30A768C30D385EC5); } // 0x30A768C30D385EC5 b1207
	static Any IS_PED_IN_WRITHE(Any p0) { return invoker::Invoke<Any>(0xDEB6D52126E7D640, p0); } // 0xDEB6D52126E7D640 b1207
	static Any _0x3F8387DB1B9F31B7(Any p0, Any p1) { return invoker::Invoke<Any>(0x3F8387DB1B9F31B7, p0, p1); } // 0x3F8387DB1B9F31B7 b1207
	static Any _0x756C7B4C43DF0422(Any p0) { return invoker::Invoke<Any>(0x756C7B4C43DF0422, p0); } // 0x756C7B4C43DF0422 b1207
	static Any _0x351F74ED6177EBE7() { return invoker::Invoke<Any>(0x351F74ED6177EBE7); } // 0x351F74ED6177EBE7 b1207
	static Any _0x6C50B9DCCCA70023() { return invoker::Invoke<Any>(0x6C50B9DCCCA70023); } // 0x6C50B9DCCCA70023 b1207
	static void _0x356088527D9EBAAD(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x356088527D9EBAAD, p0, p1, p2); } // 0x356088527D9EBAAD b1207
	static void OPEN_PATROL_ROUTE(Any p0) { invoker::Invoke<Void>(0xA36BFB5EE89F3D82, p0); } // 0xA36BFB5EE89F3D82 b1207
	static void CLOSE_PATROL_ROUTE() { invoker::Invoke<Void>(0xB043ECA801B8CBC1); } // 0xB043ECA801B8CBC1 b1207
	static void ADD_PATROL_ROUTE_NODE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x8EDF950167586B7C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x8EDF950167586B7C b1207
	static void ADD_PATROL_ROUTE_LINK(Any p0, Any p1) { invoker::Invoke<Void>(0x23083260DEC3A551, p0, p1); } // 0x23083260DEC3A551 b1207
	static void CREATE_PATROL_ROUTE() { invoker::Invoke<Void>(0xAF8A443CCC8018DC); } // 0xAF8A443CCC8018DC b1207
	static void DELETE_PATROL_ROUTE(Any p0) { invoker::Invoke<Void>(0x7767DD9D65E91319, p0); } // 0x7767DD9D65E91319 b1207
	static Any _0x643FD1556F621772(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x643FD1556F621772, p0, p1, p2); } // 0x643FD1556F621772 b1207
	static void TASK_PATROL(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xBDA5DF49D080FE4E, p0, p1, p2, p3, p4); } // 0xBDA5DF49D080FE4E b1207
	static void _0x964B06C88E4C86DB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x964B06C88E4C86DB, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x964B06C88E4C86DB b1207
	static void TASK_STAY_IN_COVER(Any p0) { invoker::Invoke<Void>(0xE5DA8615A6180789, p0); } // 0xE5DA8615A6180789 b1207
	static void TASK_VEHICLE_SHOOT_AT_PED(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x10AB107B887214D8, p0, p1, p2); } // 0x10AB107B887214D8 b1207
	static void TASK_VEHICLE_AIM_AT_PED(Any p0, Any p1) { invoker::Invoke<Void>(0xE41885592B08B097, p0, p1); } // 0xE41885592B08B097 b1207
	static void TASK_VEHICLE_SHOOT_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x5190796ED39C9B6D, p0, p1, p2, p3, p4); } // 0x5190796ED39C9B6D b1207
	static void _0xAF2EF28CE3084505(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xAF2EF28CE3084505, p0, p1, p2, p3); } // 0xAF2EF28CE3084505 b1207
	static void TASK_VEHICLE_AIM_AT_COORD(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x447C1E9EF844BC0F, p0, p1, p2, p3); } // 0x447C1E9EF844BC0F b1207
	static void TASK_VEHICLE_GOTO_NAVMESH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x195AEEB13CEFE2EE, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x195AEEB13CEFE2EE b1207
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { invoker::Invoke<Void>(0x11315AB3385B8AC0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } // 0x11315AB3385B8AC0 b1207
	static void _0x639C0425A0B4E77E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { invoker::Invoke<Void>(0x639C0425A0B4E77E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } // 0x639C0425A0B4E77E b1207
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoker::Invoke<Void>(0xB2A16444EAD9AE47, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0xB2A16444EAD9AE47 b1207
	static void _0x78426D0982D083C9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoker::Invoke<Void>(0x78426D0982D083C9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x78426D0982D083C9 b1207
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x97465886D35210E9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x97465886D35210E9 b1207
	static void _0xCEF0117C233026AD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0xCEF0117C233026AD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xCEF0117C233026AD b1207
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoker::Invoke<Void>(0xA55547801EB331FC, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0xA55547801EB331FC b1207
	static void _0x87BD711FC31EA273(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoker::Invoke<Void>(0x87BD711FC31EA273, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x87BD711FC31EA273 b1207
	static void SET_HIGH_FALL_TASK(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x8C825BDC7741D37C, p0, p1, p2, p3); } // 0x8C825BDC7741D37C b1207
	static void _0x5217B7B6DB78E1F3(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x5217B7B6DB78E1F3, p0, p1, p2, p3, p4); } // 0x5217B7B6DB78E1F3 b1207
	static void REQUEST_WAYPOINT_RECORDING(Any p0) { invoker::Invoke<Void>(0x9EEFB62EB27B5792, p0); } // 0x9EEFB62EB27B5792 b1207
	static Any GET_IS_WAYPOINT_RECORDING_LOADED(Any p0) { return invoker::Invoke<Any>(0xCB4E8BE8A0063C5D, p0); } // 0xCB4E8BE8A0063C5D b1207
	static void REMOVE_WAYPOINT_RECORDING(Any p0) { invoker::Invoke<Void>(0xFF1B8B4AA1C25DC8, p0); } // 0xFF1B8B4AA1C25DC8 b1207
	static Any _0xF718931A82EEB898() { return invoker::Invoke<Any>(0xF718931A82EEB898); } // 0xF718931A82EEB898 b1207
	static Any WAYPOINT_RECORDING_GET_NUM_POINTS(Any p0, Any p1) { return invoker::Invoke<Any>(0x5343532C01A07234, p0, p1); } // 0x5343532C01A07234 b1207
	static Any WAYPOINT_RECORDING_GET_COORD(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x2FB897405C90B361, p0, p1, p2); } // 0x2FB897405C90B361 b1207
	static Any WAYPOINT_RECORDING_GET_SPEED_AT_POINT(Any p0, Any p1) { return invoker::Invoke<Any>(0x005622AEBC33ACA9, p0, p1); } // 0x005622AEBC33ACA9 b1207
	static Any WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xB629A298081F876F, p0, p1, p2, p3, p4); } // 0xB629A298081F876F b1207
	static void _0x0CFC13EBC19BCA52(Any p0, Any p1) { invoker::Invoke<Void>(0x0CFC13EBC19BCA52, p0, p1); } // 0x0CFC13EBC19BCA52 b1207
	static void TASK_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x0759591819534F7B, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x0759591819534F7B b1207
	static void _0xBE9B0520BD7C445B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xBE9B0520BD7C445B, p0, p1, p2, p3, p4, p5, p6); } // 0xBE9B0520BD7C445B b1207
	static void _0x4D2B787BAE9AB760(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0x4D2B787BAE9AB760, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x4D2B787BAE9AB760 b1207
	static Any IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Any p0, Any p1) { return invoker::Invoke<Any>(0xE03B3F2D3DC59B64, p0, p1); } // 0xE03B3F2D3DC59B64 b1207
	static Any GET_PED_WAYPOINT_PROGRESS(Any p0) { return invoker::Invoke<Any>(0x2720AAA75001E094, p0); } // 0x2720AAA75001E094 b1207
	static Any GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoker::Invoke<Any>(0xE6A877C64CAF1BC5, p0); } // 0xE6A877C64CAF1BC5 b1207
	static Any SET_PED_WAYPOINT_ROUTE_OFFSET(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xED98E10B0AFCE4B4, p0, p1, p2, p3); } // 0xED98E10B0AFCE4B4 b1207
	static Any GET_WAYPOINT_DISTANCE_ALONG_ROUTE(Any p0, Any p1) { return invoker::Invoke<Any>(0xA5B769058763E497, p0, p1); } // 0xA5B769058763E497 b1207
	static Any _0x3ACC128510142B9D(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x3ACC128510142B9D, p0, p1, p2, p3); } // 0x3ACC128510142B9D b1207
	static Any WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoker::Invoke<Any>(0x701375A7D43F01CB, p0); } // 0x701375A7D43F01CB b1207
	static Any _0xD73A5D1F0325C71C() { return invoker::Invoke<Any>(0xD73A5D1F0325C71C); } // 0xD73A5D1F0325C71C b1207
	static Any _0xA5B94DF8AF058F46(Any p0) { return invoker::Invoke<Any>(0xA5B94DF8AF058F46, p0); } // 0xA5B94DF8AF058F46 b1207
	static void WAYPOINT_PLAYBACK_PAUSE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x0F342546AA06FED5, p0, p1, p2, p3); } // 0x0F342546AA06FED5 b1207
	static void WAYPOINT_PLAYBACK_RESUME(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x244F70C84C547D2D, p0, p1, p2, p3); } // 0x244F70C84C547D2D b1207
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x7D7D2B47FA788E85, p0, p1, p2, p3, p4); } // 0x7D7D2B47FA788E85 b1207
	static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoker::Invoke<Void>(0x6599D834B12D0800, p0); } // 0x6599D834B12D0800 b1207
	static Any _0xD39A2F3E7FCAFF08(Any p0) { return invoker::Invoke<Any>(0xD39A2F3E7FCAFF08, p0); } // 0xD39A2F3E7FCAFF08 b1207
	static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x5A353B8E6B1095B5, p0, p1, p2, p3, p4); } // 0x5A353B8E6B1095B5 b1207
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x20E330937C399D29, p0, p1, p2, p3); } // 0x20E330937C399D29 b1207
	static Any _0x4F158205E0C74385() { return invoker::Invoke<Any>(0x4F158205E0C74385); } // 0x4F158205E0C74385 b1207
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x8968400D900ED8B3, p0, p1, p2, p3, p4, p5); } // 0x8968400D900ED8B3 b1207
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xE70BA7B90F8390DC, p0, p1, p2, p3, p4); } // 0xE70BA7B90F8390DC b1207
	static void _0x4AF458F71C1196D2(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x4AF458F71C1196D2, p0, p1, p2, p3, p4); } // 0x4AF458F71C1196D2 b1207
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x057A25CFCC9DB671, p0, p1, p2, p3, p4, p5, p6); } // 0x057A25CFCC9DB671 b1207
	static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Any p0) { invoker::Invoke<Void>(0x47EFA040EBB8E2EA, p0); } // 0x47EFA040EBB8E2EA b1207
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(Any p0) { invoker::Invoke<Void>(0x3548536485DD792B, p0); } // 0x3548536485DD792B b1207
	static Any _0x5C885E0978B6AD60(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x5C885E0978B6AD60, p0, p1, p2, p3); } // 0x5C885E0978B6AD60 b1207
	static Any ASSISTED_MOVEMENT_IS_ROUTE_LOADED(Any p0) { return invoker::Invoke<Any>(0x60F9A4393A21F741, p0); } // 0x60F9A4393A21F741 b1207
	static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(Any p0, Any p1) { invoker::Invoke<Void>(0xD5002D78B7162E1B, p0, p1); } // 0xD5002D78B7162E1B b1207
	static void _0x295F03DC97BEEBC1(Any p0, Any p1) { invoker::Invoke<Void>(0x295F03DC97BEEBC1, p0, p1); } // 0x295F03DC97BEEBC1 b1207
	static void _0xB5C51DD544F14F58(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xB5C51DD544F14F58, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xB5C51DD544F14F58 b1207
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x3123FAA6DB1CF7ED, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x3123FAA6DB1CF7ED b1207
	static void _0x041D17A9E221AE30(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x041D17A9E221AE30, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x041D17A9E221AE30 b1207
	static Any IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0, Any p1) { return invoker::Invoke<Any>(0xF5134943EA29868C, p0, p1); } // 0xF5134943EA29868C b1207
	static Any GET_VEHICLE_WAYPOINT_PROGRESS(Any p0) { return invoker::Invoke<Any>(0x9824CFF8FC66E159, p0); } // 0x9824CFF8FC66E159 b1207
	static Any GET_VEHICLE_WAYPOINT_TARGET_POINT(Any p0) { return invoker::Invoke<Any>(0x416B62AC8B9E5BBD, p0); } // 0x416B62AC8B9E5BBD b1207
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Any p0) { invoker::Invoke<Void>(0x8A4E6AC373666BC5, p0); } // 0x8A4E6AC373666BC5 b1207
	static Any _0x4D6D30AB18B0B089(Any p0) { return invoker::Invoke<Any>(0x4D6D30AB18B0B089, p0); } // 0x4D6D30AB18B0B089 b1207
	static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Any p0) { invoker::Invoke<Void>(0xDC04FCAA7839D492, p0); } // 0xDC04FCAA7839D492 b1207
	static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoker::Invoke<Void>(0x5CEB25A7D2848963, p0); } // 0x5CEB25A7D2848963 b1207
	static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0x121F0593E0A431D7, p0, p1); } // 0x121F0593E0A431D7 b1207
	static Any _0x3DC971EB22F73447() { return invoker::Invoke<Any>(0x3DC971EB22F73447); } // 0x3DC971EB22F73447 b1207
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Any p0, Any p1) { invoker::Invoke<Void>(0x90D2156198831D69, p0, p1); } // 0x90D2156198831D69 b1207
	static void _0x4C3FA937B44A90FA(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4C3FA937B44A90FA, p0, p1, p2, p3); } // 0x4C3FA937B44A90FA b1207
	static void _0x17293C633C8AC019(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x17293C633C8AC019, p0, p1, p2, p3); } // 0x17293C633C8AC019 b1207
	static void TASK_FORCE_MOTION_STATE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4F056E1AFFEF17AB, p0, p1, p2); } // 0x4F056E1AFFEF17AB b1207
	static void TASK_MOVE_NETWORK_BY_NAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x2D537BA194896636, p0, p1, p2, p3, p4, p5); } // 0x2D537BA194896636 b1207
	static void _0x139805C2A67C4795(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x139805C2A67C4795, p0, p1, p2, p3, p4, p5, p6); } // 0x139805C2A67C4795 b1207
	static void _0x7B6A04F98BBAFB2C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoker::Invoke<Void>(0x7B6A04F98BBAFB2C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x7B6A04F98BBAFB2C b1207
	static void _0xF92171093BCABED4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17) { invoker::Invoke<Void>(0xF92171093BCABED4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); } // 0xF92171093BCABED4 b1207
	static Any IS_TASK_MOVE_NETWORK_ACTIVE(Any p0) { return invoker::Invoke<Any>(0x921CE12C489C4C41, p0); } // 0x921CE12C489C4C41 b1207
	static Any _0xCACC2F9D994504B7(Any p0) { return invoker::Invoke<Any>(0xCACC2F9D994504B7, p0); } // 0xCACC2F9D994504B7 b1207
	static Any IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Any p0) { return invoker::Invoke<Any>(0x30ED88D5E0C56A37, p0); } // 0x30ED88D5E0C56A37 b1207
	static void REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Any p0, Any p1) { invoker::Invoke<Void>(0xD01015C7316AE176, p0, p1); } // 0xD01015C7316AE176 b1207
	static Any GET_TASK_MOVE_NETWORK_STATE(Any p0) { return invoker::Invoke<Any>(0x717E4D1F2048376D, p0); } // 0x717E4D1F2048376D b1207
	static Any _0xE9A6400D1A0E7A55(Any p0) { return invoker::Invoke<Any>(0xE9A6400D1A0E7A55, p0); } // 0xE9A6400D1A0E7A55 b1207
	static void _0x615DC4A82E90BB48(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x615DC4A82E90BB48, p0, p1, p2); } // 0x615DC4A82E90BB48 b1207
	static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD5BB4025AE449A4E, p0, p1, p2); } // 0xD5BB4025AE449A4E b1207
	static Any _0x099D4A855D53B03B() { return invoker::Invoke<Any>(0x099D4A855D53B03B); } // 0x099D4A855D53B03B b1207
	static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xB0A6CFD2C69C1088, p0, p1, p2); } // 0xB0A6CFD2C69C1088 b1207
	static void _0x4662BFE01938D98D(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x4662BFE01938D98D, p0, p1, p2, p3, p4); } // 0x4662BFE01938D98D b1207
	static Any _0x844CEEE428EA35B0(Any p0, Any p1) { return invoker::Invoke<Any>(0x844CEEE428EA35B0, p0, p1); } // 0x844CEEE428EA35B0 b1207
	static Any GET_TASK_MOVE_NETWORK_EVENT(Any p0, Any p1) { return invoker::Invoke<Any>(0xB4F47213DF45A64C, p0, p1); } // 0xB4F47213DF45A64C b1207
	static void _0x9585FF23C4B8EDE0(Any p0, Any p1) { invoker::Invoke<Void>(0x9585FF23C4B8EDE0, p0, p1); } // 0x9585FF23C4B8EDE0 b1207
	static void _0xEAF87DA2BE78A15B(Any p0, Any p1) { invoker::Invoke<Void>(0xEAF87DA2BE78A15B, p0, p1); } // 0xEAF87DA2BE78A15B b1207
	static void _0x3BBEECC5B8F35318(Any p0, Any p1) { invoker::Invoke<Void>(0x3BBEECC5B8F35318, p0, p1); } // 0x3BBEECC5B8F35318 b1207
	static Any IS_MOVE_BLEND_RATIO_STILL(Any p0) { return invoker::Invoke<Any>(0x349CE7B56DAFD95C, p0); } // 0x349CE7B56DAFD95C b1207
	static Any IS_MOVE_BLEND_RATIO_WALKING(Any p0) { return invoker::Invoke<Any>(0xF133BBBE91E1691F, p0); } // 0xF133BBBE91E1691F b1207
	static Any IS_MOVE_BLEND_RATIO_RUNNING(Any p0) { return invoker::Invoke<Any>(0xD4D8636C0199A939, p0); } // 0xD4D8636C0199A939 b1207
	static Any IS_MOVE_BLEND_RATIO_SPRINTING(Any p0) { return invoker::Invoke<Any>(0x24A2AD74FA9814E2, p0); } // 0x24A2AD74FA9814E2 b1207
	static Any IS_PED_STILL(Any p0) { return invoker::Invoke<Any>(0xAC29253EEF8F0180, p0); } // 0xAC29253EEF8F0180 b1207
	static Any IS_PED_WALKING(Any p0) { return invoker::Invoke<Any>(0xDE4C184B2B9B071A, p0); } // 0xDE4C184B2B9B071A b1207
	static Any IS_PED_RUNNING(Any p0) { return invoker::Invoke<Any>(0xC5286FFC176F28A2, p0); } // 0xC5286FFC176F28A2 b1207
	static Any IS_PED_SPRINTING(Any p0) { return invoker::Invoke<Any>(0x57E457CD2C0FC168, p0); } // 0x57E457CD2C0FC168 b1207
	static Any _0xF330A5C062B29BED(Any p0) { return invoker::Invoke<Any>(0xF330A5C062B29BED, p0); } // 0xF330A5C062B29BED b1207
	static void TASK_ARREST_PED(Any p0, Any p1) { invoker::Invoke<Void>(0xF3B9A78A178572B1, p0, p1); } // 0xF3B9A78A178572B1 b1207
	static Any IS_PED_BEING_ARRESTED(Any p0) { return invoker::Invoke<Any>(0x90A09F3A45FED688, p0); } // 0x90A09F3A45FED688 b1207
	static Any _0xA9CC7856D52DBD25() { return invoker::Invoke<Any>(0xA9CC7856D52DBD25); } // 0xA9CC7856D52DBD25 b1207
	static void _0x7981037A96E7D174(Any p0) { invoker::Invoke<Void>(0x7981037A96E7D174, p0); } // 0x7981037A96E7D174 b1207
	static void UNCUFF_PED(Any p0) { invoker::Invoke<Void>(0x67406F2C8F87FC4F, p0); } // 0x67406F2C8F87FC4F b1207
	static Any IS_PED_CUFFED(Any p0) { return invoker::Invoke<Any>(0x74E559B3BC910685, p0); } // 0x74E559B3BC910685 b1207
	static Any _0xC8B29D18022EA2B7(Any p0) { return invoker::Invoke<Any>(0xC8B29D18022EA2B7, p0); } // 0xC8B29D18022EA2B7 b1207
	static void _0x5D5B0D5BC3626E5A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x5D5B0D5BC3626E5A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x5D5B0D5BC3626E5A b1207
	static Any _0x908BB14BCE85C80E(Any p0) { return invoker::Invoke<Any>(0x908BB14BCE85C80E, p0); } // 0x908BB14BCE85C80E b1207
	static Any _0x1F7A9A9C38C13A56(Any p0) { return invoker::Invoke<Any>(0x1F7A9A9C38C13A56, p0); } // 0x1F7A9A9C38C13A56 b1207
	static Any _0x3FEB770D8ED9047A(Any p0) { return invoker::Invoke<Any>(0x3FEB770D8ED9047A, p0); } // 0x3FEB770D8ED9047A b1207
	static Any _0x30146C25686B7836(Any p0, Any p1) { return invoker::Invoke<Any>(0x30146C25686B7836, p0, p1); } // 0x30146C25686B7836 b1207
	static Any _0x59AE5CA4FFB4E378(Any p0, Any p1) { return invoker::Invoke<Any>(0x59AE5CA4FFB4E378, p0, p1); } // 0x59AE5CA4FFB4E378 b1207
	static void _0x748D5E0D2A1A4C61(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x748D5E0D2A1A4C61, p0, p1, p2); } // 0x748D5E0D2A1A4C61 b1207
	static void _0xEED08A3A98B847E2(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xEED08A3A98B847E2, p0, p1, p2); } // 0xEED08A3A98B847E2 b1207
	static void _0x651F0530083C0E5A(Any p0, Any p1) { invoker::Invoke<Void>(0x651F0530083C0E5A, p0, p1); } // 0x651F0530083C0E5A b1207
	static void _0xF0B4F759F35CC7F5(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xF0B4F759F35CC7F5, p0, p1, p2, p3, p4); } // 0xF0B4F759F35CC7F5 b1207
	static void _0x9EBD34958AB6F824(Any p0) { invoker::Invoke<Void>(0x9EBD34958AB6F824, p0); } // 0x9EBD34958AB6F824 b1207
	static Any _0x0CCFE72B43C9CF96(Any p0) { return invoker::Invoke<Any>(0x0CCFE72B43C9CF96, p0); } // 0x0CCFE72B43C9CF96 b1207
	static Any _0x10ADFDF07B7DFFBA(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x10ADFDF07B7DFFBA, p0, p1, p2); } // 0x10ADFDF07B7DFFBA b1207
	static void _0xC7F0B43DCDC57E3D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xC7F0B43DCDC57E3D, p0, p1, p2, p3, p4, p5, p6); } // 0xC7F0B43DCDC57E3D b1207
	static void _0x6D3D87C57B3D52C7(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x6D3D87C57B3D52C7, p0, p1, p2, p3); } // 0x6D3D87C57B3D52C7 b1207
	static void _0x17CA98707B15926A(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x17CA98707B15926A, p0, p1, p2); } // 0x17CA98707B15926A b1207
	static void _0x36D188AECB26094B(Any p0) { invoker::Invoke<Void>(0x36D188AECB26094B, p0); } // 0x36D188AECB26094B b1207
	static Any _0xE2CF104ADD49D4BF() { return invoker::Invoke<Any>(0xE2CF104ADD49D4BF); } // 0xE2CF104ADD49D4BF b1207
	static void _0x502EC17B1BED4BFA(Any p0, Any p1) { invoker::Invoke<Void>(0x502EC17B1BED4BFA, p0, p1); } // 0x502EC17B1BED4BFA b1207
	static void _0x27829AFD3E03AC1A(Any p0, Any p1) { invoker::Invoke<Void>(0x27829AFD3E03AC1A, p0, p1); } // 0x27829AFD3E03AC1A b1207
	static void _0x81D16C4FF3A77ADF(Any p0, Any p1) { invoker::Invoke<Void>(0x81D16C4FF3A77ADF, p0, p1); } // 0x81D16C4FF3A77ADF b1207
	static Any _0x525421A507216084() { return invoker::Invoke<Any>(0x525421A507216084); } // 0x525421A507216084 b1207
	static void _0xAB591AE6B48B913E(Any p0, Any p1) { invoker::Invoke<Void>(0xAB591AE6B48B913E, p0, p1); } // 0xAB591AE6B48B913E b1207
	static Any _0x4687E69D258BBE41() { return invoker::Invoke<Any>(0x4687E69D258BBE41); } // 0x4687E69D258BBE41 b1207
	static Any _0x73F0D0327BFA0812(Any p0) { return invoker::Invoke<Any>(0x73F0D0327BFA0812, p0); } // 0x73F0D0327BFA0812 b1207
	static Any _0x5E5D96BE25E9DF68(Any p0) { return invoker::Invoke<Any>(0x5E5D96BE25E9DF68, p0); } // 0x5E5D96BE25E9DF68 b1207
	static Any _0x5B4BBE80AD5972DC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x5B4BBE80AD5972DC, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x5B4BBE80AD5972DC b1207
	static void _0x5758B1EE0C3FD4AC(Any p0) { invoker::Invoke<Void>(0x5758B1EE0C3FD4AC, p0); } // 0x5758B1EE0C3FD4AC b1207
	static Any _0x96C6ED22FB742C3E(Any p0, Any p1) { return invoker::Invoke<Any>(0x96C6ED22FB742C3E, p0, p1); } // 0x96C6ED22FB742C3E b1207
	static Any _0xDF56A2B50C04DEA4(Any p0, Any p1) { return invoker::Invoke<Any>(0xDF56A2B50C04DEA4, p0, p1); } // 0xDF56A2B50C04DEA4 b1207
	static void _0x48FAE038401A2888(Any p0, Any p1) { invoker::Invoke<Void>(0x48FAE038401A2888, p0, p1); } // 0x48FAE038401A2888 b1207
	static void _0xBB28D1BC9EA8A6A5(Any p0, Any p1) { invoker::Invoke<Void>(0xBB28D1BC9EA8A6A5, p0, p1); } // 0xBB28D1BC9EA8A6A5 b1207
	static void _0xCF1501CBC4059412(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xCF1501CBC4059412, p0, p1, p2, p3, p4, p5); } // 0xCF1501CBC4059412 b1207
	static Any _0xC716EB2BD16370A3() { return invoker::Invoke<Any>(0xC716EB2BD16370A3); } // 0xC716EB2BD16370A3 b1207
	static void _0x6AFD8FE0D723328F(Any p0) { invoker::Invoke<Void>(0x6AFD8FE0D723328F, p0); } // 0x6AFD8FE0D723328F b1207
	static void _0x79559BAD83CCD038(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x79559BAD83CCD038, p0, p1, p2, p3, p4, p5); } // 0x79559BAD83CCD038 b1207
	static void _0x722D6A49200174FE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x722D6A49200174FE, p0, p1, p2, p3, p4); } // 0x722D6A49200174FE b1207
	static void _0x78B4567E18B54480(Any p0) { invoker::Invoke<Void>(0x78B4567E18B54480, p0); } // 0x78B4567E18B54480 b1207
	static void _0x67BFCED22909834D(Any p0) { invoker::Invoke<Void>(0x67BFCED22909834D, p0); } // 0x67BFCED22909834D b1207
	static Any _0x8E1DDE26D270CC5E() { return invoker::Invoke<Any>(0x8E1DDE26D270CC5E); } // 0x8E1DDE26D270CC5E b1207
	static void _0xA6A76D666A281F2D(Any p0, Any p1) { invoker::Invoke<Void>(0xA6A76D666A281F2D, p0, p1); } // 0xA6A76D666A281F2D b1207
	static Any _0xA21AA2F0C2180125() { return invoker::Invoke<Any>(0xA21AA2F0C2180125); } // 0xA21AA2F0C2180125 b1207
	static Any _0xE47DD64B9F02677D(Any p0) { return invoker::Invoke<Any>(0xE47DD64B9F02677D, p0); } // 0xE47DD64B9F02677D b1207
	static void _0xFF745B0346E19E2C(Any p0) { invoker::Invoke<Void>(0xFF745B0346E19E2C, p0); } // 0xFF745B0346E19E2C b1207
	static Any _0xB8F52A3F84A7CC59(Any p0) { return invoker::Invoke<Any>(0xB8F52A3F84A7CC59, p0); } // 0xB8F52A3F84A7CC59 b1207
	static void _0x6AFDA2264925BD11(Any p0) { invoker::Invoke<Void>(0x6AFDA2264925BD11, p0); } // 0x6AFDA2264925BD11 b1207
	static void _0x816A3ACD265E2297(Any p0, Any p1) { invoker::Invoke<Void>(0x816A3ACD265E2297, p0, p1); } // 0x816A3ACD265E2297 b1207
	static void _0x4E806A395D43A458(Any p0) { invoker::Invoke<Void>(0x4E806A395D43A458, p0); } // 0x4E806A395D43A458 b1207
	static Any _0x545BF19F86E80F11() { return invoker::Invoke<Any>(0x545BF19F86E80F11); } // 0x545BF19F86E80F11 b1207
	static Any _0x559A6F8C5133B4EE() { return invoker::Invoke<Any>(0x559A6F8C5133B4EE); } // 0x559A6F8C5133B4EE b1207
	static Any _0x11CD066F54DA0133(Any p0) { return invoker::Invoke<Any>(0x11CD066F54DA0133, p0); } // 0x11CD066F54DA0133 b1207
	static void _0x9ADDBB9242179D56(Any p0, Any p1) { invoker::Invoke<Void>(0x9ADDBB9242179D56, p0, p1); } // 0x9ADDBB9242179D56 b1207
	static Any _0x4ECCC2815CA79AE2(Any p0) { return invoker::Invoke<Any>(0x4ECCC2815CA79AE2, p0); } // 0x4ECCC2815CA79AE2 b1207
	static void _0xAA0AF6025160243A(Any p0, Any p1) { invoker::Invoke<Void>(0xAA0AF6025160243A, p0, p1); } // 0xAA0AF6025160243A b1207
	static Any _0x1BF9D36A5EAFFBAE() { return invoker::Invoke<Any>(0x1BF9D36A5EAFFBAE); } // 0x1BF9D36A5EAFFBAE b1207
	static Any _0x6AFD84AEAA3EA538() { return invoker::Invoke<Any>(0x6AFD84AEAA3EA538); } // 0x6AFD84AEAA3EA538 b1207
	static Any _0xBD1C3C0F271C39D3() { return invoker::Invoke<Any>(0xBD1C3C0F271C39D3); } // 0xBD1C3C0F271C39D3 b1207
	static Any _0x1ECF56C040FD839C() { return invoker::Invoke<Any>(0x1ECF56C040FD839C); } // 0x1ECF56C040FD839C b1207
	static void _0xF40A109B4B79A848(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF40A109B4B79A848, p0, p1, p2); } // 0xF40A109B4B79A848 b1207
	static Any _0xEFC4303DDC6E60D3(Any p0) { return invoker::Invoke<Any>(0xEFC4303DDC6E60D3, p0); } // 0xEFC4303DDC6E60D3 b1207
	static Any _0xAC5045AB7F1A34FD() { return invoker::Invoke<Any>(0xAC5045AB7F1A34FD); } // 0xAC5045AB7F1A34FD b1207
	static Any _0xED1F514AF4732258(Any p0) { return invoker::Invoke<Any>(0xED1F514AF4732258, p0); } // 0xED1F514AF4732258 b1207
	static void _0x84179419DBDD36F2(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x84179419DBDD36F2, p0, p1, p2, p3); } // 0x84179419DBDD36F2 b1207
	static Any _0x3A2A2071DF5CC569(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x3A2A2071DF5CC569, p0, p1, p2); } // 0x3A2A2071DF5CC569 b1207
	static Any _0x87BE56724650408E(Any p0, Any p1) { return invoker::Invoke<Any>(0x87BE56724650408E, p0, p1); } // 0x87BE56724650408E b1207
	static Any _0x482C99D0B38D1B0A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x482C99D0B38D1B0A, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x482C99D0B38D1B0A b1207
	static Any _0x779A2FFACEFAEA7B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x779A2FFACEFAEA7B, p0, p1, p2, p3, p4, p5, p6); } // 0x779A2FFACEFAEA7B b1207
	static Any _0x648B75D44930D6BD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x648B75D44930D6BD, p0, p1, p2, p3, p4); } // 0x648B75D44930D6BD b1207
	static Any _0x933ACC1A1771A288(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x933ACC1A1771A288, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x933ACC1A1771A288 b1207
	static void _0x2948235DB2058E99(Any p0, Any p1) { invoker::Invoke<Void>(0x2948235DB2058E99, p0, p1); } // 0x2948235DB2058E99 b1207
	static void _0xB2F47A1AFDFCC595(Any p0, Any p1) { invoker::Invoke<Void>(0xB2F47A1AFDFCC595, p0, p1); } // 0xB2F47A1AFDFCC595 b1207
	static void _0x41D1331AFAD5A091(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x41D1331AFAD5A091, p0, p1, p2); } // 0x41D1331AFAD5A091 b1207
	static void _0x801BD27403F3CBA0(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x801BD27403F3CBA0, p0, p1, p2, p3); } // 0x801BD27403F3CBA0 b1207
	static void _0x0FE797DD9F70DFA6(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x0FE797DD9F70DFA6, p0, p1, p2, p3); } // 0x0FE797DD9F70DFA6 b1207
	static void _0x4391700CBD89C3D8(Any p0) { invoker::Invoke<Void>(0x4391700CBD89C3D8, p0); } // 0x4391700CBD89C3D8 b1207
	static void _0xFC7F71CF49F70B6B(Any p0) { invoker::Invoke<Void>(0xFC7F71CF49F70B6B, p0); } // 0xFC7F71CF49F70B6B b1207
	static void _0xE01F55B2896F6B37(Any p0, Any p1) { invoker::Invoke<Void>(0xE01F55B2896F6B37, p0, p1); } // 0xE01F55B2896F6B37 b1207
	static Any _0xE62754D09354F6CF(Any p0) { return invoker::Invoke<Any>(0xE62754D09354F6CF, p0); } // 0xE62754D09354F6CF b1207
	static void _0x4BA972D0E5AD8122(Any p0, Any p1) { invoker::Invoke<Void>(0x4BA972D0E5AD8122, p0, p1); } // 0x4BA972D0E5AD8122 b1207
	static Any _0xF3735ACD11ACD500(Any p0, Any p1) { return invoker::Invoke<Any>(0xF3735ACD11ACD500, p0, p1); } // 0xF3735ACD11ACD500 b1207
	static Any _0xF3735ACD11ACD501(Any p0, Any p1) { return invoker::Invoke<Any>(0xF3735ACD11ACD501, p0, p1); } // 0xF3735ACD11ACD501 b1207
	static void _0x2C28AC30A72722DA(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x2C28AC30A72722DA, p0, p1, p2); } // 0x2C28AC30A72722DA b1207
	static void _0x9B0C7FA063E67629(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x9B0C7FA063E67629, p0, p1, p2, p3); } // 0x9B0C7FA063E67629 b1207
	static void _0x1F298C7BD30D1240(Any p0) { invoker::Invoke<Void>(0x1F298C7BD30D1240, p0); } // 0x1F298C7BD30D1240 b1207
	static void _0x1A52076D26E09004(Any p0, Any p1) { invoker::Invoke<Void>(0x1A52076D26E09004, p0, p1); } // 0x1A52076D26E09004 b1207
	static void _0xCE71C2F9BAA3F975(Any p0, Any p1) { invoker::Invoke<Void>(0xCE71C2F9BAA3F975, p0, p1); } // 0xCE71C2F9BAA3F975 b1207
	static Any _0xB520DBDA7FCF573F(Any p0) { return invoker::Invoke<Any>(0xB520DBDA7FCF573F, p0); } // 0xB520DBDA7FCF573F b1207
	static void _0x31BB338F64D5C861(Any p0, Any p1) { invoker::Invoke<Void>(0x31BB338F64D5C861, p0, p1); } // 0x31BB338F64D5C861 b1207
	static void _0x517D01BF27B682D1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x517D01BF27B682D1, p0, p1, p2, p3, p4, p5, p6); } // 0x517D01BF27B682D1 b1207
	static void _0x88FD60D846D9CD63(Any p0) { invoker::Invoke<Void>(0x88FD60D846D9CD63, p0); } // 0x88FD60D846D9CD63 b1207
	static void _0x9050DF2C53801208(Any p0, Any p1) { invoker::Invoke<Void>(0x9050DF2C53801208, p0, p1); } // 0x9050DF2C53801208 b1207
	static void _0x22CDBF317C40A122(Any p0) { invoker::Invoke<Void>(0x22CDBF317C40A122, p0); } // 0x22CDBF317C40A122 b1207
	static Any _0xB31A277C1AC7B7FF() { return invoker::Invoke<Any>(0xB31A277C1AC7B7FF); } // 0xB31A277C1AC7B7FF b1207
	static Any _0x884E3436CC1F41DD() { return invoker::Invoke<Any>(0x884E3436CC1F41DD); } // 0x884E3436CC1F41DD b1207
	static Any _0x6A1AF481407BF6E9() { return invoker::Invoke<Any>(0x6A1AF481407BF6E9); } // 0x6A1AF481407BF6E9 b1207
	static Any _0xBDFEEB7600BCD938() { return invoker::Invoke<Any>(0xBDFEEB7600BCD938); } // 0xBDFEEB7600BCD938 b1207
	static Any _0xEC516FE805D2CB2D() { return invoker::Invoke<Any>(0xEC516FE805D2CB2D); } // 0xEC516FE805D2CB2D b1207
	static Any _0x59AEA4DC640814B9() { return invoker::Invoke<Any>(0x59AEA4DC640814B9); } // 0x59AEA4DC640814B9 b1207
	static Any _0x11C7CE1AE38911B5() { return invoker::Invoke<Any>(0x11C7CE1AE38911B5); } // 0x11C7CE1AE38911B5 b1207
}

namespace _NAMESPACE67
{
	static void _0x9BEE018A63FFFAD9(Any p0) { invoker::Invoke<Void>(0x9BEE018A63FFFAD9, p0); } // 0x9BEE018A63FFFAD9 b1207
	static Any _0xEC0BD8736DCAF841() { return invoker::Invoke<Any>(0xEC0BD8736DCAF841); } // 0xEC0BD8736DCAF841 b1207
	static void _0x15B0CC1B36F1DE29(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x15B0CC1B36F1DE29, p0, p1, p2, p3); } // 0x15B0CC1B36F1DE29 b1207
	static void _0xD894437E12C17AEC(Any p0, Any p1) { invoker::Invoke<Void>(0xD894437E12C17AEC, p0, p1); } // 0xD894437E12C17AEC b1207
	static void _0x8EC7890D446BD9C1(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x8EC7890D446BD9C1, p0, p1, p2); } // 0x8EC7890D446BD9C1 b1207
	static Any _0x5DA4718DF897EB25() { return invoker::Invoke<Any>(0x5DA4718DF897EB25); } // 0x5DA4718DF897EB25 b1207
	static Any _0xE692D336F8A2A97F() { return invoker::Invoke<Any>(0xE692D336F8A2A97F); } // 0xE692D336F8A2A97F b1207
	static Any _0xF620F47B4F4A78C4() { return invoker::Invoke<Any>(0xF620F47B4F4A78C4); } // 0xF620F47B4F4A78C4 b1207
	static Any _0xA2058154357726BB() { return invoker::Invoke<Any>(0xA2058154357726BB); } // 0xA2058154357726BB b1207
	static Any _0xEF3C68F56BAD7B69() { return invoker::Invoke<Any>(0xEF3C68F56BAD7B69); } // 0xEF3C68F56BAD7B69 b1207
	static Any _0xECD67E9FA677CCCF() { return invoker::Invoke<Any>(0xECD67E9FA677CCCF); } // 0xECD67E9FA677CCCF b1207
	static void _0x51EC204A6E5B5A1A(Any p0, Any p1) { invoker::Invoke<Void>(0x51EC204A6E5B5A1A, p0, p1); } // 0x51EC204A6E5B5A1A b1207
	static void _0xAE693EC3A178F6C2(Any p0) { invoker::Invoke<Void>(0xAE693EC3A178F6C2, p0); } // 0xAE693EC3A178F6C2 b1207
	static void _0x7581972ADF5D699A(Any p0, Any p1) { invoker::Invoke<Void>(0x7581972ADF5D699A, p0, p1); } // 0x7581972ADF5D699A b1207
	static void _0x565EAA726B2CE3B7(Any p0) { invoker::Invoke<Void>(0x565EAA726B2CE3B7, p0); } // 0x565EAA726B2CE3B7 b1207
	static void _0x217F47761376E16E(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x217F47761376E16E, p0, p1, p2, p3, p4); } // 0x217F47761376E16E b1207
	static void _0xCD6F8A0335D821F9(Any p0) { invoker::Invoke<Void>(0xCD6F8A0335D821F9, p0); } // 0xCD6F8A0335D821F9 b1207
	static void _0x775B2ED944E44973(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x775B2ED944E44973, p0, p1, p2, p3, p4, p5); } // 0x775B2ED944E44973 b1207
	static void _0xF78E669FDC202E73() { invoker::Invoke<Void>(0xF78E669FDC202E73); } // 0xF78E669FDC202E73 b1207
	static void _0x2A374E6F0075EE81(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x2A374E6F0075EE81, p0, p1, p2, p3, p4); } // 0x2A374E6F0075EE81 b1207
	static void _0x9BD8A9D0A774A6F8(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x9BD8A9D0A774A6F8, p0, p1, p2, p3, p4); } // 0x9BD8A9D0A774A6F8 b1207
	static Any _0x536B6025E94AC48F() { return invoker::Invoke<Any>(0x536B6025E94AC48F); } // 0x536B6025E94AC48F b1207
	static Any _0x32D5898C4898CD95() { return invoker::Invoke<Any>(0x32D5898C4898CD95); } // 0x32D5898C4898CD95 b1207
	static void _0x3145044F3990D321(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x3145044F3990D321, p0, p1, p2, p3, p4, p5, p6); } // 0x3145044F3990D321 b1207
	static void _0xF5EAD898EF387E73(Any p0) { invoker::Invoke<Void>(0xF5EAD898EF387E73, p0); } // 0xF5EAD898EF387E73 b1207
	static void _0xE6B763C7F4902201(Any p0, Any p1) { invoker::Invoke<Void>(0xE6B763C7F4902201, p0, p1); } // 0xE6B763C7F4902201 b1207
	static void _0x78C2E029DB205A3A(Any p0, Any p1) { invoker::Invoke<Void>(0x78C2E029DB205A3A, p0, p1); } // 0x78C2E029DB205A3A b1207
	static Any _0xDF516E598D966D06() { return invoker::Invoke<Any>(0xDF516E598D966D06); } // 0xDF516E598D966D06 b1207
	static Any _0xD6CB05DDAEE43AFD() { return invoker::Invoke<Any>(0xD6CB05DDAEE43AFD); } // 0xD6CB05DDAEE43AFD b1207
	static Any _0xEA323F5E1A4DA2F1() { return invoker::Invoke<Any>(0xEA323F5E1A4DA2F1); } // 0xEA323F5E1A4DA2F1 b1207
	static Any _0x6571E4327390EC0B() { return invoker::Invoke<Any>(0x6571E4327390EC0B); } // 0x6571E4327390EC0B b1207
	static Any _0xE6DC9B21AC7A8729() { return invoker::Invoke<Any>(0xE6DC9B21AC7A8729); } // 0xE6DC9B21AC7A8729 b1207
	static Any _0x7CEF4AC79F7E7FAD() { return invoker::Invoke<Any>(0x7CEF4AC79F7E7FAD); } // 0x7CEF4AC79F7E7FAD b1207
	static Any _0xA72773C3134F9A57() { return invoker::Invoke<Any>(0xA72773C3134F9A57); } // 0xA72773C3134F9A57 b1207
	static Any _0x7E002A36AEFCFB55() { return invoker::Invoke<Any>(0x7E002A36AEFCFB55); } // 0x7E002A36AEFCFB55 b1207
	static Any _0xF9F14080D80937BD() { return invoker::Invoke<Any>(0xF9F14080D80937BD); } // 0xF9F14080D80937BD b1207
	static Any _0xF37A2149BC9A8A27() { return invoker::Invoke<Any>(0xF37A2149BC9A8A27); } // 0xF37A2149BC9A8A27 b1207
	static Any _0xE26970A7AE0F28E9() { return invoker::Invoke<Any>(0xE26970A7AE0F28E9); } // 0xE26970A7AE0F28E9 b1207
	static Any _0xE57529D23541D2DD() { return invoker::Invoke<Any>(0xE57529D23541D2DD); } // 0xE57529D23541D2DD b1207
	static Any _0xCF63EF77B0DF0397() { return invoker::Invoke<Any>(0xCF63EF77B0DF0397); } // 0xCF63EF77B0DF0397 b1207
	static Any _0x2C24AF8EEEEF8A55() { return invoker::Invoke<Any>(0x2C24AF8EEEEF8A55); } // 0x2C24AF8EEEEF8A55 b1207
	static Any _0x16B23D4F7A1F50D9() { return invoker::Invoke<Any>(0x16B23D4F7A1F50D9); } // 0x16B23D4F7A1F50D9 b1207
	static Any _0x8127C5AA05C5A210() { return invoker::Invoke<Any>(0x8127C5AA05C5A210); } // 0x8127C5AA05C5A210 b1207
	static Any _0x80A02D9F948A8BCA() { return invoker::Invoke<Any>(0x80A02D9F948A8BCA); } // 0x80A02D9F948A8BCA b1207
	static Any _0xF184B3ECE36219CF() { return invoker::Invoke<Any>(0xF184B3ECE36219CF); } // 0xF184B3ECE36219CF b1207
	static Any _0xAB43D1C80B5E9500() { return invoker::Invoke<Any>(0xAB43D1C80B5E9500); } // 0xAB43D1C80B5E9500 b1207
	static Any _0x52FA31DB8F3AD25D() { return invoker::Invoke<Any>(0x52FA31DB8F3AD25D); } // 0x52FA31DB8F3AD25D b1207
	static Any _0xB204BF9F30298D77() { return invoker::Invoke<Any>(0xB204BF9F30298D77); } // 0xB204BF9F30298D77 b1207
	static Any _0x476038B5A0734C10() { return invoker::Invoke<Any>(0x476038B5A0734C10); } // 0x476038B5A0734C10 b1207
	static Any _0x4AC38DFD286DAD14() { return invoker::Invoke<Any>(0x4AC38DFD286DAD14); } // 0x4AC38DFD286DAD14 b1207
	static Any _0xED22BE4C5A399E63() { return invoker::Invoke<Any>(0xED22BE4C5A399E63); } // 0xED22BE4C5A399E63 b1207
	static Any _0xF0D54E0651DD7E07() { return invoker::Invoke<Any>(0xF0D54E0651DD7E07); } // 0xF0D54E0651DD7E07 b1207
	static Any _0x415FE28ED44BFF14() { return invoker::Invoke<Any>(0x415FE28ED44BFF14); } // 0x415FE28ED44BFF14 b1207
	static Any _0xC3ADF4880784FA9C() { return invoker::Invoke<Any>(0xC3ADF4880784FA9C); } // 0xC3ADF4880784FA9C b1207
	static Any _0x317D9C9560529CC2() { return invoker::Invoke<Any>(0x317D9C9560529CC2); } // 0x317D9C9560529CC2 b1207
	static Any _0x32C2939564D74BFF() { return invoker::Invoke<Any>(0x32C2939564D74BFF); } // 0x32C2939564D74BFF b1207
	static Any _0xFF9052BC7A3B7D33() { return invoker::Invoke<Any>(0xFF9052BC7A3B7D33); } // 0xFF9052BC7A3B7D33 b1207
	static Any _0xE67AF24C5A3B6058() { return invoker::Invoke<Any>(0xE67AF24C5A3B6058); } // 0xE67AF24C5A3B6058 b1207
	static Any _0x3255D4D2082C6339() { return invoker::Invoke<Any>(0x3255D4D2082C6339); } // 0x3255D4D2082C6339 b1207
	static Any _0xE9F24081D84931B8() { return invoker::Invoke<Any>(0xE9F24081D84931B8); } // 0xE9F24081D84931B8 b1207
	static Any _0x3180E991D4B8F248() { return invoker::Invoke<Any>(0x3180E991D4B8F248); } // 0x3180E991D4B8F248 b1207
	static Any _0x40914CCF2A1AB531() { return invoker::Invoke<Any>(0x40914CCF2A1AB531); } // 0x40914CCF2A1AB531 b1207
}

namespace TXD
{
	static Any _0xBA0163B277C2D2D0(Any p0) { return invoker::Invoke<Any>(0xBA0163B277C2D2D0, p0); } // 0xBA0163B277C2D2D0 b1207
	static void _0xDB1BD07FB464584D(Any p0, Any p1) { invoker::Invoke<Void>(0xDB1BD07FB464584D, p0, p1); } // 0xDB1BD07FB464584D b1207
	static Any _0xBE72591D1509FFE4(Any p0) { return invoker::Invoke<Any>(0xBE72591D1509FFE4, p0); } // 0xBE72591D1509FFE4 b1207
	static void _0x8232F37DF762ACB2(Any p0) { invoker::Invoke<Void>(0x8232F37DF762ACB2, p0); } // 0x8232F37DF762ACB2 b1207
	static Any _0x7332461FC59EB7EC(Any p0) { return invoker::Invoke<Any>(0x7332461FC59EB7EC, p0); } // 0x7332461FC59EB7EC b1207
	static void REQUEST_STREAMED_TEXTURE_DICT(Any p0, Any p1) { invoker::Invoke<Void>(0xC1BA29DF5631B0F8, p0, p1); } // 0xC1BA29DF5631B0F8 b1207
	static Any HAS_STREAMED_TEXTURE_DICT_LOADED(Any p0) { return invoker::Invoke<Any>(0x54D6900929CCF162, p0); } // 0x54D6900929CCF162 b1207
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Any p0) { invoker::Invoke<Void>(0x4ACA10A91F66F1E2, p0); } // 0x4ACA10A91F66F1E2 b1207
}

namespace UIAPPS
{
	static Any _IS_APP_ACTIVE(Any p0) { return invoker::Invoke<Any>(0x25B7A0206BDFAC76, p0); } // 0x25B7A0206BDFAC76 b1207
	static Any _0xAC959AB99AAF3D9F() { return invoker::Invoke<Any>(0xAC959AB99AAF3D9F); } // 0xAC959AB99AAF3D9F b1207
	static Any _IS_APP_RUNNING(Any p0) { return invoker::Invoke<Any>(0x4E511D093A86AD49, p0); } // 0x4E511D093A86AD49 b1207
	static Any _IS_ANY_APP_RUNNING() { return invoker::Invoke<Any>(0xDB30BEC7A7A5CBD3); } // 0xDB30BEC7A7A5CBD3 b1207
	static Any _0x96FD694FE5BE55DC() { return invoker::Invoke<Any>(0x96FD694FE5BE55DC); } // 0x96FD694FE5BE55DC b1207
	static void _CLOSE_APP_BY_HASH(Any p0) { invoker::Invoke<Void>(0x2FF10C9C3F92277E, p0); } // 0x2FF10C9C3F92277E b1207
	static void _CLOSE_APP_BY_HASH_IMMEDIATE(Any p0) { invoker::Invoke<Void>(0x04428420A248A354, p0); } // 0x04428420A248A354 b1207
	static Any _0x818C6CA9B659E8EC() { return invoker::Invoke<Any>(0x818C6CA9B659E8EC); } // 0x818C6CA9B659E8EC b1207
	static void _CLOSE_APP(Any p0) { invoker::Invoke<Void>(0x3015635426D1B17C, p0); } // 0x3015635426D1B17C b1207
	static void _CLOSE_ALL_APPS() { invoker::Invoke<Void>(0xAD7B70F7230C5A12); } // 0xAD7B70F7230C5A12 b1207
	static Any _0x12769EEB8DBD7A7B() { return invoker::Invoke<Any>(0x12769EEB8DBD7A7B); } // 0x12769EEB8DBD7A7B b1207
	static Any _LAUNCH_APP_BY_HASH_WITH_ENTRY(Any p0, Any p1) { return invoker::Invoke<Any>(0xC1BCF31E975B3195, p0, p1); } // 0xC1BCF31E975B3195 b1207
	static Any _LAUNCH_APP_BY_HASH(Any p0) { return invoker::Invoke<Any>(0xC8FC7F4E4CF4F581, p0); } // 0xC8FC7F4E4CF4F581 b1207
	static Any _LAUNCH_APP_WITH_ENTRY(Any p0, Any p1) { return invoker::Invoke<Any>(0x7B2027BAC5C8EC89, p0, p1); } // 0x7B2027BAC5C8EC89 b1207
	static Any _0x16F47D434B6086BF() { return invoker::Invoke<Any>(0x16F47D434B6086BF); } // 0x16F47D434B6086BF b1207
	static Any _CAN_LAUNCH_APP_BY_HASH(Any p0) { return invoker::Invoke<Any>(0xE555EC27D65EDE80, p0); } // 0xE555EC27D65EDE80 b1207
	static Any _UIAPP_REQUEST_TRANSITION_BY_HASH(Any p0, Any p1) { return invoker::Invoke<Any>(0x7689CD255655BFD7, p0, p1); } // 0x7689CD255655BFD7 b1207
}

namespace UIEVENTS
{
	static Any _IS_EVENT_PENDING(Any p0) { return invoker::Invoke<Any>(0x67ED5A7963F2F722, p0); } // 0x67ED5A7963F2F722 b1207
	static Any _0xE24E957294241444() { return invoker::Invoke<Any>(0xE24E957294241444); } // 0xE24E957294241444 b1207
	static Any _PEEK_EVENT(Any p0, Any p1) { return invoker::Invoke<Any>(0x90237103F27F7937, p0, p1); } // 0x90237103F27F7937 b1207
	static void _POP_EVENT(Any p0) { invoker::Invoke<Void>(0x8E8A2369F48EC839, p0); } // 0x8E8A2369F48EC839 b1207
}

namespace _NAMESPACE71
{
	static Any _0x049D5C615BD38BAD(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x049D5C615BD38BAD, p0, p1, p2); } // 0x049D5C615BD38BAD b1207
	static Any _0xD05590C1AB38F068(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xD05590C1AB38F068, p0, p1, p2, p3); } // 0xD05590C1AB38F068 b1207
	static Any _0xCEDBF17EFCC0E4A4(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xCEDBF17EFCC0E4A4, p0, p1, p2); } // 0xCEDBF17EFCC0E4A4 b1207
	static Any _0xB2920B9760F0F36B(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xB2920B9760F0F36B, p0, p1, p2); } // 0xB2920B9760F0F36B b1207
	static Any _0x26E87218390E6729(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x26E87218390E6729, p0, p1, p2, p3); } // 0x26E87218390E6729 b1207
	static Any _0xAFF5BE9BA496CE40() { return invoker::Invoke<Any>(0xAFF5BE9BA496CE40); } // 0xAFF5BE9BA496CE40 b1207
	static Any _0xC927890AA64E9661() { return invoker::Invoke<Any>(0xC927890AA64E9661); } // 0xC927890AA64E9661 b1207
	static Any _0x3F9FDDBA79117C69() { return invoker::Invoke<Any>(0x3F9FDDBA79117C69); } // 0x3F9FDDBA79117C69 b1207
	static Any _0x18D6869FBFFEC0F8(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x18D6869FBFFEC0F8, p0, p1, p2, p3); } // 0x18D6869FBFFEC0F8 b1207
	static Any _0xB249EBCB30DD88E0(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xB249EBCB30DD88E0, p0, p1, p2); } // 0xB249EBCB30DD88E0 b1207
	static Any _0x2024F4F333095FB1(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x2024F4F333095FB1, p0, p1, p2); } // 0x2024F4F333095FB1 b1207
	static Any _0x893128CDB4B81FBB() { return invoker::Invoke<Any>(0x893128CDB4B81FBB); } // 0x893128CDB4B81FBB b1207
	static Any _0x860DDFE97CC94DF0() { return invoker::Invoke<Any>(0x860DDFE97CC94DF0); } // 0x860DDFE97CC94DF0 b1207
	static Any _0xA6F4216AB10EB08E() { return invoker::Invoke<Any>(0xA6F4216AB10EB08E); } // 0xA6F4216AB10EB08E b1207
	static Any _0x02BCC0FE9EBA3529() { return invoker::Invoke<Any>(0x02BCC0FE9EBA3529); } // 0x02BCC0FE9EBA3529 b1207
	static Any _0x8D1249BD28791878() { return invoker::Invoke<Any>(0x8D1249BD28791878); } // 0x8D1249BD28791878 b1207
	static Any _0xC48152BC6B3E821C() { return invoker::Invoke<Any>(0xC48152BC6B3E821C); } // 0xC48152BC6B3E821C b1207
	static void _0xDD1232B332CBB9E7(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xDD1232B332CBB9E7, p0, p1, p2); } // 0xDD1232B332CBB9E7 b1207
	static void _0x6035E8FBCA32AC5E() { invoker::Invoke<Void>(0x6035E8FBCA32AC5E); } // 0x6035E8FBCA32AC5E b1207
	static void _0x2F901291EF177B02(Any p0, Any p1) { invoker::Invoke<Void>(0x2F901291EF177B02, p0, p1); } // 0x2F901291EF177B02 b1207
	static Any _0x6D85126F6CCF02C9() { return invoker::Invoke<Any>(0x6D85126F6CCF02C9); } // 0x6D85126F6CCF02C9 b1207
	static Any _0x4E88A65968A55C78(Any p0, Any p1) { return invoker::Invoke<Any>(0x4E88A65968A55C78, p0, p1); } // 0x4E88A65968A55C78 b1207
	static Any _0x0FD07141AD048AAE(Any p0, Any p1) { return invoker::Invoke<Any>(0x0FD07141AD048AAE, p0, p1); } // 0x0FD07141AD048AAE b1207
	static Any _0x59FA676177DBE4C9(Any p0) { return invoker::Invoke<Any>(0x59FA676177DBE4C9, p0); } // 0x59FA676177DBE4C9 b1207
	static Any _0xC17F69E1418CD11F(Any p0) { return invoker::Invoke<Any>(0xC17F69E1418CD11F, p0); } // 0xC17F69E1418CD11F b1207
	static Any _0xB7223B91CD6B7E07() { return invoker::Invoke<Any>(0xB7223B91CD6B7E07); } // 0xB7223B91CD6B7E07 b1207
}

namespace UILOG
{
	static Any _LOG_IS_ENTRY_REGISTERED(Any p0, Any p1) { return invoker::Invoke<Any>(0xB8188CCF52202475, p0, p1); } // 0xB8188CCF52202475 b1207
	static void _LOG_ADD_ENTRY_HASH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0x69D5479982355D8F, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x69D5479982355D8F b1207
	static Any _0x49C63FDF69744A27() { return invoker::Invoke<Any>(0x49C63FDF69744A27); } // 0x49C63FDF69744A27 b1207
	static void _LOG_SET_ENTRY_ICON_TEXTURE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x6965469934958D8F, p0, p1, p2, p3); } // 0x6965469934958D8F b1207
	static void _LOG_SET_ENTRY_BRIEF_TEXTURE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x69684D9936958D8F, p0, p1, p2, p3); } // 0x69684D9936958D8F b1207
	static void _LOG_UPDATE_ENTRY_SUBHEADER(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x80D6524190258C3E, p0, p1, p2); } // 0x80D6524190258C3E b1207
	static void _LOG_SET_ENTRY_PINNED(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x72A5CD214B342568, p0, p1, p2); } // 0x72A5CD214B342568 b1207
	static void _MARK_MISSION_COMPLETED(Any p0) { invoker::Invoke<Void>(0xDE31D66D1E54C471, p0); } // 0xDE31D66D1E54C471 b1207
	static void _MARK_ENTRY_AVAILABILITY(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x13E8D7DD08543482, p0, p1, p2, p3); } // 0x13E8D7DD08543482 b1207
	static void _MARK_ALL_ENTRIES_AVAILABILITY(Any p0, Any p1) { invoker::Invoke<Void>(0x3920574CF0A2B7B6, p0, p1); } // 0x3920574CF0A2B7B6 b1207
	static void _REMOVE_LOG_ENTRY(Any p0, Any p1) { invoker::Invoke<Void>(0xD594A19BE09A75C6, p0, p1); } // 0xD594A19BE09A75C6 b1207
	static Any _0xA31013798FADCADC() { return invoker::Invoke<Any>(0xA31013798FADCADC); } // 0xA31013798FADCADC b1207
	static Any _0xA49D6D503E3EA847() { return invoker::Invoke<Any>(0xA49D6D503E3EA847); } // 0xA49D6D503E3EA847 b1207
	static Any _0x763637F9B838B0A7() { return invoker::Invoke<Any>(0x763637F9B838B0A7); } // 0x763637F9B838B0A7 b1207
	static void _CLEAR_LOG_ENTRIES() { invoker::Invoke<Void>(0xB95B4EA6B1EDF035); } // 0xB95B4EA6B1EDF035 b1207
	static void _LOG_ADD_OR_UPDATE_OBJECTIVE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xB43163388484CC87, p0, p1, p2, p3, p4, p5); } // 0xB43163388484CC87 b1207
	static Any _0xA20398536B7F1134() { return invoker::Invoke<Any>(0xA20398536B7F1134); } // 0xA20398536B7F1134 b1207
	static void _LOG_SET_CACHED_OBJECTIVE(Any p0) { invoker::Invoke<Void>(0xFA233F8FE190514C, p0); } // 0xFA233F8FE190514C b1207
	static void _LOG_CLEAR_CACHED_OBJECTIVE() { invoker::Invoke<Void>(0xDFF0D417277B41F8); } // 0xDFF0D417277B41F8 b1207
	static Any _LOG_HAS_DISPLAYED_CACHED_OBJECTIVE() { return invoker::Invoke<Any>(0xCC48FFBB45B54F71); } // 0xCC48FFBB45B54F71 b1207
	static void _LOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE() { invoker::Invoke<Void>(0xA3108D6981A5CADB); } // 0xA3108D6981A5CADB b1207
	static void _LOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE() { invoker::Invoke<Void>(0xA3108D6981A5CADC); } // 0xA3108D6981A5CADC b1207
	static Any _LOG_GET_CACHED_OBJECTIVE() { return invoker::Invoke<Any>(0x15A4461BEB788096); } // 0x15A4461BEB788096 b1207
	static void _LOG_PRINT_CACHED_OBJECTIVE() { invoker::Invoke<Void>(0xE9990552DEC71600); } // 0xE9990552DEC71600 b1207
	static Any _SET_PENDING_DETAILS_ID(Any p0, Any p1) { return invoker::Invoke<Any>(0x136A027CF37B0A4F, p0, p1); } // 0x136A027CF37B0A4F b1207
	static Any _0x2A4765812202E671() { return invoker::Invoke<Any>(0x2A4765812202E671); } // 0x2A4765812202E671 b1207
	static void _ADD_TOTAL_TAKE_ENTRY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x60C59968E8E87E6B, p0, p1, p2, p3, p4); } // 0x60C59968E8E87E6B b1207
	static void _SET_TOTAL_TAKE_SUMMARY(Any p0, Any p1) { invoker::Invoke<Void>(0xD106B211EF1B8F04, p0, p1); } // 0xD106B211EF1B8F04 b1207
	static Any _POST_NOTIFICATION(Any p0) { return invoker::Invoke<Any>(0x49E58FE6EF40B987, p0); } // 0x49E58FE6EF40B987 b1207
	static Any _0xDA0A30153FCC0FFD() { return invoker::Invoke<Any>(0xDA0A30153FCC0FFD); } // 0xDA0A30153FCC0FFD b1207
}

namespace _NAMESPACE73
{
	static Any _0x3138582E0A13BFAB() { return invoker::Invoke<Any>(0x3138582E0A13BFAB); } // 0x3138582E0A13BFAB b1207
}

namespace UITUTORIAL
{
	static Any _GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN() { return invoker::Invoke<Any>(0x2CC24A2A7A1489C4); } // 0x2CC24A2A7A1489C4 b1207
	static Any _GET_IS_THREAT_INDICATOR_ON() { return invoker::Invoke<Any>(0xFC2E0A5E9ED4E1B4); } // 0xFC2E0A5E9ED4E1B4 b1207
	static void _SET_RPG_ICON_VISIBILITY(Any p0, Any p1) { invoker::Invoke<Void>(0xC116E6DF68DCE667, p0, p1); } // 0xC116E6DF68DCE667 b1207
}

namespace UISTATEMACHINE
{
	static Any _REQUEST_FLOW_BLOCK(Any p0) { return invoker::Invoke<Any>(0xC0081B34E395CE48, p0); } // 0xC0081B34E395CE48 b1207
	static void _RELEASE_FLOW_BLOCK(Any p0) { invoker::Invoke<Void>(0xF320A77DD5F781DF, p0); } // 0xF320A77DD5F781DF b1207
	static Any _IS_FLOW_BLOCK_LOADED(Any p0) { return invoker::Invoke<Any>(0x10A93C057B6BD944, p0); } // 0x10A93C057B6BD944 b1207
	static Any _ENTER_FLOW_BLOCK(Any p0, Any p1) { return invoker::Invoke<Any>(0x3B7519720C9DCB45, p0, p1); } // 0x3B7519720C9DCB45 b1207
	static Any _DOES_STATE_MACHINE_EXIST(Any p0) { return invoker::Invoke<Any>(0x5D15569C0FEBF757, p0); } // 0x5D15569C0FEBF757 b1207
	static Any _STATE_MACHINE_CREATE(Any p0, Any p1) { return invoker::Invoke<Any>(0x4C6F2C4B7A03A266, p0, p1); } // 0x4C6F2C4B7A03A266 b1207
	static Any _0xF7C180F57F85D0B8() { return invoker::Invoke<Any>(0xF7C180F57F85D0B8); } // 0xF7C180F57F85D0B8 b1207
	static Any _STATE_MACHINE_REQUEST_TRANSITION(Any p0, Any p1) { return invoker::Invoke<Any>(0x7EA9C3547E80350E, p0, p1); } // 0x7EA9C3547E80350E b1207
	static Any _0x6B9FE4F0BA521A19() { return invoker::Invoke<Any>(0x6B9FE4F0BA521A19); } // 0x6B9FE4F0BA521A19 b1207
	static Any _0x11E73195E735B25B() { return invoker::Invoke<Any>(0x11E73195E735B25B); } // 0x11E73195E735B25B b1207
	static void _STATE_MACHINE_DESTROY(Any p0) { invoker::Invoke<Void>(0x4EB122210A90E2D8, p0); } // 0x4EB122210A90E2D8 b1207
	static Any _0x2738D68D2B4E09E7() { return invoker::Invoke<Any>(0x2738D68D2B4E09E7); } // 0x2738D68D2B4E09E7 b1207
}

namespace _NAMESPACE76
{
	static Any _0x9F2CC2439A04E7BA(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x9F2CC2439A04E7BA, p0, p1, p2); } // 0x9F2CC2439A04E7BA b1207
	static Any _0x815C4065AE6E6071(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x815C4065AE6E6071, p0, p1, p2); } // 0x815C4065AE6E6071 b1207
	static Any _0x339E16B41780FC35(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x339E16B41780FC35, p0, p1, p2); } // 0x339E16B41780FC35 b1207
	static Any _0xBC6F454E310124DA() { return invoker::Invoke<Any>(0xBC6F454E310124DA); } // 0xBC6F454E310124DA b1207
	static void _0x00A15B94CBA4F76F(Any p0) { invoker::Invoke<Void>(0x00A15B94CBA4F76F, p0); } // 0x00A15B94CBA4F76F b1207
	static Any _0xC5C395C60B542A3C(Any p0) { return invoker::Invoke<Any>(0xC5C395C60B542A3C, p0); } // 0xC5C395C60B542A3C b1207
	static Any _0xF8806EC3FF840FDC() { return invoker::Invoke<Any>(0xF8806EC3FF840FDC); } // 0xF8806EC3FF840FDC b1207
	static Any _0x07954320D77F6A3D(Any p0) { return invoker::Invoke<Any>(0x07954320D77F6A3D, p0); } // 0x07954320D77F6A3D b1207
}

namespace UNLOCK
{
	static Any _0x6B6369647F26F09F() { return invoker::Invoke<Any>(0x6B6369647F26F09F); } // 0x6B6369647F26F09F b1207
	static Any _UNLOCK_IS_UNLOCKED(Any p0) { return invoker::Invoke<Any>(0xC4B660C7B6040E75, p0); } // 0xC4B660C7B6040E75 b1207
	static void _UNLOCK_SET_UNLOCKED(Any p0, Any p1) { invoker::Invoke<Void>(0x1B7C5ADA8A6910A0, p0, p1); } // 0x1B7C5ADA8A6910A0 b1207
	static Any _UNLOCK_IS_VISIBLE(Any p0) { return invoker::Invoke<Any>(0x8588A14B75AF096B, p0); } // 0x8588A14B75AF096B b1207
	static void _UNLOCK_SET_VISIBLE(Any p0, Any p1) { invoker::Invoke<Void>(0x46B901A8ECDB5A61, p0, p1); } // 0x46B901A8ECDB5A61 b1207
	static Any _UNLOCK_IS_NEW(Any p0) { return invoker::Invoke<Any>(0x644166BA7AA49DEA, p0); } // 0x644166BA7AA49DEA b1207
	static void _UNLOCK_SET_NEW(Any p0, Any p1) { invoker::Invoke<Void>(0xA6D79C7AEF870A99, p0, p1); } // 0xA6D79C7AEF870A99 b1207
	static Any _0x66BF197E066050DE() { return invoker::Invoke<Any>(0x66BF197E066050DE); } // 0x66BF197E066050DE b1207
	static Any _0x7C1C2062CFAD06FE() { return invoker::Invoke<Any>(0x7C1C2062CFAD06FE); } // 0x7C1C2062CFAD06FE b1207
}

namespace VEHICLE
{
	static void _0x6355602C02EDC6DF(Any p0, Any p1) { invoker::Invoke<Void>(0x6355602C02EDC6DF, p0, p1); } // 0x6355602C02EDC6DF b1207
	static Any _0xCE1531927AD6C9F8() { return invoker::Invoke<Any>(0xCE1531927AD6C9F8); } // 0xCE1531927AD6C9F8 b1207
	static Vehicle CREATE_VEHICLE(Hash model, float x, float y, float z, float heading, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Vehicle>(0xAF35D0D2583051B0, model, x, y, z, heading, p5, p6, p7, p8); } // 0xAF35D0D2583051B0 b1207
	static Any _0x214651FB1DFEBA89(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x214651FB1DFEBA89, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x214651FB1DFEBA89 b1207
	static void DELETE_VEHICLE(Any p0) { invoker::Invoke<Void>(0xE20A909D8C4A70F8, p0); } // 0xE20A909D8C4A70F8 b1207
	static Any _0x35DC1877312FBA0F() { return invoker::Invoke<Any>(0x35DC1877312FBA0F); } // 0x35DC1877312FBA0F b1207
	static Any _0x5136B284B67B35C7() { return invoker::Invoke<Any>(0x5136B284B67B35C7); } // 0x5136B284B67B35C7 b1207
	static Any _0x1240E8596A8308B9() { return invoker::Invoke<Any>(0x1240E8596A8308B9); } // 0x1240E8596A8308B9 b1207
	static Any _0xECB9E9BC887E8060() { return invoker::Invoke<Any>(0xECB9E9BC887E8060); } // 0xECB9E9BC887E8060 b1207
	static Any IS_VEHICLE_MODEL(Any p0, Any p1) { return invoker::Invoke<Any>(0x0045A54EC7A22455, p0, p1); } // 0x0045A54EC7A22455 b1207
	static void _0x424FFCB9F0D2D4B5(Any p0, Any p1) { invoker::Invoke<Void>(0x424FFCB9F0D2D4B5, p0, p1); } // 0x424FFCB9F0D2D4B5 b1207
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoker::Invoke<Void>(0xBBB134FB9D50C0CC, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xBBB134FB9D50C0CC b1207
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoker::Invoke<Void>(0x3D596E6E88A02C24); } // 0x3D596E6E88A02C24 b1207
	static Any SET_VEHICLE_ON_GROUND_PROPERLY(Any p0, Any p1) { return invoker::Invoke<Any>(0x7263332501E07F52, p0, p1); } // 0x7263332501E07F52 b1207
	static Any IS_VEHICLE_STOPPED(Any p0) { return invoker::Invoke<Any>(0x78C3311A73135241, p0); } // 0x78C3311A73135241 b1207
	static Any GET_VEHICLE_NUMBER_OF_PASSENGERS(Any p0) { return invoker::Invoke<Any>(0x59F3F16577CD79B2, p0); } // 0x59F3F16577CD79B2 b1207
	static Any _0xA9C55F1C15E62E06() { return invoker::Invoke<Any>(0xA9C55F1C15E62E06); } // 0xA9C55F1C15E62E06 b1207
	static Any GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Any p0) { return invoker::Invoke<Any>(0x9A578736FF3A17C3, p0); } // 0x9A578736FF3A17C3 b1207
	static Any _0x7892685BF6D9775E() { return invoker::Invoke<Any>(0x7892685BF6D9775E); } // 0x7892685BF6D9775E b1207
	static Any _0xFF5791B7639C2A46(Any p0, Any p1) { return invoker::Invoke<Any>(0xFF5791B7639C2A46, p0, p1); } // 0xFF5791B7639C2A46 b1207
	static Any _0xA9E185D498B9AC67(Any p0, Any p1) { return invoker::Invoke<Any>(0xA9E185D498B9AC67, p0, p1); } // 0xA9E185D498B9AC67 b1207
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Any p0) { invoker::Invoke<Void>(0x606374EBFC27B133, p0); } // 0x606374EBFC27B133 b1207
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Any p0) { invoker::Invoke<Void>(0x1F91D44490E1EA0C, p0); } // 0x1F91D44490E1EA0C b1207
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(Any p0) { invoker::Invoke<Void>(0xFEDFA97638D61D4A, p0); } // 0xFEDFA97638D61D4A b1207
	static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(Any p0) { invoker::Invoke<Void>(0xD4288603E8766FF7, p0); } // 0xD4288603E8766FF7 b1207
	static void SET_VEHICLE_DOORS_LOCKED(Any p0, Any p1) { invoker::Invoke<Void>(0x96F78A6A075D55D9, p0, p1); } // 0x96F78A6A075D55D9 b1207
	static void _SET_VEHICLE_DOOR_DESTROY_TYPE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA9F1D75195CC40F6, p0, p1, p2); } // 0xA9F1D75195CC40F6 b1207
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x359A8EA1FB8D6F0F, p0, p1, p2); } // 0x359A8EA1FB8D6F0F b1207
	static Any _0xFA2CDDFEB8BC898B() { return invoker::Invoke<Any>(0xFA2CDDFEB8BC898B); } // 0xFA2CDDFEB8BC898B b1207
	static Any _0x2381977DA948F8DC() { return invoker::Invoke<Any>(0x2381977DA948F8DC); } // 0x2381977DA948F8DC b1207
	static Any _0xE712BC978770F105() { return invoker::Invoke<Any>(0xE712BC978770F105); } // 0xE712BC978770F105 b1207
	static Any _0xDD1E1393D966D39A() { return invoker::Invoke<Any>(0xDD1E1393D966D39A); } // 0xDD1E1393D966D39A b1207
	static void EXPLODE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x75DCED9EEC5769D7, p0, p1, p2, p3); } // 0x75DCED9EEC5769D7 b1207
	static void _0x750D42C013F64AE7(Any p0, Any p1) { invoker::Invoke<Void>(0x750D42C013F64AE7, p0, p1); } // 0x750D42C013F64AE7 b1207
	static void _0xE78993FF9022C064(Any p0) { invoker::Invoke<Void>(0xE78993FF9022C064, p0); } // 0xE78993FF9022C064 b1207
	static void _0x9868C0D0134855F7(Any p0) { invoker::Invoke<Void>(0x9868C0D0134855F7, p0); } // 0x9868C0D0134855F7 b1207
	static void _0x201B8ED4FF7FE9F5(Any p0) { invoker::Invoke<Void>(0x201B8ED4FF7FE9F5, p0); } // 0x201B8ED4FF7FE9F5 b1207
	static void _0x41CDA90EE3450921(Any p0) { invoker::Invoke<Void>(0x41CDA90EE3450921, p0); } // 0x41CDA90EE3450921 b1207
	static void _0xD21A3D421E7F09F7(Any p0, Any p1) { invoker::Invoke<Void>(0xD21A3D421E7F09F7, p0, p1); } // 0xD21A3D421E7F09F7 b1207
	static void _0xA13028E22564A1BD(Any p0, Any p1) { invoker::Invoke<Void>(0xA13028E22564A1BD, p0, p1); } // 0xA13028E22564A1BD b1207
	static Any _0x485B05EF05B9AEE9() { return invoker::Invoke<Any>(0x485B05EF05B9AEE9); } // 0x485B05EF05B9AEE9 b1207
	static void SET_BOAT_ANCHOR(Any p0, Any p1) { invoker::Invoke<Void>(0xAEAB044F05B92659, p0, p1); } // 0xAEAB044F05B92659 b1207
	static void _0x6B53F4B811E583D2(Any p0, Any p1) { invoker::Invoke<Void>(0x6B53F4B811E583D2, p0, p1); } // 0x6B53F4B811E583D2 b1207
	static Any _0xC075176CFB8B4128() { return invoker::Invoke<Any>(0xC075176CFB8B4128); } // 0xC075176CFB8B4128 b1207
	static void _SET_BOAT_FROZEN_WHEN_ANCHORED(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x286771F3059A37A7, p0, p1, p2); } // 0x286771F3059A37A7 b1207
	static Any _0x75B49ACD73617437() { return invoker::Invoke<Any>(0x75B49ACD73617437); } // 0x75B49ACD73617437 b1207
	static void _SET_BOAT_ANCHOR_BUOYANCY_COEFFICIENT(Any p0, Any p1) { invoker::Invoke<Void>(0xE3261532550D6A9F, p0, p1); } // 0xE3261532550D6A9F b1207
	static void _SET_BOAT_EXPLODES_ON_WRECKED_ACTION(Any p0, Any p1) { invoker::Invoke<Void>(0x62A6D317A011EA1D, p0, p1); } // 0x62A6D317A011EA1D b1207
	static void _0x1098CDA477890165(Any p0, Any p1) { invoker::Invoke<Void>(0x1098CDA477890165, p0, p1); } // 0x1098CDA477890165 b1207
	static void _0x98A7598C579EE871(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x98A7598C579EE871, p0, p1, p2); } // 0x98A7598C579EE871 b1207
	static void _0x9E8711C81AA17876(Any p0, Any p1) { invoker::Invoke<Void>(0x9E8711C81AA17876, p0, p1); } // 0x9E8711C81AA17876 b1207
	static void SET_VEHICLE_STRONG(Any p0, Any p1) { invoker::Invoke<Void>(0xAB315515C9F8803D, p0, p1); } // 0xAB315515C9F8803D b1207
	static Any IS_VEHICLE_SEAT_FREE(Any p0, Any p1) { return invoker::Invoke<Any>(0xE052C1B1CAA4ECE4, p0, p1); } // 0xE052C1B1CAA4ECE4 b1207
	static Any GET_PED_IN_VEHICLE_SEAT(Any p0, Any p1) { return invoker::Invoke<Any>(0xBB40DD2270B65366, p0, p1); } // 0xBB40DD2270B65366 b1207
	static Any _0x74583B19FEEAFDA7() { return invoker::Invoke<Any>(0x74583B19FEEAFDA7); } // 0x74583B19FEEAFDA7 b1207
	static Any _0xEA44E97849E9F3DD(Any p0) { return invoker::Invoke<Any>(0xEA44E97849E9F3DD, p0); } // 0xEA44E97849E9F3DD b1207
	static Any _0xA8BA0BAE0173457B(Any p0, Any p1) { return invoker::Invoke<Any>(0xA8BA0BAE0173457B, p0, p1); } // 0xA8BA0BAE0173457B b1207
	static void SET_VEHICLE_FORWARD_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0xF9F92AF49F12F6E7, p0, p1); } // 0xF9F92AF49F12F6E7 b1207
	static void BRING_VEHICLE_TO_HALT(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x260BE8F09E326A20, p0, p1, p2, p3); } // 0x260BE8F09E326A20 b1207
	static Any _0x404527BC03DA0E6C(Any p0) { return invoker::Invoke<Any>(0x404527BC03DA0E6C, p0); } // 0x404527BC03DA0E6C b1207
	static void _0x7C06330BFDDA182E(Any p0) { invoker::Invoke<Void>(0x7C06330BFDDA182E, p0); } // 0x7C06330BFDDA182E b1207
	static void _0xE12F5ED49F44D40D(Any p0) { invoker::Invoke<Void>(0xE12F5ED49F44D40D, p0); } // 0xE12F5ED49F44D40D b1207
	static void _0xF6E3D38869D0F7AD(Any p0) { invoker::Invoke<Void>(0xF6E3D38869D0F7AD, p0); } // 0xF6E3D38869D0F7AD b1207
	static void SET_VEHICLE_DOORS_SHUT(Any p0, Any p1) { invoker::Invoke<Void>(0xA4FFCD645B11F25A, p0, p1); } // 0xA4FFCD645B11F25A b1207
	static Any _0xEBD0A4E935106FE5() { return invoker::Invoke<Any>(0xEBD0A4E935106FE5); } // 0xEBD0A4E935106FE5 b1207
	static void SET_VEHICLE_WHEELS_CAN_BREAK(Any p0, Any p1) { invoker::Invoke<Void>(0x839137C40275FB77, p0, p1); } // 0x839137C40275FB77 b1207
	static void SET_VEHICLE_DOOR_OPEN(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x550CE392A4672412, p0, p1, p2, p3); } // 0x550CE392A4672412 b1207
	static Any _0x745F15A215F2DDF1() { return invoker::Invoke<Any>(0x745F15A215F2DDF1); } // 0x745F15A215F2DDF1 b1207
	static void _0x8878FF3EEE2868A9(Any p0, Any p1) { invoker::Invoke<Void>(0x8878FF3EEE2868A9, p0, p1); } // 0x8878FF3EEE2868A9 b1207
	static Any _0xBAE0EEDF93F05EAA() { return invoker::Invoke<Any>(0xBAE0EEDF93F05EAA); } // 0xBAE0EEDF93F05EAA b1207
	static void _0x4D15E49764CB328A(Any p0, Any p1) { invoker::Invoke<Void>(0x4D15E49764CB328A, p0, p1); } // 0x4D15E49764CB328A b1207
	static void SET_VEHICLE_LIGHTS(Any p0, Any p1) { invoker::Invoke<Void>(0x629F0A0E952CAE7D, p0, p1); } // 0x629F0A0E952CAE7D b1207
	static void SET_RANDOM_TRAINS(Any p0) { invoker::Invoke<Void>(0x1156C6EE7E82A98A, p0); } // 0x1156C6EE7E82A98A b1207
	static Any _0x331CBD247FC5DAA8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x331CBD247FC5DAA8, p0, p1, p2, p3, p4, p5); } // 0x331CBD247FC5DAA8 b1207
	static Any _0x0516FAE561276EFC(Any p0) { return invoker::Invoke<Any>(0x0516FAE561276EFC, p0); } // 0x0516FAE561276EFC b1207
	static Any _0x45853F4E17D847D5(Any p0) { return invoker::Invoke<Any>(0x45853F4E17D847D5, p0); } // 0x45853F4E17D847D5 b1207
	static Any _0x6E585A616ABB8401(Any p0) { return invoker::Invoke<Any>(0x6E585A616ABB8401, p0); } // 0x6E585A616ABB8401 b1207
	static void _0x15206E88FF7617DF(Any p0, Any p1) { invoker::Invoke<Void>(0x15206E88FF7617DF, p0, p1); } // 0x15206E88FF7617DF b1207
	static void _0xA7966807953A18EE(Any p0, Any p1) { invoker::Invoke<Void>(0xA7966807953A18EE, p0, p1); } // 0xA7966807953A18EE b1207
	static void _0x6B34BE961F639E21(Any p0, Any p1) { invoker::Invoke<Void>(0x6B34BE961F639E21, p0, p1); } // 0x6B34BE961F639E21 b1207
	static Any _0xE6BD7DD3FD474415() { return invoker::Invoke<Any>(0xE6BD7DD3FD474415); } // 0xE6BD7DD3FD474415 b1207
	static void _0x615B3B8E73634509(Any p0, Any p1) { invoker::Invoke<Void>(0x615B3B8E73634509, p0, p1); } // 0x615B3B8E73634509 b1207
	static void _0x38E7DD70A242D5CB(Any p0, Any p1) { invoker::Invoke<Void>(0x38E7DD70A242D5CB, p0, p1); } // 0x38E7DD70A242D5CB b1207
	static void _0x63509DDF102E08E8(Any p0, Any p1) { invoker::Invoke<Void>(0x63509DDF102E08E8, p0, p1); } // 0x63509DDF102E08E8 b1207
	static void _0x7408B5C66BA31ADB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x7408B5C66BA31ADB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x7408B5C66BA31ADB b1207
	static void _0x41365DB586CD9E8E(Any p0, Any p1) { invoker::Invoke<Void>(0x41365DB586CD9E8E, p0, p1); } // 0x41365DB586CD9E8E b1207
	static void _0xD0AABE5B9F8FA589(Any p0, Any p1) { invoker::Invoke<Void>(0xD0AABE5B9F8FA589, p0, p1); } // 0xD0AABE5B9F8FA589 b1207
	static void _0x427C919E9809E370(Any p0, Any p1) { invoker::Invoke<Void>(0x427C919E9809E370, p0, p1); } // 0x427C919E9809E370 b1207
	static Any _0xC29996A337BDD099(Any p0) { return invoker::Invoke<Any>(0xC29996A337BDD099, p0); } // 0xC29996A337BDD099 b1207
	static Any _0x1E8A921112891651(Any p0) { return invoker::Invoke<Any>(0x1E8A921112891651, p0); } // 0x1E8A921112891651 b1207
	static Any _0xB4241AD8F5AEE9ED(Any p0) { return invoker::Invoke<Any>(0xB4241AD8F5AEE9ED, p0); } // 0xB4241AD8F5AEE9ED b1207
	static void _0xA230A5DDE12ED374(Any p0) { invoker::Invoke<Void>(0xA230A5DDE12ED374, p0); } // 0xA230A5DDE12ED374 b1207
	static void _0x0D5FDF0D36FA10CD(Any p0) { invoker::Invoke<Void>(0x0D5FDF0D36FA10CD, p0); } // 0x0D5FDF0D36FA10CD b1207
	static void _0xE682002DB1F30669(Any p0) { invoker::Invoke<Void>(0xE682002DB1F30669, p0); } // 0xE682002DB1F30669 b1207
	static void _0x718EB706B6E998A0(Any p0) { invoker::Invoke<Void>(0x718EB706B6E998A0, p0); } // 0x718EB706B6E998A0 b1207
	static Any _0xF05DFAF1ADFEF2CD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xF05DFAF1ADFEF2CD, p0, p1, p2, p3, p4, p5); } // 0xF05DFAF1ADFEF2CD b1207
	static Any _0xD1DF5E54F4ACBE1A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0xD1DF5E54F4ACBE1A, p0, p1, p2, p3, p4, p5, p6); } // 0xD1DF5E54F4ACBE1A b1207
	static Any _0x0FDDEE66E3465726(Any p0) { return invoker::Invoke<Any>(0x0FDDEE66E3465726, p0); } // 0x0FDDEE66E3465726 b1207
	static void _0x4C05B42A8D937796() { invoker::Invoke<Void>(0x4C05B42A8D937796); } // 0x4C05B42A8D937796 b1207
	static void _0xB961DD799A837BD7() { invoker::Invoke<Void>(0xB961DD799A837BD7); } // 0xB961DD799A837BD7 b1207
	static void _0x16B86A49E072AA85() { invoker::Invoke<Void>(0x16B86A49E072AA85); } // 0x16B86A49E072AA85 b1207
	static void _0x2A7413168F6CD5A8() { invoker::Invoke<Void>(0x2A7413168F6CD5A8); } // 0x2A7413168F6CD5A8 b1207
	static void _0xFFFE15B433300B8C(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xFFFE15B433300B8C, p0, p1, p2); } // 0xFFFE15B433300B8C b1207
	static void _0x6EA1273D525427F4(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x6EA1273D525427F4, p0, p1, p2); } // 0x6EA1273D525427F4 b1207
	static Any _0x7BE0746539DEF0C8() { return invoker::Invoke<Any>(0x7BE0746539DEF0C8); } // 0x7BE0746539DEF0C8 b1207
	static Any _0x6C87F49BFA181DB5(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x6C87F49BFA181DB5, p0, p1, p2); } // 0x6C87F49BFA181DB5 b1207
	static Any _0x85D39F5E3B6D7EB0(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x85D39F5E3B6D7EB0, p0, p1, p2); } // 0x85D39F5E3B6D7EB0 b1207
	static Any _0x6DE03BCC15E81710(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x6DE03BCC15E81710, p0, p1, p2); } // 0x6DE03BCC15E81710 b1207
	static void DELETE_ALL_TRAINS() { invoker::Invoke<Void>(0xA3120A1385F17FF7); } // 0xA3120A1385F17FF7 b1207
	static Any _0x0E558D3A49D759D6(Any p0, Any p1) { return invoker::Invoke<Any>(0x0E558D3A49D759D6, p0, p1); } // 0x0E558D3A49D759D6 b1207
	static void _0xD4907EF4334C7602(Any p0, Any p1) { invoker::Invoke<Void>(0xD4907EF4334C7602, p0, p1); } // 0xD4907EF4334C7602 b1207
	static void _0x68830738A6BFB370(Any p0, Any p1) { invoker::Invoke<Void>(0x68830738A6BFB370, p0, p1); } // 0x68830738A6BFB370 b1207
	static void SET_TRAIN_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0xDFBA6BBFF7CCAFBB, p0, p1); } // 0xDFBA6BBFF7CCAFBB b1207
	static void _0x9F29999DFDF2AEB8(Any p0, Any p1) { invoker::Invoke<Void>(0x9F29999DFDF2AEB8, p0, p1); } // 0x9F29999DFDF2AEB8 b1207
	static void SET_TRAIN_CRUISE_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0x01021EB2E96B793C, p0, p1); } // 0x01021EB2E96B793C b1207
	static Any _0x60B7D1DCC312697D(Any p0) { return invoker::Invoke<Any>(0x60B7D1DCC312697D, p0); } // 0x60B7D1DCC312697D b1207
	static Any _0x8DF5F6A19F99F0D5(Any p0, Any p1) { return invoker::Invoke<Any>(0x8DF5F6A19F99F0D5, p0, p1); } // 0x8DF5F6A19F99F0D5 b1207
	static Any _0x635423D55CA84FC8(Any p0) { return invoker::Invoke<Any>(0x635423D55CA84FC8, p0); } // 0x635423D55CA84FC8 b1207
	static Any _0x671A07C9A1CD50A5(Any p0) { return invoker::Invoke<Any>(0x671A07C9A1CD50A5, p0); } // 0x671A07C9A1CD50A5 b1207
	static void _0x4182C037AA1F0091(Any p0, Any p1) { invoker::Invoke<Void>(0x4182C037AA1F0091, p0, p1); } // 0x4182C037AA1F0091 b1207
	static void _0xDD100CE1EBBF37E3(Any p0, Any p1) { invoker::Invoke<Void>(0xDD100CE1EBBF37E3, p0, p1); } // 0xDD100CE1EBBF37E3 b1207
	static void _0x160C1B5AB48AB87C(Any p0, Any p1) { invoker::Invoke<Void>(0x160C1B5AB48AB87C, p0, p1); } // 0x160C1B5AB48AB87C b1207
	static Any _0xE887BD31D97793F6(Any p0) { return invoker::Invoke<Any>(0xE887BD31D97793F6, p0); } // 0xE887BD31D97793F6 b1207
	static void _0x3660BCAB3A6BB734(Any p0) { invoker::Invoke<Void>(0x3660BCAB3A6BB734, p0); } // 0x3660BCAB3A6BB734 b1207
	static void _0x787E43477746876F(Any p0) { invoker::Invoke<Void>(0x787E43477746876F, p0); } // 0x787E43477746876F b1207
	static void SET_RANDOM_BOATS(Any p0) { invoker::Invoke<Void>(0xF44D446D4E36DB87, p0); } // 0xF44D446D4E36DB87 b1207
	static void REQUEST_VEHICLE_RECORDING(Any p0, Any p1) { invoker::Invoke<Void>(0xC474CF16EDA45DC9, p0, p1); } // 0xC474CF16EDA45DC9 b1207
	static Any HAS_VEHICLE_RECORDING_BEEN_LOADED(Any p0, Any p1) { return invoker::Invoke<Any>(0xBA9325BE372AB6EA, p0, p1); } // 0xBA9325BE372AB6EA b1207
	static void REMOVE_VEHICLE_RECORDING(Any p0, Any p1) { invoker::Invoke<Void>(0x139E35755418F6AA, p0, p1); } // 0x139E35755418F6AA b1207
	static Any GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x1A00961A1BE94E5E, p0, p1, p2); } // 0x1A00961A1BE94E5E b1207
	static Any GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x61787DD28B8CC0D5, p0, p1, p2); } // 0x61787DD28B8CC0D5 b1207
	static Any GET_TIME_POSITION_IN_RECORDING(Any p0) { return invoker::Invoke<Any>(0x233B51C7913FA031, p0); } // 0x233B51C7913FA031 b1207
	static void START_PLAYBACK_RECORDED_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4932B84E3276508E, p0, p1, p2, p3); } // 0x4932B84E3276508E b1207
	static void _0x1F2E4E06DEA8992B(Any p0, Any p1) { invoker::Invoke<Void>(0x59ECA796021B0539, p0, p1); } // 0x59ECA796021B0539 b1207
	static void STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoker::Invoke<Void>(0xBF9B4D6267E8C26D, p0); } // 0xBF9B4D6267E8C26D b1207
	static Any IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoker::Invoke<Any>(0x02774B3A9034278F, p0); } // 0x02774B3A9034278F b1207
	static Any IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Any p0) { return invoker::Invoke<Any>(0x5A7472606EC5B7C1, p0); } // 0x5A7472606EC5B7C1 b1207
	static void SET_PLAYBACK_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0xD78084EED4CD94C6, p0, p1); } // 0xD78084EED4CD94C6 b1207
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Any p0, Any p1) { invoker::Invoke<Void>(0x5F5E6379C59EFC56, p0, p1); } // 0x5F5E6379C59EFC56 b1207
	static Any GET_CLOSEST_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x52F45D033645181B, p0, p1, p2, p3, p4, p5); } // 0x52F45D033645181B b1207
	static Any GET_TRAIN_CARRIAGE(Any p0, Any p1) { return invoker::Invoke<Any>(0xD0FB093A4CDB932C, p0, p1); } // 0xD0FB093A4CDB932C b1207
	static void DELETE_MISSION_TRAIN(Any p0) { invoker::Invoke<Void>(0x0D3630FB07E8B570, p0); } // 0x0D3630FB07E8B570 b1207
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Any p0, Any p1) { invoker::Invoke<Void>(0xBBE7648349B49BE8, p0, p1); } // 0xBBE7648349B49BE8 b1207
	static void SET_MISSION_TRAIN_COORDS(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x7632755962AB9922, p0, p1, p2, p3); } // 0x7632755962AB9922 b1207
	static void _0xC9EA26893C9E4024(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xC9EA26893C9E4024, p0, p1, p2, p3, p4); } // 0xC9EA26893C9E4024 b1207
	static void _0xA72B1BF3857B94D7(Any p0, Any p1) { invoker::Invoke<Void>(0xA72B1BF3857B94D7, p0, p1); } // 0xA72B1BF3857B94D7 b1207
	static Any _0xB9D5BDDA88E1BB66(Any p0) { return invoker::Invoke<Any>(0xB9D5BDDA88E1BB66, p0); } // 0xB9D5BDDA88E1BB66 b1207
	static Any IS_THIS_MODEL_A_BOAT(Any p0) { return invoker::Invoke<Any>(0x799CFC7C5B743B15, p0); } // 0x799CFC7C5B743B15 b1207
	static Any IS_THIS_MODEL_A_TRAIN(Any p0) { return invoker::Invoke<Any>(0xFC08C8F8C1EDF174, p0); } // 0xFC08C8F8C1EDF174 b1207
	static void SET_VEHICLE_CAN_BE_TARGETTED(Any p0, Any p1) { invoker::Invoke<Void>(0x05254BA0B44ADC16, p0, p1); } // 0x05254BA0B44ADC16 b1207
	static void _0xDBC631F109350B8C(Any p0, Any p1) { invoker::Invoke<Void>(0x63DC1F22C903B709, p0, p1); } // 0x63DC1F22C903B709 b1207
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Any p0, Any p1) { invoker::Invoke<Void>(0x4BF8131AE811541C, p0, p1); } // 0x4BF8131AE811541C b1207
	static void _0x1AA8A837D2169D94(Any p0, Any p1) { invoker::Invoke<Void>(0xC903855E028A05F2, p0, p1); } // 0xC903855E028A05F2 b1207
	static Any _0x33992A808DF1C1BA() { return invoker::Invoke<Any>(0x33992A808DF1C1BA); } // 0x33992A808DF1C1BA b1207
	static Any _0x065D03A9D6B2C6B5() { return invoker::Invoke<Any>(0x065D03A9D6B2C6B5); } // 0x065D03A9D6B2C6B5 b1207
	static void SET_VEHICLE_DIRT_LEVEL(Any p0, Any p1) { invoker::Invoke<Void>(0x758C3460EE915D0A, p0, p1); } // 0x758C3460EE915D0A b1207
	static Any IS_VEHICLE_DOOR_FULLY_OPEN(Any p0, Any p1) { return invoker::Invoke<Any>(0x7AE191143C7A9107, p0, p1); } // 0x7AE191143C7A9107 b1207
	static void SET_VEHICLE_ENGINE_ON(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xB64CFA14CB9A2E78, p0, p1, p2); } // 0xB64CFA14CB9A2E78 b1207
	static void SET_VEHICLE_UNDRIVEABLE(Any p0, Any p1) { invoker::Invoke<Void>(0x6E884BAB713A2A94, p0, p1); } // 0x6E884BAB713A2A94 b1207
	static void SET_VEHICLE_PROVIDES_COVER(Any p0, Any p1) { invoker::Invoke<Void>(0x652712478F1721F4, p0, p1); } // 0x652712478F1721F4 b1207
	static void _0x3053064F909B5F42(Any p0, Any p1) { invoker::Invoke<Void>(0x3053064F909B5F42, p0, p1); } // 0x3053064F909B5F42 b1207
	static void SET_VEHICLE_DOOR_CONTROL(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xD57F10EBBA814ECF, p0, p1, p2, p3); } // 0xD57F10EBBA814ECF b1207
	static void SET_VEHICLE_DOOR_LATCHED(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x06F8A202EB312A3C, p0, p1, p2, p3, p4); } // 0x06F8A202EB312A3C b1207
	static void SET_VEHICLE_DOOR_SHUT(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x6A3C24B91FD0EA09, p0, p1, p2); } // 0x6A3C24B91FD0EA09 b1207
	static void SET_VEHICLE_DOOR_BROKEN(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x9666CF20A1C6D780, p0, p1, p2); } // 0x9666CF20A1C6D780 b1207
	static void SET_VEHICLE_CAN_BREAK(Any p0, Any p1) { invoker::Invoke<Void>(0xC5ED9D59B4646611, p0, p1); } // 0xC5ED9D59B4646611 b1207
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Any p0, Any p1) { invoker::Invoke<Void>(0x54800D386C5825E5, p0, p1); } // 0x54800D386C5825E5 b1207
	static Any _0x7549B9E841940695() { return invoker::Invoke<Any>(0x7549B9E841940695); } // 0x7549B9E841940695 b1207
	static Any GET_VEHICLE_DOOR_LOCK_STATUS(Any p0) { return invoker::Invoke<Any>(0xC867FD144F2469D3, p0); } // 0xC867FD144F2469D3 b1207
	static void _SET_VEHICLE_DOOR_CAN_BREAK(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x081FB9D6422F804C, p0, p1, p2); } // 0x081FB9D6422F804C b1207
	static Any IS_VEHICLE_ON_ALL_WHEELS(Any p0) { return invoker::Invoke<Any>(0x0D5D119529654EE0, p0); } // 0x0D5D119529654EE0 b1207
	static Any _0x3C9628A811CBD724() { return invoker::Invoke<Any>(0x3C9628A811CBD724); } // 0x3C9628A811CBD724 b1207
	static Any _0x67995318F5FAA496(Any p0) { return invoker::Invoke<Any>(0x67995318F5FAA496, p0); } // 0x67995318F5FAA496 b1207
	static Any _0x09034479E6E3E269() { return invoker::Invoke<Any>(0x09034479E6E3E269); } // 0x09034479E6E3E269 b1207
	static Any _0x86AFC343CF7F0B34(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x86AFC343CF7F0B34, p0, p1, p2, p3, p4); } // 0x86AFC343CF7F0B34 b1207
	static Any _0xD9BF3ED8EFB67EA3(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xD9BF3ED8EFB67EA3, p0, p1, p2, p3, p4); } // 0xD9BF3ED8EFB67EA3 b1207
	static Any _0x785639D89F8451AB(Any p0, Any p1) { return invoker::Invoke<Any>(0x785639D89F8451AB, p0, p1); } // 0x785639D89F8451AB b1207
	static void _0xE6C5E2125EB210C1(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE6C5E2125EB210C1, p0, p1, p2); } // 0xE6C5E2125EB210C1 b1207
	static void _0x3ABFA128F5BF5A70(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3ABFA128F5BF5A70, p0, p1, p2); } // 0x3ABFA128F5BF5A70 b1207
	static Any _0x2C46D2A591D8C322(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x2C46D2A591D8C322, p0, p1, p2); } // 0x2C46D2A591D8C322 b1207
	static Any _0xCAFF2C9747103C02(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xCAFF2C9747103C02, p0, p1, p2); } // 0xCAFF2C9747103C02 b1207
	static Any _0x138398153824E332() { return invoker::Invoke<Any>(0x138398153824E332); } // 0x138398153824E332 b1207
	static void _0x34BCF6209B9668A7(Any p0, Any p1) { invoker::Invoke<Void>(0x34BCF6209B9668A7, p0, p1); } // 0x34BCF6209B9668A7 b1207
	static void _0xD0BA1853D76683C8(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0xD0BA1853D76683C8, p0, p1, p2, p3, p4); } // 0xD0BA1853D76683C8 b1207
	static Any _0x8EC47DD4300BF063() { return invoker::Invoke<Any>(0x8EC47DD4300BF063); } // 0x8EC47DD4300BF063 b1207
	static void _0xDC69F6913CCA0B99(Any p0, Any p1) { invoker::Invoke<Void>(0xDC69F6913CCA0B99, p0, p1); } // 0xDC69F6913CCA0B99 b1207
	static Any _0x7840576C50A13DBA() { return invoker::Invoke<Any>(0x7840576C50A13DBA); } // 0x7840576C50A13DBA b1207
	static Any _0xD0116DF21E6C7B36(Any p0, Any p1) { return invoker::Invoke<Any>(0xD0116DF21E6C7B36, p0, p1); } // 0xD0116DF21E6C7B36 b1207
	static void _0x54CBDD6E1B4CB4DF(Any p0) { invoker::Invoke<Void>(0x54CBDD6E1B4CB4DF, p0); } // 0x54CBDD6E1B4CB4DF b1207
	static Any _0x1180A2974D251B7B(Any p0) { return invoker::Invoke<Any>(0x1180A2974D251B7B, p0); } // 0x1180A2974D251B7B b1207
	static Any _0x86FA6D8B48667D75(Any p0) { return invoker::Invoke<Any>(0x86FA6D8B48667D75, p0); } // 0x86FA6D8B48667D75 b1207
	static Any _0x9CC94A948EAF5372(Any p0, Any p1) { return invoker::Invoke<Any>(0x9CC94A948EAF5372, p0, p1); } // 0x9CC94A948EAF5372 b1207
	static Any _0xDE8C5B9F65017FA1(Any p0) { return invoker::Invoke<Any>(0xDE8C5B9F65017FA1, p0); } // 0xDE8C5B9F65017FA1 b1207
	static Any _0xAF787E081AC4A8EE(Any p0) { return invoker::Invoke<Any>(0xAF787E081AC4A8EE, p0); } // 0xAF787E081AC4A8EE b1207
	static Any _0xBA958F68031DDBFC(Any p0, Any p1) { return invoker::Invoke<Any>(0xBA958F68031DDBFC, p0, p1); } // 0xBA958F68031DDBFC b1207
	static Any _0x865FEC2FA899F29C(Any p0) { return invoker::Invoke<Any>(0x865FEC2FA899F29C, p0); } // 0x865FEC2FA899F29C b1207
	static void _0x1A861F899EBBE17C(Any p0, Any p1) { invoker::Invoke<Void>(0x1A861F899EBBE17C, p0, p1); } // 0x1A861F899EBBE17C b1207
	static void _0xF8F7DA13CFBD4532(Any p0, Any p1) { invoker::Invoke<Void>(0xF8F7DA13CFBD4532, p0, p1); } // 0xF8F7DA13CFBD4532 b1207
	static void _0xCFE122EC635CC2B2(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xCFE122EC635CC2B2, p0, p1, p2, p3); } // 0xCFE122EC635CC2B2 b1207
	static void _0x2BB2B5BCF0DF8008(Any p0, Any p1) { invoker::Invoke<Void>(0x2BB2B5BCF0DF8008, p0, p1); } // 0x2BB2B5BCF0DF8008 b1207
	static void _0x6703872EC09BC158(Any p0, Any p1) { invoker::Invoke<Void>(0x6703872EC09BC158, p0, p1); } // 0x6703872EC09BC158 b1207
	static void _0x1BFBAFCC6760FF02(Any p0, Any p1) { invoker::Invoke<Void>(0x1BFBAFCC6760FF02, p0, p1); } // 0x1BFBAFCC6760FF02 b1207
	static Any _0xF5EA41C1408695FB(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xF5EA41C1408695FB, p0, p1, p2, p3); } // 0xF5EA41C1408695FB b1207
	static void SET_VEHICLE_FIXED(Any p0) { invoker::Invoke<Void>(0x79811282A9D1AE56, p0); } // 0x79811282A9D1AE56 b1207
	static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Any p0, Any p1) { invoker::Invoke<Void>(0xB70986AB19B04AFF, p0, p1); } // 0xB70986AB19B04AFF b1207
	static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Any p0, Any p1) { invoker::Invoke<Void>(0x5795FBE7A2001C14, p0, p1); } // 0x5795FBE7A2001C14 b1207
	static void _0x91A0BD635321F145(Any p0, Any p1) { invoker::Invoke<Void>(0xD146EE5F2B06B95E, p0, p1); } // 0xD146EE5F2B06B95E b1207
	static void _0xC50CE861B55EAB8B(Any p0, Any p1) { invoker::Invoke<Void>(0x8F75941C86EEBFCA, p0, p1); } // 0x8F75941C86EEBFCA b1207
	static void _0x6EBFB22D646FFC18(Any p0, Any p1) { invoker::Invoke<Void>(0xC84E138448507567, p0, p1); } // 0xC84E138448507567 b1207
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xC619A44639BC0CB4, p0, p1, p2, p3, p4, p5); } // 0xC619A44639BC0CB4 b1207
	static Any _0x84DAAE11E9EE4FC3() { return invoker::Invoke<Any>(0x84DAAE11E9EE4FC3); } // 0x84DAAE11E9EE4FC3 b1207
	static Any IS_VEHICLE_EXTRA_TURNED_ON(Any p0, Any p1) { return invoker::Invoke<Any>(0xFA9A55D9C4351625, p0, p1); } // 0xFA9A55D9C4351625 b1207
	static void SET_VEHICLE_EXTRA(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBB6F89150BC9D16B, p0, p1, p2); } // 0xBB6F89150BC9D16B b1207
	static Any DOES_EXTRA_EXIST(Any p0, Any p1) { return invoker::Invoke<Any>(0xAF5E7E9A7620FFB5, p0, p1); } // 0xAF5E7E9A7620FFB5 b1207
	static void SET_VEHICLE_DAMAGE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0x1D7678F81452BB41, p0, p1, p2, p3, p4, p5, p6); } // 0x1D7678F81452BB41 b1207
	static Any _0x90DBFFAC43B22081() { return invoker::Invoke<Any>(0x90DBFFAC43B22081); } // 0x90DBFFAC43B22081 b1207
	static void SET_VEHICLE_ENGINE_HEALTH(Any p0, Any p1) { invoker::Invoke<Void>(0x8BDC5B998B4654EF, p0, p1); } // 0x8BDC5B998B4654EF b1207
	static Any _0x1E5A9B356D5098BE() { return invoker::Invoke<Any>(0x1E5A9B356D5098BE); } // 0x1E5A9B356D5098BE b1207
	static void SET_VEHICLE_PETROL_TANK_HEALTH(Any p0, Any p1) { invoker::Invoke<Void>(0x6AB2918EE3BEC94C, p0, p1); } // 0x6AB2918EE3BEC94C b1207
	static Any IS_VEHICLE_STUCK_TIMER_UP(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x1ABA9753939503C5, p0, p1, p2); } // 0x1ABA9753939503C5 b1207
	static void RESET_VEHICLE_STUCK_TIMER(Any p0, Any p1) { invoker::Invoke<Void>(0x23298B468F7D88B6, p0, p1); } // 0x23298B468F7D88B6 b1207
	static Any IS_VEHICLE_DRIVEABLE(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xB86D29B10F627379, p0, p1, p2); } // 0xB86D29B10F627379 b1207
	static Any _0xDDBEA5506C848227(Any p0) { return invoker::Invoke<Any>(0xDDBEA5506C848227, p0); } // 0xDDBEA5506C848227 b1207
	static Any _0x0E3BF7ED4169EC43(Any p0) { return invoker::Invoke<Any>(0x0E3BF7ED4169EC43, p0); } // 0x0E3BF7ED4169EC43 b1207
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Any p0, Any p1) { invoker::Invoke<Void>(0xBB5A3FA8ED3979C5, p0, p1); } // 0xBB5A3FA8ED3979C5 b1207
	static void START_VEHICLE_HORN(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xB4E3BFC39CA16057, p0, p1, p2, p3); } // 0xB4E3BFC39CA16057 b1207
	static void SET_VEHICLE_HAS_STRONG_AXLES(Any p0, Any p1) { invoker::Invoke<Void>(0x252253C8A45AA1FC, p0, p1); } // 0x252253C8A45AA1FC b1207
	static void _0x6F73EFAB11651D7F(Any p0, Any p1) { invoker::Invoke<Void>(0x6F73EFAB11651D7F, p0, p1); } // 0x6F73EFAB11651D7F b1207
	static void _0x5AABB09F6FBD1F87(Any p0, Any p1) { invoker::Invoke<Void>(0x5AABB09F6FBD1F87, p0, p1); } // 0x5AABB09F6FBD1F87 b1207
	static void _0x8268B098F6FCA4E2(Any p0, Any p1) { invoker::Invoke<Void>(0x8268B098F6FCA4E2, p0, p1); } // 0x8268B098F6FCA4E2 b1207
	static void _0xF89D82A0582E46ED(Any p0, Any p1) { invoker::Invoke<Void>(0xF89D82A0582E46ED, p0, p1); } // 0xF89D82A0582E46ED b1207
	static Any _0xA44D65E6C624526F(Any p0) { return invoker::Invoke<Any>(0xA44D65E6C624526F, p0); } // 0xA44D65E6C624526F b1207
	static Any _0xBB765B8FD49A796C() { return invoker::Invoke<Any>(0xBB765B8FD49A796C); } // 0xBB765B8FD49A796C b1207
	static Any _0xA0A424505A1B6429() { return invoker::Invoke<Any>(0xA0A424505A1B6429); } // 0xA0A424505A1B6429 b1207
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Any p0, Any p1) { invoker::Invoke<Void>(0xA402939C6761E1A3, p0, p1); } // 0xA402939C6761E1A3 b1207
	static Any _0x8D3230A0ED7DE39F() { return invoker::Invoke<Any>(0x8D3230A0ED7DE39F); } // 0x8D3230A0ED7DE39F b1207
	static Any IS_ANY_VEHICLE_NEAR_POINT(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x5698BA4FD04D39C4, p0, p1, p2, p3); } // 0x5698BA4FD04D39C4 b1207
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Any p0) { invoker::Invoke<Void>(0x84B81EF78BD22357, p0); } // 0x84B81EF78BD22357 b1207
	static void REQUEST_VEHICLE_ASSET(Any p0, Any p1) { invoker::Invoke<Void>(0x81A15811460FAB3A, p0, p1); } // 0x81A15811460FAB3A b1207
	static void _0xCF9DA72002FC16BF(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCF9DA72002FC16BF, p0, p1, p2); } // 0xCF9DA72002FC16BF b1207
	static Any HAS_VEHICLE_ASSET_LOADED(Any p0) { return invoker::Invoke<Any>(0xB935F3154BC913C8, p0); } // 0xB935F3154BC913C8 b1207
	static void REMOVE_VEHICLE_ASSET(Any p0) { invoker::Invoke<Void>(0x888A4E675B38F5AD, p0); } // 0x888A4E675B38F5AD b1207
	static Any _0x501354951CD942DE() { return invoker::Invoke<Any>(0x501354951CD942DE); } // 0x501354951CD942DE b1207
	static void _0x104D9A7B1C0D0783(Any p0, Any p1) { invoker::Invoke<Void>(0x104D9A7B1C0D0783, p0, p1); } // 0x104D9A7B1C0D0783 b1207
	static Any IS_VEHICLE_IN_BURNOUT(Any p0) { return invoker::Invoke<Any>(0x3F5029A8FC060C48, p0); } // 0x3F5029A8FC060C48 b1207
	static void SET_VEHICLE_HANDBRAKE(Any p0, Any p1) { invoker::Invoke<Void>(0x91BE51AEC4E99710, p0, p1); } // 0x91BE51AEC4E99710 b1207
	static void _0x48ADC8A773564670() { invoker::Invoke<Void>(0x1FF00DB43026B12F); } // 0x1FF00DB43026B12F b1207
	static Any _0x91D6DD290888CBAB() { return invoker::Invoke<Any>(0x2701D01D5E18FC31); } // 0x2701D01D5E18FC31 b1207
	static Any _0xCF867A239EC30741() { return invoker::Invoke<Any>(0xCF867A239EC30741); } // 0xCF867A239EC30741 b1207
	static Any GET_VEHICLE_ESTIMATED_MAX_SPEED(Any p0) { return invoker::Invoke<Any>(0xFE52F34491529F0B, p0); } // 0xFE52F34491529F0B b1207
	static Any _ADD_SPEED_ZONE_FOR_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0x4C221BAC54D735C3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x4C221BAC54D735C3 b1207
	static Any _REMOVE_SPEED_ZONE(Any p0) { return invoker::Invoke<Any>(0xFE9AB3354ACE6C9C, p0); } // 0xFE9AB3354ACE6C9C b1207
	static Any _0x639431E895B9AA57(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x80DDCCB2F4A3EB57, p0, p1, p2, p3, p4); } // 0x80DDCCB2F4A3EB57 b1207
	static Any _0xF8B2D32A2231FD24() { return invoker::Invoke<Any>(0xF8B2D32A2231FD24); } // 0xF8B2D32A2231FD24 b1207
	static void MODIFY_VEHICLE_TOP_SPEED(Any p0, Any p1) { invoker::Invoke<Void>(0x35AD938C74CACD6A, p0, p1); } // 0x35AD938C74CACD6A b1207
	static void _0x1CF38D529D7441D9(Any p0, Any p1) { invoker::Invoke<Void>(0x23A3AB86E0807721, p0, p1); } // 0x23A3AB86E0807721 b1207
	static void _0x0AD9E8F87FF7C16F(Any p0, Any p1) { invoker::Invoke<Void>(0xC1842F40FD501DA2, p0, p1); } // 0xC1842F40FD501DA2 b1207
	static Any _0x30D86B2B7622D0EB(Any p0) { return invoker::Invoke<Any>(0x30D86B2B7622D0EB, p0); } // 0x30D86B2B7622D0EB b1207
	static void _0xAB04325045427AAE(Any p0, Any p1) { invoker::Invoke<Void>(0x09C970AE59ABF6B2, p0, p1); } // 0x09C970AE59ABF6B2 b1207
	static Any _0x1EF36558FBDE2DAA() { return invoker::Invoke<Any>(0x1EF36558FBDE2DAA); } // 0x1EF36558FBDE2DAA b1207
	static Any GET_LAST_DRIVEN_VEHICLE() { return invoker::Invoke<Any>(0xA94F3E0AB9695E19); } // 0xA94F3E0AB9695E19 b1207
	static void CLEAR_LAST_DRIVEN_VEHICLE() { invoker::Invoke<Void>(0x0EFC5DC62E67609B); } // 0x0EFC5DC62E67609B b1207
	static void _0x838C216C2B05A009(Any p0, Any p1) { invoker::Invoke<Void>(0x838C216C2B05A009, p0, p1); } // 0x838C216C2B05A009 b1207
	static Any _0xB729679356A889AE() { return invoker::Invoke<Any>(0xB729679356A889AE); } // 0xB729679356A889AE b1207
	static void SET_VEHICLE_LOD_MULTIPLIER(Any p0, Any p1) { invoker::Invoke<Void>(0x5F5E2B1B9EAECC0F, p0, p1); } // 0x5F5E2B1B9EAECC0F b1207
	static void _0x3FA7D7D1E0EA809E(Any p0, Any p1) { invoker::Invoke<Void>(0x3FA7D7D1E0EA809E, p0, p1); } // 0x3FA7D7D1E0EA809E b1207
	static Any _0x7F8E2B131E1DCA6C() { return invoker::Invoke<Any>(0x7F8E2B131E1DCA6C); } // 0x7F8E2B131E1DCA6C b1207
	static Any _0xDBC28A8C683CD80B() { return invoker::Invoke<Any>(0xDBC28A8C683CD80B); } // 0xDBC28A8C683CD80B b1207
	static void SET_VEHICLE_SHOOT_AT_TARGET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xB79BE78C665B3E6D, p0, p1, p2, p3, p4, p5); } // 0xB79BE78C665B3E6D b1207
	static void SET_FORCE_HD_VEHICLE(Any p0, Any p1) { invoker::Invoke<Void>(0x373CB1283308BD7B, p0, p1); } // 0x373CB1283308BD7B b1207
	static void TRACK_VEHICLE_VISIBILITY(Any p0) { invoker::Invoke<Void>(0x1F3969B140DEE157, p0); } // 0x1F3969B140DEE157 b1207
	static Any IS_VEHICLE_VISIBLE(Any p0) { return invoker::Invoke<Any>(0x424910CD5DE8C246, p0); } // 0x424910CD5DE8C246 b1207
	static Any _0x13C190302369308B(Any p0) { return invoker::Invoke<Any>(0x13C190302369308B, p0); } // 0x13C190302369308B b1207
	static Any _0x73F1E4F6DF26FE30() { return invoker::Invoke<Any>(0x73F1E4F6DF26FE30); } // 0x73F1E4F6DF26FE30 b1207
	static void SET_VEHICLE_INACTIVE_DURING_PLAYBACK(Any p0, Any p1) { invoker::Invoke<Void>(0x4EA71B4C9DB3C3F1, p0, p1); } // 0x4EA71B4C9DB3C3F1 b1207
	static Any _0x48E4C137A71C2688() { return invoker::Invoke<Any>(0x48E4C137A71C2688); } // 0x48E4C137A71C2688 b1207
	static void SET_VEHICLE_IS_STOLEN(Any p0, Any p1) { invoker::Invoke<Void>(0x6C32FC81DFF25C9A, p0, p1); } // 0x6C32FC81DFF25C9A b1207
	static void _0xCBF88256E44D5D39(Any p0, Any p1) { invoker::Invoke<Void>(0xCBF88256E44D5D39, p0, p1); } // 0xCBF88256E44D5D39 b1207
	static void _0xC325A6BAA62CF8A2(Any p0, Any p1) { invoker::Invoke<Void>(0xC325A6BAA62CF8A2, p0, p1); } // 0xC325A6BAA62CF8A2 b1207
	static void _0x0CD7914D17A970AB(Any p0, Any p1) { invoker::Invoke<Void>(0x0CD7914D17A970AB, p0, p1); } // 0x0CD7914D17A970AB b1207
	static void _0x23F66C36F8E5EAAB(Any p0, Any p1) { invoker::Invoke<Void>(0x23F66C36F8E5EAAB, p0, p1); } // 0x23F66C36F8E5EAAB b1207
	static void _0x697DF68F3A761A50(Any p0) { invoker::Invoke<Void>(0x697DF68F3A761A50, p0); } // 0x697DF68F3A761A50 b1207
	static void _0x27E3F2B57209FA54(Any p0, Any p1) { invoker::Invoke<Void>(0x27E3F2B57209FA54, p0, p1); } // 0x27E3F2B57209FA54 b1207
	static void DISABLE_VEHICLE_WEAPON(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x94B1E71B144356A5, p0, p1, p2, p3); } // 0x94B1E71B144356A5 b1207
	static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Any p0, Any p1) { invoker::Invoke<Void>(0xE42952510F84AFDB, p0, p1); } // 0xE42952510F84AFDB b1207
	static void _SET_VEHICLE_JET_ENGINE_ON(Any p0, Any p1) { invoker::Invoke<Void>(0x1549BA7FE83A2383, p0, p1); } // 0x1549BA7FE83A2383 b1207
	static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Any p0, Any p1) { invoker::Invoke<Void>(0xC462C79379ABBCB1, p0, p1); } // 0xC462C79379ABBCB1 b1207
	static Any _0x0893DAFBFA67110E() { return invoker::Invoke<Any>(0x0893DAFBFA67110E); } // 0x0893DAFBFA67110E b1207
	static void _SET_VEHICLE_EXCLUSIVE_DRIVER_2(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xC6B9BF123B9463B6, p0, p1, p2); } // 0xC6B9BF123B9463B6 b1207
	static Any _0xB213D2A560B2E48B(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xB213D2A560B2E48B, p0, p1, p2); } // 0xB213D2A560B2E48B b1207
	static void _0xDC0556D0F484ECAA(Any p0) { invoker::Invoke<Void>(0xDC0556D0F484ECAA, p0); } // 0xDC0556D0F484ECAA b1207
	static Any GET_VEHICLE_BODY_HEALTH(Any p0) { return invoker::Invoke<Any>(0x42113B857E33C16E, p0); } // 0x42113B857E33C16E b1207
	static void SET_VEHICLE_BODY_HEALTH(Any p0, Any p1) { invoker::Invoke<Void>(0x55CCAAE4F28C67A0, p0, p1); } // 0x55CCAAE4F28C67A0 b1207
	static Any _0xE777DDF3E78397E8(Any p0) { return invoker::Invoke<Any>(0xE777DDF3E78397E8, p0); } // 0xE777DDF3E78397E8 b1207
	static void _0xC361AA040D6637A8(Any p0, Any p1) { invoker::Invoke<Void>(0xCEC4CA2CAB8FA98C, p0, p1); } // 0xCEC4CA2CAB8FA98C b1207
	static void _0x012701ED938B85DE(Any p0, Any p1) { invoker::Invoke<Void>(0x012701ED938B85DE, p0, p1); } // 0x012701ED938B85DE b1207
	static void _0x8379E05871AD24E0() { invoker::Invoke<Void>(0x8379E05871AD24E0); } // 0x8379E05871AD24E0 b1207
	static void _0xF5FFB08976911B50(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xF5FFB08976911B50, p0, p1, p2, p3); } // 0xF5FFB08976911B50 b1207
	static Any _0x316CDB5B6E8F4110(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x316CDB5B6E8F4110, p0, p1, p2); } // 0x316CDB5B6E8F4110 b1207
	static Any _0x4402960666000E62(Any p0, Any p1) { return invoker::Invoke<Any>(0x4402960666000E62, p0, p1); } // 0x4402960666000E62 b1207
	static Any _0xB36D3EC70963BE60(Any p0, Any p1) { return invoker::Invoke<Any>(0xB36D3EC70963BE60, p0, p1); } // 0xB36D3EC70963BE60 b1207
	static void _0x0F7F603BDE08C4D3(Any p0) { invoker::Invoke<Void>(0x0F7F603BDE08C4D3, p0); } // 0x0F7F603BDE08C4D3 b1207
	static Any _0x5B1A26BB18E7D451(Any p0) { return invoker::Invoke<Any>(0x5B1A26BB18E7D451, p0); } // 0x5B1A26BB18E7D451 b1207
	static Any _0x35D302397E524939(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x35D302397E524939, p0, p1, p2, p3, p4, p5); } // 0x35D302397E524939 b1207
	static void _0xC399CC89FBA05DA0(Any p0, Any p1) { invoker::Invoke<Void>(0xC399CC89FBA05DA0, p0, p1); } // 0xC399CC89FBA05DA0 b1207
	static void _0xA6E210FB4283B767(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA6E210FB4283B767, p0, p1, p2); } // 0xA6E210FB4283B767 b1207
	static Any _0x2963B5C1637E8A27(Any p0) { return invoker::Invoke<Any>(0x2963B5C1637E8A27, p0); } // 0x2963B5C1637E8A27 b1207
	static void _0xF489F94BFEE12BB0(Any p0, Any p1) { invoker::Invoke<Void>(0xF489F94BFEE12BB0, p0, p1); } // 0xF489F94BFEE12BB0 b1207
	static Any _0x0BA4250D20007C2E(Any p0) { return invoker::Invoke<Any>(0x0BA4250D20007C2E, p0); } // 0x0BA4250D20007C2E b1207
	static void _0x2200AB13CBD10F4E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x2200AB13CBD10F4E, p0, p1, p2, p3, p4, p5); } // 0x2200AB13CBD10F4E b1207
	static void _0xB42C87521D1BDD2F(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xB42C87521D1BDD2F, p0, p1, p2, p3); } // 0xB42C87521D1BDD2F b1207
	static void _0xC351394B932A6A50(Any p0) { invoker::Invoke<Void>(0xC351394B932A6A50, p0); } // 0xC351394B932A6A50 b1207
	static void _0x172E9DD35858DCD7(Any p0) { invoker::Invoke<Void>(0x172E9DD35858DCD7, p0); } // 0x172E9DD35858DCD7 b1207
	static Any _0xE015CF1F2C0959D8(Any p0) { return invoker::Invoke<Any>(0xE015CF1F2C0959D8, p0); } // 0xE015CF1F2C0959D8 b1207
	static Any _0x877EA24EB1614495(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x877EA24EB1614495, p0, p1, p2); } // 0x877EA24EB1614495 b1207
	static Any _0x58F2244C1286D09A(Any p0, Any p1) { return invoker::Invoke<Any>(0x58F2244C1286D09A, p0, p1); } // 0x58F2244C1286D09A b1207
	static Any _0x2FA86833E3617E2D(Any p0) { return invoker::Invoke<Any>(0x2FA86833E3617E2D, p0); } // 0x2FA86833E3617E2D b1207
	static void _0xBC4735F48CD983EF(Any p0, Any p1) { invoker::Invoke<Void>(0xBC4735F48CD983EF, p0, p1); } // 0xBC4735F48CD983EF b1207
	static void _0x9D12796EF4BF9EA9(Any p0) { invoker::Invoke<Void>(0x9D12796EF4BF9EA9, p0); } // 0x9D12796EF4BF9EA9 b1207
	static void _0x850CE59DEC2028F3(Any p0, Any p1) { invoker::Invoke<Void>(0x850CE59DEC2028F3, p0, p1); } // 0x850CE59DEC2028F3 b1207
	static void _0x0355FE37240E2C77(Any p0, Any p1) { invoker::Invoke<Void>(0x0355FE37240E2C77, p0, p1); } // 0x0355FE37240E2C77 b1207
	static void _0x3D86997A86FEEF0D(Any p0, Any p1) { invoker::Invoke<Void>(0x3D86997A86FEEF0D, p0, p1); } // 0x3D86997A86FEEF0D b1207
	static void _0xD826690B5CF3BEFF(Any p0, Any p1) { invoker::Invoke<Void>(0xD826690B5CF3BEFF, p0, p1); } // 0xD826690B5CF3BEFF b1207
	static void _0xC372B6A88F6E4AD8(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xC372B6A88F6E4AD8, p0, p1, p2); } // 0xC372B6A88F6E4AD8 b1207
	static Any _0xA19447D83294E29F(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xA19447D83294E29F, p0, p1, p2); } // 0xA19447D83294E29F b1207
	static void _0x165BE2001E5E4B75(Any p0) { invoker::Invoke<Void>(0x165BE2001E5E4B75, p0); } // 0x165BE2001E5E4B75 b1207
	static void _0x6090A031C69F384E(Any p0, Any p1) { invoker::Invoke<Void>(0x6090A031C69F384E, p0, p1); } // 0x6090A031C69F384E b1207
	static void _0x226C6A4E3346D288(Any p0, Any p1) { invoker::Invoke<Void>(0x226C6A4E3346D288, p0, p1); } // 0x226C6A4E3346D288 b1207
	static void _0x41503629D1139ABC(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x41503629D1139ABC, p0, p1, p2, p3, p4); } // 0x41503629D1139ABC b1207
	static void _0x0794199B25E499E1(Any p0, Any p1) { invoker::Invoke<Void>(0x0794199B25E499E1, p0, p1); } // 0x0794199B25E499E1 b1207
	static void _0x73118A3EE9C9B6DB(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x73118A3EE9C9B6DB, p0, p1, p2); } // 0x73118A3EE9C9B6DB b1207
	static Any _0xE1C0F8781BF130C2(Any p0, Any p1) { return invoker::Invoke<Any>(0xE1C0F8781BF130C2, p0, p1); } // 0xE1C0F8781BF130C2 b1207
	static Any _0xCB2CA620C48BC875() { return invoker::Invoke<Any>(0xCB2CA620C48BC875); } // 0xCB2CA620C48BC875 b1207
	static Any _0x18714953CCED17D3(Any p0) { return invoker::Invoke<Any>(0x18714953CCED17D3, p0); } // 0x18714953CCED17D3 b1207
	static void _0x41F0B254DDF71473(Any p0) { invoker::Invoke<Void>(0x41F0B254DDF71473, p0); } // 0x41F0B254DDF71473 b1207
	static Any _0x8E5DA070BAD3279E() { return invoker::Invoke<Any>(0x8E5DA070BAD3279E); } // 0x8E5DA070BAD3279E b1207
	static Any _0xE979BB5602AD3402(Any p0, Any p1) { return invoker::Invoke<Any>(0xE979BB5602AD3402, p0, p1); } // 0xE979BB5602AD3402 b1207
	static Any _0xD4F5EFB55769D272(Any p0, Any p1) { return invoker::Invoke<Any>(0xD4F5EFB55769D272, p0, p1); } // 0xD4F5EFB55769D272 b1207
	static Any _0xE1A83D4A3B5D7938(Any p0) { return invoker::Invoke<Any>(0xE1A83D4A3B5D7938, p0); } // 0xE1A83D4A3B5D7938 b1207
	static void _0x6DE072AC8A95FFC1(Any p0, Any p1) { invoker::Invoke<Void>(0x6DE072AC8A95FFC1, p0, p1); } // 0x6DE072AC8A95FFC1 b1207
	static void _0x0C3F0F7F92CA847C(Any p0, Any p1) { invoker::Invoke<Void>(0x0C3F0F7F92CA847C, p0, p1); } // 0x0C3F0F7F92CA847C b1207
	static Any _0xC6D7DDC843176701(Any p0) { return invoker::Invoke<Any>(0xC6D7DDC843176701, p0); } // 0xC6D7DDC843176701 b1207
	static Any _0xC4A2C11FC0D41916() { return invoker::Invoke<Any>(0xC4A2C11FC0D41916); } // 0xC4A2C11FC0D41916 b1207
	static void _0xFC4F15A7DDDC47B1(Any p0, Any p1) { invoker::Invoke<Void>(0xFC4F15A7DDDC47B1, p0, p1); } // 0xFC4F15A7DDDC47B1 b1207
	static void _0x4C60C333F9CCA2B6(Any p0, Any p1) { invoker::Invoke<Void>(0x4C60C333F9CCA2B6, p0, p1); } // 0x4C60C333F9CCA2B6 b1207
	static void _0xCF342503CA4C8DF1(Any p0, Any p1) { invoker::Invoke<Void>(0xCF342503CA4C8DF1, p0, p1); } // 0xCF342503CA4C8DF1 b1207
	static Any _0x06A09A6E0C6D2A84() { return invoker::Invoke<Any>(0x06A09A6E0C6D2A84); } // 0x06A09A6E0C6D2A84 b1207
	static void _0xAE7E66A61E7C17A5(Any p0, Any p1) { invoker::Invoke<Void>(0xAE7E66A61E7C17A5, p0, p1); } // 0xAE7E66A61E7C17A5 b1207
	static void _0xEF28A614B4B264B8(Any p0, Any p1) { invoker::Invoke<Void>(0xEF28A614B4B264B8, p0, p1); } // 0xEF28A614B4B264B8 b1207
	static void _0x04F0579DBDD32F34(Any p0) { invoker::Invoke<Void>(0x04F0579DBDD32F34, p0); } // 0x04F0579DBDD32F34 b1207
	static void _0x12F6C6ED3EFF42DE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x12F6C6ED3EFF42DE, p0, p1, p2, p3); } // 0x12F6C6ED3EFF42DE b1207
	static void _0x87B974E54C71BA7B(Any p0, Any p1) { invoker::Invoke<Void>(0x87B974E54C71BA7B, p0, p1); } // 0x87B974E54C71BA7B b1207
	static Any _0xBD3C4A2ED509205E(Any p0) { return invoker::Invoke<Any>(0xBD3C4A2ED509205E, p0); } // 0xBD3C4A2ED509205E b1207
	static Any _0xC239DBD9A57D2A71(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0xC239DBD9A57D2A71, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xC239DBD9A57D2A71 b1207
	static void _0xD1EFA8D68BF5D63D(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xD1EFA8D68BF5D63D, p0, p1, p2, p3); } // 0xD1EFA8D68BF5D63D b1207
	static Any _0x1121B07088ED3013(Any p0) { return invoker::Invoke<Any>(0x1121B07088ED3013, p0); } // 0x1121B07088ED3013 b1207
	static Any _0x42404D57D621601A(Any p0) { return invoker::Invoke<Any>(0x42404D57D621601A, p0); } // 0x42404D57D621601A b1207
	static Any _0x288CBB414C3C2FBB(Any p0) { return invoker::Invoke<Any>(0x288CBB414C3C2FBB, p0); } // 0x288CBB414C3C2FBB b1207
	static void _0x6FD7BDF10304363A(Any p0, Any p1) { invoker::Invoke<Void>(0x6FD7BDF10304363A, p0, p1); } // 0x6FD7BDF10304363A b1207
	static void _0xCEB1F1EED484A5B4(Any p0, Any p1) { invoker::Invoke<Void>(0xCEB1F1EED484A5B4, p0, p1); } // 0xCEB1F1EED484A5B4 b1207
	static Any _0xF57DB8E83DCD8349() { return invoker::Invoke<Any>(0xF57DB8E83DCD8349); } // 0xF57DB8E83DCD8349 b1207
	static void _0x7C9E45A4CED2E8DA(Any p0, Any p1) { invoker::Invoke<Void>(0x7C9E45A4CED2E8DA, p0, p1); } // 0x7C9E45A4CED2E8DA b1207
	static void _0x87344305778E5415(Any p0, Any p1) { invoker::Invoke<Void>(0x87344305778E5415, p0, p1); } // 0x87344305778E5415 b1207
	static void _0x6835AFEA10E186F4(Any p0, Any p1) { invoker::Invoke<Void>(0x6835AFEA10E186F4, p0, p1); } // 0x6835AFEA10E186F4 b1207
	static void _0x8C6D9A399126C194(Any p0, Any p1) { invoker::Invoke<Void>(0x8C6D9A399126C194, p0, p1); } // 0x8C6D9A399126C194 b1207
	static Any _0x14DA8C4BC2CCD90A() { return invoker::Invoke<Any>(0x14DA8C4BC2CCD90A); } // 0x14DA8C4BC2CCD90A b1207
	static Any _0xCACAB2B123BBDBD6() { return invoker::Invoke<Any>(0xCACAB2B123BBDBD6); } // 0xCACAB2B123BBDBD6 b1207
	static void _0xFF2B1F59FB892F14(Any p0) { invoker::Invoke<Void>(0xFF2B1F59FB892F14, p0); } // 0xFF2B1F59FB892F14 b1207
	static void _0x5AADC7BBBB1BCEEB(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x5AADC7BBBB1BCEEB, p0, p1, p2, p3, p4); } // 0x5AADC7BBBB1BCEEB b1207
	static Any _0xD798DF5DB67B1659() { return invoker::Invoke<Any>(0xD798DF5DB67B1659); } // 0xD798DF5DB67B1659 b1207
	static Any _0x31F343383F19C987() { return invoker::Invoke<Any>(0x31F343383F19C987); } // 0x31F343383F19C987 b1207
	static void _0x07E2E21E799080A0(Any p0, Any p1) { invoker::Invoke<Void>(0x07E2E21E799080A0, p0, p1); } // 0x07E2E21E799080A0 b1207
	static void _0xC2E62678D602853C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoker::Invoke<Void>(0xC2E62678D602853C, p0, p1, p2, p3, p4, p5, p6); } // 0xC2E62678D602853C b1207
	static void _0x873AAF600CC36DAC(Any p0) { invoker::Invoke<Void>(0x873AAF600CC36DAC, p0); } // 0x873AAF600CC36DAC b1207
	static Any _0x51C7694E140FAE43(Any p0) { return invoker::Invoke<Any>(0x51C7694E140FAE43, p0); } // 0x51C7694E140FAE43 b1207
	static void _0x8DECD262602548B9(Any p0, Any p1) { invoker::Invoke<Void>(0x8DECD262602548B9, p0, p1); } // 0x8DECD262602548B9 b1207
	static void _0xCBC7B6F9A56B79F6(Any p0, Any p1) { invoker::Invoke<Void>(0xCBC7B6F9A56B79F6, p0, p1); } // 0xCBC7B6F9A56B79F6 b1207
	static Any _0x37D238BE69F7378A(Any p0) { return invoker::Invoke<Any>(0x37D238BE69F7378A, p0); } // 0x37D238BE69F7378A b1207
	static void _0x703D4FB366DA4452(Any p0, Any p1) { invoker::Invoke<Void>(0x703D4FB366DA4452, p0, p1); } // 0x703D4FB366DA4452 b1207
	static void _0x762FDC4C19E5A981(Any p0, Any p1) { invoker::Invoke<Void>(0x762FDC4C19E5A981, p0, p1); } // 0x762FDC4C19E5A981 b1207
	static Any _0x2045429505158D1A(Any p0) { return invoker::Invoke<Any>(0x2045429505158D1A, p0); } // 0x2045429505158D1A b1207
	static void _0x13EB275BF81636D1(Any p0, Any p1) { invoker::Invoke<Void>(0x13EB275BF81636D1, p0, p1); } // 0x13EB275BF81636D1 b1207
}

namespace _NAMESPACE79
{
	static Any _0xCCF71FCFA0070B1A() { return invoker::Invoke<Any>(0xCCF71FCFA0070B1A); } // 0xCCF71FCFA0070B1A b1207
	static Any _0x79F478FF5F9F4F05() { return invoker::Invoke<Any>(0x79F478FF5F9F4F05); } // 0x79F478FF5F9F4F05 b1207
	static Any _0xAA35FD9ABAB490A3() { return invoker::Invoke<Any>(0xAA35FD9ABAB490A3); } // 0xAA35FD9ABAB490A3 b1207
	static Any _0x356135B9B10A2A82() { return invoker::Invoke<Any>(0x356135B9B10A2A82); } // 0x356135B9B10A2A82 b1207
	static Any _0xEF6F2A35FAAF2ED7() { return invoker::Invoke<Any>(0xEF6F2A35FAAF2ED7); } // 0xEF6F2A35FAAF2ED7 b1207
	static Any _0x49623BCFC3A3D829() { return invoker::Invoke<Any>(0x49623BCFC3A3D829); } // 0x49623BCFC3A3D829 b1207
	static Any _0x919AF2D93E9AA89D() { return invoker::Invoke<Any>(0x919AF2D93E9AA89D); } // 0x919AF2D93E9AA89D b1207
	static Any _0x0DED260A1958A82E() { return invoker::Invoke<Any>(0x0DED260A1958A82E); } // 0x0DED260A1958A82E b1207
	static Any _0x8E462DB1EAA9C47C() { return invoker::Invoke<Any>(0x8E462DB1EAA9C47C); } // 0x8E462DB1EAA9C47C b1207
	static Any _0x5CA7FB7D6DE49DCC() { return invoker::Invoke<Any>(0x5CA7FB7D6DE49DCC); } // 0x5CA7FB7D6DE49DCC b1207
	static Any _0x58125B691F6827D5() { return invoker::Invoke<Any>(0x58125B691F6827D5); } // 0x58125B691F6827D5 b1207
	static Any _0x2F82CAB262C8AE26() { return invoker::Invoke<Any>(0x2F82CAB262C8AE26); } // 0x2F82CAB262C8AE26 b1207
	static Any _0x08797A8C03868CB8() { return invoker::Invoke<Any>(0x08797A8C03868CB8); } // 0x08797A8C03868CB8 b1207
	static Any _0xB779F4FA19269AEC() { return invoker::Invoke<Any>(0xB779F4FA19269AEC); } // 0xB779F4FA19269AEC b1207
	static Any _0x1FBF7F5BA7E4BE3A() { return invoker::Invoke<Any>(0x1FBF7F5BA7E4BE3A); } // 0x1FBF7F5BA7E4BE3A b1207
	static Any _0xDC9B361CB7776673() { return invoker::Invoke<Any>(0xDC9B361CB7776673); } // 0xDC9B361CB7776673 b1207
	static Any _0xEC8703E4536A9952() { return invoker::Invoke<Any>(0xEC8703E4536A9952); } // 0xEC8703E4536A9952 b1207
	static Any _0xDB622ECD3DCBE078() { return invoker::Invoke<Any>(0xDB622ECD3DCBE078); } // 0xDB622ECD3DCBE078 b1207
	static Any _0xB6E79850B759A30E() { return invoker::Invoke<Any>(0xB6E79850B759A30E); } // 0xB6E79850B759A30E b1207
	static void _0x4791899615D70FA2(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4791899615D70FA2, p0, p1, p2); } // 0x4791899615D70FA2 b1207
	static Any _0xF8938CF3984092A5() { return invoker::Invoke<Any>(0xF8938CF3984092A5); } // 0xF8938CF3984092A5 b1207
	static Any _0x767931C727DF2ED7() { return invoker::Invoke<Any>(0x767931C727DF2ED7); } // 0x767931C727DF2ED7 b1207
	static Any _0x1C38C3577901AF1F() { return invoker::Invoke<Any>(0x1C38C3577901AF1F); } // 0x1C38C3577901AF1F b1207
	static Any _0xB3E8841F6BDAF83E() { return invoker::Invoke<Any>(0xB3E8841F6BDAF83E); } // 0xB3E8841F6BDAF83E b1207
}

namespace WATER
{
	static Any _0x502022FA1AF9DC86(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x502022FA1AF9DC86, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x502022FA1AF9DC86 b1207
	static Any _0xDF85637F22706891(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0xDF85637F22706891, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xDF85637F22706891 b1207
	static Any _0x0522D4774B82E3E6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0x0522D4774B82E3E6, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x0522D4774B82E3E6 b1207
	static Any _0xB3FB80A32BAE3065(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoker::Invoke<Any>(0xB3FB80A32BAE3065, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xB3FB80A32BAE3065 b1207
	static Any _0x59F6F5C1D129F106() { return invoker::Invoke<Any>(0x59F6F5C1D129F106); } // 0x59F6F5C1D129F106 b1207
	static Any _0x1F85E4AC774A201E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoker::Invoke<Any>(0x1F85E4AC774A201E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x1F85E4AC774A201E b1207
	static Any _0x0EB78C2B156635B1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x0EB78C2B156635B1, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x0EB78C2B156635B1 b1207
	static void _0xBE551C2CC421185D(Any p0, Any p1) { invoker::Invoke<Void>(0xBE551C2CC421185D, p0, p1); } // 0xBE551C2CC421185D b1207
	static void _0x5B23DFF8E0948BB2(Any p0, Any p1) { invoker::Invoke<Void>(0x5B23DFF8E0948BB2, p0, p1); } // 0x5B23DFF8E0948BB2 b1207
	static Any _0xFD0E389CD44434B6() { return invoker::Invoke<Any>(0xFD0E389CD44434B6); } // 0xFD0E389CD44434B6 b1207
	static Any _0xBBE768E3AE76E07C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return invoker::Invoke<Any>(0xBBE768E3AE76E07C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0xBBE768E3AE76E07C b1207
	static Any _0xF68485C7495D848E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0xF68485C7495D848E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xF68485C7495D848E b1207
	static Any _0xDF1E350EDDF06E59(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0xDF1E350EDDF06E59, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xDF1E350EDDF06E59 b1207
	static Any _0x10157BC3247FF3BA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoker::Invoke<Any>(0x10157BC3247FF3BA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x10157BC3247FF3BA b1207
	static Any _0x5D580DE6398BB162(Any p0) { return invoker::Invoke<Any>(0x5D580DE6398BB162, p0); } // 0x5D580DE6398BB162 b1207
	static void _0x6E0D3C3F828DA773(Any p0, Any p1) { invoker::Invoke<Void>(0x6E0D3C3F828DA773, p0, p1); } // 0x6E0D3C3F828DA773 b1207
	static Any _0xF92FA8890DECECF6() { return invoker::Invoke<Any>(0xF92FA8890DECECF6); } // 0xF92FA8890DECECF6 b1207
	static void _0x12FCAA23F2320422(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoker::Invoke<Void>(0x12FCAA23F2320422, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x12FCAA23F2320422 b1207
	static void _0x39816F6F94F385AD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x39816F6F94F385AD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x39816F6F94F385AD b1207
	static void _0xBCE668AAF83608BE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0xBCE668AAF83608BE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xBCE668AAF83608BE b1207
	static void _0x5B7D7BF36D2DE18B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoker::Invoke<Void>(0x5B7D7BF36D2DE18B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x5B7D7BF36D2DE18B b1207
	static void _0x43F867EF5C463A53(Any p0) { invoker::Invoke<Void>(0x43F867EF5C463A53, p0); } // 0x43F867EF5C463A53 b1207
	static Any _0x92A78D0BEDB332A3(Any p0) { return invoker::Invoke<Any>(0x92A78D0BEDB332A3, p0); } // 0x92A78D0BEDB332A3 b1207
	static Any _0xF256A75210C5C0EB(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xF256A75210C5C0EB, p0, p1, p2, p3); } // 0xF256A75210C5C0EB b1207
	static Any _0xF70F00013A62F866(Any p0) { return invoker::Invoke<Any>(0xF70F00013A62F866, p0); } // 0xF70F00013A62F866 b1207
	static Any _0x541B8576615C33DE(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x541B8576615C33DE, p0, p1, p2, p3); } // 0x541B8576615C33DE b1207
	static Any _0x18675BC914891122(Any p0) { return invoker::Invoke<Any>(0x18675BC914891122, p0); } // 0x18675BC914891122 b1207
	static Any _0xA07CF1B21B56F041(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xA07CF1B21B56F041, p0, p1, p2, p3); } // 0xA07CF1B21B56F041 b1207
	static Any _0x3E2A25B2416DD67E(Any p0) { return invoker::Invoke<Any>(0x3E2A25B2416DD67E, p0); } // 0x3E2A25B2416DD67E b1207
	static Any _0xA46E98BDC407E23D(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xA46E98BDC407E23D, p0, p1, p2, p3); } // 0xA46E98BDC407E23D b1207
	static void _0x5737199AF2DC609F(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5737199AF2DC609F, p0, p1, p2); } // 0x5737199AF2DC609F b1207
	static void _0x748C5F51A18CB8F0(Any p0) { invoker::Invoke<Void>(0x748C5F51A18CB8F0, p0); } // 0x748C5F51A18CB8F0 b1207
	static Any _0x2B32B11520626229() { return invoker::Invoke<Any>(0x2B32B11520626229); } // 0x2B32B11520626229 b1207
	static Any _0x40F769D31A00D5A0(Any p0, Any p1) { return invoker::Invoke<Any>(0x40F769D31A00D5A0, p0, p1); } // 0x40F769D31A00D5A0 b1207
	static Any _0xD882C5B3991575B7() { return invoker::Invoke<Any>(0xD882C5B3991575B7); } // 0xD882C5B3991575B7 b1207
	static void _0xB469CFD9E065EB99(Any p0, Any p1) { invoker::Invoke<Void>(0xB469CFD9E065EB99, p0, p1); } // 0xB469CFD9E065EB99 b1207
	static Any _0x7FD78DFD0C5D7B9B(Any p0) { return invoker::Invoke<Any>(0x7FD78DFD0C5D7B9B, p0); } // 0x7FD78DFD0C5D7B9B b1207
	static Any _0xEE1D6FF54CAF7714(Any p0, Any p1) { return invoker::Invoke<Any>(0xEE1D6FF54CAF7714, p0, p1); } // 0xEE1D6FF54CAF7714 b1207
	static void _0xD52DF30355EA7C8E(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD52DF30355EA7C8E, p0, p1, p2); } // 0xD52DF30355EA7C8E b1207
	static void _0xE2BE6FFA4A13CBB0(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE2BE6FFA4A13CBB0, p0, p1, p2); } // 0xE2BE6FFA4A13CBB0 b1207
	static void _0x6D5F9E69BA1BE783(Any p0) { invoker::Invoke<Void>(0x6D5F9E69BA1BE783, p0); } // 0x6D5F9E69BA1BE783 b1207
	static void _0x998202B206872672(Any p0) { invoker::Invoke<Void>(0x998202B206872672, p0); } // 0x998202B206872672 b1207
	static void _0x4A8FEFC43FD8AC9B(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x4A8FEFC43FD8AC9B, p0, p1, p2); } // 0x4A8FEFC43FD8AC9B b1207
	static void _0xF3A2FBA5985C8CD5(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xF3A2FBA5985C8CD5, p0, p1, p2, p3); } // 0xF3A2FBA5985C8CD5 b1207
	static void _0x53D05D60E5F5B40C(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x53D05D60E5F5B40C, p0, p1, p2, p3); } // 0x53D05D60E5F5B40C b1207
	static Any _0xCA5C90D40665D5CE(Any p0, Any p1) { return invoker::Invoke<Any>(0xCA5C90D40665D5CE, p0, p1); } // 0xCA5C90D40665D5CE b1207
	static void _0x3EFABB21E14A6BD1(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3EFABB21E14A6BD1, p0, p1, p2); } // 0x3EFABB21E14A6BD1 b1207
	static Any _0xFEFF01B5725BCD22() { return invoker::Invoke<Any>(0xFEFF01B5725BCD22); } // 0xFEFF01B5725BCD22 b1207
	static Any _0x00BBF7CEAE8C666A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x00BBF7CEAE8C666A, p0, p1, p2, p3, p4, p5); } // 0x00BBF7CEAE8C666A b1207
	static Any _0xF383E96C4904DF0C(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xF383E96C4904DF0C, p0, p1, p2, p3); } // 0xF383E96C4904DF0C b1207
	static Any _0xF6A8A652A6B186CD(Any p0) { return invoker::Invoke<Any>(0xF6A8A652A6B186CD, p0); } // 0xF6A8A652A6B186CD b1207
	static Any _0xC4019CF9AE8E931A(Any p0) { return invoker::Invoke<Any>(0xC4019CF9AE8E931A, p0); } // 0xC4019CF9AE8E931A b1207
	static Any _0xF6CE6F9C3897804E(Any p0) { return invoker::Invoke<Any>(0xF6CE6F9C3897804E, p0); } // 0xF6CE6F9C3897804E b1207
	static Any _0xF6F5447D418DAA82(Any p0) { return invoker::Invoke<Any>(0xF6F5447D418DAA82, p0); } // 0xF6F5447D418DAA82 b1207
	static void _0xD4FA73FE628FEC63(Any p0, Any p1) { invoker::Invoke<Void>(0xD4FA73FE628FEC63, p0, p1); } // 0xD4FA73FE628FEC63 b1207
	static void _0xB440F4E35393FC39(Any p0, Any p1) { invoker::Invoke<Void>(0xB440F4E35393FC39, p0, p1); } // 0xB440F4E35393FC39 b1207
	static void _0xD460135C98940274(Any p0, Any p1) { invoker::Invoke<Void>(0xD460135C98940274, p0, p1); } // 0xD460135C98940274 b1207
	static Any _0xEBA87B9273835CF3() { return invoker::Invoke<Any>(0xEBA87B9273835CF3); } // 0xEBA87B9273835CF3 b1207
	static Any _0xAA9EE2AAFC717623(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0xAA9EE2AAFC717623, p0, p1, p2, p3, p4, p5); } // 0xAA9EE2AAFC717623 b1207
	static Any _0x870E9981ED27C815(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoker::Invoke<Any>(0x870E9981ED27C815, p0, p1, p2, p3, p4, p5); } // 0x870E9981ED27C815 b1207
	static Any _0x397769175A7DBB30(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x397769175A7DBB30, p0, p1, p2, p3, p4, p5, p6); } // 0x397769175A7DBB30 b1207
	static Any _0x769BB7626B8CDB06(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x769BB7626B8CDB06, p0, p1, p2, p3, p4, p5, p6); } // 0x769BB7626B8CDB06 b1207
	static Any _0x51E52C9687FCDEEC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x51E52C9687FCDEEC, p0, p1, p2, p3, p4, p5, p6); } // 0x51E52C9687FCDEEC b1207
	static Any _0x77A6E4AD0C496F81() { return invoker::Invoke<Any>(0x77A6E4AD0C496F81); } // 0x77A6E4AD0C496F81 b1207
	static Any _0xEC43C2FFB70E3F30() { return invoker::Invoke<Any>(0xEC43C2FFB70E3F30); } // 0xEC43C2FFB70E3F30 b1207
	static void _0x695DAC2DB928F308(Any p0, Any p1) { invoker::Invoke<Void>(0x695DAC2DB928F308, p0, p1); } // 0x695DAC2DB928F308 b1207
	static void _0xFDFECC6EE4491E11(Any p0) { invoker::Invoke<Void>(0xFDFECC6EE4491E11, p0); } // 0xFDFECC6EE4491E11 b1207
	static void _0xAC355980681A7F89(Any p0) { invoker::Invoke<Void>(0xAC355980681A7F89, p0); } // 0xAC355980681A7F89 b1207
	static Any _0xF14BCEF290F869E1() { return invoker::Invoke<Any>(0xF14BCEF290F869E1); } // 0xF14BCEF290F869E1 b1207
	static Any _0x183C0B6CFEFFCAE4(Any p0) { return invoker::Invoke<Any>(0x183C0B6CFEFFCAE4, p0); } // 0x183C0B6CFEFFCAE4 b1207
	static Any _0xA4A4359320345B34(Any p0) { return invoker::Invoke<Any>(0xA4A4359320345B34, p0); } // 0xA4A4359320345B34 b1207
	static Any _0xB33A604345F58202(Any p0) { return invoker::Invoke<Any>(0xB33A604345F58202, p0); } // 0xB33A604345F58202 b1207
	static Any _0x351D71B8B72B858B(Any p0) { return invoker::Invoke<Any>(0x351D71B8B72B858B, p0); } // 0x351D71B8B72B858B b1207
	static Any _0xFA15C9A320E707B0() { return invoker::Invoke<Any>(0xFA15C9A320E707B0); } // 0xFA15C9A320E707B0 b1207
	static void _0x52572B331E693AED(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x52572B331E693AED, p0, p1, p2); } // 0x52572B331E693AED b1207
	static void _0x128FC3A893BF853A(Any p0) { invoker::Invoke<Void>(0x128FC3A893BF853A, p0); } // 0x128FC3A893BF853A b1207
	static void _0xFD010A2154B40676(Any p0, Any p1) { invoker::Invoke<Void>(0xFD010A2154B40676, p0, p1); } // 0xFD010A2154B40676 b1207
	static Any _0x666C2F53ABEFC952(Any p0) { return invoker::Invoke<Any>(0x666C2F53ABEFC952, p0); } // 0x666C2F53ABEFC952 b1207
}

namespace _NAMESPACE81
{
	static void _0x754616EC6965D1FB() { invoker::Invoke<Void>(0x754616EC6965D1FB); } // 0x754616EC6965D1FB b1207
	static void _0x754616EC6965D1BF() { invoker::Invoke<Void>(0x754616EC6965D1BF); } // 0x754616EC6965D1BF b1207
	static Any GET_WATER_HEIGHT(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xFCA8B23F28813F69, p0, p1, p2, p3); } // 0xFCA8B23F28813F69 b1207
	static Any GET_WATER_HEIGHT_NO_WAVES(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xDCF3690AA262C03F, p0, p1, p2, p3); } // 0xDCF3690AA262C03F b1207
	static Any TEST_PROBE_AGAINST_ALL_WATER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoker::Invoke<Any>(0x8974647ED222EA5F, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8974647ED222EA5F b1207
	static Any TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x2B3451FA1E3142E2, p0, p1, p2, p3, p4); } // 0x2B3451FA1E3142E2 b1207
	static void _REMOVE_CURRENT_RISE(Any p0) { invoker::Invoke<Void>(0x4BEF8DD75AF6C71C, p0); } // 0x4BEF8DD75AF6C71C b1207
	static void _0x09A1C7DFDCE54FBC(Any p0) { invoker::Invoke<Void>(0x09A1C7DFDCE54FBC, p0); } // 0x09A1C7DFDCE54FBC b1207
	static void _0xF0FBF193F1F5C0EA(Any p0) { invoker::Invoke<Void>(0xF0FBF193F1F5C0EA, p0); } // 0xF0FBF193F1F5C0EA b1207
	static void _0xA33F5069B0CB89B8() { invoker::Invoke<Void>(0xA33F5069B0CB89B8); } // 0xA33F5069B0CB89B8 b1207
	static void _0xB34A6009A0DB80B8(Any p0) { invoker::Invoke<Void>(0xB34A6009A0DB80B8, p0); } // 0xB34A6009A0DB80B8 b1207
	static void _0xC63540AEF8384732(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoker::Invoke<Void>(0xC63540AEF8384732, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC63540AEF8384732 b1207
	static void _0xC63540AEF8384769() { invoker::Invoke<Void>(0xC63540AEF8384769); } // 0xC63540AEF8384769 b1207
	static void _0xE8770EE02AEE45C2(Any p0) { invoker::Invoke<Void>(0xE8770EE02AEE45C2, p0); } // 0xE8770EE02AEE45C2 b1207
	static Any _0x189739A7631C1867() { return invoker::Invoke<Any>(0x189739A7631C1867); } // 0x189739A7631C1867 b1207
	static void _0x0DCEC6A92E497E17(Any p0, Any p1) { invoker::Invoke<Void>(0x0DCEC6A92E497E17, p0, p1); } // 0x0DCEC6A92E497E17 b1207
	static void _0xE8126623008372AA() { invoker::Invoke<Void>(0xE8126623008372AA); } // 0xE8126623008372AA b1207
}

namespace WEAPON
{
	static Any _0x865F36299079FB75(Any p0) { return invoker::Invoke<Any>(0x865F36299079FB75, p0); } // 0x865F36299079FB75 b1207
	static void _0xB190BCA3F4042F95(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xB190BCA3F4042F95, p0, p1, p2, p3); } // 0xB190BCA3F4042F95 b1207
	static void _0x106A811C6D3035F3(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x106A811C6D3035F3, p0, p1, p2, p3); } // 0x106A811C6D3035F3 b1207
	static void _0xF4823C813CB8277D(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xF4823C813CB8277D, p0, p1, p2, p3); } // 0xF4823C813CB8277D b1207
	static void _0xB6CFEC32E3742779(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0xB6CFEC32E3742779, p0, p1, p2, p3); } // 0xB6CFEC32E3742779 b1207
	static void _0x1B83C0DEEBCBB214(Any p0) { invoker::Invoke<Void>(0x1B83C0DEEBCBB214, p0); } // 0x1B83C0DEEBCBB214 b1207
	static void SET_PED_AMMO(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x14E56BC5B5DB6A19, p0, p1, p2); } // 0x14E56BC5B5DB6A19 b1207
	static void _0x8A779706DA5CA3DD(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x8A779706DA5CA3DD, p0, p1, p2); } // 0x8A779706DA5CA3DD b1207
	static void _0x9409C62504A8F9E9(Any p0, Any p1) { invoker::Invoke<Void>(0x9409C62504A8F9E9, p0, p1); } // 0x9409C62504A8F9E9 b1207
	static void _0x56CB3B4305A4F7CE(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x56CB3B4305A4F7CE, p0, p1, p2, p3); } // 0x56CB3B4305A4F7CE b1207
	static Any _0xBF5987E1CDE63501(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xBF5987E1CDE63501, p0, p1, p2, p3); } // 0xBF5987E1CDE63501 b1207
	static void _0x194D877FC5597B7D(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x194D877FC5597B7D, p0, p1, p2, p3); } // 0x194D877FC5597B7D b1207
	static void SET_PED_INFINITE_AMMO(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x3EDCB0505123623B, p0, p1, p2); } // 0x3EDCB0505123623B b1207
	static void _0xFBAA1E06B6BCA741(Any p0, Any p1) { invoker::Invoke<Void>(0xFBAA1E06B6BCA741, p0, p1); } // 0xFBAA1E06B6BCA741 b1207
	static Any GET_AMMO_IN_PED_WEAPON(Any p0, Any p1) { return invoker::Invoke<Any>(0x015A522136D7F951, p0, p1); } // 0x015A522136D7F951 b1207
	static Any GET_MAX_AMMO_IN_CLIP(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xA38DCFFCEA8962FA, p0, p1, p2); } // 0xA38DCFFCEA8962FA b1207
	static Any GET_AMMO_IN_CLIP(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x2E1202248937775C, p0, p1, p2); } // 0x2E1202248937775C b1207
	static Any _0x678F00858980F516() { return invoker::Invoke<Any>(0x678F00858980F516); } // 0x678F00858980F516 b1207
	static Any SET_AMMO_IN_CLIP(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xDCD2A934D65CB497, p0, p1, p2); } // 0xDCD2A934D65CB497 b1207
	static Any _0xDF4A3404D022ADDE() { return invoker::Invoke<Any>(0xDF4A3404D022ADDE); } // 0xDF4A3404D022ADDE b1207
	static Any GET_MAX_AMMO(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xDC16122C7A20C933, p0, p1, p2); } // 0xDC16122C7A20C933 b1207
	static void SET_PED_AMMO_BY_TYPE(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x5FD1E1F011E76D7E, p0, p1, p2); } // 0x5FD1E1F011E76D7E b1207
	static Any GET_PED_AMMO_BY_TYPE(Any p0, Any p1) { return invoker::Invoke<Any>(0x39D22031557946C1, p0, p1); } // 0x39D22031557946C1 b1207
	static Any SET_PED_AMMO_TO_DROP() { return invoker::Invoke<Any>(0xA4EFEF9440A5B0EF); } // 0xA4EFEF9440A5B0EF b1207
	static Any _0x5C2EA6C44F515F34(Any p0) { return invoker::Invoke<Any>(0x5C2EA6C44F515F34, p0); } // 0x5C2EA6C44F515F34 b1207
	static Any GET_PED_AMMO_TYPE_FROM_WEAPON(Any p0, Any p1) { return invoker::Invoke<Any>(0x7FEAD38B326B9F74, p0, p1); } // 0x7FEAD38B326B9F74 b1207
	static Any _0x7AA043F6C41D151E(Any p0) { return invoker::Invoke<Any>(0x7AA043F6C41D151E, p0); } // 0x7AA043F6C41D151E b1207
	static Any _0x59DE03442B6C9598(Any p0) { return invoker::Invoke<Any>(0x59DE03442B6C9598, p0); } // 0x59DE03442B6C9598 b1207
	static Any _0xF70825EB340E7D15(Any p0) { return invoker::Invoke<Any>(0xF70825EB340E7D15, p0); } // 0xF70825EB340E7D15 b1207
	static Any _0x46F032B8DDF46CDE() { return invoker::Invoke<Any>(0x46F032B8DDF46CDE); } // 0x46F032B8DDF46CDE b1207
	static Any GET_WEAPONTYPE_GROUP(Any p0) { return invoker::Invoke<Any>(0xEDCA14CA5199FF25, p0); } // 0xEDCA14CA5199FF25 b1207
	static Any _0xF8204EF17410BF43(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xF8204EF17410BF43, p0, p1, p2, p3); } // 0xF8204EF17410BF43 b1207
	static Any _0x6ABAD7B0A854F8FB(Any p0) { return invoker::Invoke<Any>(0x6ABAD7B0A854F8FB, p0); } // 0x6ABAD7B0A854F8FB b1207
	static Any _0x49E40483948AF062(Any p0) { return invoker::Invoke<Any>(0x49E40483948AF062, p0); } // 0x49E40483948AF062 b1207
	static Any _0xC4DEC3CA8C365A5D(Any p0) { return invoker::Invoke<Any>(0xC4DEC3CA8C365A5D, p0); } // 0xC4DEC3CA8C365A5D b1207
	static Any _0x79407D33328286C6(Any p0) { return invoker::Invoke<Any>(0x79407D33328286C6, p0); } // 0x79407D33328286C6 b1207
	static Any _0x506F1DE1BFC75304(Any p0) { return invoker::Invoke<Any>(0x506F1DE1BFC75304, p0); } // 0x506F1DE1BFC75304 b1207
	static Any _0xBE7E42B07FD317AC(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xBE7E42B07FD317AC, p0, p1, p2); } // 0xBE7E42B07FD317AC b1207
	static Any _0x5E3BDDBCB83F3D84(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoker::Invoke<Any>(0x5E3BDDBCB83F3D84, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x5E3BDDBCB83F3D84 b1207
	static void _0x5230D3F6EE56CFE6(Any p0, Any p1) { invoker::Invoke<Void>(0x5230D3F6EE56CFE6, p0, p1); } // 0x5230D3F6EE56CFE6 b1207
	static Any _0x9F0E1892C7F228A8(Any p0) { return invoker::Invoke<Any>(0x9F0E1892C7F228A8, p0); } // 0x9F0E1892C7F228A8 b1207
	static void _0x94A3C1B804D291EC(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x94A3C1B804D291EC, p0, p1, p2, p3, p4); } // 0x94A3C1B804D291EC b1207
	static void _0xFCCC886EDE3C63EC(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xFCCC886EDE3C63EC, p0, p1, p2); } // 0xFCCC886EDE3C63EC b1207
	static void _0x4820A6939D7CEF28(Any p0, Any p1) { invoker::Invoke<Void>(0x4820A6939D7CEF28, p0, p1); } // 0x4820A6939D7CEF28 b1207
	static void SET_CURRENT_PED_WEAPON(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0xADF692B254977C0C, p0, p1, p2, p3, p4, p5); } // 0xADF692B254977C0C b1207
	static Any GET_CURRENT_PED_WEAPON(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0x3A87E44BB9A01D54, p0, p1, p2, p3, p4); } // 0x3A87E44BB9A01D54 b1207
	static Any GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Any p0, Any p1) { return invoker::Invoke<Any>(0x3B390A939AF0B5FC, p0, p1); } // 0x3B390A939AF0B5FC b1207
	static Any _0xC395355843BE134B(Any p0) { return invoker::Invoke<Any>(0xC395355843BE134B, p0); } // 0xC395355843BE134B b1207
	static Any _0xC71FE230A513C30F() { return invoker::Invoke<Any>(0xC71FE230A513C30F); } // 0xC71FE230A513C30F b1207
	static Any _0xDA37A053C1522F5D(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0xDA37A053C1522F5D, p0, p1, p2, p3); } // 0xDA37A053C1522F5D b1207
	static Any GET_BEST_PED_WEAPON(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x8483E98E8B888AE2, p0, p1, p2); } // 0x8483E98E8B888AE2 b1207
	static Any _0xF52BD94B47CCF736() { return invoker::Invoke<Any>(0xF52BD94B47CCF736); } // 0xF52BD94B47CCF736 b1207
	static Any _0x6929E22158E52265(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x6929E22158E52265, p0, p1, p2); } // 0x6929E22158E52265 b1207
	static Any _0x9F67929D98E7C6E8(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x9F67929D98E7C6E8, p0, p1, p2, p3); } // 0x9F67929D98E7C6E8 b1207
	static Any _0x08FF1099ED2E6E21(Any p0) { return invoker::Invoke<Any>(0x08FF1099ED2E6E21, p0); } // 0x08FF1099ED2E6E21 b1207
	static void _0xBDDA0C290C228159(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xBDDA0C290C228159, p0, p1, p2); } // 0xBDDA0C290C228159 b1207
	static Any SET_CURRENT_PED_VEHICLE_WEAPON(Any p0, Any p1) { return invoker::Invoke<Any>(0x75C55983C2C39DAA, p0, p1); } // 0x75C55983C2C39DAA b1207
	static Any GET_CURRENT_PED_VEHICLE_WEAPON(Any p0, Any p1) { return invoker::Invoke<Any>(0x1017582BCD3832DC, p0, p1); } // 0x1017582BCD3832DC b1207
	static Any _0xCB690F680A3EA971(Any p0, Any p1) { return invoker::Invoke<Any>(0xCB690F680A3EA971, p0, p1); } // 0xCB690F680A3EA971 b1207
	static Any _0xA2091482ED42EF85(Any p0, Any p1) { return invoker::Invoke<Any>(0xA2091482ED42EF85, p0, p1); } // 0xA2091482ED42EF85 b1207
	static Any _0x2387D6E9C6B478AA(Any p0) { return invoker::Invoke<Any>(0x2387D6E9C6B478AA, p0); } // 0x2387D6E9C6B478AA b1207
	static Any IS_WEAPON_VALID(Any p0) { return invoker::Invoke<Any>(0x937C71165CF334B3, p0); } // 0x937C71165CF334B3 b1207
	static Any _0x1F7977C9101F807F(Any p0) { return invoker::Invoke<Any>(0x1F7977C9101F807F, p0); } // 0x1F7977C9101F807F b1207
	static Any _0x23BF601A42F329A0(Any p0) { return invoker::Invoke<Any>(0x23BF601A42F329A0, p0); } // 0x23BF601A42F329A0 b1207
	static Any _0xF29A186ED428B552(Any p0, Any p1) { return invoker::Invoke<Any>(0xF29A186ED428B552, p0, p1); } // 0xF29A186ED428B552 b1207
	static Any HAS_PED_GOT_WEAPON(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x8DECB02F88F428BC, p0, p1, p2, p3); } // 0x8DECB02F88F428BC b1207
	static Any _0x07E1C35F0078C3F9(Any p0, Any p1) { return invoker::Invoke<Any>(0x07E1C35F0078C3F9, p0, p1); } // 0x07E1C35F0078C3F9 b1207
	static Any IS_PED_WEAPON_READY_TO_SHOOT(Any p0) { return invoker::Invoke<Any>(0xB80CA294F2F26749, p0); } // 0xB80CA294F2F26749 b1207
	static Any _0xDBC4B552B2AE9A83(Any p0, Any p1) { return invoker::Invoke<Any>(0xDBC4B552B2AE9A83, p0, p1); } // 0xDBC4B552B2AE9A83 b1207
	static Any GIVE_DELAYED_WEAPON_TO_PED() { return invoker::Invoke<Any>(0xB282DC6EBD803C75); } // 0xB282DC6EBD803C75 b1207
	static void REMOVE_ALL_PED_WEAPONS(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xF25DF915FA38C5F3, p0, p1, p2); } // 0xF25DF915FA38C5F3 b1207
	static void REMOVE_WEAPON_FROM_PED(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x4899CB088EDF59B8, p0, p1, p2, p3); } // 0x4899CB088EDF59B8 b1207
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Any p0, Any p1) { invoker::Invoke<Void>(0x6F6981D2253C208F, p0, p1); } // 0x6F6981D2253C208F b1207
	static void SET_PED_CURRENT_WEAPON_VISIBLE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoker::Invoke<Void>(0x0725A4CCFDED9A70, p0, p1, p2, p3, p4); } // 0x0725A4CCFDED9A70 b1207
	static void _0x67E21ACC5C0C970C(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x67E21ACC5C0C970C, p0, p1, p2); } // 0x67E21ACC5C0C970C b1207
	static void _0x4F806A6CFED89468(Any p0, Any p1) { invoker::Invoke<Void>(0x4F806A6CFED89468, p0, p1); } // 0x4F806A6CFED89468 b1207
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Any p0, Any p1) { invoker::Invoke<Void>(0x476AE72C1D19D1A8, p0, p1); } // 0x476AE72C1D19D1A8 b1207
	static Any _0x431240A58484D5D0() { return invoker::Invoke<Any>(0x431240A58484D5D0); } // 0x431240A58484D5D0 b1207
	static Any _0x45E57FDD531C9477() { return invoker::Invoke<Any>(0x45E57FDD531C9477); } // 0x45E57FDD531C9477 b1207
	static Any _0xF08D8FEB455F2C8C() { return invoker::Invoke<Any>(0xF08D8FEB455F2C8C); } // 0xF08D8FEB455F2C8C b1207
	static Any _0x16D9841A85FA627E() { return invoker::Invoke<Any>(0x16D9841A85FA627E); } // 0x16D9841A85FA627E b1207
	static Any GET_PED_LAST_WEAPON_IMPACT_COORD(Any p0, Any p1) { return invoker::Invoke<Any>(0x6C4D0409BA1A2BC2, p0, p1); } // 0x6C4D0409BA1A2BC2 b1207
	static void _0x087D8F4BC65F68E4(Any p0) { invoker::Invoke<Void>(0x087D8F4BC65F68E4, p0); } // 0x087D8F4BC65F68E4 b1207
	static Any _0xDCF06D0CDFF68424(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xDCF06D0CDFF68424, p0, p1, p2); } // 0xDCF06D0CDFF68424 b1207
	static void SET_PED_DROPS_INVENTORY_WEAPON(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoker::Invoke<Void>(0x208A1888007FC0E6, p0, p1, p2, p3, p4, p5); } // 0x208A1888007FC0E6 b1207
	static void _0xB0FB9B196A3D13F0(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xB0FB9B196A3D13F0, p0, p1, p2); } // 0xB0FB9B196A3D13F0 b1207
	static Any _0x2EBF70E1D8C06683() { return invoker::Invoke<Any>(0x2EBF70E1D8C06683); } // 0x2EBF70E1D8C06683 b1207
	static Any _0x63B83A526329AFBC() { return invoker::Invoke<Any>(0x63B83A526329AFBC); } // 0x63B83A526329AFBC b1207
	static Any _0x79E1E511FF7EFB13(Any p0) { return invoker::Invoke<Any>(0x79E1E511FF7EFB13, p0); } // 0x79E1E511FF7EFB13 b1207
	static Any _0x0A2AB7B7ABC055F4(Any p0) { return invoker::Invoke<Any>(0x0A2AB7B7ABC055F4, p0); } // 0x0A2AB7B7ABC055F4 b1207
	static Any _0xCEF4C65DE502D367(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoker::Invoke<Any>(0xCEF4C65DE502D367, p0, p1, p2, p3, p4); } // 0xCEF4C65DE502D367 b1207
	static Any _0x8425C5F057012DAB(Any p0) { return invoker::Invoke<Any>(0x8425C5F057012DAB, p0); } // 0x8425C5F057012DAB b1207
	static void _0x78030C7867D8B9B6(Any p0, Any p1) { invoker::Invoke<Void>(0x78030C7867D8B9B6, p0, p1); } // 0x78030C7867D8B9B6 b1207
	static void _0xA3716A77DCF17424(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA3716A77DCF17424, p0, p1, p2); } // 0xA3716A77DCF17424 b1207
	static Any _0x3799EFCC3C8CD5E1(Any p0) { return invoker::Invoke<Any>(0x3799EFCC3C8CD5E1, p0); } // 0x3799EFCC3C8CD5E1 b1207
	static Any _0x79B1A6E780266DB0(Any p0) { return invoker::Invoke<Any>(0x79B1A6E780266DB0, p0); } // 0x79B1A6E780266DB0 b1207
	static void _0x19F70C4D80494FF8(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x19F70C4D80494FF8, p0, p1, p2); } // 0x19F70C4D80494FF8 b1207
	static Any _0xBBC67A6F965C688A(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0xBBC67A6F965C688A, p0, p1, p2); } // 0xBBC67A6F965C688A b1207
	static Any _0xBDD9C235D8D1052E(Any p0) { return invoker::Invoke<Any>(0xBDD9C235D8D1052E, p0); } // 0xBDD9C235D8D1052E b1207
	static Any _0xD2209866B0CB72EA(Any p0, Any p1) { return invoker::Invoke<Any>(0xD2209866B0CB72EA, p0, p1); } // 0xD2209866B0CB72EA b1207
	static void _0x72D4CB5DB927009C(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x72D4CB5DB927009C, p0, p1, p2); } // 0x72D4CB5DB927009C b1207
	static Any _0xFF07CF465F48B830(Any p0) { return invoker::Invoke<Any>(0xFF07CF465F48B830, p0); } // 0xFF07CF465F48B830 b1207
	static void _0xC3896D03E2852236(Any p0) { invoker::Invoke<Void>(0xC3896D03E2852236, p0); } // 0xC3896D03E2852236 b1207
	static void _0xE9B3FEC825668291(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE9B3FEC825668291, p0, p1, p2); } // 0xE9B3FEC825668291 b1207
	static Any _0x9CCA3131E6B53C68() { return invoker::Invoke<Any>(0x9CCA3131E6B53C68); } // 0x9CCA3131E6B53C68 b1207
	static Any _0x6D3AC61694A791C5() { return invoker::Invoke<Any>(0x6D3AC61694A791C5); } // 0x6D3AC61694A791C5 b1207
	static Any _0x89CF5FF3D363311E(Any p0) { return invoker::Invoke<Any>(0x89CF5FF3D363311E, p0); } // 0x89CF5FF3D363311E b1207
	static Any _0x7A56D66C78D8EF8E(Any p0, Any p1) { return invoker::Invoke<Any>(0x7A56D66C78D8EF8E, p0, p1); } // 0x7A56D66C78D8EF8E b1207
	static void _0xB832F1A686B9B810(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xB832F1A686B9B810, p0, p1, p2); } // 0xB832F1A686B9B810 b1207
	static Any _0x5A695BD328586B44() { return invoker::Invoke<Any>(0x5A695BD328586B44); } // 0x5A695BD328586B44 b1207
	static Any _0x641351E9AD103890() { return invoker::Invoke<Any>(0x641351E9AD103890); } // 0x641351E9AD103890 b1207
	static Any _0x739B9C6D0E7F7F93() { return invoker::Invoke<Any>(0x739B9C6D0E7F7F93); } // 0x739B9C6D0E7F7F93 b1207
	static Any _0xBE711B14A159E84F() { return invoker::Invoke<Any>(0xBE711B14A159E84F); } // 0xBE711B14A159E84F b1207
	static void _0xE9BD19F8121ADE3E(Any p0, Any p1) { invoker::Invoke<Void>(0xE9BD19F8121ADE3E, p0, p1); } // 0xE9BD19F8121ADE3E b1207
	static void _0x14FF0C2545527F9B(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x14FF0C2545527F9B, p0, p1, p2); } // 0x14FF0C2545527F9B b1207
	static Any _0xAFFD0CCF31F469B8(Any p0) { return invoker::Invoke<Any>(0xAFFD0CCF31F469B8, p0); } // 0xAFFD0CCF31F469B8 b1207
	static Any _0x8EC44AE8DECFF841() { return invoker::Invoke<Any>(0x8EC44AE8DECFF841); } // 0x8EC44AE8DECFF841 b1207
	static Any _0x9E2D5D6BC97A5F1E(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x9E2D5D6BC97A5F1E, p0, p1, p2); } // 0x9E2D5D6BC97A5F1E b1207
	static Any _0x90EB1CB189923587() { return invoker::Invoke<Any>(0x90EB1CB189923587); } // 0x90EB1CB189923587 b1207
	static Any _0x9888652B8BA77F73(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoker::Invoke<Any>(0x9888652B8BA77F73, p0, p1, p2, p3, p4, p5, p6); } // 0x9888652B8BA77F73 b1207
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Any p0, Any p1) { invoker::Invoke<Void>(0xF7D82B0D66777611, p0, p1); } // 0xF7D82B0D66777611 b1207
	static Any HAS_WEAPON_GOT_WEAPON_COMPONENT(Any p0, Any p1) { return invoker::Invoke<Any>(0x76A18844E743BF91, p0, p1); } // 0x76A18844E743BF91 b1207
	static void _0x1A47699E8D533E8F(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x1A47699E8D533E8F, p0, p1, p2, p3); } // 0x1A47699E8D533E8F b1207
	static Any _0xC6A6789BB405D11C(Any p0, Any p1) { return invoker::Invoke<Any>(0xC6A6789BB405D11C, p0, p1); } // 0xC6A6789BB405D11C b1207
	static Any _0x6CA484C9A7377E4F(Any p0, Any p1) { return invoker::Invoke<Any>(0x6CA484C9A7377E4F, p0, p1); } // 0x6CA484C9A7377E4F b1207
	static void _0x74C9090FDD1BB48E(Any p0, Any p1, Any p2, Any p3) { invoker::Invoke<Void>(0x74C9090FDD1BB48E, p0, p1, p2, p3); } // 0x74C9090FDD1BB48E b1207
	static void _0x74C9080FDD1BB48E(Any p0, Any p1) { invoker::Invoke<Void>(0x74C9080FDD1BB48E, p0, p1); } // 0x74C9080FDD1BB48E b1207
	static void _0x74C9080FDD1BB48F(Any p0, Any p1) { invoker::Invoke<Void>(0x74C9080FDD1BB48F, p0, p1); } // 0x74C9080FDD1BB48F b1207
	static void _0x74C2365FDD1BB48F(Any p0, Any p1) { invoker::Invoke<Void>(0x74C2365FDD1BB48F, p0, p1); } // 0x74C2365FDD1BB48F b1207
	static void _0x74C90AAACC1DD48F(Any p0) { invoker::Invoke<Void>(0x74C90AAACC1DD48F, p0); } // 0x74C90AAACC1DD48F b1207
	static Any _0x74C8000FDD1BB111(Any p0, Any p1) { return invoker::Invoke<Any>(0x74C8000FDD1BB111, p0, p1); } // 0x74C8000FDD1BB111 b1207
	static Any _0x74C8000FDD1BB222(Any p0, Any p1) { return invoker::Invoke<Any>(0x74C8000FDD1BB222, p0, p1); } // 0x74C8000FDD1BB222 b1207
	static Any _0xF4601C1203B1A78D() { return invoker::Invoke<Any>(0xF4601C1203B1A78D); } // 0xF4601C1203B1A78D b1207
	static Any _0x01F661BB9C71B465() { return invoker::Invoke<Any>(0x01F661BB9C71B465); } // 0x01F661BB9C71B465 b1207
	static Any _0x6554ECCE226F2A2A() { return invoker::Invoke<Any>(0x6554ECCE226F2A2A); } // 0x6554ECCE226F2A2A b1207
	static Any _0xD42514C182121C23(Any p0) { return invoker::Invoke<Any>(0xD42514C182121C23, p0); } // 0xD42514C182121C23 b1207
	static void _0x899A04AFCC725D04(Any p0, Any p1) { invoker::Invoke<Void>(0x899A04AFCC725D04, p0, p1); } // 0x899A04AFCC725D04 b1207
	static Any _0xF252A85B8F3F8C58(Any p0, Any p1) { return invoker::Invoke<Any>(0xF252A85B8F3F8C58, p0, p1); } // 0xF252A85B8F3F8C58 b1207
	static Any _0x9EEFD670F10656D7(Any p0, Any p1) { return invoker::Invoke<Any>(0x9EEFD670F10656D7, p0, p1); } // 0x9EEFD670F10656D7 b1207
	static Any _0xF2F585411E748B9C(Any p0, Any p1) { return invoker::Invoke<Any>(0xF2F585411E748B9C, p0, p1); } // 0xF2F585411E748B9C b1207
	static Any _0xD3750CCC00635FC2(Any p0) { return invoker::Invoke<Any>(0xD3750CCC00635FC2, p0); } // 0xD3750CCC00635FC2 b1207
	static void _0xA769D753922B031B(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA769D753922B031B, p0, p1, p2); } // 0xA769D753922B031B b1207
	static void _0xC5899C4CD2E2495D(Any p0) { invoker::Invoke<Void>(0xC5899C4CD2E2495D, p0); } // 0xC5899C4CD2E2495D b1207
	static Any _0x918990BD9CE08582() { return invoker::Invoke<Any>(0x918990BD9CE08582); } // 0x918990BD9CE08582 b1207
	static void _0x83B8D50EB9446BBA(Any p0, Any p1) { invoker::Invoke<Void>(0x83B8D50EB9446BBA, p0, p1); } // 0x83B8D50EB9446BBA b1207
	static Any _0x44C8F4908F1B2622() { return invoker::Invoke<Any>(0x44C8F4908F1B2622); } // 0x44C8F4908F1B2622 b1207
	static Any _0x792E3EF76C911959(Any p0) { return invoker::Invoke<Any>(0x792E3EF76C911959, p0); } // 0x792E3EF76C911959 b1207
	static Any _0xC212F1D05A8232BB(Any p0) { return invoker::Invoke<Any>(0xC212F1D05A8232BB, p0); } // 0xC212F1D05A8232BB b1207
	static Any _0xDDC64F5E31EEDAB6(Any p0) { return invoker::Invoke<Any>(0xDDC64F5E31EEDAB6, p0); } // 0xDDC64F5E31EEDAB6 b1207
	static Any _0xDDB2578E95EF7138(Any p0) { return invoker::Invoke<Any>(0xDDB2578E95EF7138, p0); } // 0xDDB2578E95EF7138 b1207
	static Any _0x0A82317B7EBFC420(Any p0) { return invoker::Invoke<Any>(0x0A82317B7EBFC420, p0); } // 0x0A82317B7EBFC420 b1207
	static Any _0xC75386174ECE95D5(Any p0) { return invoker::Invoke<Any>(0xC75386174ECE95D5, p0); } // 0xC75386174ECE95D5 b1207
	static Any _0x6AD66548840472E5(Any p0) { return invoker::Invoke<Any>(0x6AD66548840472E5, p0); } // 0x6AD66548840472E5 b1207
	static Any _0x959383DCD42040DA(Any p0) { return invoker::Invoke<Any>(0x959383DCD42040DA, p0); } // 0x959383DCD42040DA b1207
	static Any _0x30E7C16B12DA8211(Any p0) { return invoker::Invoke<Any>(0x30E7C16B12DA8211, p0); } // 0x30E7C16B12DA8211 b1207
	static Any _0x6E4E1A82081EABED() { return invoker::Invoke<Any>(0x6E4E1A82081EABED); } // 0x6E4E1A82081EABED b1207
	static Any _0xC853230E76A152DF() { return invoker::Invoke<Any>(0xC853230E76A152DF); } // 0xC853230E76A152DF b1207
	static Any _0x705BE297EEBDB95D(Any p0) { return invoker::Invoke<Any>(0x705BE297EEBDB95D, p0); } // 0x705BE297EEBDB95D b1207
	static Any _0x0556E9D2ECF39D01(Any p0) { return invoker::Invoke<Any>(0x0556E9D2ECF39D01, p0); } // 0x0556E9D2ECF39D01 b1207
	static Any _0xD955FEE4B87AFA07(Any p0) { return invoker::Invoke<Any>(0xD955FEE4B87AFA07, p0); } // 0xD955FEE4B87AFA07 b1207
	static Any _0x5809DBCA0A37C82B(Any p0) { return invoker::Invoke<Any>(0x5809DBCA0A37C82B, p0); } // 0x5809DBCA0A37C82B b1207
	static Any _0xEA522F991E120D45(Any p0) { return invoker::Invoke<Any>(0xEA522F991E120D45, p0); } // 0xEA522F991E120D45 b1207
	static Any _0x7EFACC589B98C488() { return invoker::Invoke<Any>(0x7EFACC589B98C488); } // 0x7EFACC589B98C488 b1207
	static Any _0x2C83212A7AA51D3D(Any p0) { return invoker::Invoke<Any>(0x2C83212A7AA51D3D, p0); } // 0x2C83212A7AA51D3D b1207
	static Any _0x5B235F24472F2C3B(Any p0, Any p1) { return invoker::Invoke<Any>(0x5B235F24472F2C3B, p0, p1); } // 0x5B235F24472F2C3B b1207
	static Any _0xBFCA7AFABF9D7967(Any p0, Any p1) { return invoker::Invoke<Any>(0xBFCA7AFABF9D7967, p0, p1); } // 0xBFCA7AFABF9D7967 b1207
	static Any _0x495A04CAEC263AF8(Any p0, Any p1) { return invoker::Invoke<Any>(0x495A04CAEC263AF8, p0, p1); } // 0x495A04CAEC263AF8 b1207
	static Any _0x95CA12E2C68043E5(Any p0, Any p1) { return invoker::Invoke<Any>(0x95CA12E2C68043E5, p0, p1); } // 0x95CA12E2C68043E5 b1207
	static Any _0xABC18A28BAD4B46F() { return invoker::Invoke<Any>(0xABC18A28BAD4B46F); } // 0xABC18A28BAD4B46F b1207
	static Any _0x80BB243789008A82(Any p0, Any p1) { return invoker::Invoke<Any>(0x80BB243789008A82, p0, p1); } // 0x80BB243789008A82 b1207
	static Any _0x904103D5D2333977() { return invoker::Invoke<Any>(0x904103D5D2333977); } // 0x904103D5D2333977 b1207
	static void _0xE22060121602493B(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xE22060121602493B, p0, p1, p2); } // 0xE22060121602493B b1207
	static Any _0x810E8AE9AFEA7E54() { return invoker::Invoke<Any>(0x810E8AE9AFEA7E54); } // 0x810E8AE9AFEA7E54 b1207
	static void _0x812CE61DEBCAB948(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0x812CE61DEBCAB948, p0, p1, p2); } // 0x812CE61DEBCAB948 b1207
	static Any _0x4BF66F8878F67663() { return invoker::Invoke<Any>(0x4BF66F8878F67663); } // 0x4BF66F8878F67663 b1207
	static void _0xA9EF4AD10BDDDB57(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xA9EF4AD10BDDDB57, p0, p1, p2); } // 0xA9EF4AD10BDDDB57 b1207
	static void _0xD4071EFC83794B2F(Any p0, Any p1) { invoker::Invoke<Void>(0xD4071EFC83794B2F, p0, p1); } // 0xD4071EFC83794B2F b1207
	static Any _0x0D78E1097F89E637(Any p0) { return invoker::Invoke<Any>(0x0D78E1097F89E637, p0); } // 0x0D78E1097F89E637 b1207
	static Any _0xD56E5F336C675EFA(Any p0) { return invoker::Invoke<Any>(0xD56E5F336C675EFA, p0); } // 0xD56E5F336C675EFA b1207
	static void _0xA7A57E89E965D839(Any p0, Any p1) { invoker::Invoke<Void>(0xA7A57E89E965D839, p0, p1); } // 0xA7A57E89E965D839 b1207
	static Any _0xDA5D3F2C6DD5B5D4() { return invoker::Invoke<Any>(0xDA5D3F2C6DD5B5D4); } // 0xDA5D3F2C6DD5B5D4 b1207
	static Any _0x22084CA699219624(Any p0) { return invoker::Invoke<Any>(0x22084CA699219624, p0); } // 0x22084CA699219624 b1207
	static void _0xC3544AD0522E69B4(Any p0, Any p1) { invoker::Invoke<Void>(0xC3544AD0522E69B4, p0, p1); } // 0xC3544AD0522E69B4 b1207
	static Any _0x58425FCA3D3A2D15() { return invoker::Invoke<Any>(0x58425FCA3D3A2D15); } // 0x58425FCA3D3A2D15 b1207
	static Any _0xEC97101A8F311282(Any p0) { return invoker::Invoke<Any>(0xEC97101A8F311282, p0); } // 0xEC97101A8F311282 b1207
	static Any _0x7E7B19A4355FEE13(Any p0, Any p1) { return invoker::Invoke<Any>(0x7E7B19A4355FEE13, p0, p1); } // 0x7E7B19A4355FEE13 b1207
	static Any _0xAF9D167A5656D6A6() { return invoker::Invoke<Any>(0xAF9D167A5656D6A6); } // 0xAF9D167A5656D6A6 b1207
	static Any _0xC570B881754DF609() { return invoker::Invoke<Any>(0xC570B881754DF609); } // 0xC570B881754DF609 b1207
	static void _0xCC9C4393523833E2(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xCC9C4393523833E2, p0, p1, p2); } // 0xCC9C4393523833E2 b1207
	static void _0x183CE355115B6E75(Any p0, Any p1) { invoker::Invoke<Void>(0x183CE355115B6E75, p0, p1); } // 0x183CE355115B6E75 b1207
	static Any _0xEBE46B501BC3FBCF() { return invoker::Invoke<Any>(0xEBE46B501BC3FBCF); } // 0xEBE46B501BC3FBCF b1207
	static Any _0xFDCEDFB0577A390D() { return invoker::Invoke<Any>(0xFDCEDFB0577A390D); } // 0xFDCEDFB0577A390D b1207
	static Any _0xF0D728EEA3C99775() { return invoker::Invoke<Any>(0xF0D728EEA3C99775); } // 0xF0D728EEA3C99775 b1207
	static void _0xAA5A52204E077883(Any p0, Any p1) { invoker::Invoke<Void>(0xAA5A52204E077883, p0, p1); } // 0xAA5A52204E077883 b1207
	static void _0xD63B4BA3A02A99E0(Any p0, Any p1) { invoker::Invoke<Void>(0xD63B4BA3A02A99E0, p0, p1); } // 0xD63B4BA3A02A99E0 b1207
	static Any _0x23FB9FACA28779C1() { return invoker::Invoke<Any>(0x23FB9FACA28779C1); } // 0x23FB9FACA28779C1 b1207
	static void _0x3B7B7908B7ADFB4B(Any p0, Any p1) { invoker::Invoke<Void>(0x3B7B7908B7ADFB4B, p0, p1); } // 0x3B7B7908B7ADFB4B b1207
	static void _0x404514D231DB27A0(Any p0, Any p1) { invoker::Invoke<Void>(0x404514D231DB27A0, p0, p1); } // 0x404514D231DB27A0 b1207
	static void _0xD53846B9C931C181(Any p0, Any p1, Any p2) { invoker::Invoke<Void>(0xD53846B9C931C181, p0, p1, p2); } // 0xD53846B9C931C181 b1207
	static void _0x000FA7A4A8443AF7(Any p0) { invoker::Invoke<Void>(0x000FA7A4A8443AF7, p0); } // 0x000FA7A4A8443AF7 b1207
	static void _0xECBB26529A737EF6(Any p0) { invoker::Invoke<Void>(0xECBB26529A737EF6, p0); } // 0xECBB26529A737EF6 b1207
	static Any _0xCAD4FE9398820D24(Any p0, Any p1) { return invoker::Invoke<Any>(0xCAD4FE9398820D24, p0, p1); } // 0xCAD4FE9398820D24 b1207
	static Any _0x4823F13A21F51964(Any p0, Any p1) { return invoker::Invoke<Any>(0x4823F13A21F51964, p0, p1); } // 0x4823F13A21F51964 b1207
	static Any _0x12FB95FE3D579238() { return invoker::Invoke<Any>(0x12FB95FE3D579238); } // 0x12FB95FE3D579238 b1207
}

namespace _NAMESPACE83
{
	static Any _0x43AD8FC02B429D33(Any p0, Any p1, Any p2, Any p3) { return invoker::Invoke<Any>(0x43AD8FC02B429D33, p0, p1, p2, p3); } // 0x43AD8FC02B429D33 b1207
	static Any _0x5BA7A68A346A5A91(Any p0, Any p1, Any p2) { return invoker::Invoke<Any>(0x5BA7A68A346A5A91, p0, p1, p2); } // 0x5BA7A68A346A5A91 b1207
}

namespace _NAMESPACE84
{
	static void _0xB6FD96420C0126A1(Any p0, Any p1) { invoker::Invoke<Void>(0xB6FD96420C0126A1, p0, p1); } // 0xB6FD96420C0126A1 b1207
	static void _0x74BCCEB233AD95B2(Any p0, Any p1) { invoker::Invoke<Void>(0x74BCCEB233AD95B2, p0, p1); } // 0x74BCCEB233AD95B2 b1207
	static void _0x29C733459A9011EB(Any p0, Any p1) { invoker::Invoke<Void>(0x29C733459A9011EB, p0, p1); } // 0x29C733459A9011EB b1207
	static Any _0x7AF1BB4504EA5ED9() { return invoker::Invoke<Any>(0x7AF1BB4504EA5ED9); } // 0x7AF1BB4504EA5ED9 b1207
	static void _0xCCB4635A071FB62D() { invoker::Invoke<Void>(0xCCB4635A071FB62D); } // 0xCCB4635A071FB62D b1207
}
