      H  *�        _���         ]1         :   arch  � YI        !  q  A  Bi  '  *�  .�  J9  ��  ��  �a S� �� �y :Q Q� aa x� �q �A �� �i �� ֑ � ��  @	 S� g z� �� ��   Z     Y  #)  >�  2�  N!  ��  ��  �I W� �� �a >9 U� eI |� �Y �) �� �Q ҩ �y �� � � C� Wy k ~� �� �� )       	 (� 0i <! O� c1 v� �� �	 Ua  �       �  �     YI     v  ��          Y     :   CLK  Y  �     p     q     �  �      �     :   RST  #)  �     p     A     �  �      �     -   wait_for_start_signal  2�      �     -   signal_received  2�     �     -   	work_done  2�     �     ,   !  '  Bi  �       Bi     '  *�  .�             .  6�  >�     |   !  Bi  :�  �     :   
state_type  >�  �     v  Bi          N!     :   state  N!  �     p   &  J9     FQ  '      �          e�  }         iy  ��          ��     @   ?  Y�     ' Q4     U�  ]�      a�     @      Y�     v  �[     Y�      iy     :   	data_full  iy  R	     p   *  e�      a�          R	     @     qI     ' Q4     ma  u1      y     @      qI     v  �[     qI      ��     :   data_sub  ��  R	     p   +  }     y          R	     :   subsample64to1  ��  �        (  ��  R	  �          ��  ��         �q  ��          ��     :   sub  �q  ��     p   1  ��      �          ��     @   ?  �A     ' Q4     �Y  �)      �     @      �A     v  �[     �A      ��     :   full  ��  ��     p   2  ��     �          ��     :   upsample1to64  ��  �        /  ��  ��  �          �!  �         �	  �y          �I     @     �i     ' Q4     ��  �Q      �9     @      �i     v  �[     �i      �	     :   sub  �	  ��     p   8  �!      �9          ��     @   ?  ��     ' Q4     ��  ��      ީ     @      ��     v  �[     ��      �y     :   full  �y  ��     p   9  �     ީ          ��     :   upsample3_64  �I  �        6  �a  ��  �          �  �� � ) $� ,� D9 L	         � � 	� ! (� 0� H! O�         W�     :   
i_rst_sync  �  �1     p   C  �      �          �1     :   i_clk �  �1     p   D  ��      �          �1     :   i_wr_en 	�  �1     p   G �      �          �1     @    q     ' Q4    � Y     A     @     q     v  �[    q     !     :   	i_wr_data !  �1     p   H )     A          �1     :   o_full (�  �1     p   J $�     �          �1     :   i_rd_en 0�  �1     p   M ,�      �          �1     @    8�     ' Q4    4� <i     @Q     @     8�     v  �[    8�     H!     :   	o_rd_data H!  �1     p   N D9    @Q          �1     :   o_empty O�  �1     p   P L	     �          �1     :   	fifo_regs W�  �        = S�  �1  �         _� w ~�        cy z� ��         ��     :   clka cy [�     p   V _�      �         [�     @    kI     ' Q4    ga o1     s     @     kI     v  �[    kI     z�     :   addra z� [�     p   W w     s         [�     :   douta �� [�     p   X ~�     �         [�     :   memory ��  �        T �� [�  �         �Y �� �� �	 �� ة        �A �� �� �� �� ܑ         �a     :   weights �A �q     p   ^ �Y      �         �q     @    �     ' Q4    �) ��     ��     @     �     v  �[    �     ��     :   data_in �� �q     p   _ ��     ��         �q     :   calc_pos �� �q     p   c ��      �         �q     @   	 �Q     ' Q4    �i �9     �!     @     �Q     v  �[    �Q     ��     :   
activation �� �q     p   d �	    �!         �q     :   clk_fc �� �q     p   e ��      �         �q     :   finish_calc ܑ �q     p   f ة     �         �q     :   fully_connected �a  �        \ �y �q  �         �1 � q "� *� 2�        � � Y &� .� 6i         >9     :   weights � �I     p   l �1      �         �I     @   	 ��     ' Q4    � ��     ��     @     ��     v  �[    ��     �     :   data_in � �I     p   m �     ��         �I     :   calc_pos Y �I     p   q q      �         �I     @    )     ' Q4    A      �     @     )     v  �[    )     &�     :   
activation &� �I     p   r "�    �         �I     :   clk_fc .� �I     p   s *�      �         �I     :   finish_calc 6i �I     p   t 2�     �         �I     :   output_layer >9  �        j :Q �I  �     @    F	     ' Q4    B! I�     M�     @     F	     v  �[    F	     U�     :   sub2fifo_data U�  �     p   y Q�    M� ]y      �     
    F	  � ]y      M�    Y� U�     :   fifo2up_buf eI  �     p   z aa     �  �      �     @    m     ' Q4    i1 q     t�     @     m     v  �[    m     |�     :   fifo2fc |�  �     p   { x�    t� ��      �     
    m  � ��      t�    �� |�     :   fc22up1_64_res �Y  �     p   | �q     �  �      �     :   
calc_start �)  �     p   } �A     �  �      �     @    ��     ' Q4    � ��     ��     @     ��     v  �[    ��     ��     s   0000  �[ ��     :   counter1 ��  �     p   ~ ��    �� ��      �     :   w1 �Q  �     p    �i     �  �      �     @    �!     ' Q4    �9 �	     ��     @     �!     v  �[    �!     ҩ     s   0000  �[ ҩ     :   counter2 ҩ  �     p   � ��    �� ��      �     :   w2 �y  �     p   � ֑     �  �      �     @   	 �I     ' Q4    �a �1     �     @     �I     v  �[    �I     ��     :   fc12fc2_act ��  �     p   � �    � ��      �     
    �I  � ��      �    �� ��     :   fc12fc2_fin �  �     p   � ��     �  �      �     @    	Y     ' Q4    q A     )     @     	Y     v  �[    	Y     �     :   fc22up3_64_act �  �     p   �     )  �      �     
    	Y  �  �      )    � �     �  �r         (�        �     $�  q              �     �  �B         0i        �     ,�  A              �     \     e�  2� <!     \     } Q� <!        � @	  ��    4Q 89      �     :   sub C�  �     E   � @	 <!  �     \     �� aa O�     \     ��  a� O�        � S�  ��    G� K�      �     :   up_buf Wy  �     E   � S� O�  �     \     �� �q c1     \     ��  y c1        � g  ��    [a _I      �     :   up_res k  �     E   � g c1  �     \     �!  v�     \     �  J: v�        � z�  �a    n� r�      �     :   	up_output ~�  �     E   � z� v�  �     \    �Y �i ��     \    �� x� ��     \    �� �A ��     \    �	 � ��     \    ��  q ��     \    ة �� ��        � �� �y    �q �Y �A �) � ��      �     :   fc1 ��  �     E   � �� ��  �     \    �1 ֑ �	     \    � � �	     \    q �� �	     \    "�  �	     \    *�  q �	     \    2� �q �	        � �� :Q    �� �� �i �Q �9 �!      �     :   fc2 ��  �     E   � �� �	  �                         Qy Ua     S      A  C M�     �  C         �y     o   �     Б  ��         M�       ��     q  �\ �1     S      q  C �1     S ��    �a �I I�        �        � .Q E�  J9 I�     S      ��  C �     �  *�         ��     o   �     ��  J9         �     �  [         ��     o   �     �  ��         �     �  '         �q     o   �     ��  J9         Y     r          �<    �q �     v  ��         )     U          FS  FS  �� A  �     T   = )  �     r         �    �� �� �     <   �        � Y �          ' �     r         �    � �     �  .�         &�     o   �     "�  J9         .Q          *� .Q     r         *i    &� �     �  C         6!     o   �     29  ��         E�     �  '         =�     o   �     :	  J9         E�          .� E�     r         A�    6! =� �     r         �1    � Qy     r         ̩    �y Qy     <   �        M� I� ��     a   �     ��     q  A  �     %     �  �  ��     � ]1     �   U/home/jannis/Code/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/accelerator.vhd YI  �                accelerator   arch   work      accelerator   arch   work      accelerator       work      std_logic_1164       IEEE      standard       std