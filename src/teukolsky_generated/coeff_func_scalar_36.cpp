#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1800(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1800] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((12.1090909090909090909090909091)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-2)*((pow(a,3))+((a)*((r)*(((14)*(M))+(r))))))+((-4)*(((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))))))));
} else {
coeffs[1800] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-18)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((-3)*(((pow(a,3))+((a)*((r)*(((14)*(M))+(r)))))*(expr[1])))+(((28)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-14)*((((3)*(pow(a,3)))+((a)*((r)*(((-14)*(M))+((3)*(r))))))*(expr[3])))+(((12)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[4])))+((5)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_1801(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1801] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1801] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((11)*((M)*(pow(r,3))))+((-7)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((51)*(expr[1]))+(((-210)*(expr[2]))+(((238)*(expr[3]))+(((-45)*(expr[4]))+((-33)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1802(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1802] = ((0.0234375000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*(r))))+(((-16)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((4)*(((3)*(pow(a,3)))+((a)*((r)*(((-40)*(M))+((3)*(r)))))))+(((-8)*(((3)*(pow(a,3)))+((a)*((r)*(((28)*(M))+((3)*(r)))))))+(((-4)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+((8)*(((6)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((6)*(r)))))))))))));
} else {
coeffs[1802] = ((0.0234375000000000000000000000000)*((26.1247009552262626468971346971)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-51)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-238)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((33)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*((r)*(expr[0])))))+(((6)*((((3)*(pow(a,3)))+((a)*((r)*(((-40)*(M))+((3)*(r))))))*(expr[1])))+(((-40)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[2])))+(((-28)*((((3)*(pow(a,3)))+((a)*((r)*(((28)*(M))+((3)*(r))))))*(expr[3])))+(((36)*((((6)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((6)*(r))))))*(expr[4])))+((-22)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1803(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1803] = ((0.644531250000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.55151515151515151515151515152));
} else {
coeffs[1803] = ((0.644531250000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((14)*(expr[2]))+(((-14)*(expr[3]))+(((3)*(expr[4]))+(expr[5])))))));
}
}

void compute_coeffs_scalar_1804(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1804] = ((1.28906250000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.55151515151515151515151515152));
} else {
coeffs[1804] = ((1.28906250000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((14)*(expr[2]))+(((-14)*(expr[3]))+(((3)*(expr[4]))+(expr[5])))))));
}
}

void compute_coeffs_scalar_1805(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1805] = ((2.57812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.181818181818181818181818181818)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.73333333333333333333333333333)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-30)*((a)*((M)*(r))))+(((0.181818181818181818181818181818)*(((-4)*(pow(a,3)))+((a)*((((13)*(M))+((-4)*(r)))*(r)))))+(((0.400000000000000000000000000000)*(((-8)*(pow(a,3)))+((2)*((a)*((((43)*(M))+((-4)*(r)))*(r))))))+(((0.666666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))+((0.222222222222222222222222222222)*(((8)*(pow(a,3)))+((a)*((r)*(((-1)*(M))+((8)*(r)))))))))))));
} else {
coeffs[1805] = ((2.57812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((-5)*((a)*((M)*((r)*(expr[0])))))+(((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[1]))+(((((-8)*(pow(a,3)))+((2)*((a)*((((43)*(M))+((-4)*(r)))*(r)))))*(expr[2]))+(((-70)*((a)*((M)*((r)*(expr[3])))))+(((((8)*(pow(a,3)))+((a)*((r)*(((-1)*(M))+((8)*(r))))))*(expr[4]))+((((-4)*(pow(a,3)))+((a)*((((13)*(M))+((-4)*(r)))*(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_1806(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1806] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1806] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((14)*(expr[3]))+(((-27)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1807(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1807] = ((0.644531250000000000000000000000)*((2.54950975679639241501411205451)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1807] = ((0.644531250000000000000000000000)*((2.54950975679639241501411205451)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((14)*(expr[3]))+(((-27)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1808(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1808] = ((1.28906250000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*(r))))+(((-0.909090909090909090909090909091)*((pow(a,3))+((a)*((r)*(((-13)*(M))+(r))))))+(((-0.461538461538461538461538461538)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-0.666666666666666666666666666667)*((a)*((pow(a,2))+((r)*(((43)*(M))+(r))))))+(((-4)*(((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r)))))))+(((0.400000000000000000000000000000)*(((17)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((17)*(r)))))))+((0.222222222222222222222222222222)*(((34)*(pow(a,3)))+((a)*((r)*(((-203)*(M))+((34)*(r)))))))))))))));
} else {
coeffs[1808] = ((1.28906250000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((5)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*(((pow(a,2))+((r)*(((43)*(M))+(r))))*(expr[1]))))+(((((17)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((17)*(r))))))*(expr[2]))+(((-14)*((((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))*(expr[3])))+(((((34)*(pow(a,3)))+((a)*((r)*(((-203)*(M))+((34)*(r))))))*(expr[4]))+(((-5)*(((pow(a,3))+((a)*((r)*(((-13)*(M))+(r)))))*(expr[5])))+((-3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1809(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1809] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1809] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((28)*(expr[3]))+((-18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1810(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1810] = ((0.515625000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.87878787878787878787878787879));
} else {
coeffs[1810] = ((0.515625000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-4)*(expr[0]))+(((39)*(expr[1]))+(((-140)*(expr[2]))+(((154)*(expr[3]))+(((-24)*(expr[4]))+((-25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1811(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1811] = ((0.515625000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.87878787878787878787878787879));
} else {
coeffs[1811] = ((0.515625000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-4)*(expr[0]))+(((39)*(expr[1]))+(((-140)*(expr[2]))+(((154)*(expr[3]))+(((-24)*(expr[4]))+((-25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1812(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1812] = ((1.03125000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((3.87878787878787878787878787879)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-32)*((a)*((M)*(r))))+(((1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-142)*(M))+(r))))))+(((-2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-41)*(M))+(r))))))+(((8)*(((3)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((3)*(r)))))))+(((3.63636363636363636363636363636)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+((-0.888888888888888888888888888889)*(((41)*(pow(a,3)))+((a)*((r)*(((-58)*(M))+((41)*(r))))))))))))));
} else {
coeffs[1812] = ((1.03125000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-39)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-154)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((24)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*((r)*(expr[0])))))+(((-4)*(((pow(a,3))+((a)*((r)*(((-41)*(M))+(r)))))*(expr[1])))+(((4)*(((pow(a,3))+((a)*((r)*(((-142)*(M))+(r)))))*(expr[2])))+(((28)*((((3)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((3)*(r))))))*(expr[3])))+(((-4)*((((41)*(pow(a,3)))+((a)*((r)*(((-58)*(M))+((41)*(r))))))*(expr[4])))+((20)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1813(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1813] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1813] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((220)*(expr[2]))+(((-896)*(expr[3]))+(((1170)*(expr[4]))+((-484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1814(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1814] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1814] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((220)*(expr[2]))+(((-896)*(expr[3]))+(((1170)*(expr[4]))+((-484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1815(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1815] = ((0.0234375000000000000000000000000)*((18.9076704011890370163895545528)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-758)*(pow(a,3)))+((2)*((a)*((((3098)*(M))+((-379)*(r)))*(r))))))+(((25.3846153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.181818181818181818181818181818)*(((5)*(pow(a,3)))+((a)*((r)*(((-1946)*(M))+((5)*(r)))))))+(((0.666666666666666666666666666667)*(((41)*(pow(a,3)))+((a)*((r)*(((-130)*(M))+((41)*(r)))))))+(((4)*(((63)*(pow(a,3)))+((a)*((r)*(((-382)*(M))+((63)*(r)))))))+((-2)*(((67)*(pow(a,3)))+((a)*((r)*(((-310)*(M))+((67)*(r))))))))))))));
} else {
coeffs[1815] = ((0.0234375000000000000000000000000)*((18.9076704011890370163895545528)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-220)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((896)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-1170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((484)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((((41)*(pow(a,3)))+((a)*((r)*(((-130)*(M))+((41)*(r))))))*(expr[1]))+(((-5)*((((67)*(pow(a,3)))+((a)*((r)*(((-310)*(M))+((67)*(r))))))*(expr[2])))+(((14)*((((63)*(pow(a,3)))+((a)*((r)*(((-382)*(M))+((63)*(r))))))*(expr[3])))+(((((-758)*(pow(a,3)))+((2)*((a)*((((3098)*(M))+((-379)*(r)))*(r)))))*(expr[4]))+(((((5)*(pow(a,3)))+((a)*((r)*(((-1946)*(M))+((5)*(r))))))*(expr[5]))+((165)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1816(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1816] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1816] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((28)*(expr[1]))+(((-70)*(expr[2]))+(((28)*(expr[3]))+((15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1817(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1817] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1817] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-140)*(expr[3]))+((81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1818(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1818] = ((0.128906250000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.75757575757575757575757575758));
} else {
coeffs[1818] = ((0.128906250000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-83)*(expr[1]))+(((350)*(expr[2]))+(((-350)*(expr[3]))+(((-141)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1819(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1819] = ((0.257812500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.75757575757575757575757575758));
} else {
coeffs[1819] = ((0.257812500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-83)*(expr[1]))+(((350)*(expr[2]))+(((-350)*(expr[3]))+(((-141)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1820(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1820] = ((0.515625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((7.75757575757575757575757575758)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*(r))))+(((-24.5454545454545454545454545455)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((31.3333333333333333333333333333)*(((8)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((8)*(r)))))))+(((-0.666666666666666666666666666667)*((a)*(((20)*(pow(a,2)))+((r)*(((209)*(M))+((20)*(r)))))))+(((2.40000000000000000000000000000)*(((36)*(pow(a,3)))+((a)*((r)*(((103)*(M))+((36)*(r)))))))+((-4)*(((56)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((56)*(r))))))))))))));
} else {
coeffs[1820] = ((0.515625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((83)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((141)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-3)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((20)*(pow(a,2)))+((r)*(((209)*(M))+((20)*(r)))))*(expr[1]))))+(((6)*((((36)*(pow(a,3)))+((a)*((r)*(((103)*(M))+((36)*(r))))))*(expr[2])))+(((-14)*((((56)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((56)*(r))))))*(expr[3])))+(((141)*((((8)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((8)*(r))))))*(expr[4])))+((-135)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1821(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1821] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1821] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((179)*(expr[1]))+(((-1310)*(expr[2]))+(((3654)*(expr[3]))+(((-4335)*(expr[4]))+((1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1822(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1822] = ((0.0117187500000000000000000000000)*((14.6458185158768098125730190558)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1822] = ((0.0117187500000000000000000000000)*((14.6458185158768098125730190558)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((179)*(expr[1]))+(((-1310)*(expr[2]))+(((3654)*(expr[3]))+(((-4335)*(expr[4]))+((1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1823(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1823] = ((0.0234375000000000000000000000000)*((14.6458185158768098125730190558)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-18)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-19)*(pow(a,3)))+((a)*((((575)*(M))+((-19)*(r)))*(r)))))+(((-126.923076923076923076923076923)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((2)*(((54)*(pow(a,3)))+((a)*((r)*(((-1553)*(M))+((54)*(r)))))))+(((2)*(((71)*(pow(a,3)))+((a)*((r)*(((-928)*(M))+((71)*(r)))))))+(((-4)*(((73)*(pow(a,3)))+((a)*((r)*(((-929)*(M))+((73)*(r)))))))+((0.909090909090909090909090909091)*(((205)*(pow(a,3)))+((a)*((r)*(((679)*(M))+((205)*(r))))))))))))));
} else {
coeffs[1823] = ((0.0234375000000000000000000000000)*((14.6458185158768098125730190558)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-179)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1310)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-3654)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((4335)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-1815)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-9)*((a)*((M)*((r)*(expr[0])))))+(((((-19)*(pow(a,3)))+((a)*((((575)*(M))+((-19)*(r)))*(r))))*(expr[1]))+(((5)*((((71)*(pow(a,3)))+((a)*((r)*(((-928)*(M))+((71)*(r))))))*(expr[2])))+(((-14)*((((73)*(pow(a,3)))+((a)*((r)*(((-929)*(M))+((73)*(r))))))*(expr[3])))+(((9)*((((54)*(pow(a,3)))+((a)*((r)*(((-1553)*(M))+((54)*(r))))))*(expr[4])))+(((5)*((((205)*(pow(a,3)))+((a)*((r)*(((679)*(M))+((205)*(r))))))*(expr[5])))+((-825)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1824(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1824] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1824] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((35)*(expr[2]))+((-42)*(expr[3])))));
}
}

void compute_coeffs_scalar_1825(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1825] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1825] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-21)*(expr[1]))+(((35)*(expr[2]))+(((21)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1826(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1826] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1826] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((42)*(expr[1]))+(((-210)*(expr[2]))+(((350)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1827(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1827] = ((0.687500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.90909090909090909090909090909));
} else {
coeffs[1827] = ((0.687500000000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((35)*(expr[2]))+(((-210)*(expr[3]))+(((396)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1828(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1828] = ((0.687500000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.90909090909090909090909090909));
} else {
coeffs[1828] = ((0.687500000000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((35)*(expr[2]))+(((-210)*(expr[3]))+(((396)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1829(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1829] = ((1.37500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((2.90909090909090909090909090909)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((16.3636363636363636363636363636)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((5)*(r)))))))+(((12)*(((13)*(pow(a,3)))+((a)*((r)*(((-36)*(M))+((13)*(r)))))))+(((-0.800000000000000000000000000000)*(((73)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((73)*(r)))))))+((-1.33333333333333333333333333333)*((a)*(((127)*(pow(a,2)))+((r)*(((-386)*(M))+((127)*(r))))))))))))));
} else {
coeffs[1829] = ((1.37500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-396)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((2)*((((5)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((5)*(r))))))*(expr[1])))+(((-2)*((((73)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((73)*(r))))))*(expr[2])))+(((42)*((((13)*(pow(a,3)))+((a)*((r)*(((-36)*(M))+((13)*(r))))))*(expr[3])))+(((-6)*((a)*((((127)*(pow(a,2)))+((r)*(((-386)*(M))+((127)*(r)))))*(expr[4]))))+((90)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1830(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1830] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1830] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-9)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((6)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-846)*(expr[1]))+(((7310)*(expr[2]))+(((-21504)*(expr[3]))+(((25785)*(expr[4]))+((-10890)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1831(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1831] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1831] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-846)*(expr[1]))+(((7310)*(expr[2]))+(((-21504)*(expr[3]))+(((25785)*(expr[4]))+((-10890)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1832(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1832] = ((0.00781250000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((68)*((a)*((M)*(r))))+(((1142.30769230769230769230769231)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-0.666666666666666666666666666667)*((a)*(((11)*(pow(a,2)))+((r)*(((1670)*(M))+((11)*(r)))))))+(((-12)*(((91)*(pow(a,3)))+((a)*((r)*(((842)*(M))+((91)*(r)))))))+(((0.400000000000000000000000000000)*(((565)*(pow(a,3)))+((5)*((a)*((r)*(((2698)*(M))+((113)*(r))))))))+(((-8.18181818181818181818181818182)*(((355)*(pow(a,3)))+((a)*((r)*(((-226)*(M))+((355)*(r)))))))+((1.33333333333333333333333333333)*(((1991)*(pow(a,3)))+((a)*((r)*(((4613)*(M))+((1991)*(r))))))))))))));
} else {
coeffs[1832] = ((0.00781250000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((846)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-7310)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((21504)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-25785)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((10890)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((34)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((11)*(pow(a,2)))+((r)*(((1670)*(M))+((11)*(r)))))*(expr[1]))))+(((((565)*(pow(a,3)))+((5)*((a)*((r)*(((2698)*(M))+((113)*(r)))))))*(expr[2]))+(((-42)*((((91)*(pow(a,3)))+((a)*((r)*(((842)*(M))+((91)*(r))))))*(expr[3])))+(((6)*((((1991)*(pow(a,3)))+((a)*((r)*(((4613)*(M))+((1991)*(r))))))*(expr[4])))+(((-45)*((((355)*(pow(a,3)))+((a)*((r)*(((-226)*(M))+((355)*(r))))))*(expr[5])))+((7425)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1833(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1833] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1833] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1834(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1834] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1834] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((50)*(expr[2]))+(((-84)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1835(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1835] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1835] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1836(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1836] = ((0.601562500000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.66233766233766233766233766234));
} else {
coeffs[1836] = ((0.601562500000000000000000000000)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-170)*(expr[2]))+(((474)*(expr[3]))+(((-549)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1837(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1837] = ((1.20312500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.66233766233766233766233766234));
} else {
coeffs[1837] = ((1.20312500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-170)*(expr[2]))+(((474)*(expr[3]))+(((-549)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1838(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1838] = ((2.40625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.66233766233766233766233766234)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-4)*(pow(a,3)))+((a)*((((29)*(M))+((-4)*(r)))*(r)))))+(((0.400000000000000000000000000000)*(((64)*(pow(a,3)))+(((-298)*((a)*((M)*(r))))+((64)*((a)*(pow(r,2)))))))+(((-8.18181818181818181818181818182)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((-1.71428571428571428571428571429)*(((44)*(pow(a,3)))+((a)*((r)*(((-167)*(M))+((44)*(r)))))))+((0.222222222222222222222222222222)*(((384)*(pow(a,3)))+((3)*((a)*((r)*(((-439)*(M))+((128)*(r)))))))))))))));
} else {
coeffs[1838] = ((2.40625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-474)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((549)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((((-4)*(pow(a,3)))+((a)*((((29)*(M))+((-4)*(r)))*(r))))*(expr[1]))+(((((64)*(pow(a,3)))+(((-298)*((a)*((M)*(r))))+((64)*((a)*(pow(r,2))))))*(expr[2]))+(((-6)*((((44)*(pow(a,3)))+((a)*((r)*(((-167)*(M))+((44)*(r))))))*(expr[3])))+(((((384)*(pow(a,3)))+((3)*((a)*((r)*(((-439)*(M))+((128)*(r)))))))*(expr[4]))+((-45)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1839(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1839] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1839] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1840(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1840] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1840] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1841(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1841] = ((0.0156250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-3954)*(pow(a,3)))+((3)*((a)*((((1781)*(M))+((-1318)*(r)))*(r))))))+(((-228.461538461538461538461538462)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((17)*(pow(a,3)))+((a)*((r)*(((35)*(M))+((17)*(r)))))))+(((12)*(((41)*(pow(a,3)))+((a)*((r)*(((-33)*(M))+((41)*(r)))))))+(((-2)*(((61)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((61)*(r)))))))+((1.63636363636363636363636363636)*(((445)*(pow(a,3)))+((a)*((r)*(((-769)*(M))+((445)*(r))))))))))))));
} else {
coeffs[1841] = ((0.0156250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((650)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2058)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((2565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((((17)*(pow(a,3)))+((a)*((r)*(((35)*(M))+((17)*(r))))))*(expr[1]))+(((-5)*((((61)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((61)*(r))))))*(expr[2])))+(((42)*((((41)*(pow(a,3)))+((a)*((r)*(((-33)*(M))+((41)*(r))))))*(expr[3])))+(((((-3954)*(pow(a,3)))+((3)*((a)*((((1781)*(M))+((-1318)*(r)))*(r)))))*(expr[4]))+(((9)*((((445)*(pow(a,3)))+((a)*((r)*(((-769)*(M))+((445)*(r))))))*(expr[5])))+((-1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1842(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1842] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((6)*((pow(M,2))*(pow(r,2))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1842] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((6)*((pow(M,2))*(pow(r,2))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-5)*(expr[2]))+(((7)*(expr[3]))+((-3)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1843(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1843] = ((36.0937500000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((6)*((pow(M,2))*(pow(r,2))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0554112554112554112554112554113));
} else {
coeffs[1843] = ((36.0937500000000000000000000000)*((pow(a,4))+(((-5)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((6)*((pow(M,2))*(pow(r,2))))+(((21)*((M)*(pow(r,3))))+((-12)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((8)*(expr[2]))+(((-22)*(expr[3]))+(((24)*(expr[4]))+((-9)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1844(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1844] = ((36.0937500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0554112554112554112554112554113));
} else {
coeffs[1844] = ((36.0937500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((-3)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((8)*(expr[2]))+(((-22)*(expr[3]))+(((24)*(expr[4]))+((-9)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1845(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1845] = ((72.1875000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((0.0554112554112554112554112554113)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))));
} else {
coeffs[1845] = ((72.1875000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1]))+(((-8)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((22)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-24)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1846(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1846] = ((1.64062500000000000000000000000)*((8.45576726264388144908625896139)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((0.136396936396936396936396936397)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))));
} else {
coeffs[1846] = ((1.64062500000000000000000000000)*((8.45576726264388144908625896139)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((23)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-130)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((294)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+(((-285)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5]))))+((99)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))));
}
}

void compute_coeffs_scalar_1847(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1847] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1847] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1848(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1848] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1848] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((50)*(expr[2]))+(((-84)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1849(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1849] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1849] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((2)*(pow(a,4)))+(((-10)*((pow(a,2))*((M)*(r))))+(((-21)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((12)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((42)*((M)*(pow(r,3))))+((-24)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

}
