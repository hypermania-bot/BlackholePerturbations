#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_300(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[300] = ((0.257812500000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(7.75757575757575757575757575758));
} else {
coeffs[300] = ((0.257812500000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((83)*(expr[1]))+(((-350)*(expr[2]))+(((350)*(expr[3]))+(((141)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_301(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[301] = ((0.128906250000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-7.75757575757575757575757575758));
} else {
coeffs[301] = ((0.128906250000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-83)*(expr[1]))+(((350)*(expr[2]))+(((-350)*(expr[3]))+(((-141)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_302(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[302] = ((0.515625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-5.75757575757575757575757575758)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*(r))))+(((-24.5454545454545454545454545455)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((31.3333333333333333333333333333)*(((8)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((8)*(r)))))))+(((-0.666666666666666666666666666667)*((a)*(((20)*(pow(a,2)))+((r)*(((209)*(M))+((20)*(r)))))))+(((2.40000000000000000000000000000)*(((36)*(pow(a,3)))+((a)*((r)*(((103)*(M))+((36)*(r)))))))+((-4)*(((56)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((56)*(r))))))))))))));
} else {
coeffs[302] = ((0.515625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-83)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-141)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-3)*((a)*((M)*((r)*(expr[0])))))+(((-1)*((a)*((((20)*(pow(a,2)))+((r)*(((209)*(M))+((20)*(r)))))*(expr[1]))))+(((6)*((((36)*(pow(a,3)))+((a)*((r)*(((103)*(M))+((36)*(r))))))*(expr[2])))+(((-14)*((((56)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((56)*(r))))))*(expr[3])))+(((141)*((((8)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((8)*(r))))))*(expr[4])))+((-135)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_303(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[303] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[303] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((179)*(expr[1]))+(((-1310)*(expr[2]))+(((3654)*(expr[3]))+(((-4335)*(expr[4]))+((1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_304(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[304] = ((0.0117187500000000000000000000000)*((14.6458185158768098125730190558)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[304] = ((0.0117187500000000000000000000000)*((14.6458185158768098125730190558)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((179)*(expr[1]))+(((-1310)*(expr[2]))+(((3654)*(expr[3]))+(((-4335)*(expr[4]))+((1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_305(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[305] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[305] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-179)*(expr[1]))+(((1310)*(expr[2]))+(((-3654)*(expr[3]))+(((4335)*(expr[4]))+((-1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_306(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[306] = ((0.0234375000000000000000000000000)*((14.6458185158768098125730190558)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((18)*((a)*((M)*(r))))+(((126.923076923076923076923076923)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((19)*(pow(a,3)))+((a)*((r)*(((-575)*(M))+((19)*(r)))))))+(((-2)*(((54)*(pow(a,3)))+((a)*((r)*(((-1553)*(M))+((54)*(r)))))))+(((-2)*(((71)*(pow(a,3)))+((a)*((r)*(((-928)*(M))+((71)*(r)))))))+(((4)*(((73)*(pow(a,3)))+((a)*((r)*(((-929)*(M))+((73)*(r)))))))+((-0.909090909090909090909090909091)*(((205)*(pow(a,3)))+((a)*((r)*(((679)*(M))+((205)*(r))))))))))))));
} else {
coeffs[306] = ((0.0234375000000000000000000000000)*((14.6458185158768098125730190558)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-179)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((1310)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-3654)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((4335)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-1815)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((9)*((a)*((M)*((r)*(expr[0])))))+(((((19)*(pow(a,3)))+((a)*((r)*(((-575)*(M))+((19)*(r))))))*(expr[1]))+(((-5)*((((71)*(pow(a,3)))+((a)*((r)*(((-928)*(M))+((71)*(r))))))*(expr[2])))+(((14)*((((73)*(pow(a,3)))+((a)*((r)*(((-929)*(M))+((73)*(r))))))*(expr[3])))+(((-9)*((((54)*(pow(a,3)))+((a)*((r)*(((-1553)*(M))+((54)*(r))))))*(expr[4])))+(((-5)*((((205)*(pow(a,3)))+((a)*((r)*(((679)*(M))+((205)*(r))))))*(expr[5])))+((825)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_307(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[307] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[307] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((35)*(expr[2]))+((-42)*(expr[3])))));
}
}

void compute_coeffs_scalar_308(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[308] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[308] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-35)*(expr[2]))+(((-21)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_309(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[309] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[309] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((42)*(expr[1]))+(((-210)*(expr[2]))+(((350)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_310(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[310] = ((0.687500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.90909090909090909090909090909));
} else {
coeffs[310] = ((0.687500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((3)*(expr[1]))+(((-35)*(expr[2]))+(((210)*(expr[3]))+(((-396)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_311(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[311] = ((0.687500000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.90909090909090909090909090909));
} else {
coeffs[311] = ((0.687500000000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((3)*(expr[1]))+(((-35)*(expr[2]))+(((210)*(expr[3]))+(((-396)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_312(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[312] = ((0.343750000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.90909090909090909090909090909));
} else {
coeffs[312] = ((0.343750000000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((35)*(expr[2]))+(((-210)*(expr[3]))+(((396)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_313(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[313] = ((1.37500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-0.909090909090909090909090909091)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*(r))))+(((16.3636363636363636363636363636)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((5)*(r)))))))+(((12)*(((13)*(pow(a,3)))+((a)*((r)*(((-36)*(M))+((13)*(r)))))))+(((-0.800000000000000000000000000000)*(((73)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((73)*(r)))))))+((-1.33333333333333333333333333333)*((a)*(((127)*(pow(a,2)))+((r)*(((-386)*(M))+((127)*(r))))))))))))));
} else {
coeffs[313] = ((1.37500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((396)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*((r)*(expr[0])))))+(((2)*((((5)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((5)*(r))))))*(expr[1])))+(((-2)*((((73)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((73)*(r))))))*(expr[2])))+(((42)*((((13)*(pow(a,3)))+((a)*((r)*(((-36)*(M))+((13)*(r))))))*(expr[3])))+(((-6)*((a)*((((127)*(pow(a,2)))+((r)*(((-386)*(M))+((127)*(r)))))*(expr[4]))))+((90)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_314(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[314] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[314] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-846)*(expr[1]))+(((7310)*(expr[2]))+(((-21504)*(expr[3]))+(((25785)*(expr[4]))+((-10890)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_315(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[315] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[315] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-846)*(expr[1]))+(((7310)*(expr[2]))+(((-21504)*(expr[3]))+(((25785)*(expr[4]))+((-10890)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_316(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[316] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[316] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((846)*(expr[1]))+(((-7310)*(expr[2]))+(((21504)*(expr[3]))+(((-25785)*(expr[4]))+((10890)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_317(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[317] = ((0.00781250000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-68)*((a)*((M)*(r))))+(((-1142.30769230769230769230769231)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((11)*(pow(a,3)))+((a)*((r)*(((1670)*(M))+((11)*(r)))))))+(((12)*(((91)*(pow(a,3)))+((a)*((r)*(((842)*(M))+((91)*(r)))))))+(((-2)*(((113)*(pow(a,3)))+((a)*((r)*(((2698)*(M))+((113)*(r)))))))+(((8.18181818181818181818181818182)*(((355)*(pow(a,3)))+((a)*((r)*(((-226)*(M))+((355)*(r)))))))+((-1.33333333333333333333333333333)*(((1991)*(pow(a,3)))+((a)*((r)*(((4613)*(M))+((1991)*(r))))))))))))));
} else {
coeffs[317] = ((0.00781250000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((846)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-7310)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((21504)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-25785)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((10890)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-34)*((a)*((M)*((r)*(expr[0])))))+(((((11)*(pow(a,3)))+((a)*((r)*(((1670)*(M))+((11)*(r))))))*(expr[1]))+(((-5)*((((113)*(pow(a,3)))+((a)*((r)*(((2698)*(M))+((113)*(r))))))*(expr[2])))+(((42)*((((91)*(pow(a,3)))+((a)*((r)*(((842)*(M))+((91)*(r))))))*(expr[3])))+(((-6)*((((1991)*(pow(a,3)))+((a)*((r)*(((4613)*(M))+((1991)*(r))))))*(expr[4])))+(((45)*((((355)*(pow(a,3)))+((a)*((r)*(((-226)*(M))+((355)*(r))))))*(expr[5])))+((-7425)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_318(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[318] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[318] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-35)*(expr[2]))+((21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_319(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[319] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[319] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-50)*(expr[2]))+(((84)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_320(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[320] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[320] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-36)*(expr[1]))+(((210)*(expr[2]))+(((-364)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_321(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[321] = ((0.601562500000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.66233766233766233766233766234));
} else {
coeffs[321] = ((0.601562500000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-21)*(expr[1]))+(((170)*(expr[2]))+(((-474)*(expr[3]))+(((549)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_322(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[322] = ((1.20312500000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.66233766233766233766233766234));
} else {
coeffs[322] = ((1.20312500000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-21)*(expr[1]))+(((170)*(expr[2]))+(((-474)*(expr[3]))+(((549)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_323(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[323] = ((0.601562500000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.66233766233766233766233766234));
} else {
coeffs[323] = ((0.601562500000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((21)*(expr[1]))+(((-170)*(expr[2]))+(((474)*(expr[3]))+(((-549)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_324(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[324] = ((2.40625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.337662337662337662337662337662)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-2)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-4)*(pow(a,3)))+((a)*((((29)*(M))+((-4)*(r)))*(r)))))+(((0.400000000000000000000000000000)*(((64)*(pow(a,3)))+(((-298)*((a)*((M)*(r))))+((64)*((a)*(pow(r,2)))))))+(((-8.18181818181818181818181818182)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((-1.71428571428571428571428571429)*(((44)*(pow(a,3)))+((a)*((r)*(((-167)*(M))+((44)*(r)))))))+((0.222222222222222222222222222222)*(((384)*(pow(a,3)))+((3)*((a)*((r)*(((-439)*(M))+((128)*(r)))))))))))))));
} else {
coeffs[324] = ((2.40625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((474)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-549)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-1)*((a)*((M)*((r)*(expr[0])))))+(((((-4)*(pow(a,3)))+((a)*((((29)*(M))+((-4)*(r)))*(r))))*(expr[1]))+(((((64)*(pow(a,3)))+(((-298)*((a)*((M)*(r))))+((64)*((a)*(pow(r,2))))))*(expr[2]))+(((-6)*((((44)*(pow(a,3)))+((a)*((r)*(((-167)*(M))+((44)*(r))))))*(expr[3])))+(((((384)*(pow(a,3)))+((3)*((a)*((r)*(((-439)*(M))+((128)*(r)))))))*(expr[4]))+((-45)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_325(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[325] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[325] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_326(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[326] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[326] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_327(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[327] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[327] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_328(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[328] = ((0.0156250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((3954)*(pow(a,3)))+(((-5343)*((a)*((M)*(r))))+((3954)*((a)*(pow(r,2)))))))+(((228.461538461538461538461538462)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-0.666666666666666666666666666667)*((a)*(((17)*(pow(a,2)))+((r)*(((35)*(M))+((17)*(r)))))))+(((-12)*(((41)*(pow(a,3)))+((a)*((r)*(((-33)*(M))+((41)*(r)))))))+(((2)*(((61)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((61)*(r)))))))+((-1.63636363636363636363636363636)*(((445)*(pow(a,3)))+((a)*((r)*(((-769)*(M))+((445)*(r))))))))))))));
} else {
coeffs[328] = ((0.0156250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((650)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2058)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((2565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-1)*((a)*((((17)*(pow(a,2)))+((r)*(((35)*(M))+((17)*(r)))))*(expr[1]))))+(((5)*((((61)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((61)*(r))))))*(expr[2])))+(((-42)*((((41)*(pow(a,3)))+((a)*((r)*(((-33)*(M))+((41)*(r))))))*(expr[3])))+(((((3954)*(pow(a,3)))+(((-5343)*((a)*((M)*(r))))+((3954)*((a)*(pow(r,2))))))*(expr[4]))+(((-9)*((((445)*(pow(a,3)))+((a)*((r)*(((-769)*(M))+((445)*(r))))))*(expr[5])))+((1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_329(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[329] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[329] = ((6.56250000000000000000000000000)*((3.31662479035539984911493273667)*((pow(a,4))+(((-1)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((-2)*((pow(M,2))*(pow(r,2))))+(((29)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-5)*(expr[2]))+(((7)*(expr[3]))+((-3)*(expr[4]))))));
}
}

void compute_coeffs_scalar_330(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[330] = ((36.0937500000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((13)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.0554112554112554112554112554113));
} else {
coeffs[330] = ((36.0937500000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((13)*((pow(a,2))*(pow(r,2))))+(((2)*((pow(M,2))*(pow(r,2))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-8)*(expr[2]))+(((22)*(expr[3]))+(((-24)*(expr[4]))+((9)*(expr[5])))))));
}
}

void compute_coeffs_scalar_331(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[331] = ((36.0937500000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.0554112554112554112554112554113));
} else {
coeffs[331] = ((36.0937500000000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[1])+(((-8)*(expr[2]))+(((22)*(expr[3]))+(((-24)*(expr[4]))+((9)*(expr[5])))))));
}
}

void compute_coeffs_scalar_332(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[332] = ((18.0468750000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.0554112554112554112554112554113));
} else {
coeffs[332] = ((18.0468750000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[1]))+(((8)*(expr[2]))+(((-22)*(expr[3]))+(((24)*(expr[4]))+((-9)*(expr[5])))))));
}
}

void compute_coeffs_scalar_333(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[333] = ((72.1875000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((0.666666666666666666666666666667)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.611255411255411255411255411255)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))));
} else {
coeffs[333] = ((72.1875000000000000000000000000)*(pow(r,2))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[1]))+(((8)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-22)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((24)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))));
}
}

void compute_coeffs_scalar_334(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[334] = ((1.64062500000000000000000000000)*((8.45576726264388144908625896139)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-0.803063603063603063603063603064)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-2)*(M))+(r))))))));
} else {
coeffs[334] = ((1.64062500000000000000000000000)*((8.45576726264388144908625896139)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*((((pow(a,3))+((a)*((r)*(((-2)*(M))+(r)))))*(expr[1]))+(((-23)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[2]))))+(((130)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((-294)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[4]))))+(((285)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[5]))))+((-99)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))));
}
}

void compute_coeffs_scalar_335(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[335] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[335] = ((0.0312500000000000000000000000000)*((19.6214168703485834685260037892)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((35)*(expr[2]))+((-21)*(expr[3]))))));
}
}

void compute_coeffs_scalar_336(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[336] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[336] = ((0.109375000000000000000000000000)*((5.24404424085075773495726756840)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-50)*(expr[2]))+(((84)*(expr[3]))+((-45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_337(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[337] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[337] = ((0.0468750000000000000000000000000)*((6.20483682299542829806662097772)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((36)*(expr[1]))+(((-210)*(expr[2]))+(((364)*(expr[3]))+((-189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_338(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[338] = ((0.601562500000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.66233766233766233766233766234));
} else {
coeffs[338] = ((0.601562500000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-21)*(expr[1]))+(((170)*(expr[2]))+(((-474)*(expr[3]))+(((549)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_339(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[339] = ((2.40625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.337662337662337662337662337662)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.400000000000000000000000000000)*(((-64)*(pow(a,3)))+((2)*((a)*((((149)*(M))+((-32)*(r)))*(r))))))+(((0.666666666666666666666666666667)*(((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r)))))))+(((8.18181818181818181818181818182)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((1.71428571428571428571428571429)*(((44)*(pow(a,3)))+((a)*((r)*(((-167)*(M))+((44)*(r)))))))+((-0.666666666666666666666666666667)*((a)*(((128)*(pow(a,2)))+((r)*(((-439)*(M))+((128)*(r))))))))))))));
} else {
coeffs[339] = ((2.40625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((21)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((474)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-549)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((((4)*(pow(a,3)))+((a)*((r)*(((-29)*(M))+((4)*(r))))))*(expr[1]))+(((((-64)*(pow(a,3)))+((2)*((a)*((((149)*(M))+((-32)*(r)))*(r)))))*(expr[2]))+(((6)*((((44)*(pow(a,3)))+((a)*((r)*(((-167)*(M))+((44)*(r))))))*(expr[3])))+(((-3)*((a)*((((128)*(pow(a,2)))+((r)*(((-439)*(M))+((128)*(r)))))*(expr[4]))))+((45)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_340(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[340] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[340] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((25)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_341(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[341] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[341] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-69)*(expr[1]))+(((650)*(expr[2]))+(((-2058)*(expr[3]))+(((2565)*(expr[4]))+((-1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_342(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[342] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[342] = ((0.00390625000000000000000000000000)*((50.0249937531230482411629143850)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_343(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[343] = ((0.0156250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((2)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((3954)*(pow(a,3)))+(((-5343)*((a)*((M)*(r))))+((3954)*((a)*(pow(r,2)))))))+(((228.461538461538461538461538462)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-0.666666666666666666666666666667)*((a)*(((17)*(pow(a,2)))+((r)*(((35)*(M))+((17)*(r)))))))+(((-12)*(((41)*(pow(a,3)))+((a)*((r)*(((-33)*(M))+((41)*(r)))))))+(((2)*(((61)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((61)*(r)))))))+((-1.63636363636363636363636363636)*(((445)*(pow(a,3)))+((a)*((r)*(((-769)*(M))+((445)*(r)))))))))))))));
} else {
coeffs[343] = ((0.0156250000000000000000000000000)*((50.0249937531230482411629143850)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-650)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2058)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-2565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((a)*((M)*((r)*(expr[0]))))+(((-1)*((a)*((((17)*(pow(a,2)))+((r)*(((35)*(M))+((17)*(r)))))*(expr[1]))))+(((5)*((((61)*(pow(a,3)))+((a)*((r)*(((8)*(M))+((61)*(r))))))*(expr[2])))+(((-42)*((((41)*(pow(a,3)))+((a)*((r)*(((-33)*(M))+((41)*(r))))))*(expr[3])))+(((((3954)*(pow(a,3)))+(((-5343)*((a)*((M)*(r))))+((3954)*((a)*(pow(r,2))))))*(expr[4]))+(((-9)*((((445)*(pow(a,3)))+((a)*((r)*(((-769)*(M))+((445)*(r))))))*(expr[5])))+((1485)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_344(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[344] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[344] = ((0.0625000000000000000000000000000)*((7.41619848709566294871139744080)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-35)*(expr[2]))+((42)*(expr[3])))));
}
}

void compute_coeffs_scalar_345(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[345] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[345] = ((0.0625000000000000000000000000000)*((8.77496438739212206040638830742)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((21)*(expr[1]))+(((-35)*(expr[2]))+(((-21)*(expr[3]))+((45)*(expr[4])))))));
}
}

void compute_coeffs_scalar_346(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[346] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[346] = ((0.187500000000000000000000000000)*((3.31662479035539984911493273667)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-42)*(expr[1]))+(((210)*(expr[2]))+(((-350)*(expr[3]))+((189)*(expr[4])))))));
}
}

void compute_coeffs_scalar_347(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[347] = ((0.687500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.90909090909090909090909090909));
} else {
coeffs[347] = ((0.687500000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((3)*(expr[1]))+(((-35)*(expr[2]))+(((210)*(expr[3]))+(((-396)*(expr[4]))+((225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_348(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[348] = ((1.37500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-0.909090909090909090909090909091)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((4)*((a)*((M)*(r))))+(((-16.3636363636363636363636363636)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((-1.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((5)*(r)))))))+(((-12)*(((13)*(pow(a,3)))+((a)*((r)*(((-36)*(M))+((13)*(r)))))))+(((0.800000000000000000000000000000)*(((73)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((73)*(r)))))))+((0.222222222222222222222222222222)*(((762)*(pow(a,3)))+((6)*((a)*((r)*(((-386)*(M))+((127)*(r)))))))))))))));
} else {
coeffs[348] = ((1.37500000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((35)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-210)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((396)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((2)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((5)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((5)*(r))))))*(expr[1])))+(((2)*((((73)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((73)*(r))))))*(expr[2])))+(((-42)*((((13)*(pow(a,3)))+((a)*((r)*(((-36)*(M))+((13)*(r))))))*(expr[3])))+(((((762)*(pow(a,3)))+((6)*((a)*((r)*(((-386)*(M))+((127)*(r)))))))*(expr[4]))+((-90)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_349(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[349] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[349] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((846)*(expr[1]))+(((-7310)*(expr[2]))+(((21504)*(expr[3]))+(((-25785)*(expr[4]))+((10890)*(expr[5]))))))));
}
}

}
