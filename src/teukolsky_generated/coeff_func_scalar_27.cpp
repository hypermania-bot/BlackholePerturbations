#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1350(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1350] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.222222222222222222222222222222)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.23809523809523809523809523810)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((6)*(pow(a,3)))+(((-28)*((a)*((M)*(r))))+((6)*((a)*(pow(r,2)))))))+(((-0.444444444444444444444444444444)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-2.40000000000000000000000000000)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((6)*(M))+(r))))))))))));
} else {
coeffs[1350] = ((1.96875000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[4])))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((6)*(M))+(r)))))*(expr[1])))+(((-6)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((((6)*(pow(a,3)))+(((-28)*((a)*((M)*(r))))+((6)*((a)*(pow(r,2))))))*(expr[3]))+((-2)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1351(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1351] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1351] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1352(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1352] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1352] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((30)*(expr[2]))+(((-28)*(expr[3]))+((9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1353(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1353] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((-1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-62)*(M))+(r))))))+(((2)*((pow(a,3))+((a)*((r)*(((-34)*(M))+(r))))))+(((-0.909090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+((-0.571428571428571428571428571429)*(((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r))))))))))))));
} else {
coeffs[1353] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-30)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((3)*(((pow(a,3))+((a)*((r)*(((-34)*(M))+(r)))))*(expr[1])))+(((-4)*(((pow(a,3))+((a)*((r)*(((-62)*(M))+(r)))))*(expr[2])))+(((-2)*((((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r))))))*(expr[3])))+(((12)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[4])))+((-5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1354(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1354] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1354] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-15)*(expr[1]))+(((70)*(expr[3]))+(((-90)*(expr[4]))+((33)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1355(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1355] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1355] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-15)*(expr[1]))+(((70)*(expr[3]))+(((-90)*(expr[4]))+((33)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1356(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1356] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((32)*((a)*((M)*(r))))+(((40)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((40)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-10)*((pow(a,3))+((a)*((r)*(((6)*(M))+(r))))))+(((-20)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r)))))))+((-2)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))))))));
} else {
coeffs[1356] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((90)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*((r)*(expr[0])))))+(((-15)*(((pow(a,3))+((a)*((r)*(((6)*(M))+(r)))))*(expr[1])))+(((100)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-70)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+(((180)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))+((-11)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1357(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1357] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1357] = ((0.164062500000000000000000000000)*((3.87298334620741688517926539978)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1358(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1358] = ((0.492187500000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.03174603174603174603174603175));
} else {
coeffs[1358] = ((0.492187500000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((expr[1])+(((-15)*(expr[2]))+(((31)*(expr[3]))+((-16)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1359(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1359] = ((0.984375000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.03174603174603174603174603175));
} else {
coeffs[1359] = ((0.984375000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((expr[1])+(((-15)*(expr[2]))+(((31)*(expr[3]))+((-16)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1360(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1360] = ((0.984375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.666666666666666666666666666667)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2.69841269841269841269841269841)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((7.20000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r)))))))+((-1.71428571428571428571428571429)*(((9)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((9)*(r)))))))))))));
} else {
coeffs[1360] = ((0.984375000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[1]))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-31)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((16)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[1])))+(((18)*((((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r))))))*(expr[2])))+(((-6)*((((9)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((9)*(r))))))*(expr[3])))+((24)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1361(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1361] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1361] = ((0.0820312500000000000000000000000)*((4.06201920231798018022994178413)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-150)*(expr[2]))+(((196)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1362(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1362] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1362] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-150)*(expr[2]))+(((196)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1363(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1363] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((10.9090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((52)*(M))+(r))))))+(((-4.80000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((71)*(M))+((2)*(r)))))))+(((6.85714285714285714285714285714)*(((4)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((4)*(r)))))))+((-0.444444444444444444444444444444)*(((68)*(pow(a,3)))+((a)*((r)*(((107)*(M))+((68)*(r)))))))))))));
} else {
coeffs[1363] = ((0.164062500000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((150)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((81)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((52)*(M))+(r)))))*(expr[1])))+(((-12)*((((2)*(pow(a,3)))+((a)*((r)*(((71)*(M))+((2)*(r))))))*(expr[2])))+(((24)*((((4)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((4)*(r))))))*(expr[3])))+(((-2)*((((68)*(pow(a,3)))+((a)*((r)*(((107)*(M))+((68)*(r))))))*(expr[4])))+((60)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1364(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1364] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1364] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-7)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-196)*(expr[3]))+(((225)*(expr[4]))+((-88)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1365(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1365] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1365] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-196)*(expr[3]))+(((225)*(expr[4]))+((-88)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1366(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1366] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((4)*((pow(a,3))+((a)*((r)*(((-14)*(M))+(r))))))+(((24)*(((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r)))))))+(((-8)*(((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r)))))))+(((4)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+((-4)*(((16)*(pow(a,3)))+((a)*((r)*(((-107)*(M))+((16)*(r))))))))))))));
} else {
coeffs[1366] = ((0.0703125000000000000000000000000)*((15.0831031289983560862583822123)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((88)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((-14)*(M))+(r)))))*(expr[1])))+(((-20)*((((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r))))))*(expr[2])))+(((84)*((((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r))))))*(expr[3])))+(((-18)*((((16)*(pow(a,3)))+((a)*((r)*(((-107)*(M))+((16)*(r))))))*(expr[4])))+((22)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1367(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1367] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1367] = ((0.375000000000000000000000000000)*((1.58113883008418966599944677222)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[2]))+((14)*(expr[3])))));
}
}

void compute_coeffs_scalar_1368(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1368] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1368] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-75)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1369(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1369] = ((0.281250000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.11111111111111111111111111111));
} else {
coeffs[1369] = ((0.281250000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-49)*(expr[1]))+(((225)*(expr[2]))+(((-371)*(expr[3]))+((196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1370(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1370] = ((0.281250000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.11111111111111111111111111111));
} else {
coeffs[1370] = ((0.281250000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-49)*(expr[1]))+(((225)*(expr[2]))+(((-371)*(expr[3]))+((196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1371(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1371] = ((0.281250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((7.11111111111111111111111111111)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-43.5555555555555555555555555556)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((2.66666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-57)*(M))+((4)*(r)))))))+(((8)*(((12)*(pow(a,3)))+((a)*((r)*(((-77)*(M))+((12)*(r)))))))+((-4.80000000000000000000000000000)*(((13)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((13)*(r)))))))))))));
} else {
coeffs[1371] = ((0.281250000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((371)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((4)*((((4)*(pow(a,3)))+((a)*((r)*(((-57)*(M))+((4)*(r))))))*(expr[1])))+(((-12)*((((13)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((13)*(r))))))*(expr[2])))+(((28)*((((12)*(pow(a,3)))+((a)*((r)*(((-77)*(M))+((12)*(r))))))*(expr[3])))+((-196)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1372(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1372] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1372] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1373(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1373] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1373] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1374(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1374] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((-38.1818181818181818181818181818)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((22)*(M))+(r))))))+(((-32)*(((3)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((3)*(r)))))))+(((9.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((27)*(M))+((4)*(r)))))))+((2.66666666666666666666666666667)*(((38)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((38)*(r))))))))))))));
} else {
coeffs[1374] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((364)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((22)*(M))+(r)))))*(expr[1])))+(((24)*((((4)*(pow(a,3)))+((a)*((r)*(((27)*(M))+((4)*(r))))))*(expr[2])))+(((-112)*((((3)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((3)*(r))))))*(expr[3])))+(((12)*((((38)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((38)*(r))))))*(expr[4])))+((-210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1375(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1375] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1375] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-6)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((126)*(expr[1]))+(((-1050)*(expr[2]))+(((2912)*(expr[3]))+(((-3375)*(expr[4]))+((1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1376(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1376] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1376] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((126)*(expr[1]))+(((-1050)*(expr[2]))+(((2912)*(expr[3]))+(((-3375)*(expr[4]))+((1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1377(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1377] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((168)*((pow(a,3))+((a)*((r)*(((-12)*(M))+(r))))))+(((-6)*(((3)*(pow(a,3)))+((a)*((r)*(((-62)*(M))+((3)*(r)))))))+(((-42)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+(((24)*(((23)*(pow(a,3)))+((a)*((r)*(((-171)*(M))+((23)*(r)))))))+((-4)*(((123)*(pow(a,3)))+((a)*((r)*(((-1078)*(M))+((123)*(r))))))))))))));
} else {
coeffs[1377] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-126)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2912)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3375)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-1386)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-9)*((((3)*(pow(a,3)))+((a)*((r)*(((-62)*(M))+((3)*(r))))))*(expr[1])))+(((420)*(((pow(a,3))+((a)*((r)*(((-12)*(M))+(r)))))*(expr[2])))+(((-14)*((((123)*(pow(a,3)))+((a)*((r)*(((-1078)*(M))+((123)*(r))))))*(expr[3])))+(((108)*((((23)*(pow(a,3)))+((a)*((r)*(((-171)*(M))+((23)*(r))))))*(expr[4])))+((-231)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1378(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1378] = ((0.0937500000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1378] = ((0.0937500000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((30)*(expr[1]))+((-35)*(expr[2])))));
}
}

void compute_coeffs_scalar_1379(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1379] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1379] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-30)*(expr[1]))+(((75)*(expr[2]))+((-56)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1380(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1380] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1380] = ((0.0234375000000000000000000000000)*((2.64575131106459059050161575364)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-75)*(expr[1]))+(((285)*(expr[2]))+((-245)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1381(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1381] = ((0.0703125000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-14.2222222222222222222222222222));
} else {
coeffs[1381] = ((0.0703125000000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((153)*(expr[1]))+(((-855)*(expr[2]))+(((1463)*(expr[3]))+((-784)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1382(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1382] = ((0.140625000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-14.2222222222222222222222222222));
} else {
coeffs[1382] = ((0.140625000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((153)*(expr[1]))+(((-855)*(expr[2]))+(((1463)*(expr[3]))+((-784)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1383(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1383] = ((0.140625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((14.2222222222222222222222222222)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-36)*((a)*((M)*(r))))+(((-12)*((pow(a,3))+((a)*((r)*(((-19)*(M))+(r))))))+(((87.1111111111111111111111111111)*((pow(a,3))+((a)*((r)*(((-6)*(M))+(r))))))+(((2.40000000000000000000000000000)*(((34)*(pow(a,3)))+((a)*((r)*(((-353)*(M))+((34)*(r)))))))+((-4)*(((39)*(pow(a,3)))+((a)*((r)*(((-287)*(M))+((39)*(r)))))))))))));
} else {
coeffs[1383] = ((0.140625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-153)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((855)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-1463)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((784)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-18)*((a)*((M)*((r)*(expr[0])))))+(((-18)*(((pow(a,3))+((a)*((r)*(((-19)*(M))+(r)))))*(expr[1])))+(((6)*((((34)*(pow(a,3)))+((a)*((r)*(((-353)*(M))+((34)*(r))))))*(expr[2])))+(((-14)*((((39)*(pow(a,3)))+((a)*((r)*(((-287)*(M))+((39)*(r))))))*(expr[3])))+((392)*(((pow(a,3))+((a)*((r)*(((-6)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_1384(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1384] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1384] = ((0.0117187500000000000000000000000)*((3.31662479035539984911493273667)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((156)*(expr[1]))+(((-1050)*(expr[2]))+(((2156)*(expr[3]))+((-1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1385(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1385] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1385] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((156)*(expr[1]))+(((-1050)*(expr[2]))+(((2156)*(expr[3]))+((-1323)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1386(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1386] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((534.545454545454545454545454545)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((8)*(((7)*(pow(a,3)))+((a)*((r)*(((12)*(M))+((7)*(r)))))))+(((16)*(((78)*(pow(a,3)))+((a)*((r)*(((-79)*(M))+((78)*(r)))))))+(((-9.33333333333333333333333333333)*(((148)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((148)*(r)))))))+((-1.60000000000000000000000000000)*(((278)*(pow(a,3)))+((a)*((r)*(((-31)*(M))+((278)*(r)))))))))))));
} else {
coeffs[1386] = ((0.0234375000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-156)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2156)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((1323)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((12)*((((7)*(pow(a,3)))+((a)*((r)*(((12)*(M))+((7)*(r))))))*(expr[1])))+(((-4)*((((278)*(pow(a,3)))+((a)*((r)*(((-31)*(M))+((278)*(r))))))*(expr[2])))+(((56)*((((78)*(pow(a,3)))+((a)*((r)*(((-79)*(M))+((78)*(r))))))*(expr[3])))+(((-42)*((((148)*(pow(a,3)))+((a)*((r)*(((-233)*(M))+((148)*(r))))))*(expr[4])))+((2940)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1387(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1387] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1387] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[0]))+(((-420)*(expr[1]))+(((3570)*(expr[2]))+(((-10780)*(expr[3]))+(((13095)*(expr[4]))+((-5544)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1388(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1388] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1388] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[0]))+(((-420)*(expr[1]))+(((3570)*(expr[2]))+(((-10780)*(expr[3]))+(((13095)*(expr[4]))+((-5544)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1389(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1389] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((60)*((a)*((M)*(r))))+(((20)*((pow(a,3))+((a)*((r)*(((-30)*(M))+(r))))))+(((-56)*(((4)*(pow(a,3)))+((a)*((r)*(((-59)*(M))+((4)*(r)))))))+(((84)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))+(((-60)*(((16)*(pow(a,3)))+((a)*((r)*(((-129)*(M))+((16)*(r)))))))+((8)*(((93)*(pow(a,3)))+((a)*((r)*(((-956)*(M))+((93)*(r)))))))))))));
} else {
coeffs[1389] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((420)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-3570)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((10780)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-13095)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((5544)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((30)*((a)*((M)*((r)*(expr[0])))))+(((30)*(((pow(a,3))+((a)*((r)*(((-30)*(M))+(r)))))*(expr[1])))+(((-140)*((((4)*(pow(a,3)))+((a)*((r)*(((-59)*(M))+((4)*(r))))))*(expr[2])))+(((28)*((((93)*(pow(a,3)))+((a)*((r)*(((-956)*(M))+((93)*(r))))))*(expr[3])))+(((-270)*((((16)*(pow(a,3)))+((a)*((r)*(((-129)*(M))+((16)*(r))))))*(expr[4])))+((462)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1390(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1390] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-8)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1390] = ((3.75000000000000000000000000000)*((1.22474487139158904909864203735)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-8)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[1]))+(((-10)*(expr[2]))+((7)*(expr[3])))));
}
}

void compute_coeffs_scalar_1391(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1391] = ((2.81250000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-8)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.711111111111111111111111111111));
} else {
coeffs[1391] = ((2.81250000000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-8)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((51)*(expr[2]))+(((-91)*(expr[3]))+((49)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1392(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1392] = ((2.81250000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.711111111111111111111111111111));
} else {
coeffs[1392] = ((2.81250000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[1]))+(((51)*(expr[2]))+(((-91)*(expr[3]))+((49)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1393(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1393] = ((2.81250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((0.711111111111111111111111111111)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))));
} else {
coeffs[1393] = ((2.81250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-51)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((91)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))));
}
}

void compute_coeffs_scalar_1394(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1394] = ((0.468750000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((0.517171717171717171717171717172)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))));
} else {
coeffs[1394] = ((0.468750000000000000000000000000)*((4.06201920231798018022994178413)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((52)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((308)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+((-147)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_1395(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1395] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-8)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1395] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-8)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((16)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[1]))+(((-140)*(expr[2]))+(((434)*(expr[3]))+(((-540)*(expr[4]))+((231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1396(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1396] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1396] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[1]))+(((-140)*(expr[2]))+(((434)*(expr[3]))+(((-540)*(expr[4]))+((231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1397(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1397] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1397] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-434)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((540)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-231)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1398(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1398] = ((0.0937500000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1398] = ((0.0937500000000000000000000000000)*((1.73205080756887729352744634151)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-30)*(expr[1]))+((35)*(expr[2])))));
}
}

void compute_coeffs_scalar_1399(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1399] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1399] = ((0.0937500000000000000000000000000)*((2.23606797749978969640917366873)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-15)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((32)*((M)*(pow(r,3))))+((-18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-30)*(expr[1]))+(((75)*(expr[2]))+((-56)*(expr[3]))))));
}
}

}
