#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_200(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[200] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*(r))))+(((-24)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((5.45454545454545454545454545455)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((5.60000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r)))))))+(((-1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((-28)*(M))+((5)*(r)))))))+((0.222222222222222222222222222222)*(((8)*(pow(a,3)))+((a)*((r)*(((-259)*(M))+((8)*(r))))))))))))));
} else {
coeffs[200] = ((0.0937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-81)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-3)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((5)*(pow(a,3)))+((a)*((r)*(((-28)*(M))+((5)*(r))))))*(expr[1])))+(((14)*((((4)*(pow(a,3)))+((a)*((r)*(((-23)*(M))+((4)*(r))))))*(expr[2])))+(((-84)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[3])))+(((((8)*(pow(a,3)))+((a)*((r)*(((-259)*(M))+((8)*(r))))))*(expr[4]))+((30)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_201(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[201] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[201] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((7)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((54)*(expr[1]))+(((-210)*(expr[2]))+(((224)*(expr[3]))+(((45)*(expr[4]))+((-110)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_202(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[202] = ((0.0703125000000000000000000000000)*((6.74536878161602073277515280575)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[202] = ((0.0703125000000000000000000000000)*((6.74536878161602073277515280575)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((54)*(expr[1]))+(((-210)*(expr[2]))+(((224)*(expr[3]))+(((45)*(expr[4]))+((-110)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_203(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[203] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[203] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-54)*(expr[1]))+(((210)*(expr[2]))+(((-224)*(expr[3]))+(((-45)*(expr[4]))+((110)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_204(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[204] = ((0.140625000000000000000000000000)*((6.74536878161602073277515280575)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((18)*((a)*((M)*(r))))+(((-10)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((-12)*(((9)*(pow(a,3)))+((a)*((r)*(((-2)*(M))+((9)*(r)))))))+(((4)*(((10)*(pow(a,3)))+((a)*((r)*(((43)*(M))+((10)*(r)))))))+(((-0.666666666666666666666666666667)*((a)*(((11)*(pow(a,2)))+((r)*(((140)*(M))+((11)*(r)))))))+((0.222222222222222222222222222222)*(((564)*(pow(a,3)))+((3)*((a)*((r)*(((-421)*(M))+((188)*(r))))))))))))));
} else {
coeffs[204] = ((0.140625000000000000000000000000)*((6.74536878161602073277515280575)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-54)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-224)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((110)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((9)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((11)*(pow(a,2)))+((r)*(((140)*(M))+((11)*(r)))))*(expr[1]))))+(((10)*((((10)*(pow(a,3)))+((a)*((r)*(((43)*(M))+((10)*(r))))))*(expr[2])))+(((-42)*((((9)*(pow(a,3)))+((a)*((r)*(((-2)*(M))+((9)*(r))))))*(expr[3])))+(((((564)*(pow(a,3)))+((3)*((a)*((r)*(((-421)*(M))+((188)*(r)))))))*(expr[4]))+((-55)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_205(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[205] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[205] = ((0.187500000000000000000000000000)*((2.23606797749978969640917366873)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((15)*(expr[2]))+((7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_206(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[206] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[206] = ((0.187500000000000000000000000000)*((2.64575131106459059050161575364)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-21)*(expr[1]))+(((60)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_207(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[207] = ((0.562500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(3.55555555555555555555555555556));
} else {
coeffs[207] = ((0.562500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((13)*(expr[1]))+(((-20)*(expr[2]))+(((-35)*(expr[3]))+((49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_208(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[208] = ((0.562500000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(3.55555555555555555555555555556));
} else {
coeffs[208] = ((0.562500000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((13)*(expr[1]))+(((-20)*(expr[2]))+(((-35)*(expr[3]))+((49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_209(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[209] = ((0.281250000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-3.55555555555555555555555555556));
} else {
coeffs[209] = ((0.281250000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-13)*(expr[1]))+(((20)*(expr[2]))+(((35)*(expr[3]))+((-49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_210(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[210] = ((1.12500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-1.55555555555555555555555555556)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((21.7777777777777777777777777778)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((-1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((5)*(r)))))))+(((-4)*(((11)*(pow(a,3)))+((a)*((r)*(((-27)*(M))+((11)*(r)))))))+((0.400000000000000000000000000000)*(((74)*(pow(a,3)))+((2)*((a)*((r)*(((-54)*(M))+((37)*(r))))))))))))));
} else {
coeffs[210] = ((1.12500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-13)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((20)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((5)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((5)*(r))))))*(expr[1])))+(((((74)*(pow(a,3)))+((2)*((a)*((r)*(((-54)*(M))+((37)*(r)))))))*(expr[2]))+(((-14)*((((11)*(pow(a,3)))+((a)*((r)*(((-27)*(M))+((11)*(r))))))*(expr[3])))+((98)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_211(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[211] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[211] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((42)*(expr[1]))+(((-210)*(expr[2]))+(((350)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_212(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[212] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[212] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((42)*(expr[1]))+(((-210)*(expr[2]))+(((350)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_213(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[213] = ((0.0937500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[213] = ((0.0937500000000000000000000000000)*((3.31662479035539984911493273667)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-42)*(expr[1]))+(((210)*(expr[2]))+(((-350)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_214(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[214] = ((0.375000000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-52)*((a)*((M)*(r))))+(((-5.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-32)*(M))+(r))))))+(((-19.0909090909090909090909090909)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-2)*(((3)*(pow(a,3)))+((a)*((r)*(((94)*(M))+((3)*(r)))))))+((1.33333333333333333333333333333)*(((22)*(pow(a,3)))+((a)*((r)*(((19)*(M))+((22)*(r))))))))))));
} else {
coeffs[214] = ((0.375000000000000000000000000000)*((3.31662479035539984911493273667)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-42)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-84)*((a)*((M)*((r)*(expr[1])))))+(((-14)*(((pow(a,3))+((a)*((r)*(((-32)*(M))+(r)))))*(expr[2])))+(((-7)*((((3)*(pow(a,3)))+((a)*((r)*(((94)*(M))+((3)*(r))))))*(expr[3])))+(((6)*((((22)*(pow(a,3)))+((a)*((r)*(((19)*(M))+((22)*(r))))))*(expr[4])))+((-105)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_215(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[215] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[215] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((21)*(expr[1]))+(((-210)*(expr[2]))+(((2674)*(expr[3]))+(((-5805)*(expr[4]))+((3465)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_216(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[216] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[216] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((21)*(expr[1]))+(((-210)*(expr[2]))+(((2674)*(expr[3]))+(((-5805)*(expr[4]))+((3465)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_217(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[217] = ((0.00585937500000000000000000000000)*((3.60555127546398929311922126747)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[217] = ((0.00585937500000000000000000000000)*((3.60555127546398929311922126747)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-21)*(expr[1]))+(((210)*(expr[2]))+(((-2674)*(expr[3]))+(((5805)*(expr[4]))+((-3465)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_218(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[218] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((68)*((a)*((M)*(r))))+(((210)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((-56)*(((17)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((17)*(r)))))))+(((2)*(((53)*(pow(a,3)))+((a)*((r)*(((-120)*(M))+((53)*(r)))))))+(((-12)*(((226)*(pow(a,3)))+((a)*((r)*(((-667)*(M))+((226)*(r)))))))+((4)*(((627)*(pow(a,3)))+((a)*((r)*(((-1636)*(M))+((627)*(r)))))))))))));
} else {
coeffs[218] = ((0.0234375000000000000000000000000)*((3.60555127546398929311922126747)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2674)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((5805)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-3465)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((34)*((a)*((M)*((r)*(expr[0])))))+(((3)*((((53)*(pow(a,3)))+((a)*((r)*(((-120)*(M))+((53)*(r))))))*(expr[1])))+(((-140)*((((17)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((17)*(r))))))*(expr[2])))+(((14)*((((627)*(pow(a,3)))+((a)*((r)*(((-1636)*(M))+((627)*(r))))))*(expr[3])))+(((-54)*((((226)*(pow(a,3)))+((a)*((r)*(((-667)*(M))+((226)*(r))))))*(expr[4])))+((1155)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_219(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[219] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[219] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[2]))+((-14)*(expr[3])))));
}
}

void compute_coeffs_scalar_220(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[220] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[220] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-75)*(expr[2]))+((49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_221(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[221] = ((0.140625000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(7.11111111111111111111111111111));
} else {
coeffs[221] = ((0.140625000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((49)*(expr[1]))+(((-225)*(expr[2]))+(((371)*(expr[3]))+((-196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_222(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[222] = ((0.281250000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(7.11111111111111111111111111111));
} else {
coeffs[222] = ((0.281250000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((49)*(expr[1]))+(((-225)*(expr[2]))+(((371)*(expr[3]))+((-196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_223(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[223] = ((0.140625000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.11111111111111111111111111111));
} else {
coeffs[223] = ((0.140625000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-49)*(expr[1]))+(((225)*(expr[2]))+(((-371)*(expr[3]))+((196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_224(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[224] = ((0.562500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-5.11111111111111111111111111111)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((-43.5555555555555555555555555556)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((16)*(pow(a,3)))+((a)*((r)*(((-81)*(M))+((16)*(r)))))))+(((2)*(((48)*(pow(a,3)))+((a)*((r)*(((-149)*(M))+((48)*(r)))))))+((-1.20000000000000000000000000000)*(((52)*(pow(a,3)))+((a)*((r)*(((-179)*(M))+((52)*(r)))))))))))));
} else {
coeffs[224] = ((0.562500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-371)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((((16)*(pow(a,3)))+((a)*((r)*(((-81)*(M))+((16)*(r))))))*(expr[1]))+(((-3)*((((52)*(pow(a,3)))+((a)*((r)*(((-179)*(M))+((52)*(r))))))*(expr[2])))+(((7)*((((48)*(pow(a,3)))+((a)*((r)*(((-149)*(M))+((48)*(r))))))*(expr[3])))+((-196)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_225(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[225] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[225] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_226(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[226] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[226] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_227(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[227] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[227] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_228(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[228] = ((0.187500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-456)*(pow(a,3)))+((3)*((a)*((((241)*(M))+((-152)*(r)))*(r))))))+(((38.1818181818181818181818181818)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((4)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+(((8)*(((12)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((12)*(r)))))))+((-2.40000000000000000000000000000)*(((16)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((16)*(r))))))))))))));
} else {
coeffs[228] = ((0.187500000000000000000000000000)*((6.20483682299542829806662097772)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((364)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-189)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((6)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[1])))+(((-6)*((((16)*(pow(a,3)))+((a)*((r)*(((3)*(M))+((16)*(r))))))*(expr[2])))+(((28)*((((12)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((12)*(r))))))*(expr[3])))+(((((-456)*(pow(a,3)))+((3)*((a)*((((241)*(M))+((-152)*(r)))*(r)))))*(expr[4]))+((210)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))))));
}
}

void compute_coeffs_scalar_229(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[229] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[229] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-126)*(expr[1]))+(((1050)*(expr[2]))+(((-2912)*(expr[3]))+(((3375)*(expr[4]))+((-1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_230(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[230] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[230] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-126)*(expr[1]))+(((1050)*(expr[2]))+(((-2912)*(expr[3]))+(((3375)*(expr[4]))+((-1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_231(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[231] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[231] = ((0.0117187500000000000000000000000)*((8.06225774829854965236661323030)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((126)*(expr[1]))+(((-1050)*(expr[2]))+(((2912)*(expr[3]))+(((-3375)*(expr[4]))+((1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_232(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[232] = ((0.0468750000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((84)*(((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r)))))))+(((-6)*(((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r)))))))+(((-42)*(((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r)))))))+(((6)*(((92)*(pow(a,3)))+((a)*((r)*(((-309)*(M))+((92)*(r)))))))+((-4)*(((123)*(pow(a,3)))+((a)*((r)*(((-454)*(M))+((123)*(r)))))))))))));
} else {
coeffs[232] = ((0.0468750000000000000000000000000)*((8.06225774829854965236661323030)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((126)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1050)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2912)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-3375)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((1386)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-9)*((((3)*(pow(a,3)))+((a)*((r)*(((-20)*(M))+((3)*(r))))))*(expr[1])))+(((210)*((((2)*(pow(a,3)))+((a)*((r)*(((-9)*(M))+((2)*(r))))))*(expr[2])))+(((-14)*((((123)*(pow(a,3)))+((a)*((r)*(((-454)*(M))+((123)*(r))))))*(expr[3])))+(((27)*((((92)*(pow(a,3)))+((a)*((r)*(((-309)*(M))+((92)*(r))))))*(expr[4])))+((-231)*((((5)*(pow(a,3)))+((a)*((r)*(((-16)*(M))+((5)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_233(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[233] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-8)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[233] = ((0.937500000000000000000000000000)*((1.73205080756887729352744634151)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-8)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((15)*(expr[2]))+((-7)*(expr[3]))))));
}
}

void compute_coeffs_scalar_234(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[234] = ((1.40625000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((8)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.42222222222222222222222222222));
} else {
coeffs[234] = ((1.40625000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((8)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((-19)*((M)*(pow(r,3))))+((9)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-16)*(expr[1]))+(((78)*(expr[2]))+(((-112)*(expr[3]))+((49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_235(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[235] = ((1.40625000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.42222222222222222222222222222));
} else {
coeffs[235] = ((1.40625000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-16)*(expr[1]))+(((78)*(expr[2]))+(((-112)*(expr[3]))+((49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_236(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[236] = ((0.703125000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.42222222222222222222222222222));
} else {
coeffs[236] = ((0.703125000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((16)*(expr[1]))+(((-78)*(expr[2]))+(((112)*(expr[3]))+((-49)*(expr[4])))))));
}
}

void compute_coeffs_scalar_237(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[237] = ((2.81250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.577777777777777777777777777778)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[237] = ((2.81250000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((16)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-78)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((112)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4]))))))));
}
}

void compute_coeffs_scalar_238(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[238] = ((0.937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((-0.129292929292929292929292929293)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r)))))));
} else {
coeffs[238] = ((0.937500000000000000000000000000)*((15.1986841535706636316687442060)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-1)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[1]))))+(((12)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((-42)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((52)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+((-21)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_239(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[239] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-8)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[239] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-8)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((19)*((M)*(pow(r,3))))+((-9)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((210)*(expr[2]))+(((-574)*(expr[3]))+(((621)*(expr[4]))+((-231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_240(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[240] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[240] = ((0.117187500000000000000000000000)*((11.6833214455479226106621848926)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((27)*(expr[1]))+(((-210)*(expr[2]))+(((574)*(expr[3]))+(((-621)*(expr[4]))+((231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_241(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[241] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[241] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((210)*(expr[2]))+(((-574)*(expr[3]))+(((621)*(expr[4]))+((-231)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_242(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[242] = ((0.234375000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[242] = ((0.234375000000000000000000000000)*((11.6833214455479226106621848926)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-574)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((621)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-231)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_243(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[243] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[243] = ((0.187500000000000000000000000000)*((1.58113883008418966599944677222)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[2]))+((-14)*(expr[3])))));
}
}

void compute_coeffs_scalar_244(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[244] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[244] = ((0.0468750000000000000000000000000)*((5.91607978309961604256732829156)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-27)*(expr[1]))+(((75)*(expr[2]))+((-49)*(expr[3]))))));
}
}

void compute_coeffs_scalar_245(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[245] = ((0.140625000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(7.11111111111111111111111111111));
} else {
coeffs[245] = ((0.140625000000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((49)*(expr[1]))+(((-225)*(expr[2]))+(((371)*(expr[3]))+((-196)*(expr[4])))))));
}
}

void compute_coeffs_scalar_246(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[246] = ((0.562500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-5.11111111111111111111111111111)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-16)*(pow(a,3)))+((a)*((((81)*(M))+((-16)*(r)))*(r)))))+(((43.5555555555555555555555555556)*((pow(a,3))+((a)*((r)*(((-3)*(M))+(r))))))+(((-2)*(((48)*(pow(a,3)))+((a)*((r)*(((-149)*(M))+((48)*(r)))))))+((1.20000000000000000000000000000)*(((52)*(pow(a,3)))+((a)*((r)*(((-179)*(M))+((52)*(r)))))))))))));
} else {
coeffs[246] = ((0.562500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-49)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-371)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+((196)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((((-16)*(pow(a,3)))+((a)*((((81)*(M))+((-16)*(r)))*(r))))*(expr[1]))+(((3)*((((52)*(pow(a,3)))+((a)*((r)*(((-179)*(M))+((52)*(r))))))*(expr[2])))+(((-7)*((((48)*(pow(a,3)))+((a)*((r)*(((-149)*(M))+((48)*(r))))))*(expr[3])))+((196)*(((pow(a,3))+((a)*((r)*(((-3)*(M))+(r)))))*(expr[4])))))))));
}
}

void compute_coeffs_scalar_247(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[247] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[247] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-38)*((M)*(pow(r,3))))+((18)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_248(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[248] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[248] = ((0.0937500000000000000000000000000)*((6.20483682299542829806662097772)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_249(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[249] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[249] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

}
