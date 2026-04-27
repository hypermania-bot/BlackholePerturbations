#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_850(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[850] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[850] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-47)*(expr[1]))+(((370)*(expr[2]))+(((-966)*(expr[3]))+(((1005)*(expr[4]))+((-363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_851(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[851] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((-50.7692307692307692307692307692)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((4)*(pow(a,3)))+((2)*((a)*((r)*(((137)*(M))+((2)*(r))))))))+(((-12)*(((3)*(pow(a,3)))+((a)*((r)*(((68)*(M))+((3)*(r)))))))+(((8)*(((16)*(pow(a,3)))+((a)*((r)*(((175)*(M))+((16)*(r)))))))+(((-4)*(((54)*(pow(a,3)))+((a)*((r)*(((227)*(M))+((54)*(r)))))))+((0.181818181818181818181818181818)*(((940)*(pow(a,3)))+((2)*((a)*((r)*(((149)*(M))+((470)*(r)))))))))))))));
} else {
coeffs[851] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-47)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((370)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-966)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((1005)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-363)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((((4)*(pow(a,3)))+((2)*((a)*((r)*(((137)*(M))+((2)*(r)))))))*(expr[1]))+(((-30)*((((3)*(pow(a,3)))+((a)*((r)*(((68)*(M))+((3)*(r))))))*(expr[2])))+(((28)*((((16)*(pow(a,3)))+((a)*((r)*(((175)*(M))+((16)*(r))))))*(expr[3])))+(((-18)*((((54)*(pow(a,3)))+((a)*((r)*(((227)*(M))+((54)*(r))))))*(expr[4])))+(((((940)*(pow(a,3)))+((2)*((a)*((r)*(((149)*(M))+((470)*(r)))))))*(expr[5]))+((-330)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_852(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[852] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[852] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-30)*(expr[2]))+(((28)*(expr[3]))+((-9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_853(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[853] = ((0.902343750000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.21645021645021645021645021645));
} else {
coeffs[853] = ((0.902343750000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((3)*(expr[1]))+(((10)*(expr[2]))+(((-58)*(expr[3]))+(((69)*(expr[4]))+((-25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_854(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[854] = ((0.902343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-0.216450216450216450216450216450)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((7.27272727272727272727272727273)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*((M)+(r))))))+(((-6.40000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((4.57142857142857142857142857143)*(((9)*(pow(a,3)))+((a)*((r)*(((-47)*(M))+((9)*(r)))))))+((-1.77777777777777777777777777778)*(((16)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((16)*(r))))))))))))));
} else {
coeffs[854] = ((0.902343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((58)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((8)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[1])))+(((-16)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[2])))+(((16)*((((9)*(pow(a,3)))+((a)*((r)*(((-47)*(M))+((9)*(r))))))*(expr[3])))+(((-8)*((((16)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((16)*(r))))))*(expr[4])))+((40)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_855(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[855] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[855] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((6)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-30)*((M)*(pow(r,3))))+((15)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-90)*(expr[1]))+(((500)*(expr[2]))+(((-980)*(expr[3]))+(((810)*(expr[4]))+((-242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_856(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[856] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[856] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((90)*(expr[1]))+(((-500)*(expr[2]))+(((980)*(expr[3]))+(((-810)*(expr[4]))+((242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_857(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[857] = ((0.00585937500000000000000000000000)*((31.6385840391127491431062915848)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[857] = ((0.00585937500000000000000000000000)*((31.6385840391127491431062915848)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((90)*(expr[1]))+(((-500)*(expr[2]))+(((980)*(expr[3]))+(((-810)*(expr[4]))+((242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_858(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[858] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((32)*((a)*((M)*(r))))+(((25.3846153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-3.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((142)*(M))+(r))))))+(((10)*((pow(a,3))+((a)*((r)*(((158)*(M))+(r))))))+(((-20)*(((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r)))))))+(((2.22222222222222222222222222222)*(((53)*(pow(a,3)))+((a)*((r)*(((542)*(M))+((53)*(r)))))))+((-0.181818181818181818181818181818)*((a)*(((505)*(pow(a,2)))+((r)*(((926)*(M))+((505)*(r))))))))))))));
} else {
coeffs[858] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((90)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-500)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((980)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-810)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((242)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*((r)*(expr[0])))))+(((-5)*(((pow(a,3))+((a)*((r)*(((142)*(M))+(r)))))*(expr[1])))+(((25)*(((pow(a,3))+((a)*((r)*(((158)*(M))+(r)))))*(expr[2])))+(((-70)*((((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r))))))*(expr[3])))+(((10)*((((53)*(pow(a,3)))+((a)*((r)*(((542)*(M))+((53)*(r))))))*(expr[4])))+(((-1)*((a)*((((505)*(pow(a,2)))+((r)*(((926)*(M))+((505)*(r)))))*(expr[5]))))+((165)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_859(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[859] = ((1.12792968750000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.886580086580086580086580086580));
} else {
coeffs[859] = ((1.12792968750000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-3)*(expr[1]))+(((2)*(expr[2]))+(((2)*(expr[3]))+(((-3)*(expr[4]))+(expr[5])))))));
}
}

void compute_coeffs_scalar_860(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[860] = ((2.25585937500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2.18181818181818181818181818182)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.29523809523809523809523809524)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((20)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((8)*(pow(a,3)))+(((-46)*((a)*((M)*(r))))+((8)*((a)*(pow(r,2)))))))+(((-0.363636363636363636363636363636)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((13)*(M))+(r))))))+(((0.400000000000000000000000000000)*(((8)*(pow(a,3)))+((4)*((a)*((r)*((M)+((2)*(r))))))))+((-1.14285714285714285714285714286)*(((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))))))))));
} else {
coeffs[860] = ((2.25585937500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((13)*(M))+(r)))))*(expr[1])))+(((((8)*(pow(a,3)))+((4)*((a)*((r)*((M)+((2)*(r)))))))*(expr[2]))+(((-4)*((((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))*(expr[3])))+(((((8)*(pow(a,3)))+(((-46)*((a)*((M)*(r))))+((8)*((a)*(pow(r,2))))))*(expr[4]))+((-2)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_861(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[861] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[861] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((3)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-60)*((M)*(pow(r,3))))+((30)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-50)*(expr[2]))+(((70)*(expr[3]))+(((-45)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_862(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[862] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[862] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_863(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[863] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[863] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_864(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[864] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((180)*((a)*((M)*(r))))+(((4)*((pow(a,3))+((a)*((r)*(((-52)*(M))+(r))))))+(((-0.923076923076923076923076923077)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-1.33333333333333333333333333333)*((a)*(((2)*(pow(a,2)))+((r)*(((-79)*(M))+((2)*(r)))))))+(((1.81818181818181818181818181818)*(((2)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((2)*(r)))))))+((-2.22222222222222222222222222222)*(((2)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((2)*(r)))))))))))));
} else {
coeffs[864] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((50)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((a)*((((2)*(pow(a,2)))+((r)*(((-79)*(M))+((2)*(r)))))*(expr[1]))))+(((10)*(((pow(a,3))+((a)*((r)*(((-52)*(M))+(r)))))*(expr[2])))+(((700)*((a)*((M)*((r)*(expr[3])))))+(((-10)*((((2)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((2)*(r))))))*(expr[4])))+(((10)*((((2)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((2)*(r))))))*(expr[5])))+((-6)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_865(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[865] = ((2.51367187500000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.795648795648795648795648795649));
} else {
coeffs[865] = ((2.51367187500000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((2)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-4)*(expr[1]))+(((5)*(expr[2]))+(((-5)*(expr[4]))+(((4)*(expr[5]))+((-1)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_866(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[866] = ((2.51367187500000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.795648795648795648795648795649));
} else {
coeffs[866] = ((2.51367187500000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((-5)*(expr[2]))+(((5)*(expr[4]))+(((-4)*(expr[5]))+(expr[6])))))));
}
}

void compute_coeffs_scalar_867(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[867] = ((1.25683593750000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.795648795648795648795648795649));
} else {
coeffs[867] = ((1.25683593750000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((-5)*(expr[2]))+(((5)*(expr[4]))+(((-4)*(expr[5]))+(expr[6])))))));
}
}

void compute_coeffs_scalar_868(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[868] = ((2.51367187500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.20435120435120435120435120435)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-24)*((a)*((M)*(r))))+(((-0.307692307692307692307692307692)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-4.44444444444444444444444444444)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((5.71428571428571428571428571429)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+(((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((22)*(M))+(r))))))+((0.363636363636363636363636363636)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))))))))));
} else {
coeffs[868] = ((2.51367187500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((22)*(M))+(r)))))*(expr[1])))+(((-10)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[2])))+(((20)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((-20)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[4])))+(((2)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5])))+((-2)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_869(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[869] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[869] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_870(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[870] = ((0.418945312500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(2.38694638694638694638694638695));
} else {
coeffs[870] = ((0.418945312500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((15)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((9)*(expr[1]))+(((-10)*(expr[2]))+(((-70)*(expr[3]))+(((165)*(expr[4]))+(((-131)*(expr[5]))+((36)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_871(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[871] = ((0.837890625000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.38694638694638694638694638695));
} else {
coeffs[871] = ((0.837890625000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((70)*(expr[3]))+(((-165)*(expr[4]))+(((131)*(expr[5]))+((-36)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_872(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[872] = ((0.418945312500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.38694638694638694638694638695));
} else {
coeffs[872] = ((0.418945312500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((70)*(expr[3]))+(((-165)*(expr[4]))+(((131)*(expr[5]))+((-36)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_873(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[873] = ((0.837890625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-0.386946386946386946386946386946)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-20)*((a)*((M)*(r))))+(((9.23076923076923076923076923077)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((40)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((-6.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((7)*(M))+(r))))))+(((-28.5714285714285714285714285714)*(((3)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((3)*(r)))))))+(((11.1111111111111111111111111111)*(((8)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((8)*(r)))))))+((-1.81818181818181818181818181818)*(((25)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((25)*(r)))))))))))))));
} else {
coeffs[873] = ((0.837890625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-165)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((131)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((-10)*(((pow(a,3))+((a)*((r)*(((7)*(M))+(r)))))*(expr[1])))+(((100)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[2])))+(((-100)*((((3)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((3)*(r))))))*(expr[3])))+(((50)*((((8)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((8)*(r))))))*(expr[4])))+(((-10)*((((25)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((25)*(r))))))*(expr[5])))+((60)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_874(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[874] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[874] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((15)*(expr[1]))+(((-70)*(expr[3]))+(((90)*(expr[4]))+((-33)*(expr[5])))))));
}
}

void compute_coeffs_scalar_875(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[875] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[875] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((90)*(expr[1]))+(((-500)*(expr[2]))+(((980)*(expr[3]))+(((-810)*(expr[4]))+((242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_876(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[876] = ((0.152343750000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(13.1282051282051282051282051282));
} else {
coeffs[876] = ((0.152343750000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((12)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((4)*(expr[0]))+(((69)*(expr[1]))+(((-605)*(expr[2]))+(((2450)*(expr[3]))+(((-4470)*(expr[4]))+(((3641)*(expr[5]))+((-1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_877(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[877] = ((0.152343750000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-13.1282051282051282051282051282));
} else {
coeffs[877] = ((0.152343750000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-4)*(expr[0]))+(((-69)*(expr[1]))+(((605)*(expr[2]))+(((-2450)*(expr[3]))+(((4470)*(expr[4]))+(((-3641)*(expr[5]))+((1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_878(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[878] = ((0.0761718750000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-13.1282051282051282051282051282));
} else {
coeffs[878] = ((0.0761718750000000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-4)*(expr[0]))+(((-69)*(expr[1]))+(((605)*(expr[2]))+(((-2450)*(expr[3]))+(((4470)*(expr[4]))+(((-3641)*(expr[5]))+((1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_879(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[879] = ((0.152343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-13.1282051282051282051282051282)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-64)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((52)*(pow(a,3)))+(((-656)*((a)*((M)*(r))))+((52)*((a)*(pow(r,2)))))))+(((-223.384615384615384615384615385)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-8)*(((43)*(pow(a,3)))+((a)*((r)*(((-328)*(M))+((43)*(r)))))))+(((11.4285714285714285714285714286)*(((93)*(pow(a,3)))+((a)*((r)*(((-676)*(M))+((93)*(r)))))))+(((8)*(((115)*(pow(a,3)))+((a)*((r)*(((-892)*(M))+((115)*(r)))))))+((-8.88888888888888888888888888889)*(((163)*(pow(a,3)))+((a)*((r)*(((-1220)*(M))+((163)*(r)))))))))))))));
} else {
coeffs[879] = ((0.152343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((605)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-2450)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((4470)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-3641)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-32)*((a)*((M)*((r)*(expr[0])))))+(((((52)*(pow(a,3)))+(((-656)*((a)*((M)*(r))))+((52)*((a)*(pow(r,2))))))*(expr[1]))+(((-20)*((((43)*(pow(a,3)))+((a)*((r)*(((-328)*(M))+((43)*(r))))))*(expr[2])))+(((40)*((((93)*(pow(a,3)))+((a)*((r)*(((-676)*(M))+((93)*(r))))))*(expr[3])))+(((-40)*((((163)*(pow(a,3)))+((a)*((r)*(((-1220)*(M))+((163)*(r))))))*(expr[4])))+(((44)*((((115)*(pow(a,3)))+((a)*((r)*(((-892)*(M))+((115)*(r))))))*(expr[5])))+((-1452)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_880(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[880] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[880] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_881(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[881] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[881] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((196)*(expr[3]))+(((-225)*(expr[4]))+((88)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_882(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[882] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[882] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-47)*(expr[1]))+(((370)*(expr[2]))+(((-966)*(expr[3]))+(((1005)*(expr[4]))+((-363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_883(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[883] = ((0.571289062500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.75042735042735042735042735043));
} else {
coeffs[883] = ((0.571289062500000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((31)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-23)*(expr[1]))+(((246)*(expr[2]))+(((-966)*(expr[3]))+(((1765)*(expr[4]))+(((-1507)*(expr[5]))+((484)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_884(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[884] = ((1.14257812500000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.75042735042735042735042735043));
} else {
coeffs[884] = ((1.14257812500000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((23)*(expr[1]))+(((-246)*(expr[2]))+(((966)*(expr[3]))+(((-1765)*(expr[4]))+(((1507)*(expr[5]))+((-484)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_885(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[885] = ((0.571289062500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.75042735042735042735042735043));
} else {
coeffs[885] = ((0.571289062500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((23)*(expr[1]))+(((-246)*(expr[2]))+(((966)*(expr[3]))+(((-1765)*(expr[4]))+(((1507)*(expr[5]))+((-484)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_886(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[886] = ((1.14257812500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.249572649572649572649572649573)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-692)*(pow(a,3)))+((4)*((a)*((((1795)*(M))+((-173)*(r)))*(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((-25)*(M))+(r))))))+(((74.4615384615384615384615384615)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((1.60000000000000000000000000000)*(((31)*(pow(a,3)))+((a)*((r)*(((-431)*(M))+((31)*(r)))))))+(((-4)*(((65)*(pow(a,3)))+((a)*((r)*(((-541)*(M))+((65)*(r)))))))+((2.22222222222222222222222222222)*(((152)*(pow(a,3)))+((a)*((r)*(((-1363)*(M))+((152)*(r)))))))))))))));
} else {
coeffs[886] = ((1.14257812500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((23)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-246)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((966)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-1765)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((1507)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-484)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((-25)*(M))+(r)))))*(expr[1])))+(((4)*((((31)*(pow(a,3)))+((a)*((r)*(((-431)*(M))+((31)*(r))))))*(expr[2])))+(((((-692)*(pow(a,3)))+((4)*((a)*((((1795)*(M))+((-173)*(r)))*(r)))))*(expr[3]))+(((10)*((((152)*(pow(a,3)))+((a)*((r)*(((-1363)*(M))+((152)*(r))))))*(expr[4])))+(((-22)*((((65)*(pow(a,3)))+((a)*((r)*(((-541)*(M))+((65)*(r))))))*(expr[5])))+((484)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_887(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[887] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[887] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-70)*(expr[2]))+(((168)*(expr[3]))+((-99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_888(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[888] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[888] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-60)*(expr[1]))+(((350)*(expr[2]))+(((-588)*(expr[3]))+((297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_889(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[889] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[889] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-126)*(expr[1]))+(((1050)*(expr[2]))+(((-2912)*(expr[3]))+(((3375)*(expr[4]))+((-1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_890(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[890] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[890] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_891(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[891] = ((0.126953125000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(15.7538461538461538461538461538));
} else {
coeffs[891] = ((0.126953125000000000000000000000)*(((-1)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((18)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-42)*((M)*(pow(r,3))))+((21)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((324)*(expr[1]))+(((-3811)*(expr[2]))+(((16464)*(expr[3]))+(((-32085)*(expr[4]))+(((28908)*(expr[5]))+((-9801)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_892(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[892] = ((0.126953125000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-15.7538461538461538461538461538));
} else {
coeffs[892] = ((0.126953125000000000000000000000)*((r)*(((pow(a,2))+((-1)*(pow(r,2))))*(((-1)*(pow(a,2)))+(((M)*(r))+((-1)*(pow(r,2)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-324)*(expr[1]))+(((3811)*(expr[2]))+(((-16464)*(expr[3]))+(((32085)*(expr[4]))+(((-28908)*(expr[5]))+((9801)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_893(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[893] = ((0.126953125000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-13.7538461538461538461538461538)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-1005.23076923076923076923076923)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((38)*(pow(a,3)))+((2)*((a)*((r)*(((-686)*(M))+((19)*(r))))))))+(((36)*(((85)*(pow(a,3)))+((a)*((r)*(((-754)*(M))+((85)*(r)))))))+(((-13.3333333333333333333333333333)*(((257)*(pow(a,3)))+((a)*((r)*(((-2653)*(M))+((257)*(r)))))))+(((-0.800000000000000000000000000000)*((a)*(((463)*(pow(a,2)))+((r)*(((-8548)*(M))+((463)*(r)))))))+((3.42857142857142857142857142857)*(((501)*(pow(a,3)))+((a)*((r)*(((-6490)*(M))+((501)*(r)))))))))))))));
} else {
coeffs[893] = ((0.126953125000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-324)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((3811)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-16464)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((32085)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-28908)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((9801)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((((38)*(pow(a,3)))+((2)*((a)*((r)*(((-686)*(M))+((19)*(r)))))))*(expr[1]))+(((-2)*((a)*((((463)*(pow(a,2)))+((r)*(((-8548)*(M))+((463)*(r)))))*(expr[2]))))+(((12)*((((501)*(pow(a,3)))+((a)*((r)*(((-6490)*(M))+((501)*(r))))))*(expr[3])))+(((-60)*((((257)*(pow(a,3)))+((a)*((r)*(((-2653)*(M))+((257)*(r))))))*(expr[4])))+(((198)*((((85)*(pow(a,3)))+((a)*((r)*(((-754)*(M))+((85)*(r))))))*(expr[5])))+((-6534)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_894(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[894] = ((0.0156250000000000000000000000000)*((6.24499799839839820584689312094)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[894] = ((0.0156250000000000000000000000000)*((6.24499799839839820584689312094)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-105)*(expr[1]))+(((315)*(expr[2]))+((-231)*(expr[3]))))));
}
}

void compute_coeffs_scalar_895(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[895] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[895] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-105)*(expr[1]))+(((455)*(expr[2]))+(((-735)*(expr[3]))+((396)*(expr[4])))))));
}
}

void compute_coeffs_scalar_896(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[896] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[896] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((180)*(expr[1]))+(((-1190)*(expr[2]))+(((2436)*(expr[3]))+((-1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_897(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[897] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[897] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-15)*(expr[0]))+(((420)*(expr[1]))+(((-3570)*(expr[2]))+(((10780)*(expr[3]))+(((-13095)*(expr[4]))+((5544)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_898(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[898] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[898] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-315)*(expr[1]))+(((3290)*(expr[2]))+(((-11550)*(expr[3]))+(((16065)*(expr[4]))+((-7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_899(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[899] = ((0.0253906250000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(39.3846153846153846153846153846));
} else {
coeffs[899] = ((0.0253906250000000000000000000000)*(((-2)*(pow(a,4)))+(((4)*((pow(a,2))*((M)*(r))))+(((39)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-84)*((M)*(pow(r,3))))+((42)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((25)*(expr[0]))+(((-975)*(expr[1]))+(((12550)*(expr[2]))+(((-57750)*(expr[3]))+(((118845)*(expr[4]))+(((-111771)*(expr[5]))+((39204)*(expr[6])))))))));
}
}

}
