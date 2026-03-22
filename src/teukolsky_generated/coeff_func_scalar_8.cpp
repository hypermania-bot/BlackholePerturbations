#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_400(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[400] = ((0.00317382812500000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(630.153846153846153846153846154));
} else {
coeffs[400] = ((0.00317382812500000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((289)*(expr[0]))+(((-4350)*(expr[1]))+(((53455)*(expr[2]))+(((-254436)*(expr[3]))+(((580815)*(expr[4]))+(((-618750)*(expr[5]))+((245025)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_401(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[401] = ((0.00317382812500000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(630.153846153846153846153846154));
} else {
coeffs[401] = ((0.00317382812500000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((289)*(expr[0]))+(((-4350)*(expr[1]))+(((53455)*(expr[2]))+(((-254436)*(expr[3]))+(((580815)*(expr[4]))+(((-618750)*(expr[5]))+((245025)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_402(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[402] = ((0.00158691406250000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-630.153846153846153846153846154));
} else {
coeffs[402] = ((0.00158691406250000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-289)*(expr[0]))+(((4350)*(expr[1]))+(((-53455)*(expr[2]))+(((254436)*(expr[3]))+(((-580815)*(expr[4]))+(((618750)*(expr[5]))+((-245025)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_403(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[403] = ((0.00634765625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-630.153846153846153846153846154)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-1156)*((a)*((M)*(r))))+(((25130.7692307692307692307692308)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((-360)*(((431)*(pow(a,3)))+((a)*((r)*(((-1487)*(M))+((431)*(r)))))))+(((-2.66666666666666666666666666667)*(((629)*(pow(a,3)))+((a)*((r)*(((-3433)*(M))+((629)*(r)))))))+(((4)*(((5542)*(pow(a,3)))+((a)*((r)*(((-21775)*(M))+((5542)*(r)))))))+(((-6.85714285714285714285714285714)*(((13959)*(pow(a,3)))+((a)*((r)*(((-49121)*(M))+((13959)*(r)))))))+((6.66666666666666666666666666667)*(((27028)*(pow(a,3)))+((a)*((r)*(((-92777)*(M))+((27028)*(r)))))))))))))));
} else {
coeffs[403] = ((0.00634765625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-289)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((4350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-53455)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((254436)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-580815)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((618750)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-245025)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-578)*((a)*((M)*((r)*(expr[0])))))+(((-4)*((((629)*(pow(a,3)))+((a)*((r)*(((-3433)*(M))+((629)*(r))))))*(expr[1])))+(((10)*((((5542)*(pow(a,3)))+((a)*((r)*(((-21775)*(M))+((5542)*(r))))))*(expr[2])))+(((-24)*((((13959)*(pow(a,3)))+((a)*((r)*(((-49121)*(M))+((13959)*(r))))))*(expr[3])))+(((30)*((((27028)*(pow(a,3)))+((a)*((r)*(((-92777)*(M))+((27028)*(r))))))*(expr[4])))+(((-1980)*((((431)*(pow(a,3)))+((a)*((r)*(((-1487)*(M))+((431)*(r))))))*(expr[5])))+((163350)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_404(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[404] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[404] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-70)*(expr[2]))+(((168)*(expr[3]))+((-99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_405(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[405] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[405] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-60)*(expr[1]))+(((350)*(expr[2]))+(((-588)*(expr[3]))+((297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_406(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[406] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[406] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-126)*(expr[1]))+(((1050)*(expr[2]))+(((-2912)*(expr[3]))+(((3375)*(expr[4]))+((-1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_407(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[407] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[407] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_408(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[408] = ((0.0634765625000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(15.7538461538461538461538461538));
} else {
coeffs[408] = ((0.0634765625000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((324)*(expr[1]))+(((-3811)*(expr[2]))+(((16464)*(expr[3]))+(((-32085)*(expr[4]))+(((28908)*(expr[5]))+((-9801)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_409(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[409] = ((0.126953125000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(15.7538461538461538461538461538));
} else {
coeffs[409] = ((0.126953125000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((324)*(expr[1]))+(((-3811)*(expr[2]))+(((16464)*(expr[3]))+(((-32085)*(expr[4]))+(((28908)*(expr[5]))+((-9801)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_410(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[410] = ((0.0634765625000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-15.7538461538461538461538461538));
} else {
coeffs[410] = ((0.0634765625000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-324)*(expr[1]))+(((3811)*(expr[2]))+(((-16464)*(expr[3]))+(((32085)*(expr[4]))+(((-28908)*(expr[5]))+((9801)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_411(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[411] = ((0.253906250000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-13.7538461538461538461538461538)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.400000000000000000000000000000)*(((-926)*(pow(a,3)))+((a)*((((5663)*(M))+((-926)*(r)))*(r)))))+(((0.666666666666666666666666666667)*(((38)*(pow(a,3)))+(((-400)*((a)*((M)*(r))))+((38)*((a)*(pow(r,2)))))))+(((-502.615384615384615384615384615)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((36)*(((85)*(pow(a,3)))+((a)*((r)*(((-316)*(M))+((85)*(r)))))))+(((3.42857142857142857142857142857)*(((501)*(pow(a,3)))+((a)*((r)*(((-2374)*(M))+((501)*(r)))))))+((-3.33333333333333333333333333333)*(((1028)*(pow(a,3)))+((a)*((r)*(((-4195)*(M))+((1028)*(r)))))))))))))));
} else {
coeffs[411] = ((0.253906250000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-324)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((3811)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-16464)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((32085)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-28908)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((9801)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((((38)*(pow(a,3)))+(((-400)*((a)*((M)*(r))))+((38)*((a)*(pow(r,2))))))*(expr[1]))+(((((-926)*(pow(a,3)))+((a)*((((5663)*(M))+((-926)*(r)))*(r))))*(expr[2]))+(((12)*((((501)*(pow(a,3)))+((a)*((r)*(((-2374)*(M))+((501)*(r))))))*(expr[3])))+(((-15)*((((1028)*(pow(a,3)))+((a)*((r)*(((-4195)*(M))+((1028)*(r))))))*(expr[4])))+(((198)*((((85)*(pow(a,3)))+((a)*((r)*(((-316)*(M))+((85)*(r))))))*(expr[5])))+((-3267)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_412(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[412] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[412] = ((0.234375000000000000000000000000)*((6.74536878161602073277515280575)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_413(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[413] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[413] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((41)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((210)*(expr[2]))+(((-574)*(expr[3]))+(((621)*(expr[4]))+((-231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_414(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[414] = ((1.33300781250000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((19)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.50036630036630036630036630037));
} else {
coeffs[414] = ((1.33300781250000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((19)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-38)*(expr[1]))+(((463)*(expr[2]))+(((-2004)*(expr[3]))+(((3855)*(expr[4]))+(((-3366)*(expr[5]))+((1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_415(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[415] = ((1.33300781250000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.50036630036630036630036630037));
} else {
coeffs[415] = ((1.33300781250000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-38)*(expr[1]))+(((463)*(expr[2]))+(((-2004)*(expr[3]))+(((3855)*(expr[4]))+(((-3366)*(expr[5]))+((1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_416(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[416] = ((0.666503906250000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.50036630036630036630036630037));
} else {
coeffs[416] = ((0.666503906250000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((38)*(expr[1]))+(((-463)*(expr[2]))+(((2004)*(expr[3]))+(((-3855)*(expr[4]))+(((3366)*(expr[5]))+((-1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_417(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[417] = ((2.66601562500000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.499633699633699633699633699634)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[417] = ((2.66601562500000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((38)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-463)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2004)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-3855)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((3366)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6]))))))))));
}
}

void compute_coeffs_scalar_418(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[418] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[418] = ((0.0781250000000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-70)*(expr[2]))+(((168)*(expr[3]))+((-99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_419(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[419] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[419] = ((0.0195312500000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((60)*(expr[1]))+(((-350)*(expr[2]))+(((588)*(expr[3]))+((-297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_420(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[420] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[420] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-126)*(expr[1]))+(((1050)*(expr[2]))+(((-2912)*(expr[3]))+(((3375)*(expr[4]))+((-1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_421(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[421] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[421] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_422(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[422] = ((0.0634765625000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(15.7538461538461538461538461538));
} else {
coeffs[422] = ((0.0634765625000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((37)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((324)*(expr[1]))+(((-3811)*(expr[2]))+(((16464)*(expr[3]))+(((-32085)*(expr[4]))+(((28908)*(expr[5]))+((-9801)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_423(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[423] = ((0.253906250000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-13.7538461538461538461538461538)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-38)*(pow(a,3)))+((2)*((a)*((((200)*(M))+((-19)*(r)))*(r))))))+(((502.615384615384615384615384615)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((-36)*(((85)*(pow(a,3)))+((a)*((r)*(((-316)*(M))+((85)*(r)))))))+(((-3.42857142857142857142857142857)*(((501)*(pow(a,3)))+((a)*((r)*(((-2374)*(M))+((501)*(r)))))))+(((0.400000000000000000000000000000)*(((926)*(pow(a,3)))+((a)*((r)*(((-5663)*(M))+((926)*(r)))))))+((3.33333333333333333333333333333)*(((1028)*(pow(a,3)))+((a)*((r)*(((-4195)*(M))+((1028)*(r)))))))))))))));
} else {
coeffs[423] = ((0.253906250000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-324)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((3811)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-16464)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((32085)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-28908)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((9801)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((((-38)*(pow(a,3)))+((2)*((a)*((((200)*(M))+((-19)*(r)))*(r)))))*(expr[1]))+(((((926)*(pow(a,3)))+((a)*((r)*(((-5663)*(M))+((926)*(r))))))*(expr[2]))+(((-12)*((((501)*(pow(a,3)))+((a)*((r)*(((-2374)*(M))+((501)*(r))))))*(expr[3])))+(((15)*((((1028)*(pow(a,3)))+((a)*((r)*(((-4195)*(M))+((1028)*(r))))))*(expr[4])))+(((-198)*((((85)*(pow(a,3)))+((a)*((r)*(((-316)*(M))+((85)*(r))))))*(expr[5])))+((3267)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_424(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[424] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[424] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((420)*(expr[1]))+(((-1190)*(expr[2]))+(((420)*(expr[3]))+((495)*(expr[4])))))));
}
}

void compute_coeffs_scalar_425(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[425] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[425] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((34)*(expr[0]))+(((-720)*(expr[1]))+(((3220)*(expr[2]))+(((-5376)*(expr[3]))+((2970)*(expr[4])))))));
}
}

void compute_coeffs_scalar_426(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[426] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[426] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((21)*(expr[1]))+(((-210)*(expr[2]))+(((2674)*(expr[3]))+(((-5805)*(expr[4]))+((3465)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_427(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[427] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[427] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((846)*(expr[1]))+(((-7310)*(expr[2]))+(((21504)*(expr[3]))+(((-25785)*(expr[4]))+((10890)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_428(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[428] = ((0.00317382812500000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(630.153846153846153846153846154));
} else {
coeffs[428] = ((0.00317382812500000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((289)*(expr[0]))+(((-4350)*(expr[1]))+(((53455)*(expr[2]))+(((-254436)*(expr[3]))+(((580815)*(expr[4]))+(((-618750)*(expr[5]))+((245025)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_429(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[429] = ((0.00634765625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-630.153846153846153846153846154)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((1156)*((a)*((M)*(r))))+(((-25130.7692307692307692307692308)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((360)*(((431)*(pow(a,3)))+((a)*((r)*(((-1487)*(M))+((431)*(r)))))))+(((2.66666666666666666666666666667)*(((629)*(pow(a,3)))+((a)*((r)*(((-3433)*(M))+((629)*(r)))))))+(((-4)*(((5542)*(pow(a,3)))+((a)*((r)*(((-21775)*(M))+((5542)*(r)))))))+(((6.85714285714285714285714285714)*(((13959)*(pow(a,3)))+((a)*((r)*(((-49121)*(M))+((13959)*(r)))))))+((-6.66666666666666666666666666667)*(((27028)*(pow(a,3)))+((a)*((r)*(((-92777)*(M))+((27028)*(r)))))))))))))));
} else {
coeffs[429] = ((0.00634765625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-289)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((4350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-53455)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((254436)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-580815)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((618750)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-245025)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((578)*((a)*((M)*((r)*(expr[0])))))+(((4)*((((629)*(pow(a,3)))+((a)*((r)*(((-3433)*(M))+((629)*(r))))))*(expr[1])))+(((-10)*((((5542)*(pow(a,3)))+((a)*((r)*(((-21775)*(M))+((5542)*(r))))))*(expr[2])))+(((24)*((((13959)*(pow(a,3)))+((a)*((r)*(((-49121)*(M))+((13959)*(r))))))*(expr[3])))+(((-30)*((((27028)*(pow(a,3)))+((a)*((r)*(((-92777)*(M))+((27028)*(r))))))*(expr[4])))+(((1980)*((((431)*(pow(a,3)))+((a)*((r)*(((-1487)*(M))+((431)*(r))))))*(expr[5])))+((-163350)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_430(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[430] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[430] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-20)*(expr[1]))+(((-70)*(expr[2]))+(((252)*(expr[3]))+((-165)*(expr[4])))))));
}
}

void compute_coeffs_scalar_431(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[431] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[431] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((54)*(expr[1]))+(((-210)*(expr[2]))+(((224)*(expr[3]))+(((45)*(expr[4]))+((-110)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_432(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[432] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[432] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-179)*(expr[1]))+(((1310)*(expr[2]))+(((-3654)*(expr[3]))+(((4335)*(expr[4]))+((-1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_433(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[433] = ((0.0571289062500000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(17.5042735042735042735042735043));
} else {
coeffs[433] = ((0.0571289062500000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((9)*(expr[0]))+(((-140)*(expr[1]))+(((1125)*(expr[2]))+(((-1904)*(expr[3]))+(((-1565)*(expr[4]))+(((5500)*(expr[5]))+((-3025)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_434(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[434] = ((0.228515625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-17.5042735042735042735042735043)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((54)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-6964)*(pow(a,3)))+((4)*((a)*((((2054)*(M))+((-1741)*(r)))*(r))))))+(((465.384615384615384615384615385)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((-4)*(((11)*(pow(a,3)))+((a)*((r)*(((48)*(M))+((11)*(r)))))))+(((-60)*(((49)*(pow(a,3)))+((a)*((r)*(((-148)*(M))+((49)*(r)))))))+(((6)*(((86)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((86)*(r)))))))+((1.11111111111111111111111111111)*(((3172)*(pow(a,3)))+((a)*((r)*(((-7283)*(M))+((3172)*(r)))))))))))))));
} else {
coeffs[434] = ((0.228515625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1125)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((1904)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((1565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-5500)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((3025)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((27)*((a)*((M)*((r)*(expr[0])))))+(((-6)*((((11)*(pow(a,3)))+((a)*((r)*(((48)*(M))+((11)*(r))))))*(expr[1])))+(((15)*((((86)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((86)*(r))))))*(expr[2])))+(((((-6964)*(pow(a,3)))+((4)*((a)*((((2054)*(M))+((-1741)*(r)))*(r)))))*(expr[3]))+(((5)*((((3172)*(pow(a,3)))+((a)*((r)*(((-7283)*(M))+((3172)*(r))))))*(expr[4])))+(((-330)*((((49)*(pow(a,3)))+((a)*((r)*(((-148)*(M))+((49)*(r))))))*(expr[5])))+((3025)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_435(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[435] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[435] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-51)*(expr[1]))+(((210)*(expr[2]))+(((-238)*(expr[3]))+(((45)*(expr[4]))+((33)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_436(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[436] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[436] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-220)*(expr[2]))+(((896)*(expr[3]))+(((-1170)*(expr[4]))+((484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_437(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[437] = ((0.0952148437500000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(21.0051282051282051282051282051));
} else {
coeffs[437] = ((0.0952148437500000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((378)*(expr[1]))+(((-2353)*(expr[2]))+(((4844)*(expr[3]))+(((-3057)*(expr[4]))+(((-902)*(expr[5]))+((1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_438(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[438] = ((0.190429687500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-19.0051282051282051282051282051)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((-223.384615384615384615384615385)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((5.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((179)*(M))+((5)*(r)))))))+(((16)*(((91)*(pow(a,3)))+((a)*((r)*(((-223)*(M))+((91)*(r)))))))+(((-1.60000000000000000000000000000)*(((142)*(pow(a,3)))+((a)*((r)*(((2069)*(M))+((142)*(r)))))))+(((4.57142857142857142857142857143)*(((201)*(pow(a,3)))+((a)*((r)*(((809)*(M))+((201)*(r)))))))+((-0.888888888888888888888888888889)*((a)*(((1948)*(pow(a,2)))+((r)*(((-839)*(M))+((1948)*(r)))))))))))))));
} else {
coeffs[438] = ((0.190429687500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-378)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((2353)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-4844)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3057)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((902)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((8)*((((5)*(pow(a,3)))+((a)*((r)*(((179)*(M))+((5)*(r))))))*(expr[1])))+(((-4)*((((142)*(pow(a,3)))+((a)*((r)*(((2069)*(M))+((142)*(r))))))*(expr[2])))+(((16)*((((201)*(pow(a,3)))+((a)*((r)*(((809)*(M))+((201)*(r))))))*(expr[3])))+(((-4)*((a)*((((1948)*(pow(a,2)))+((r)*(((-839)*(M))+((1948)*(r)))))*(expr[4]))))+(((88)*((((91)*(pow(a,3)))+((a)*((r)*(((-223)*(M))+((91)*(r))))))*(expr[5])))+((-1452)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_439(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[439] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[439] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-10)*(expr[2]))+(((-14)*(expr[3]))+(((27)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_440(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[440] = ((1.04736328125000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.954778554778554778554778554779));
} else {
coeffs[440] = ((1.04736328125000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((61)*(expr[2]))+(((-112)*(expr[3]))+(((75)*(expr[4]))+(((-4)*(expr[5]))+((-9)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_441(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[441] = ((4.18945312500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.04522144522144522144522144522)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*(r))))+(((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-32)*(M))+(r))))))+(((-2)*(((2)*(pow(a,3)))+((a)*((r)*(((-65)*(M))+((2)*(r)))))))+(((2.30769230769230769230769230769)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((-1.14285714285714285714285714286)*(((3)*(pow(a,3)))+((a)*((r)*(((134)*(M))+((3)*(r)))))))+(((-0.363636363636363636363636363636)*((a)*(((43)*(pow(a,2)))+((r)*(((-76)*(M))+((43)*(r)))))))+((0.222222222222222222222222222222)*(((76)*(pow(a,3)))+((a)*((r)*(((223)*(M))+((76)*(r)))))))))))))));
} else {
coeffs[441] = ((4.18945312500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-61)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((112)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((5)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((-32)*(M))+(r)))))*(expr[1])))+(((-5)*((((2)*(pow(a,3)))+((a)*((r)*(((-65)*(M))+((2)*(r))))))*(expr[2])))+(((-4)*((((3)*(pow(a,3)))+((a)*((r)*(((134)*(M))+((3)*(r))))))*(expr[3])))+(((((76)*(pow(a,3)))+((a)*((r)*(((223)*(M))+((76)*(r))))))*(expr[4]))+(((-2)*((a)*((((43)*(pow(a,2)))+((r)*(((-76)*(M))+((43)*(r)))))*(expr[5]))))+((15)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_442(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[442] = ((1.57104492187500000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.27303807303807303807303807304));
} else {
coeffs[442] = ((1.57104492187500000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((2)*(expr[1]))+(((-17)*(expr[2]))+(((28)*(expr[3]))+(((-17)*(expr[4]))+(((2)*(expr[5]))+(expr[6]))))))));
}
}

void compute_coeffs_scalar_443(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[443] = ((3.14208984375000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2.15384615384615384615384615385)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.880808080808080808080808080808)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((-2.28571428571428571428571428571)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((2.18181818181818181818181818182)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((2.40000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((-21)*(M))+((2)*(r)))))))+(((-0.307692307692307692307692307692)*((a)*(((2)*(pow(a,2)))+((r)*(((-7)*(M))+((2)*(r)))))))+((-0.444444444444444444444444444444)*(((4)*(pow(a,3)))+((a)*((r)*(((43)*(M))+((4)*(r)))))))))))))));
} else {
coeffs[443] = ((3.14208984375000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[6]))))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+(((6)*((((2)*(pow(a,3)))+((a)*((r)*(((-21)*(M))+((2)*(r))))))*(expr[2])))+(((-8)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[3])))+(((-2)*((((4)*(pow(a,3)))+((a)*((r)*(((43)*(M))+((4)*(r))))))*(expr[4])))+(((12)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[5])))+((-2)*((a)*((((2)*(pow(a,2)))+((r)*(((-7)*(M))+((2)*(r)))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_444(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[444] = ((0.375000000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-4)*((M)*(pow(r,3))))+((2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.66666666666666666666666666667));
} else {
coeffs[444] = ((0.375000000000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-4)*((M)*(pow(r,3))))+((2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(expr[1])));
}
}

void compute_coeffs_scalar_445(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[445] = ((0.750000000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.66666666666666666666666666667));
} else {
coeffs[445] = ((0.750000000000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((-1)*(expr[1]))));
}
}

void compute_coeffs_scalar_446(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[446] = ((0.375000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.66666666666666666666666666667));
} else {
coeffs[446] = ((0.375000000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((-1)*(expr[1]))));
}
}

void compute_coeffs_scalar_447(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[447] = ((0.750000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((2.66666666666666666666666666667)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))))));
} else {
coeffs[447] = ((0.750000000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[1])))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+((2)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[1]))))));
}
}

void compute_coeffs_scalar_448(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[448] = ((0.125000000000000000000000000000)*((3.87298334620741688517926539978)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-4)*((M)*(pow(r,3))))+((2)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[448] = ((0.125000000000000000000000000000)*((3.87298334620741688517926539978)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-4)*((M)*(pow(r,3))))+((2)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+((-3)*(expr[1]))));
}
}

void compute_coeffs_scalar_449(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[449] = ((0.250000000000000000000000000000)*((3.87298334620741688517926539978)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[449] = ((0.250000000000000000000000000000)*((3.87298334620741688517926539978)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+((3)*(expr[1]))));
}
}

}
