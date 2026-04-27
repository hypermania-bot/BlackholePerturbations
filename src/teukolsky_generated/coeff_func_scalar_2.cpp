#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_100(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[100] = ((0.437500000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(4.57142857142857142857142857143));
} else {
coeffs[100] = ((0.437500000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((4)*(expr[0]))+(((-15)*(expr[1]))+(((10)*(expr[2]))+((9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_101(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[101] = ((0.218750000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-4.57142857142857142857142857143));
} else {
coeffs[101] = ((0.218750000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-4)*(expr[0]))+(((15)*(expr[1]))+(((-10)*(expr[2]))+((-9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_102(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[102] = ((0.875000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-4.57142857142857142857142857143)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((-8)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((4)*(pow(a,3)))+((2)*((a)*((r)*(((11)*(M))+((2)*(r))))))))+((1.71428571428571428571428571429)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))))))));
} else {
coeffs[102] = ((0.875000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((((4)*(pow(a,3)))+((2)*((a)*((r)*(((11)*(M))+((2)*(r)))))))*(expr[1]))+(((-20)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[2])))+((6)*((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_103(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[103] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[103] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-21)*(expr[1]))+(((60)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_104(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[104] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[104] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-21)*(expr[1]))+(((60)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_105(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[105] = ((0.0937500000000000000000000000000)*((2.64575131106459059050161575364)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[105] = ((0.0937500000000000000000000000000)*((2.64575131106459059050161575364)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-60)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_106(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[106] = ((0.375000000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-9)*(pow(a,3)))+((3)*((a)*((((20)*(M))+((-3)*(r)))*(r))))))+(((0.285714285714285714285714285714)*(((-3)*(pow(a,3)))+((a)*((((104)*(M))+((-3)*(r)))*(r)))))+(((-4.66666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((2)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))))))));
} else {
coeffs[106] = ((0.375000000000000000000000000000)*((2.64575131106459059050161575364)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-60)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((((-9)*(pow(a,3)))+((3)*((a)*((((20)*(M))+((-3)*(r)))*(r)))))*(expr[1]))+(((5)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[2])))+(((((-3)*(pow(a,3)))+((a)*((((104)*(M))+((-3)*(r)))*(r))))*(expr[3]))+((-21)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_107(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[107] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[107] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-35)*(expr[2]))+(((-21)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_108(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[108] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[108] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-35)*(expr[2]))+(((-21)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_109(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[109] = ((0.0312500000000000000000000000000)*((8.77496438739212206040638830742)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[109] = ((0.0312500000000000000000000000000)*((8.77496438739212206040638830742)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-21)*(expr[1]))+(((35)*(expr[2]))+(((21)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_110(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[110] = ((0.125000000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((28)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((-6)*(((7)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((7)*(r)))))))+(((-0.666666666666666666666666666667)*((a)*(((11)*(pow(a,2)))+((r)*(((20)*(M))+((11)*(r)))))))+((0.222222222222222222222222222222)*(((96)*(pow(a,3)))+((6)*((a)*((r)*(((-47)*(M))+((16)*(r)))))))))))));
} else {
coeffs[110] = ((0.125000000000000000000000000000)*((8.77496438739212206040638830742)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((11)*(pow(a,2)))+((r)*(((20)*(M))+((11)*(r)))))*(expr[1]))))+(((70)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[2])))+(((-21)*((((7)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((7)*(r))))))*(expr[3])))+((((96)*(pow(a,3)))+((6)*((a)*((r)*(((-47)*(M))+((16)*(r)))))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_111(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[111] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[111] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-34)*(expr[0]))+(((720)*(expr[1]))+(((-3220)*(expr[2]))+(((5376)*(expr[3]))+((-2970)*(expr[4])))))));
}
}

void compute_coeffs_scalar_112(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[112] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[112] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-34)*(expr[0]))+(((720)*(expr[1]))+(((-3220)*(expr[2]))+(((5376)*(expr[3]))+((-2970)*(expr[4])))))));
}
}

void compute_coeffs_scalar_113(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[113] = ((0.00195312500000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[113] = ((0.00195312500000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((34)*(expr[0]))+(((-720)*(expr[1]))+(((3220)*(expr[2]))+(((-5376)*(expr[3]))+((2970)*(expr[4])))))));
}
}

void compute_coeffs_scalar_114(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[114] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((136)*((a)*((M)*(r))))+(((-270)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-56)*(((5)*(pow(a,3)))+((a)*((r)*(((-56)*(M))+((5)*(r)))))))+(((12)*(((13)*(pow(a,3)))+((a)*((r)*(((-282)*(M))+((13)*(r)))))))+(((13.3333333333333333333333333333)*(((23)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((23)*(r)))))))+((0.666666666666666666666666666667)*(((131)*(pow(a,3)))+((a)*((r)*(((-1702)*(M))+((131)*(r)))))))))))));
} else {
coeffs[114] = ((0.00781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((34)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-720)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((3220)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-5376)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((2970)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((68)*((a)*((M)*((r)*(expr[0])))))+(((((131)*(pow(a,3)))+((a)*((r)*(((-1702)*(M))+((131)*(r))))))*(expr[1]))+(((-140)*((((5)*(pow(a,3)))+((a)*((r)*(((-56)*(M))+((5)*(r))))))*(expr[2])))+(((42)*((((13)*(pow(a,3)))+((a)*((r)*(((-282)*(M))+((13)*(r))))))*(expr[3])))+(((60)*((((23)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((23)*(r))))))*(expr[4])))+((-1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_115(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[115] = ((0.312500000000000000000000000000)*((1.87082869338697069279187436616)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[115] = ((0.312500000000000000000000000000)*((1.87082869338697069279187436616)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-6)*(expr[1]))+((5)*(expr[2])))));
}
}

void compute_coeffs_scalar_116(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[116] = ((0.546875000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.82857142857142857142857142857));
} else {
coeffs[116] = ((0.546875000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((11)*(expr[2]))+((-9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_117(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[117] = ((1.09375000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.82857142857142857142857142857));
} else {
coeffs[117] = ((1.09375000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((11)*(expr[2]))+((-9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_118(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[118] = ((0.546875000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.82857142857142857142857142857));
} else {
coeffs[118] = ((0.546875000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-11)*(expr[2]))+((9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_119(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[119] = ((2.18750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.171428571428571428571428571429)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-4)*(pow(a,3)))+((a)*((((11)*(M))+((-4)*(r)))*(r)))))+(((-0.857142857142857142857142857143)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r)))))))+((0.400000000000000000000000000000)*(((16)*(pow(a,3)))+((a)*((r)*(((-43)*(M))+((16)*(r))))))))))));
} else {
coeffs[119] = ((2.18750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((((-4)*(pow(a,3)))+((a)*((((11)*(M))+((-4)*(r)))*(r))))*(expr[1]))+(((((16)*(pow(a,3)))+((a)*((r)*(((-43)*(M))+((16)*(r))))))*(expr[2]))+((-3)*((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_120(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[120] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[120] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-75)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_121(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[121] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[121] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-75)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_122(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[122] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[122] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((75)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_123(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[123] = ((0.187500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-66)*(pow(a,3)))+((a)*((((83)*(M))+((-66)*(r)))*(r)))))+(((9.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((6)*(((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r)))))))+((-2)*(((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r))))))))))));
} else {
coeffs[123] = ((0.187500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-3)*((((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r))))))*(expr[1])))+(((15)*((((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r))))))*(expr[2])))+(((((-66)*(pow(a,3)))+((a)*((((83)*(M))+((-66)*(r)))*(r))))*(expr[3]))+((42)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_124(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[124] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[124] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-50)*(expr[2]))+(((84)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_125(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[125] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[125] = ((0.218750000000000000000000000000)*((5.24404424085075773495726756840)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-50)*(expr[2]))+(((84)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_126(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[126] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[126] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((50)*(expr[2]))+(((-84)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_127(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[127] = ((0.437500000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((24)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((-4)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+((-0.666666666666666666666666666667)*((a)*(((16)*(pow(a,2)))+((r)*(((-47)*(M))+((16)*(r))))))))))));
} else {
coeffs[127] = ((0.437500000000000000000000000000)*((5.24404424085075773495726756840)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((50)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-84)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((4)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+(((-10)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[2])))+(((84)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[3])))+((-3)*((a)*((((16)*(pow(a,2)))+((r)*(((-47)*(M))+((16)*(r)))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_128(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[128] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[128] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-60)*(expr[1]))+(((350)*(expr[2]))+(((-588)*(expr[3]))+((297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_129(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[129] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[129] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-60)*(expr[1]))+(((350)*(expr[2]))+(((-588)*(expr[3]))+((297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_130(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[130] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[130] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((60)*(expr[1]))+(((-350)*(expr[2]))+(((588)*(expr[3]))+((-297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_131(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[131] = ((0.0781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-636)*(pow(a,3)))+((3)*((a)*((((325)*(M))+((-212)*(r)))*(r))))))+(((54)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-28)*(((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r)))))))+(((12)*(((11)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((11)*(r)))))))+((0.666666666666666666666666666667)*(((17)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((17)*(r))))))))))))));
} else {
coeffs[131] = ((0.0781250000000000000000000000000)*((9.53939201416945649152621586023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((60)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((588)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-297)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((((17)*(pow(a,3)))+((a)*((r)*(((26)*(M))+((17)*(r))))))*(expr[1]))+(((-70)*((((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r))))))*(expr[2])))+(((42)*((((11)*(pow(a,3)))+((a)*((r)*(((-8)*(M))+((11)*(r))))))*(expr[3])))+(((((-636)*(pow(a,3)))+((3)*((a)*((((325)*(M))+((-212)*(r)))*(r)))))*(expr[4]))+((297)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_132(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[132] = ((13.1250000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((4)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.152380952380952380952380952381));
} else {
coeffs[132] = ((13.1250000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((4)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((-11)*((M)*(pow(r,3))))+((5)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-2)*(expr[2]))+(expr[3]))));
}
}

void compute_coeffs_scalar_133(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[133] = ((13.1250000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.152380952380952380952380952381));
} else {
coeffs[133] = ((13.1250000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-2)*(expr[2]))+(expr[3]))));
}
}

void compute_coeffs_scalar_134(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[134] = ((6.56250000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.152380952380952380952380952381));
} else {
coeffs[134] = ((6.56250000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((2)*(expr[2]))+((-1)*(expr[3])))));
}
}

void compute_coeffs_scalar_135(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[135] = ((26.2500000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((0.952380952380952380952380952381)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.800000000000000000000000000000)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[135] = ((26.2500000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[1]))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[3])))));
}
}

void compute_coeffs_scalar_136(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[136] = ((1.87500000000000000000000000000)*((4.58257569495584000658804719373)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-0.869841269841269841269841269841)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-2)*(M))+(r))))))));
} else {
coeffs[136] = ((1.87500000000000000000000000000)*((4.58257569495584000658804719373)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((((pow(a,3))+((a)*((r)*(((-2)*(M))+(r)))))*(expr[1]))+(((-9)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((15)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+((-7)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_137(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[137] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[137] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-4)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((11)*((M)*(pow(r,3))))+((-5)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-5)*(expr[2]))+(((7)*(expr[3]))+((-3)*(expr[4]))))));
}
}

void compute_coeffs_scalar_138(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[138] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[138] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((5)*(expr[2]))+(((-7)*(expr[3]))+((3)*(expr[4]))))));
}
}

void compute_coeffs_scalar_139(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[139] = ((3.28125000000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[139] = ((3.28125000000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-5)*(expr[2]))+(((7)*(expr[3]))+((-3)*(expr[4]))))));
}
}

void compute_coeffs_scalar_140(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[140] = ((13.1250000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[140] = ((13.1250000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1]))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((7)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))));
}
}

void compute_coeffs_scalar_141(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[141] = ((3.28125000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[141] = ((3.28125000000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((20)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-70)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((84)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+((-33)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_142(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[142] = ((0.312500000000000000000000000000)*((1.87082869338697069279187436616)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[142] = ((0.312500000000000000000000000000)*((1.87082869338697069279187436616)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((6)*(expr[1]))+((-5)*(expr[2])))));
}
}

void compute_coeffs_scalar_143(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[143] = ((0.546875000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.82857142857142857142857142857));
} else {
coeffs[143] = ((0.546875000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((11)*(expr[2]))+((-9)*(expr[3]))))));
}
}

void compute_coeffs_scalar_144(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[144] = ((2.18750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.171428571428571428571428571429)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.400000000000000000000000000000)*(((-16)*(pow(a,3)))+((a)*((((43)*(M))+((-16)*(r)))*(r)))))+((1.52380952380952380952380952381)*(((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r)))))))))));
} else {
coeffs[144] = ((2.18750000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[1]))+(((((-16)*(pow(a,3)))+((a)*((((43)*(M))+((-16)*(r)))*(r))))*(expr[2]))+((3)*((((4)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((4)*(r))))))*(expr[3]))))))));
}
}

void compute_coeffs_scalar_145(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[145] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[145] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((75)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_146(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[146] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[146] = ((0.0937500000000000000000000000000)*((5.91607978309961604256732829156)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((75)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_147(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[147] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[147] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-75)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_148(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[148] = ((0.187500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-66)*(pow(a,3)))+((a)*((((83)*(M))+((-66)*(r)))*(r)))))+(((9.33333333333333333333333333333)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((6)*(((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r)))))))+((-2)*(((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r)))))))))))));
} else {
coeffs[148] = ((0.187500000000000000000000000000)*((5.91607978309961604256732829156)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+((49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3]))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-3)*((((2)*(pow(a,3)))+((a)*((r)*(((5)*(M))+((2)*(r))))))*(expr[1])))+(((15)*((((2)*(pow(a,3)))+((a)*((r)*((M)+((2)*(r))))))*(expr[2])))+(((((-66)*(pow(a,3)))+((a)*((((83)*(M))+((-66)*(r)))*(r))))*(expr[3]))+((42)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))))))));
}
}

void compute_coeffs_scalar_149(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[149] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[149] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-22)*((M)*(pow(r,3))))+((10)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-50)*(expr[2]))+(((84)*(expr[3]))+((-45)*(expr[4])))))));
}
}

}
