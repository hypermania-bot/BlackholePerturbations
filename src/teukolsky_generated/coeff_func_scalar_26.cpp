#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1300(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1300] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1300] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((300)*(expr[1]))+(((-1730)*(expr[2]))+(((2940)*(expr[3]))+((-1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1301(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1301] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1301] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((300)*(expr[1]))+(((-1730)*(expr[2]))+(((2940)*(expr[3]))+((-1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1302(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1302] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-26.6666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-17)*(M))+(r))))))+(((-336)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((46.6666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))+((8)*(((22)*(pow(a,3)))+((a)*((r)*(((-217)*(M))+((22)*(r)))))))))))));
} else {
coeffs[1302] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-300)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1730)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2940)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((1575)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-40)*(((pow(a,3))+((a)*((r)*(((-17)*(M))+(r)))))*(expr[1])))+(((20)*((((22)*(pow(a,3)))+((a)*((r)*(((-217)*(M))+((22)*(r))))))*(expr[2])))+(((-1176)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[3])))+((210)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1303(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1303] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1303] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((180)*(expr[1]))+(((-1190)*(expr[2]))+(((2436)*(expr[3]))+((-1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1304(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1304] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1304] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((180)*(expr[1]))+(((-1190)*(expr[2]))+(((2436)*(expr[3]))+((-1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1305(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1305] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-20)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-6288)*(pow(a,3)))+((6)*((a)*((((1601)*(M))+((-1048)*(r)))*(r))))))+(((540)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((6.66666666666666666666666666667)*(((5)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((5)*(r)))))))+(((-56)*(((8)*(pow(a,3)))+((a)*((r)*((M)+((8)*(r)))))))+((24)*(((53)*(pow(a,3)))+((a)*((r)*(((-48)*(M))+((53)*(r)))))))))))));
} else {
coeffs[1305] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-180)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1190)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2436)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((1485)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((10)*((((5)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((5)*(r))))))*(expr[1])))+(((-140)*((((8)*(pow(a,3)))+((a)*((r)*((M)+((8)*(r))))))*(expr[2])))+(((84)*((((53)*(pow(a,3)))+((a)*((r)*(((-48)*(M))+((53)*(r))))))*(expr[3])))+(((((-6288)*(pow(a,3)))+((6)*((a)*((((1601)*(M))+((-1048)*(r)))*(r)))))*(expr[4]))+((2970)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1306(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1306] = ((0.750000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1306] = ((0.750000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_1307(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1307] = ((1.31250000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.52380952380952380952380952381));
} else {
coeffs[1307] = ((1.31250000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((11)*(expr[1]))+(((-35)*(expr[2]))+((25)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1308(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1308] = ((1.31250000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.52380952380952380952380952381));
} else {
coeffs[1308] = ((1.31250000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((11)*(expr[1]))+(((-35)*(expr[2]))+((25)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1309(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1309] = ((1.31250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((1.52380952380952380952380952381)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))));
} else {
coeffs[1309] = ((1.31250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))));
}
}

void compute_coeffs_scalar_1310(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1310] = ((0.187500000000000000000000000000)*((10.2469507659595983832210386805)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((0.507936507936507936507936507937)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))));
} else {
coeffs[1310] = ((0.187500000000000000000000000000)*((10.2469507659595983832210386805)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((-25)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((57)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+((-35)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_1311(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1311] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1311] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((110)*(expr[2]))+(((-196)*(expr[3]))+((105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1312(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1312] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1312] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((110)*(expr[2]))+(((-196)*(expr[3]))+((105)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1313(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1313] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[1313] = ((0.0937500000000000000000000000000)*((13.8744369255116079467397289461)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-110)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-105)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_1314(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1314] = ((0.656250000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1314] = ((0.656250000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((60)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-238)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((348)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+((-165)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_1315(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1315] = ((0.0312500000000000000000000000000)*((4.58257569495584000658804719373)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1315] = ((0.0312500000000000000000000000000)*((4.58257569495584000658804719373)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((6)*(expr[1]))+((-15)*(expr[2])))));
}
}

void compute_coeffs_scalar_1316(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1316] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1316] = ((0.0312500000000000000000000000000)*((5.91607978309961604256732829156)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-18)*(expr[1]))+((25)*(expr[2])))));
}
}

void compute_coeffs_scalar_1317(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1317] = ((0.0546875000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-18.2857142857142857142857142857));
} else {
coeffs[1317] = ((0.0546875000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-111)*(expr[1]))+(((305)*(expr[2]))+((-225)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1318(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1318] = ((0.109375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((18.2857142857142857142857142857)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-22)*(pow(a,3)))+((2)*((a)*((((133)*(M))+((-11)*(r)))*(r))))))+(((-42.8571428571428571428571428571)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((4)*(((14)*(pow(a,3)))+((a)*((r)*(((-89)*(M))+((14)*(r))))))))))));
} else {
coeffs[1318] = ((0.109375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((111)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-305)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((((-22)*(pow(a,3)))+((2)*((a)*((((133)*(M))+((-11)*(r)))*(r)))))*(expr[1]))+(((10)*((((14)*(pow(a,3)))+((a)*((r)*(((-89)*(M))+((14)*(r))))))*(expr[2])))+((-150)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1319(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1319] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1319] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((75)*(expr[1]))+(((-285)*(expr[2]))+((245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1320(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1320] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1320] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((75)*(expr[1]))+(((-285)*(expr[2]))+((245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1321(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1321] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-678)*(pow(a,3)))+((2)*((a)*((((433)*(M))+((-339)*(r)))*(r))))))+(((93.3333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-20)*((pow(a,3))+((a)*((r)*(((3)*(M))+(r))))))+((4)*(((32)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((32)*(r))))))))))));
} else {
coeffs[1321] = ((0.0468750000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((285)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-245)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-30)*(((pow(a,3))+((a)*((r)*(((3)*(M))+(r)))))*(expr[1])))+(((10)*((((32)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((32)*(r))))))*(expr[2])))+(((((-678)*(pow(a,3)))+((2)*((a)*((((433)*(M))+((-339)*(r)))*(r)))))*(expr[3]))+((420)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1322(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1322] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1322] = ((0.00390625000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((300)*(expr[1]))+(((-1730)*(expr[2]))+(((2940)*(expr[3]))+((-1575)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1323(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1323] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((26.6666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-17)*(M))+(r))))))+(((336)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-46.6666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))+((-8)*(((22)*(pow(a,3)))+((a)*((r)*(((-217)*(M))+((22)*(r)))))))))))));
} else {
coeffs[1323] = ((0.00781250000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-300)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1730)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2940)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((1575)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((40)*(((pow(a,3))+((a)*((r)*(((-17)*(M))+(r)))))*(expr[1])))+(((-20)*((((22)*(pow(a,3)))+((a)*((r)*(((-217)*(M))+((22)*(r))))))*(expr[2])))+(((1176)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[3])))+((-210)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1324(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1324] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1324] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-180)*(expr[1]))+(((1190)*(expr[2]))+(((-2436)*(expr[3]))+((1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1325(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1325] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1325] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-180)*(expr[1]))+(((1190)*(expr[2]))+(((-2436)*(expr[3]))+((1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1326(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1326] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-20)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-6288)*(pow(a,3)))+((6)*((a)*((((1601)*(M))+((-1048)*(r)))*(r))))))+(((540)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((6.66666666666666666666666666667)*(((5)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((5)*(r)))))))+(((-56)*(((8)*(pow(a,3)))+((a)*((r)*((M)+((8)*(r)))))))+((24)*(((53)*(pow(a,3)))+((a)*((r)*(((-48)*(M))+((53)*(r)))))))))))));
} else {
coeffs[1326] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((180)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1190)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2436)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-1485)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((10)*((((5)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((5)*(r))))))*(expr[1])))+(((-140)*((((8)*(pow(a,3)))+((a)*((r)*((M)+((8)*(r))))))*(expr[2])))+(((84)*((((53)*(pow(a,3)))+((a)*((r)*(((-48)*(M))+((53)*(r))))))*(expr[3])))+(((((-6288)*(pow(a,3)))+((6)*((a)*((((1601)*(M))+((-1048)*(r)))*(r)))))*(expr[4]))+((2970)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1327(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1327] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1327] = ((0.625000000000000000000000000000)*((1.87082869338697069279187436616)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_1328(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1328] = ((1.09375000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.82857142857142857142857142857));
} else {
coeffs[1328] = ((1.09375000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-11)*(expr[2]))+((9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1329(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1329] = ((1.09375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.82857142857142857142857142857)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((6.09523809523809523809523809524)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+((-1.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((4)*(r)))))))))));
} else {
coeffs[1329] = ((1.09375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+(((-4)*((((4)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((4)*(r))))))*(expr[2])))+((12)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1330(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1330] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1330] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((75)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1331(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1331] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1331] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((75)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1332(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1332] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-9.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-12)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r))))))+(((4)*((pow(a,3))+((a)*((r)*(((16)*(M))+(r))))))+((0.285714285714285714285714285714)*(((66)*(pow(a,3)))+((2)*((a)*((r)*(((32)*(M))+((33)*(r))))))))))))));
} else {
coeffs[1332] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((16)*(M))+(r)))))*(expr[1])))+(((-30)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+(((((66)*(pow(a,3)))+((2)*((a)*((r)*(((32)*(M))+((33)*(r)))))))*(expr[3]))+((-42)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1333(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1333] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1333] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((50)*(expr[2]))+(((-84)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1334(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1334] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-14)*(M))+(r))))))+(((16)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-24)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+((2.66666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))))))));
} else {
coeffs[1334] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-50)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((84)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-14)*(M))+(r)))))*(expr[1])))+(((40)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[2])))+(((-84)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[3])))+((12)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1335(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1335] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1335] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((8)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((60)*(expr[1]))+(((-350)*(expr[2]))+(((588)*(expr[3]))+((-297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1336(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1336] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1336] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((60)*(expr[1]))+(((-350)*(expr[2]))+(((588)*(expr[3]))+((-297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1337(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1337] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((-54)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((56)*((pow(a,3))+((a)*((r)*(((8)*(M))+(r))))))+(((-12)*(((11)*(pow(a,3)))+((a)*((r)*(((34)*(M))+((11)*(r)))))))+(((-0.666666666666666666666666666667)*((a)*(((17)*(pow(a,2)))+((r)*(((206)*(M))+((17)*(r)))))))+((2.66666666666666666666666666667)*(((53)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((53)*(r)))))))))))));
} else {
coeffs[1337] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-60)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-588)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((297)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((17)*(pow(a,2)))+((r)*(((206)*(M))+((17)*(r)))))*(expr[1]))))+(((140)*(((pow(a,3))+((a)*((r)*(((8)*(M))+(r)))))*(expr[2])))+(((-42)*((((11)*(pow(a,3)))+((a)*((r)*(((34)*(M))+((11)*(r))))))*(expr[3])))+(((12)*((((53)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((53)*(r))))))*(expr[4])))+((-297)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1338(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1338] = ((0.820312500000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.21904761904761904761904761905));
} else {
coeffs[1338] = ((0.820312500000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((expr[1])+((expr[2])+((-1)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1339(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1339] = ((1.64062500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((1.06666666666666666666666666667)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2.28571428571428571428571428571)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((-0.571428571428571428571428571429)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*((M)+(r))))))+((0.400000000000000000000000000000)*(((4)*(pow(a,3)))+((2)*((a)*((r)*(((-7)*(M))+((2)*(r)))))))))))));
} else {
coeffs[1339] = ((1.64062500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[1]))+(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[2]))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[1])))+(((((4)*(pow(a,3)))+((2)*((a)*((r)*(((-7)*(M))+((2)*(r)))))))*(expr[2]))+((-2)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_1340(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1340] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1340] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1341(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1341] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1341] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1342(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1342] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((48)*((a)*((M)*(r))))+(((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-29)*(M))+(r))))))+(((0.888888888888888888888888888889)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((-1.71428571428571428571428571429)*((pow(a,3))+((a)*((r)*(((5)*(M))+(r))))))))));
} else {
coeffs[1342] = ((0.328125000000000000000000000000)*((3.87298334620741688517926539978)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((-29)*(M))+(r)))))*(expr[1])))+(((90)*((a)*((M)*((r)*(expr[2])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((5)*(M))+(r)))))*(expr[3])))+((4)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_1343(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1343] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1343] = ((0.0820312500000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-4)*(expr[1]))+(((-10)*(expr[2]))+(((28)*(expr[3]))+((-15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1344(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1344] = ((0.164062500000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((16)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*((M)+(r))))))+(((-8)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+((-1.33333333333333333333333333333)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))))))));
} else {
coeffs[1344] = ((0.164062500000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((8)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[1])))+(((-20)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[2])))+(((56)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[3])))+((-6)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1345(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1345] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1345] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((70)*(expr[2]))+(((-84)*(expr[3]))+((33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1346(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1346] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1346] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-20)*(expr[1]))+(((70)*(expr[2]))+(((-84)*(expr[3]))+((33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1347(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1347] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-180)*((a)*((M)*(r))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-62)*(M))+(r))))))+(((4)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((8)*((pow(a,3))+((a)*((r)*(((16)*(M))+(r))))))+((-1.33333333333333333333333333333)*(((8)*(pow(a,3)))+((a)*((r)*(((17)*(M))+((8)*(r)))))))))))));
} else {
coeffs[1347] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((84)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((-62)*(M))+(r)))))*(expr[1])))+(((-420)*((a)*((M)*((r)*(expr[2])))))+(((28)*(((pow(a,3))+((a)*((r)*(((16)*(M))+(r)))))*(expr[3])))+(((-6)*((((8)*(pow(a,3)))+((a)*((r)*(((17)*(M))+((8)*(r))))))*(expr[4])))+((22)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1348(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1348] = ((1.96875000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.01587301587301587301587301587));
} else {
coeffs[1348] = ((1.96875000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+(((-2)*(expr[3]))+(expr[4])))));
}
}

void compute_coeffs_scalar_1349(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1349] = ((1.96875000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.01587301587301587301587301587));
} else {
coeffs[1349] = ((1.96875000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((2)*(expr[1]))+(((-2)*(expr[3]))+(expr[4])))));
}
}

}
