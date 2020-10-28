\documentclass[conference]{IEEEtran}
\IEEEoverridecommandlockouts
% The preceding line is only needed to identify funding in the first footnote. If that is unneeded, please comment it out.
\usepackage{cite}
\usepackage{amsmath,amssymb,amsfonts}
\usepackage{algorithmic}
\usepackage{graphicx}
\usepackage{textcomp}
\usepackage{xcolor}

%\usepackage[utf8]{inputenc}
\def\BibTeX{{\rm B\kern-.05em{\sc i\kern-.025em b}\kern-.08em
    T\kern-.1667em\lower.7ex\hbox{E}\kern-.125emX}}
\begin{document}

\title{Cloud Security Challenges and Risks
}

\author{\
\IEEEauthorblockN{Pavankumar Talluri,}
\IEEEauthorblockA{\textit{Dept. of Computer Engineering ,} \\
\textit{NIT Kurukshetra,}\\
Haryana, India \\
pavant2311@gmail.com}
}

\maketitle

\begin{abstract}
Distributed computing heads towards first among the best most created innovations and with a superior scene in progressive years by organizations and associations.This paper profoundly examinations the Cloud Computing security perils in layer insightful, for example,Service layer organize layer,stockpiling layer and organization models,for example, Public, Private and Hybrid cloud situations. In this examination the conventional and affirmed security arrangements were talked about and its technique assessing parameters are meant here. In this paper new proposition for all the cloud layers issues will deal with in single bundle of arrangement is examined.. 

Distributed computing heads towards first among the best most created advances and with a superior display in progressive years by organizations and organizations.The fundamental goal of the distributed computing is that the clients use and pay just for what they need. In any case, as increasingly more data of people and organizations are set in the cloud server farms, the inquiries emerge with respect to the well being and security of cloud condition. Distributed computing can be effectively focused by assailants.

\end{abstract}

\begin{IEEEkeywords}
Cloud-Security , Cloud Challenges, Cloud Risks
\end{IEEEkeywords}

\section{INTRODUCTION}
A model for enabling ubiquitous, convenient, on-demand network access to a shared pool of configurable computing resources (e.g., servers, storage, networks, applications and services) that can be rapidly provisioned and released with minimal management effort or service provider interaction.
Web Services [2] are a key technology to implement Service-Oriented Architectures . Initially used to facilitate Enterprise Application Integration, Web Services evolved—also with the emerging of Web Service Security specifications to a widely-deployed technology outside of organizational boundaries for cross domain federation as well as service provisioning to external partners. The importance of Web Services is becoming more and more visible due to its steadily increasing adoption in commercial settings. One prominent example is Amazon’s Elastic Compute Cloud  which uses Web Services to make compute and storage infrastructure accessible as a service.
To protect against the aforementioned XML wrapping attacks, careful SOAP message security validation is vital. However, it is more than obvious that this is not a straightforward task. Even carefully designed and implemented commercial environments are not necessarily well protected against these kinds of attacks. We found, for example, that the Amazon Elastic Compute Cloud (EC2) had weaknesses in the SOAP request validation component and thus allowed to take unprivileged actions in the Cloud on a victim’s.

\subsection{Cloud security Risks.}
“Is a software system for interoperable machine  to machine communication”
“Is a client server application or application component for communication”
“Method of communication between devices over a network”

To understand the vulnerability, a basic understanding about Amazon’s EC2 is required . After registering for Amazon Web Services  auser has two choices for using asymmetric signing mechanisms  they can either (1) request that aself-signed certificate and RSA private key be generated for them for convenience,they can register a public certificate of their choice with AWS. In either case, once a user has established a certificate it is used to sign the SOAP requests originated to the EC2.In order to interact with the Cloud, Amazon provides command line tools which provide the fundamental functionality to search for virtual machine images , to run a certain number of AMI instances, to monitor the own instances and to terminate them.

Existing Web Services might be able to respond to such information needs. However existing web services are black boxes which have been hard-coded in the sense that they have been written once and for all in a given language. In order to be able to respond to a wide variety of information needs one needs flexibility. Building a specific service responding to a specific need should be made easy. This can be done by decomposing an information extraction task into smaller simple tasks which can easily be automated. Existing research on Web Services has considered the problem of composing Web Services together . In the case of information extraction tasks, however, there is a need to be able to compose with specific components which are not only Web Services, for example wrappers for accessing data sources which do not provide Web Services.
In this paper we will show how to decompose an information extraction task and build a new web service from it.We will also see that accessing a Web Service can be only part of an information extraction task. A set of basic information extraction operators are described. Their composition enables to build many realistic information extraction task as will be shown by the given examples
\subsection{Advantages of Cloud Computing}
Scalable 
Availability, Disaster recovery.
Reduce maintenance and Management cost
Can be used from anywhere
No installation
Mobility, Flexibility
Instant software updates
Improved document compatibility
Device independence
\subsection{Delivery models and Deployment models}
\begin{itemize}
    \item SaaS
    \item PaaS
    \item IaaS
\end{itemize}
\begin{itemize}
    \item Public Cloud
    \item Private Cloud
    \item Hybrid Cloud
    \item Community Cloud
\end{itemize}


\subsection{Types of Bio metric identification}
\begin{itemize}

\item Iris recognition
\item Facial recognition
\item Fingerprint
\item Finger vein recognition
\item Signature recognition [ Behavioral ]
\item DNA profiling
\item Voice recognition

\end{itemize}

\subsection{Top 5-Challenges}
Here is a list of top five Challenges in cloud computing.
\begin{itemize}
\item Data access from MOBILE DEVICES
\item  ACCESS CONTROL and IDENTITY MANAGEMENT
\item Ongoing COMPLIANCE concern
\item Co-mingling of CUSTOMER DATA
\item Security STANDARDS & CERTIFICATIONS

\end{itemize}

\section{RELATED WORK}

%\subsection{Maintaining the Integrity of the Specifications}

In  the authors demonstrated that the state of the art solutions are not addressing all forms of wrapping-attacks and presented some ideas to fix the issue. However, they do not present a complete working solution. A similar work, called Rewriting Healer, is conducted in  where authors extend the inline approach by proposing to take into account new characteristics of SOAP message such as the depth of information and parent elements of the signed node as well as a way uniquely identify the parents elements. While this extension provides a significant improvement, it is still vulnerable. This is because one can move the signed element together with its parent to somewhere so that the depth of signed element is not changed. In  authors proposed to use a new header in SOAP message containing the signed elements positions in the message. This header is added to the SOAP message after the detection of signed elements positions located in the Document Object Model  tree. While it looks an appropriate way to detect wrapping-attacks, it still does not have a solution for recovering task. In , we demonstrated that above mentioned methods  cannot address all type of wrapping-attacks and proposed an approach called Bit Stream. It works based on the importance of SOAP elements and detects the vulnerabilities and risks, while offering advice for higher security. However, as one of the common types of wrapping attacks is injecting false data into SOAP messages, it is important not only to detect the attacks, but also to recover from them. Current paper mainly reflects future directions of our previous research and enhances it by improved detection and log-based recovery mechanism. 
An important prerequisite for policy validation is using a security policy, that has been verified to be safe against wrapping attacks. For example, the methods and tools proposed in [8] can be used to ensure this property. As shown before, the Amazon security policy fullfills this requirement. However,obviously the process of checking the policy can still be weak.
The diagnostics module represents the most important component of our system. It resides on the receiver side and is in charge to monitor the incoming message, detect all the security threats, and generate security report. Thus, any legitimate receiver of the message complying with our approach, as soon as message arrives, builds ontology of SOAP elements structure information of the received message, extract and compares it with the attached structure information. If the attacker modifies the SOAP message,it is detected by observing the change of the relationship of the signed elements. The differences of these ontology's are reflected in security report.
\subsection{Security Issues in Cloud}
\begin{itemize}
    \item Loss Of Control:    Consumer’s loss of control:Data, applications, resources are located with provider User identity management is handled by the cloud User access control rules, security policies and enforcement are managed by the cloud provider Consumer relies on provider to ensure Data security and privacy Resource availability Monitoring and repairing of services/resources
    \item Lack Of Trust:A brief deviation from the talk (But still related) Trusting a third party requires taking risks
Defining trust and risk Opposite sides of the same coin (J. Camp) People only trust when it pays (Economist’s view) Need for trust arises only in risky situations  Defunct third party management schemes Hard to balance trust and risk e.g. Key Escrow (Clipper chip)Is the cloud headed toward the same path?
\item Multi-Tenacy:Conflict between tenants’ opposing goals Tenants share a pool of resources and have opposing goals How does multi-tenancy deal with conflict of interest? Can tenants get along together and ‘play nicely’ ? If they can’t, can we isolate them? How to provide separation between tenants?
\end{itemize}
\subsection{Disadvantages Of Cloud Computing}
\begin{itemize}
    \item Availability
\item Proprietary interfaces
\item Bandwidth
\item Data formats and technologies
\item Susceptible to security threats
\item Usability
\item Data Security
\end{itemize}

\section{THREATS IN CLOUD COMPUTING AND THEIR SOLUTIONS}
Here their presenting solutions to the some of the Risks  : 

\begin{itemize}
\item Simple Ancestry Context Attack
\item Optional Element Context Attack
\item Sibling Value Context Attack
\item Sibling Order Ancestry Context Attack

\end{itemize}

\begin{figure}[h!]
\centerline{\includegraphics[width=250 pt]{f1.png}}
\caption{Simple Ancestry Context Attack .}
\label{fig}
\end{figure}

\subsection{Signature Wrapping Attack}
SOAP is a protocol.SOAP uses services interfaces to expose the business logic.JAX-WS is the java API for SOAP web services.SOAP defines standards to be strictly followed.SOAP requires more bandwidth and resource than REST.SOAP defines its own security.SOAP permits XML data format only.



\begin{figure}[h!]
\centerline{\includegraphics[width=150 pt]{2.jpg}}
\caption{A finger vein scanner set up [30]}
\label{fig}
\end{figure}

\subsection{Finger Region Extraction}
The Finger region extraction i.e ROI (Region of Interest) from the finger vein image is taken out. The ROI is obtained by thresholding the image. The multidimensional filtering is completed for thresholding. The ROI extracted image is acquired by convolving the resized and thresholded image. The ROI extracted image is shown in fig.3.

\begin{figure}[h!]
\centerline{\includegraphics[width=150 pt]{3.jpg}}
\caption{(a) Original Finger vein image (b)Binary Image [31]}
\label{fig}
\end{figure}

Algorithm:

1) Assuming the mask of size 4×20 where height(h)=4 and
width(w)=20.

2) Determine the lower half starting point.

3) Construct the mask for filtering of size 4×20 consisting
initially all zeros. Fill the upper half part of mask by -1 and
lower half part by 1.

4) Filter the image using mask.

5) Apply the mask on the border of image. Fill the maximum
of the upper half of image and the minimum of the lower
half of the image by 1.

6) Fill the region between upper and lower edges with 0.




\subsection{Preprocessing}
In the image preprocessing the image enhancement is completed by certain image resizing rule in order to induce the finger vein patterns to be visible properly. 1st the initial image is resize to one-fourth of its original size as shown in fig.4 and once more it is restore back to original. again the restored image is resize to one-third of its size as shown in fig.5.

\begin{figure}[h!]
\centerline{\includegraphics[width=150 pt]{4a.jpg}}
\caption{Resizing original image to one-fourth [31]}
\label{fig}
\end{figure}

\begin{figure}[h!]
\centerline{\includegraphics[width=150 pt]{5a.jpg}}
\caption{Resizing the restored image to one-third [31]}
\label{fig}
\end{figure}


\subsection{Feature Extraction}
The feature extraction is most important step in the recognition
process. In the finger vein recognition system the
important features are texture and edges. The algorithms used
for texture extraction is Fractal Dimension and Lacunae and
for extracting edges the Gabor filter is used.

a) Fractal Dimension: Fractals are irregular geometric
objects or surface that have same degree of irregularity on
all scale. Dimension is a measurable extent of particular kind
such as length, breadth, depth or height. In mathematics fractal
dimension is defined as an index for characterizing fractal
patterns or set by quantifying their complexity as the ratio
of the change in detail to change in scale.

Here the 3-D box counting method is used for calculating
fractal dimension. In the 3D box counting method an image
is considered as 3-D spatial surface with (x,y) denoting the
pixel position and the third co-ordinate (z) denoting the pixel
intensity or grey level. In this approach the fractal object is
first divided into boxes or grids at scale r and the  \[ N_r \] of boxes need to completely cover the fractal objects to be counted.The
fractal image is shown in fig.6.

\begin{figure}[h!]
\centerline{\includegraphics[width=200 pt]{6.jpg}}
\caption{Fractal image [31]}
\label{fig}
\end{figure}

The procedure is repeated for several scales and the fractal
dimension (FD) is calculated from relation

\begin{figure}[h!]
\centerline{\includegraphics[width=150 pt]{a.jpg}}
\label{fig}
\end{figure}

b) Lacunae: Lacunae is an unfilled space or a gap.It is
a measure for varying intensity from point to point. In some
cases visually different images can have same values of fractal
dimensions so the lacunarity can be used for distinguishing
such images.

c) Gabor Filter: In the finger vein recognition it is important
to detect the veins which can be possible by extraction
of edges. The edges are nothing but sharp transition of pixels.
A gabor filter is obtained by modulation of a sinusoidal signal
with a Gaussian. Let \[g(x, y,\theta,\phi)\] be the function defining a Gabor filter centered at the origin with theta as the spatial frequency and phi as the orientation. The Gabor filter can
be viewed as :
\begin{figure}[h!]
\centerline{\includegraphics[width=250 pt]{b.jpg}}
\label{fig}
\end{figure}

\subsection{Matching}

The matching is same as classification. The matching is
done using the distance classifier which is simply the difference
between features of different or same images of finger
vein and the difference is compared with the threshold value. If
the difference is less than or equal to threshold then the images
are likely to be matched and if it is greater than threshold
then it is not the image of the same personality. The features
fractal dimensions, lacunae and gabor features are used for
matching.
\[ HD=\sum_{i,j} FD1_{i,j} - FD1_{i,j}  \]

\section{Experimental Results}

The experimental results are computed on the basis of the
average feature values of the individual. Large database is used
for the recognition system and from that only for 5 person
(5 finger vein images per person)the computation is shown in
fig.7. The classification of different users is done using the
features such as mean, standard deviation, skewness, kurtosis,
median, mode, range for fractal dimension and gabor filter
(real and imaginary values). From these features the kurtosis,
range shows large variation compared to others.From the table.I the
parameters showing large variation is as follows:

FD(Kurtosis)=(10.54259028 14.6580006 14.20246235
17.2141378 15.49500401).

GFR(Kurtosis)=(4.036241412 4.702987293 6.398727002
18.6784183 2.726511728).

GFR(Range)=(986.6545421 852.9517985 769.7700134
668.5760996 711.0512465).

GFI(Kurtosis)=(4.043118589 4.483869214 6.940227265
19.70379864 2.741292834).

GFI(Range)=(579.0837223 500.6113907 451.7906376
392.398271 417.4526049.)

\begin{table}
\caption{Feature Vector for 5 persons}
\label{Table}
\setlength{\tabcolsep}{4pt} %% default is 6pt
\begin{tabular}{|l|l|l|l|l|l|}
\hline
\multicolumn{1}{|c|}{\textbf{Features}} & \multicolumn{1}{c|}{\textbf{Person1}} & \multicolumn{1}{c|}{\textbf{Person2}} & \multicolumn{1}{c|}{\textbf{Person3}} & \multicolumn{1}{c|}{\textbf{Person4}} & \multicolumn{1}{c|}{\textbf{Person5}} \\ \hline
\textbf{FD(Mean)}                       & 1.8056                                & 1.7952                                & 1.7990                                & 1.8111                                & 1.8109                                \\ \hline
\textbf{FD(SD)}                         & 0.4631                                & 0.4221                                & 0.3944                                & 0.3707                                & 0.4179                                \\ \hline
\textbf{FD(Skewness)}                   & 2.9124                                & 4.6806                                & 4.3936                                & 3.9722                                & 4.3282                                \\ \hline
\textbf{FD(Skewness)}                   & 2.9124                                & 4.6806                                & 4.3936                                & 3.9722                                & 4.3282                                \\ \hline
\textbf{FD(Kurtosis)}                   & 10.5425                               & 14.655                                & 14.2024                               & 17.2141                               & 15.495                                \\ \hline
\textbf{FD(Median)}                     & 1.9243                                & 1.9243                                & 1.9243                                & 1.9243                                & 1.9243                                \\ \hline
\textbf{FD(Mode)}                       & 1.9243                                & 1.9243                                & 1.9243                                & 1.9243                                & 1.9243                                \\ \hline
\textbf{FD(Range)}                      & 0.7693                                & 0.6563                                & 0.8141                                & 0.7490                                & 0.6221                                \\ \hline
\textbf{GFR(Mean)}                      & 3.5180                                & 2.8906                                & 2.4724                                & 7.8295                                & 2.5333                                \\ \hline
\textbf{GFR(SD)}                        & 43.2925                               & 43.1137                               & 39.3377                               & 34.1658                               & 35.2346                               \\ \hline
\textbf{GFR(Skewness)}                  & -1.444                                & -0.6518                               & 0.1268                                & -0.6295                               & -0.6915                               \\ \hline
\textbf{GFR(Skewness)}                  & -1.444                                & -0.6518                               & 0.1268                                & -0.6295                               & -0.6915                               \\ \hline
\textbf{GFR(Kurtosis)}                  & 4.0362                                & 4.7029                                & 6.3987                                & 18.6784                               & 2.7265                                \\ \hline
\textbf{GFR(Median)}                    & 0.1204                                & 0                                     & 0                                     & 0                                     & 0                                     \\ \hline
\textbf{GFR(Mode)}                      & 0                                     & 0                                     & 0                                     & 0                                     & 0                                     \\ \hline
\textbf{GFR(Range)}                     & 956.6435                              & 852.9555                              & 769.77                                & 663.5761                              & 711.0512                              \\ \hline
\textbf{GFI(Mean)}                      & -1.4639                               & -1.2028                               & -1.0287                               & -0.7612                               & -1.0541                               \\ \hline
\textbf{GFI(SD)}                        & 28.1146                               & 27.5569                               & 25.0976                               & 21.9137                               & 22.8661                               \\ \hline
\textbf{GFI(Skewness)}                  & 1.2220                                & 0.8931                                & 0.0577                                & 1.1572                                & 0.7511                                \\ \hline
\textbf{GFI(Skewness)}                  & 1.2220                                & 0.8931                                & 0.0577                                & 1.1572                                & 0.7511                                \\ \hline
\textbf{GFI(Kurtosis)}                  & 4.0431                                & 4.4838                                & 6.9402                                & 19.7033                               & 2.7412                                \\ \hline
\textbf{GFI(Median)}                    & 0                                     & 0                                     & 0                                     & 0                                     & 0                                     \\ \hline
\textbf{GFI(Mode)}                      & 0                                     & 0                                     & 0                                     & 0                                     & 0                                     \\ \hline
\textbf{GFI(Range)}                     & 579.0837                              & 500.6114                              & 451.7906                              & 392.3983                              & 417.4526                              \\ \hline
\end{tabular}
\end{table}

\begin{figure}[h!]
\centerline{\includegraphics[width=250 pt]{c.jpg}}
\caption{Graphical representation of features}
\label{fig}
\end{figure}

\subsection*{FAR vs FRR}

False Acceptance rate (FAR)
\[
FAR= \frac{No. of Successful Independent fraud attempts}{No. of all Independent fraud attempts}\]

False Rejection Rate (FRR)
\[
FAR= \frac{No. of rejected verification attempts}{No. of all verification attempts}\]

The metrics used for evaluation are False Acceptance rate (FAR) and False Rejection Rate (FRR). The FRR is the frequency that an authorized person is rejected access. The finger vein recognition was carried out with 100 images taken from the database. The users are grouped into ten users and the results are tabulated for FAR and FRR. Table I shows the resulted (FRR) . From the result, as shown in Figure 8 it can be observed that the proposed technique results in lesser False Rejection Rate when compared to the existing techniques.


\begin{table}[h!]
\caption{FAR and FRR Values}
\label{Table}
\centering
\begin{tabular}{|c|c|c|}
\hline
\textbf{Number of Users} & \textbf{FAR} & \textbf{FRR} \\ \hline
1-10                     & 7.98         & 9.86         \\ \hline
11-20                    & 7.8          & 8.98         \\ \hline
21-30                    & 7.2          & 9.65         \\ \hline
31-40                    & 7.3          & 9.5          \\ \hline
41-50                    & 7.88         & 9.2          \\ \hline
51-60                    & 7.9          & 9.9          \\ \hline
61-70                    & 8.1          & 9.87          \\ \hline
71-80                    & 7.75         & 9.9          \\ \hline
81-90                    & 7.8          & 9.82         \\ \hline
91-100                   & 7.5          & 9.85         \\ \hline
\end{tabular}
\end{table}

\begin{figure}[h!]
\centerline{\includegraphics[width=250 pt]{t.jpg}}
\caption{FAR \& FRR}
\label{fig}
\end{figure}



\section{CONCLUSION}
The finger region is extracted using multidimensional filter. The pre-processing is performed using image enhancement. The feature extraction techniques fractal dimension, lacuna and gabor features gives the better outcome together. 
Simply using single feature leads to more error rate. The experimental results based on the analysis of feature parameters reveals that the classification or recognition can be easier using the feature parameters like kurtosis, range. 
The finger vein recognition requires low resolution and the error rate is also less. 
In future this system can be implemented with more different features with high security and less verification time.









\begin{thebibliography}{00}
\bibitem{b1} Encyclopedia of Biometrics, Stan Z. Li (Ed.), Springer, 2009.
\bibitem{b2} E. C. Lee and K. R. Park, “Restoration method of skin scattering blurred vein image for finger vein recognition,”Electronics Letters, vol. 45, no. 21, Oct. 2009.
\bibitem{b3} J.-D. Wu and S.-H. Ye, “Driver identification using finger-vein patterns with Radon transform and neural network,”Expert Sys. And Appl., vol. 36, pp. 5793-5799, 2009.
\bibitem{b4} Z. Zhang, S. Ma, and X. Han, “Multiscale feature extraction of finger-vein patterns based on curvelets and local interconnection structure neural network,” Proc. ICPR, Hong Kong, 2006.
\bibitem{b5} N. Miura, A. Nagasaka, and T. Miyatake, “Feature extraction of finger-vein patterns based on repeated line tracking and its application to personal identification,” Machine Vis.& Appl. pp. 194-203, Jul., 2004.
\bibitem{b6} N. Miura, A. Nagasaka, and T. Miyatake, “Extraction of finger-vein patterns using maximum curvature points in image profiles,” Proc. IAPR Conf. Machine Vis. & Appl. pp. 347-350, Tsukuba Science City, May 2005.
\bibitem{b7} M. Kono, H. Ueki, and S. Umemura, “Near-infrared finger vein patterns for personal identification,” Applied Optics, vol. 41, no. 35, pp. 7429-7436, Dec. 2002.
\bibitem{b8} J. Hashimoto, “Finger Vein Authentication Technology and Its Future,” Proc. Symp. VLSI Circuits, Digest of Technical Papers, pp. 5-8, Honolulu, 2006.
\bibitem{b9} D. Mulyono, and H. S. Jinn, “A Study of Finger Vein Biometric for Personal Identification,” Proc. Int. Symp. 
\bibitem{b10} A. K. Jain, Y. Chen and M. Demirkus, “Pores and Ridges: High resolution fingerprint matching using level 3 features,” IEEE Trans. Pattern Anal. Mach. Intell., vol. 29, pp. 15-27, Jan. 2007.
\bibitem{b11} A. K. Jain and J. Feng, “Latent palmprint matching,” IEEE Trans. Pattern Anal. Mach. Intell., vol. 31, June, 2009.
\bibitem{b12} L. Wang, G. Leedham and S.-Y. Cho, “Minutiae feature analysis for infrared hand vein pattern biometrics,” Pattern Recognition, vol. 41, pp. 920-929, 2008.
\bibitem{b13} J.-G. Wang, W.-Y. Yau, A. Suwandy and E. Sung, “Person recognition by palmprint and palm vein images based on ‘Laplacianpalm’ representation,” Pattern Recognition, vol. 41, pp. 1531-1544, 2008.
\bibitem{b14} K. Venkataramani, S. Qidwai, and B.V. K. Vijayakumar, “Face authentication from cell phone camera images with illumination and temporal variations,” IEEE Trans. SMC, Part C, pp. 411 – 418, vol. 35, 2005.
\bibitem{b15} O. Arandjelović and R. Cipolla, “A manifold approach to face recognition from low quality video across illumination and pose using implicit super-resolution,” Proc. ICCV 2007, Sep. 2007
\bibitem{b16} Zhi Liu and Shangling Song, “An Embedded Real Time Finger Vein Recognition System For Mobile Devices”, IEEE Transactions on Consumer Electronics, Vol. 58, No. 2, pp. 522-527, May 2012.
\bibitem{b17} Ajay Kumar, Yingbho zhou, “Human Identification Using Finger Images”, IEEE Transactions on Image Processing, Vol. 21, NO. 4, pp.2228-2244, April 2012.
\bibitem{b18} Zhi Liu, YilongYin, HongjunWanga, ShanglingSong, QingliLi, “Finger vein recognition with manifold learning”, Journal of Network and Computer Applications, 33 (2010) 275282
\bibitem{b19} Desong Wang, Jianping Li and Gokhan Memik, “User Identification Based on Finger-vein Patterns for Consumer Electronics Devices, IEEE Transaction on Consumer Electronics, Vol.56, No.2, pp.799-804, May 2010.
\bibitem{b20} Wonseok Song, Taejeong Kim, Hee Chan Kim, Joon Hwan Choi, HyounJoong Kong, Seung-Rae Lee, “A finger-vein verification system using mean curvature”, Pattern Recognition Letters, 32, pp. 15411547, 2011.
\bibitem{b21} D. Zhang and A. Kumar, “Personal recognition using hand-shape and texture,” IEEE Trans. Image Processing, vol. 15, no. 8, pp. 2454–2461, 2006.
\bibitem{b22} N. Miura, A. Nagasaki, and T. Miyatake, “Feature extraction of finger vein patterns based on repeated line tracking and its application to personal identification,” Mach. Vis. Appl., vol. 15, no., pp. 194–203, 2004.
\bibitem{b23} N. Miura, A. Nagasaki, and T. Miyatake, “Extraction of finger-vein patterns using maximum curvature points in image profiles,” in Proc. IAPR Conf. Mach. Vis. Appl., Tsukuba Science City, Japan, pp. 347–350, 2005.
\bibitem{b24} H. Kiyomizu, N. Miura, T. Miyatake, and A. Nagasaki, “Finger vein authentication device,” U.S. Patent 20 100 098 304 A1.
\bibitem{b25} Rosdi BA, Shing CW, Suandi SA, “Finger vein recognition using Local Line Binary Pattern,” Sensors (Basel), vol. 12, pp.11357-71, 2011.
\bibitem{b26} Xiaoming Xi, Gongping Yang, Yilong Yin, and Lu Yang, “Finger vein recognition based on the hyper information feature” Optical Engineering, vol. 53, pp.0131081-10, 2014.
\bibitem{b27} J.D.Wu and S.-H. Yen, “Driver identification using finger-vein patterns with Radon transform and neural network,” Expert Sys. And Applications, vol. 36, no. 3, pp. 5793–5799, 2009.
\bibitem{b28} Z. Zhang, S. Ma, and X. Han, “Multi-scale feature extraction of finger vein patterns based on curve lets and local interconnection structure neural network,” ICPR, Hong Kong, pp. 145–148, 2006.
\bibitem{b29} E. C. Lee and K. R. Park, “Restoration method of skin scattering blurred vein image for finger vein recognition,” Electron. Lett, vol. 45, no. 21, pp. 1074–1076, 2009.
\bibitem{b30} www.hitachi-ics.co.jp.
\bibitem{b31} Qingchang Guo, Bing qiao, “Research On The Finger Vein Image Capture And Finger Edge Extraction”, International Conference on Mechatronics and Automation, 2017.
\bibitem{b32} M. Sapkale, S. M. Rajbhoj, "A biometric authentication system based on finger vein recognition", International Conference on Inventive Computation Technologies (ICICT), 2016.
\bibitem{b33} S Brindha, “Finger Vein Recognition”, International Research Journal of Engineering and Technology (IRJET), Volume: 04 Issue: 04 | Apr -2017.
\bibitem{b34} Shaila. S.G, V. Suma Avani, Rashmi, Vadivel. A,”Finger Vein and Finger Texture based Biometric approach for Personal Identification”, International Conference on Inventive Computing and Informatics (ICICI), 2017.
\end{thebibliography}


\end{document}