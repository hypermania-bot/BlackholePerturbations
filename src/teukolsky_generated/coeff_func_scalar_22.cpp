#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1100(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1100] = ((0.0937500000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-27)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1100] = ((0.0937500000000000000000000000000)*((7.41619848709566294871139744080)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-27)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1101(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1101] = ((0.0468750000000000000000000000000)*((13.8744369255116079467397289461)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-27)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1101] = ((0.0468750000000000000000000000000)*((13.8744369255116079467397289461)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-27)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((110)*(expr[2]))+(((-196)*(expr[3]))+((105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1102(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1102] = ((0.644531250000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-27)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.55151515151515151515151515152));
} else {
coeffs[1102] = ((0.644531250000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-27)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((58)*((M)*(pow(r,3))))+((-30)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((29)*(expr[1]))+(((-266)*(expr[2]))+(((826)*(expr[3]))+(((-1029)*(expr[4]))+((441)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1103(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1103] = ((1.28906250000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.55151515151515151515151515152));
} else {
coeffs[1103] = ((1.28906250000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((29)*(expr[1]))+(((-266)*(expr[2]))+(((826)*(expr[3]))+(((-1029)*(expr[4]))+((441)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1104(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1104] = ((2.57812500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-1.55151515151515151515151515152));
} else {
coeffs[1104] = ((2.57812500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((29)*(expr[1]))+(((-266)*(expr[2]))+(((826)*(expr[3]))+(((-1029)*(expr[4]))+((441)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1105(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1105] = ((0.125000000000000000000000000000)*((5.74456264653802865985061146822)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-14)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1105] = ((0.125000000000000000000000000000)*((5.74456264653802865985061146822)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-14)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*(expr[1]))+(((70)*(expr[2]))+((-63)*(expr[3])))));
}
}

void compute_coeffs_scalar_1106(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1106] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-14)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1106] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-14)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((45)*(expr[1]))+(((-285)*(expr[2]))+(((539)*(expr[3]))+((-315)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1107(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1107] = ((0.171875000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-14)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-11.6363636363636363636363636364));
} else {
coeffs[1107] = ((0.171875000000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-14)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-15)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-225)*(expr[1]))+(((2100)*(expr[2]))+(((-6790)*(expr[3]))+(((8820)*(expr[4]))+((-3969)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1108(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1108] = ((0.171875000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-11.6363636363636363636363636364));
} else {
coeffs[1108] = ((0.171875000000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-225)*(expr[1]))+(((2100)*(expr[2]))+(((-6790)*(expr[3]))+(((8820)*(expr[4]))+((-3969)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1109(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1109] = ((0.0859375000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-11.6363636363636363636363636364));
} else {
coeffs[1109] = ((0.0859375000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-225)*(expr[1]))+(((2100)*(expr[2]))+(((-6790)*(expr[3]))+(((8820)*(expr[4]))+((-3969)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1110(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1110] = ((2.57812500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(1.55151515151515151515151515152));
} else {
coeffs[1110] = ((2.57812500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-29)*(expr[1]))+(((266)*(expr[2]))+(((-826)*(expr[3]))+(((1029)*(expr[4]))+((-441)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1111(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1111] = ((144.375000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(0.0554112554112554112554112554113));
} else {
coeffs[1111] = ((144.375000000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[1])+(((-8)*(expr[2]))+(((22)*(expr[3]))+(((-24)*(expr[4]))+((9)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1112(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1112] = ((9.02343750000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(1.32987012987012987012987012987));
} else {
coeffs[1112] = ((9.02343750000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-21)*(expr[1]))+(((138)*(expr[2]))+(((-298)*(expr[3]))+(((261)*(expr[4]))+((-81)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1113(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1113] = ((216.562500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(0.0738816738816738816738816738817));
} else {
coeffs[1113] = ((216.562500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[1])+(((-4)*(expr[2]))+(((6)*(expr[3]))+(((-4)*(expr[4]))+(expr[5]))))));
}
}

void compute_coeffs_scalar_1114(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1114] = ((27.0703125000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(0.738816738816738816738816738817));
} else {
coeffs[1114] = ((27.0703125000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((expr[0])+(((-5)*(expr[1]))+(((10)*(expr[2]))+(((-10)*(expr[3]))+(((5)*(expr[4]))+((-1)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1115(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1115] = ((2.93261718750000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.681984681984681984681984681985));
} else {
coeffs[1115] = ((2.93261718750000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+(((-15)*(expr[2]))+(((20)*(expr[3]))+(((-15)*(expr[4]))+(((6)*(expr[5]))+((-1)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1116(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1116] = ((2.93261718750000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.681984681984681984681984681985));
} else {
coeffs[1116] = ((2.93261718750000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+(((-15)*(expr[2]))+(((20)*(expr[3]))+(((-15)*(expr[4]))+(((6)*(expr[5]))+((-1)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1117(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1117] = ((1.46630859375000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.681984681984681984681984681985));
} else {
coeffs[1117] = ((1.46630859375000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+(((-15)*(expr[2]))+(((20)*(expr[3]))+(((-15)*(expr[4]))+(((6)*(expr[5]))+((-1)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1118(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1118] = ((35.1914062500000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.681984681984681984681984681985));
} else {
coeffs[1118] = ((35.1914062500000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+(((-15)*(expr[2]))+(((20)*(expr[3]))+(((-15)*(expr[4]))+(((6)*(expr[5]))+((-1)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1119(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1119] = ((17.5957031250000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0568320568320568320568320568321));
} else {
coeffs[1119] = ((17.5957031250000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((5)*(expr[2]))+(((-10)*(expr[3]))+(((10)*(expr[4]))+(((-5)*(expr[5]))+(expr[6])))))));
}
}

void compute_coeffs_scalar_1120(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1120] = ((35.1914062500000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0568320568320568320568320568321));
} else {
coeffs[1120] = ((35.1914062500000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((5)*(expr[2]))+(((-10)*(expr[3]))+(((10)*(expr[4]))+(((-5)*(expr[5]))+(expr[6])))))));
}
}

void compute_coeffs_scalar_1121(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1121] = ((17.5957031250000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0568320568320568320568320568321));
} else {
coeffs[1121] = ((17.5957031250000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((5)*(expr[2]))+(((-10)*(expr[3]))+(((10)*(expr[4]))+(((-5)*(expr[5]))+(expr[6])))))));
}
}

void compute_coeffs_scalar_1122(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1122] = ((351.914062500000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.0568320568320568320568320568321));
} else {
coeffs[1122] = ((351.914062500000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[1]))+(((5)*(expr[2]))+(((-10)*(expr[3]))+(((10)*(expr[4]))+(((-5)*(expr[5]))+(expr[6])))))));
}
}

void compute_coeffs_scalar_1123(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1123] = ((0.246093750000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-12)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1123] = ((0.246093750000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-12)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1124(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1124] = ((1.59960937500000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-12)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.25030525030525030525030525031));
} else {
coeffs[1124] = ((1.59960937500000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-12)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((26)*(expr[1]))+(((-215)*(expr[2]))+(((620)*(expr[3]))+(((-815)*(expr[4]))+(((506)*(expr[5]))+((-121)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1125(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1125] = ((1.59960937500000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.25030525030525030525030525031));
} else {
coeffs[1125] = ((1.59960937500000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((26)*(expr[1]))+(((-215)*(expr[2]))+(((620)*(expr[3]))+(((-815)*(expr[4]))+(((506)*(expr[5]))+((-121)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1126(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1126] = ((0.799804687500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.25030525030525030525030525031));
} else {
coeffs[1126] = ((0.799804687500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((26)*(expr[1]))+(((-215)*(expr[2]))+(((620)*(expr[3]))+(((-815)*(expr[4]))+(((506)*(expr[5]))+((-121)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1127(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1127] = ((12.7968750000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-1.25030525030525030525030525031));
} else {
coeffs[1127] = ((12.7968750000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((26)*(expr[1]))+(((-215)*(expr[2]))+(((620)*(expr[3]))+(((-815)*(expr[4]))+(((506)*(expr[5]))+((-121)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1128(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1128] = ((0.820312500000000000000000000000)*((6.24499799839839820584689312094)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-31)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1128] = ((0.820312500000000000000000000000)*((6.24499799839839820584689312094)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-31)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-20)*(expr[2]))+(((42)*(expr[3]))+(((-36)*(expr[4]))+((11)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1129(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1129] = ((2.66601562500000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-31)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.375091575091575091575091575092));
} else {
coeffs[1129] = ((2.66601562500000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-31)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((93)*(expr[2]))+(((-346)*(expr[3]))+(((570)*(expr[4]))+(((-429)*(expr[5]))+((121)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_1130(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1130] = ((5.33203125000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.375091575091575091575091575092));
} else {
coeffs[1130] = ((5.33203125000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((93)*(expr[2]))+(((-346)*(expr[3]))+(((570)*(expr[4]))+(((-429)*(expr[5]))+((121)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_1131(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1131] = ((2.66601562500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.375091575091575091575091575092));
} else {
coeffs[1131] = ((2.66601562500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((93)*(expr[2]))+(((-346)*(expr[3]))+(((570)*(expr[4]))+(((-429)*(expr[5]))+((121)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_1132(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1132] = ((31.9921875000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.375091575091575091575091575092));
} else {
coeffs[1132] = ((31.9921875000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-9)*(expr[1]))+(((93)*(expr[2]))+(((-346)*(expr[3]))+(((570)*(expr[4]))+(((-429)*(expr[5]))+((121)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_1133(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1133] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-18)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1133] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-18)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1134(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1134] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-18)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1134] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-18)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((210)*(expr[2]))+(((-574)*(expr[3]))+(((621)*(expr[4]))+((-231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1135(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1135] = ((1.33300781250000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-18)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.50036630036630036630036630037));
} else {
coeffs[1135] = ((1.33300781250000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-18)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((38)*(expr[1]))+(((-463)*(expr[2]))+(((2004)*(expr[3]))+(((-3855)*(expr[4]))+(((3366)*(expr[5]))+((-1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1136(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1136] = ((1.33300781250000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.50036630036630036630036630037));
} else {
coeffs[1136] = ((1.33300781250000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((38)*(expr[1]))+(((-463)*(expr[2]))+(((2004)*(expr[3]))+(((-3855)*(expr[4]))+(((3366)*(expr[5]))+((-1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1137(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1137] = ((5.33203125000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-1.50036630036630036630036630037));
} else {
coeffs[1137] = ((5.33203125000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*(expr[0]))+(((38)*(expr[1]))+(((-463)*(expr[2]))+(((2004)*(expr[3]))+(((-3855)*(expr[4]))+(((3366)*(expr[5]))+((-1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1138(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1138] = ((0.0937500000000000000000000000000)*((21.3307290077015417508863915213)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-39)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1138] = ((0.0937500000000000000000000000000)*((21.3307290077015417508863915213)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-39)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[1]))+(((35)*(expr[2]))+(((-63)*(expr[3]))+((33)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1139(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1139] = ((0.0468750000000000000000000000000)*((26.1247009552262626468971346971)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-39)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1139] = ((0.0468750000000000000000000000000)*((26.1247009552262626468971346971)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-39)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[1]))+(((-140)*(expr[2]))+(((434)*(expr[3]))+(((-540)*(expr[4]))+((231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1140(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1140] = ((1.06640625000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-39)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.937728937728937728937728937729));
} else {
coeffs[1140] = ((1.06640625000000000000000000000)*(((2)*(pow(a,4)))+(((-6)*((pow(a,2))*((M)*(r))))+(((-39)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((82)*((M)*(pow(r,3))))+((-42)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[1]))+(((325)*(expr[2]))+(((-1530)*(expr[3]))+(((3210)*(expr[4]))+(((-3069)*(expr[5]))+((1089)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_1141(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1141] = ((2.13281250000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.937728937728937728937728937729));
} else {
coeffs[1141] = ((2.13281250000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[1]))+(((325)*(expr[2]))+(((-1530)*(expr[3]))+(((3210)*(expr[4]))+(((-3069)*(expr[5]))+((1089)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_1142(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1142] = ((4.26562500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(-0.937728937728937728937728937729));
} else {
coeffs[1142] = ((4.26562500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-25)*(expr[1]))+(((325)*(expr[2]))+(((-1530)*(expr[3]))+(((3210)*(expr[4]))+(((-3069)*(expr[5]))+((1089)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_1143(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1143] = ((0.0625000000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-20)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1143] = ((0.0625000000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-20)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-105)*(expr[1]))+(((315)*(expr[2]))+((-231)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1144(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1144] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-20)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1144] = ((0.0312500000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-20)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((120)*(expr[1]))+(((-630)*(expr[2]))+(((1176)*(expr[3]))+((-693)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1145(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1145] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-20)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1145] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-20)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[0]))+(((-465)*(expr[1]))+(((4270)*(expr[2]))+(((-13818)*(expr[3]))+(((17955)*(expr[4]))+((-8085)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1146(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1146] = ((0.0507812500000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-20)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-39.3846153846153846153846153846));
} else {
coeffs[1146] = ((0.0507812500000000000000000000000)*((pow(a,4))+(((-3)*((pow(a,2))*((M)*(r))))+(((-20)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-21)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[0]))+(((1050)*(expr[1]))+(((-14175)*(expr[2]))+(((68460)*(expr[3]))+(((-147735)*(expr[4]))+(((145530)*(expr[5]))+((-53361)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1147(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1147] = ((0.0507812500000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-39.3846153846153846153846153846));
} else {
coeffs[1147] = ((0.0507812500000000000000000000000)*((pow(a,2))*((r)*(((-1)*(pow(a,2)))+(((2)*((M)*(r)))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[0]))+(((1050)*(expr[1]))+(((-14175)*(expr[2]))+(((68460)*(expr[3]))+(((-147735)*(expr[4]))+(((145530)*(expr[5]))+((-53361)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1148(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1148] = ((0.0253906250000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-39.3846153846153846153846153846));
} else {
coeffs[1148] = ((0.0253906250000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[0]))+(((1050)*(expr[1]))+(((-14175)*(expr[2]))+(((68460)*(expr[3]))+(((-147735)*(expr[4]))+(((145530)*(expr[5]))+((-53361)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1149(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1149] = ((4.26562500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(0.937728937728937728937728937729));
} else {
coeffs[1149] = ((4.26562500000000000000000000000)*((a)*((M)*(pow(r,3))))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((25)*(expr[1]))+(((-325)*(expr[2]))+(((1530)*(expr[3]))+(((-3210)*(expr[4]))+(((3069)*(expr[5]))+((-1089)*(expr[6]))))))));
}
}

}
